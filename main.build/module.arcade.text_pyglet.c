/* Generated code for Python module 'arcade.text_pyglet'
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

/* The "module_arcade$text_pyglet" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_arcade$text_pyglet;
PyDictObject *moduledict_arcade$text_pyglet;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[220];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[220];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("arcade.text_pyglet"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 220; i++) {
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
void checkModuleConstants_arcade$text_pyglet(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 220; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_7b80a212e3fe688c4de5bb809cfc8b9d;
static PyCodeObject *codeobj_7ec8f6d32449d56c44112a2c1f2481d5;
static PyCodeObject *codeobj_3bdf983284b388c51904512574069de2;
static PyCodeObject *codeobj_4d7ab9233d3498686dab1b22c1a06106;
static PyCodeObject *codeobj_d5777a1091714a0123e3b04c3ada8ae1;
static PyCodeObject *codeobj_faf0458aad6786573109b77b47c614cb;
static PyCodeObject *codeobj_1a28c5a60fd5f9037a891e28bc4ef226;
static PyCodeObject *codeobj_56c9f50d84a47fa27e330c51923c0bf6;
static PyCodeObject *codeobj_b687ffadbe45483e00a24bf6b558f255;
static PyCodeObject *codeobj_09a2c232b6d16f1f3d4f4d04dee5a6a2;
static PyCodeObject *codeobj_22719b6e36de74ff933bba3c2c56a0bd;
static PyCodeObject *codeobj_13b4cc5a814ecf6f3bc70c89077ed967;
static PyCodeObject *codeobj_948f5f63f5cf9041783cbd7e8cbf5187;
static PyCodeObject *codeobj_e4b53f9109fe47fe80b0c201a5d1bd94;
static PyCodeObject *codeobj_f669288e048aee45d047bfaefc5ad617;
static PyCodeObject *codeobj_00d2398ae18bd320bb216049c05e8222;
static PyCodeObject *codeobj_d081b60c39a77813276bd78aa7110fcb;
static PyCodeObject *codeobj_8543a40c399d5dc2f9c6145ff63e6b93;
static PyCodeObject *codeobj_903b7a1cc3e7994bf64b50c94416b009;
static PyCodeObject *codeobj_d82f6dc63445d197180967e97f5c1d7b;
static PyCodeObject *codeobj_78bb1917bae962733c58af94fd553209;
static PyCodeObject *codeobj_150cf4b09d5fb0440b9972e839fad3b1;
static PyCodeObject *codeobj_d0cdde587b0ce5f6fccb838f43e73320;
static PyCodeObject *codeobj_b3fe82871dabd02616b44405254b3c32;
static PyCodeObject *codeobj_aac852424581ac0ce190a367f2cace0e;
static PyCodeObject *codeobj_58fb157ac60b0674942a80a330c88ef4;
static PyCodeObject *codeobj_1837010e24e3ce080310db112677f537;
static PyCodeObject *codeobj_873c038ac72204b9b2b19c939405cf36;
static PyCodeObject *codeobj_304e55a5fc13d4deb40daa4a83621d6d;
static PyCodeObject *codeobj_2f5a304b16895d64456ad25c967c8b39;
static PyCodeObject *codeobj_93681e0916ba7e7697215c51c6e2dc05;
static PyCodeObject *codeobj_b7f40058af73f403e3752d64007e57f7;
static PyCodeObject *codeobj_8a8a6a9bfd6b2f825d95ded8edeab818;
static PyCodeObject *codeobj_e01fb985343b19e5c3acc6f347433850;
static PyCodeObject *codeobj_ee4219d3d37eef8964425ed8ceeb0cd8;
static PyCodeObject *codeobj_e4d97256a4d83c6da07ae6adae3f3175;
static PyCodeObject *codeobj_0867edcdb8e94e26456c823e1fdc03b7;
static PyCodeObject *codeobj_0955524f37f288217f59c06f7a31c0e5;
static PyCodeObject *codeobj_1138f532338039becb8c5dead477c2c9;
static PyCodeObject *codeobj_50b9344432eaf3ce5c5516a809b78840;
static PyCodeObject *codeobj_f25bc0dfcab8a725b225b472d00c9f0c;
static PyCodeObject *codeobj_dcb62cb1903bf132a9e47c3061967988;
static PyCodeObject *codeobj_8049751dba6196ce163c56a7a4fa9e71;
static PyCodeObject *codeobj_d8a0651b454437f11d929441d2b3e9f0;
static PyCodeObject *codeobj_25001eb09d51d66a6c672017306f0038;
static PyCodeObject *codeobj_07d1da091dc20b30b8d3b385b9d42803;
static PyCodeObject *codeobj_6e4cefc37624608ca3720e38d3cc2555;
static PyCodeObject *codeobj_9da1c7002b8ddc709095266199a89c72;
static PyCodeObject *codeobj_39f783285607454a893201f2770e3d84;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[196]); CHECK_OBJECT(module_filename_obj);
    codeobj_7b80a212e3fe688c4de5bb809cfc8b9d = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[197], mod_consts[197], NULL, NULL, 0, 0, 0);
    codeobj_7ec8f6d32449d56c44112a2c1f2481d5 = MAKE_CODE_OBJECT(module_filename_obj, 120, CO_NOFREE, mod_consts[133], mod_consts[133], mod_consts[198], NULL, 0, 0, 0);
    codeobj_3bdf983284b388c51904512574069de2 = MAKE_CODE_OBJECT(module_filename_obj, 188, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[139], mod_consts[139], mod_consts[199], NULL, 15, 0, 0);
    codeobj_4d7ab9233d3498686dab1b22c1a06106 = MAKE_CODE_OBJECT(module_filename_obj, 43, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[33], mod_consts[33], mod_consts[200], NULL, 1, 0, 0);
    codeobj_d5777a1091714a0123e3b04c3ada8ae1 = MAKE_CODE_OBJECT(module_filename_obj, 83, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[83], mod_consts[83], mod_consts[201], NULL, 2, 0, 0);
    codeobj_faf0458aad6786573109b77b47c614cb = MAKE_CODE_OBJECT(module_filename_obj, 435, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[77], mod_consts[77], mod_consts[202], NULL, 1, 0, 0);
    codeobj_1a28c5a60fd5f9037a891e28bc4ef226 = MAKE_CODE_OBJECT(module_filename_obj, 439, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[77], mod_consts[77], mod_consts[203], NULL, 2, 0, 0);
    codeobj_56c9f50d84a47fa27e330c51923c0bf6 = MAKE_CODE_OBJECT(module_filename_obj, 314, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[48], mod_consts[48], mod_consts[202], NULL, 1, 0, 0);
    codeobj_b687ffadbe45483e00a24bf6b558f255 = MAKE_CODE_OBJECT(module_filename_obj, 323, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[48], mod_consts[48], mod_consts[204], NULL, 2, 0, 0);
    codeobj_09a2c232b6d16f1f3d4f4d04dee5a6a2 = MAKE_CODE_OBJECT(module_filename_obj, 327, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[50], mod_consts[50], mod_consts[202], NULL, 1, 0, 0);
    codeobj_22719b6e36de74ff933bba3c2c56a0bd = MAKE_CODE_OBJECT(module_filename_obj, 336, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[50], mod_consts[50], mod_consts[205], NULL, 2, 0, 0);
    codeobj_13b4cc5a814ecf6f3bc70c89077ed967 = MAKE_CODE_OBJECT(module_filename_obj, 448, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[78], mod_consts[78], mod_consts[202], NULL, 1, 0, 0);
    codeobj_948f5f63f5cf9041783cbd7e8cbf5187 = MAKE_CODE_OBJECT(module_filename_obj, 455, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[78], mod_consts[78], mod_consts[206], NULL, 2, 0, 0);
    codeobj_e4b53f9109fe47fe80b0c201a5d1bd94 = MAKE_CODE_OBJECT(module_filename_obj, 421, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[86], mod_consts[86], mod_consts[202], NULL, 1, 0, 0);
    codeobj_f669288e048aee45d047bfaefc5ad617 = MAKE_CODE_OBJECT(module_filename_obj, 340, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[52], mod_consts[52], mod_consts[202], NULL, 1, 0, 0);
    codeobj_00d2398ae18bd320bb216049c05e8222 = MAKE_CODE_OBJECT(module_filename_obj, 347, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[52], mod_consts[52], mod_consts[207], NULL, 2, 0, 0);
    codeobj_d081b60c39a77813276bd78aa7110fcb = MAKE_CODE_OBJECT(module_filename_obj, 393, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[61], mod_consts[61], mod_consts[202], NULL, 1, 0, 0);
    codeobj_8543a40c399d5dc2f9c6145ff63e6b93 = MAKE_CODE_OBJECT(module_filename_obj, 428, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[172], mod_consts[172], mod_consts[202], NULL, 1, 0, 0);
    codeobj_903b7a1cc3e7994bf64b50c94416b009 = MAKE_CODE_OBJECT(module_filename_obj, 386, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[59], mod_consts[59], mod_consts[202], NULL, 1, 0, 0);
    codeobj_d82f6dc63445d197180967e97f5c1d7b = MAKE_CODE_OBJECT(module_filename_obj, 480, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[26], mod_consts[26], mod_consts[202], NULL, 1, 0, 0);
    codeobj_78bb1917bae962733c58af94fd553209 = MAKE_CODE_OBJECT(module_filename_obj, 493, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[190], mod_consts[190], mod_consts[208], NULL, 4, 0, 0);
    codeobj_150cf4b09d5fb0440b9972e839fad3b1 = MAKE_CODE_OBJECT(module_filename_obj, 538, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[195], mod_consts[195], mod_consts[209], NULL, 14, 0, 0);
    codeobj_d0cdde587b0ce5f6fccb838f43e73320 = MAKE_CODE_OBJECT(module_filename_obj, 292, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[7], mod_consts[7], mod_consts[202], NULL, 1, 0, 0);
    codeobj_b3fe82871dabd02616b44405254b3c32 = MAKE_CODE_OBJECT(module_filename_obj, 299, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[7], mod_consts[7], mod_consts[210], NULL, 2, 0, 0);
    codeobj_aac852424581ac0ce190a367f2cace0e = MAKE_CODE_OBJECT(module_filename_obj, 303, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[46], mod_consts[46], mod_consts[202], NULL, 1, 0, 0);
    codeobj_58fb157ac60b0674942a80a330c88ef4 = MAKE_CODE_OBJECT(module_filename_obj, 310, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[46], mod_consts[46], mod_consts[211], NULL, 2, 0, 0);
    codeobj_1837010e24e3ce080310db112677f537 = MAKE_CODE_OBJECT(module_filename_obj, 365, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[56], mod_consts[56], mod_consts[202], NULL, 1, 0, 0);
    codeobj_873c038ac72204b9b2b19c939405cf36 = MAKE_CODE_OBJECT(module_filename_obj, 375, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[56], mod_consts[56], mod_consts[212], NULL, 2, 0, 0);
    codeobj_304e55a5fc13d4deb40daa4a83621d6d = MAKE_CODE_OBJECT(module_filename_obj, 459, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[80], mod_consts[80], mod_consts[202], NULL, 1, 0, 0);
    codeobj_2f5a304b16895d64456ad25c967c8b39 = MAKE_CODE_OBJECT(module_filename_obj, 466, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[80], mod_consts[80], mod_consts[213], NULL, 2, 0, 0);
    codeobj_93681e0916ba7e7697215c51c6e2dc05 = MAKE_CODE_OBJECT(module_filename_obj, 400, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[30], mod_consts[30], mod_consts[202], NULL, 1, 0, 0);
    codeobj_b7f40058af73f403e3752d64007e57f7 = MAKE_CODE_OBJECT(module_filename_obj, 16, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[127], mod_consts[127], mod_consts[214], NULL, 1, 0, 0);
    codeobj_8a8a6a9bfd6b2f825d95ded8edeab818 = MAKE_CODE_OBJECT(module_filename_obj, 470, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[74], mod_consts[74], mod_consts[202], NULL, 1, 0, 0);
    codeobj_e01fb985343b19e5c3acc6f347433850 = MAKE_CODE_OBJECT(module_filename_obj, 477, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[74], mod_consts[74], mod_consts[215], NULL, 2, 0, 0);
    codeobj_ee4219d3d37eef8964425ed8ceeb0cd8 = MAKE_CODE_OBJECT(module_filename_obj, 524, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[95], mod_consts[95], mod_consts[202], NULL, 1, 0, 0);
    codeobj_e4d97256a4d83c6da07ae6adae3f3175 = MAKE_CODE_OBJECT(module_filename_obj, 534, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[95], mod_consts[95], mod_consts[216], NULL, 2, 0, 0);
    codeobj_0867edcdb8e94e26456c823e1fdc03b7 = MAKE_CODE_OBJECT(module_filename_obj, 407, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[31], mod_consts[31], mod_consts[202], NULL, 1, 0, 0);
    codeobj_0955524f37f288217f59c06f7a31c0e5 = MAKE_CODE_OBJECT(module_filename_obj, 379, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[163], mod_consts[163], mod_consts[202], NULL, 1, 0, 0);
    codeobj_1138f532338039becb8c5dead477c2c9 = MAKE_CODE_OBJECT(module_filename_obj, 248, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[34], mod_consts[34], mod_consts[202], NULL, 1, 0, 0);
    codeobj_50b9344432eaf3ce5c5516a809b78840 = MAKE_CODE_OBJECT(module_filename_obj, 259, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[34], mod_consts[34], mod_consts[212], NULL, 2, 0, 0);
    codeobj_f25bc0dfcab8a725b225b472d00c9f0c = MAKE_CODE_OBJECT(module_filename_obj, 414, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[85], mod_consts[85], mod_consts[202], NULL, 1, 0, 0);
    codeobj_dcb62cb1903bf132a9e47c3061967988 = MAKE_CODE_OBJECT(module_filename_obj, 232, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[142], mod_consts[142], mod_consts[202], NULL, 1, 0, 0);
    codeobj_8049751dba6196ce163c56a7a4fa9e71 = MAKE_CODE_OBJECT(module_filename_obj, 241, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[142], mod_consts[142], mod_consts[212], NULL, 2, 0, 0);
    codeobj_d8a0651b454437f11d929441d2b3e9f0 = MAKE_CODE_OBJECT(module_filename_obj, 351, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[54], mod_consts[54], mod_consts[202], NULL, 1, 0, 0);
    codeobj_25001eb09d51d66a6c672017306f0038 = MAKE_CODE_OBJECT(module_filename_obj, 361, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[54], mod_consts[54], mod_consts[217], NULL, 2, 0, 0);
    codeobj_07d1da091dc20b30b8d3b385b9d42803 = MAKE_CODE_OBJECT(module_filename_obj, 266, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[17], mod_consts[17], mod_consts[202], NULL, 1, 0, 0);
    codeobj_6e4cefc37624608ca3720e38d3cc2555 = MAKE_CODE_OBJECT(module_filename_obj, 273, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[17], mod_consts[17], mod_consts[218], NULL, 2, 0, 0);
    codeobj_9da1c7002b8ddc709095266199a89c72 = MAKE_CODE_OBJECT(module_filename_obj, 279, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[18], mod_consts[18], mod_consts[202], NULL, 1, 0, 0);
    codeobj_39f783285607454a893201f2770e3d84 = MAKE_CODE_OBJECT(module_filename_obj, 286, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[18], mod_consts[18], mod_consts[219], NULL, 2, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_arcade$text_pyglet$$$function__10_x(PyObject *annotations);


static PyObject *MAKE_FUNCTION_arcade$text_pyglet$$$function__11_y(PyObject *annotations);


static PyObject *MAKE_FUNCTION_arcade$text_pyglet$$$function__12_y(PyObject *annotations);


static PyObject *MAKE_FUNCTION_arcade$text_pyglet$$$function__13_font_name(PyObject *annotations);


static PyObject *MAKE_FUNCTION_arcade$text_pyglet$$$function__14_font_name(PyObject *annotations);


static PyObject *MAKE_FUNCTION_arcade$text_pyglet$$$function__15_font_size(PyObject *annotations);


static PyObject *MAKE_FUNCTION_arcade$text_pyglet$$$function__16_font_size(PyObject *annotations);


static PyObject *MAKE_FUNCTION_arcade$text_pyglet$$$function__17_anchor_x(PyObject *annotations);


static PyObject *MAKE_FUNCTION_arcade$text_pyglet$$$function__18_anchor_x(PyObject *annotations);


static PyObject *MAKE_FUNCTION_arcade$text_pyglet$$$function__19_anchor_y(PyObject *annotations);


static PyObject *MAKE_FUNCTION_arcade$text_pyglet$$$function__1_load_font(PyObject *annotations);


static PyObject *MAKE_FUNCTION_arcade$text_pyglet$$$function__20_anchor_y(PyObject *annotations);


static PyObject *MAKE_FUNCTION_arcade$text_pyglet$$$function__21_color(PyObject *annotations);


static PyObject *MAKE_FUNCTION_arcade$text_pyglet$$$function__22_color(PyObject *annotations);


static PyObject *MAKE_FUNCTION_arcade$text_pyglet$$$function__23_width(PyObject *annotations);


static PyObject *MAKE_FUNCTION_arcade$text_pyglet$$$function__24_width(PyObject *annotations);


static PyObject *MAKE_FUNCTION_arcade$text_pyglet$$$function__25_height(PyObject *annotations);


static PyObject *MAKE_FUNCTION_arcade$text_pyglet$$$function__26_height();


static PyObject *MAKE_FUNCTION_arcade$text_pyglet$$$function__27_size();


static PyObject *MAKE_FUNCTION_arcade$text_pyglet$$$function__28_content_width(PyObject *annotations);


static PyObject *MAKE_FUNCTION_arcade$text_pyglet$$$function__29_content_height(PyObject *annotations);


static PyObject *MAKE_FUNCTION_arcade$text_pyglet$$$function__2__attempt_font_name_resolution(PyObject *annotations);


static PyObject *MAKE_FUNCTION_arcade$text_pyglet$$$function__30_left(PyObject *annotations);


static PyObject *MAKE_FUNCTION_arcade$text_pyglet$$$function__31_right(PyObject *annotations);


static PyObject *MAKE_FUNCTION_arcade$text_pyglet$$$function__32_top(PyObject *annotations);


static PyObject *MAKE_FUNCTION_arcade$text_pyglet$$$function__33_bottom(PyObject *annotations);


static PyObject *MAKE_FUNCTION_arcade$text_pyglet$$$function__34_content_size(PyObject *annotations);


static PyObject *MAKE_FUNCTION_arcade$text_pyglet$$$function__35_align(PyObject *annotations);


static PyObject *MAKE_FUNCTION_arcade$text_pyglet$$$function__36_align(PyObject *annotations);


static PyObject *MAKE_FUNCTION_arcade$text_pyglet$$$function__37_bold(PyObject *annotations);


static PyObject *MAKE_FUNCTION_arcade$text_pyglet$$$function__38_bold(PyObject *annotations);


static PyObject *MAKE_FUNCTION_arcade$text_pyglet$$$function__39_italic(PyObject *annotations);


static PyObject *MAKE_FUNCTION_arcade$text_pyglet$$$function__3__draw_label_with_rotation(PyObject *annotations);


static PyObject *MAKE_FUNCTION_arcade$text_pyglet$$$function__40_italic(PyObject *annotations);


static PyObject *MAKE_FUNCTION_arcade$text_pyglet$$$function__41_multiline(PyObject *annotations);


static PyObject *MAKE_FUNCTION_arcade$text_pyglet$$$function__42_multiline(PyObject *annotations);


static PyObject *MAKE_FUNCTION_arcade$text_pyglet$$$function__43_draw(PyObject *annotations);


static PyObject *MAKE_FUNCTION_arcade$text_pyglet$$$function__44_draw_debug(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_arcade$text_pyglet$$$function__45_position(PyObject *annotations);


static PyObject *MAKE_FUNCTION_arcade$text_pyglet$$$function__46_position(PyObject *annotations);


static PyObject *MAKE_FUNCTION_arcade$text_pyglet$$$function__47_draw_text(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_arcade$text_pyglet$$$function__4___init__(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_arcade$text_pyglet$$$function__5_value(PyObject *annotations);


static PyObject *MAKE_FUNCTION_arcade$text_pyglet$$$function__6_value(PyObject *annotations);


static PyObject *MAKE_FUNCTION_arcade$text_pyglet$$$function__7_text(PyObject *annotations);


static PyObject *MAKE_FUNCTION_arcade$text_pyglet$$$function__8_text(PyObject *annotations);


static PyObject *MAKE_FUNCTION_arcade$text_pyglet$$$function__9_x(PyObject *annotations);


// The module function definitions.
static PyObject *impl_arcade$text_pyglet$$$function__1_load_font(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_path = python_pars[0];
    PyObject *var_file_path = NULL;
    struct Nuitka_FrameObject *frame_b7f40058af73f403e3752d64007e57f7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_b7f40058af73f403e3752d64007e57f7 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_b7f40058af73f403e3752d64007e57f7)) {
        Py_XDECREF(cache_frame_b7f40058af73f403e3752d64007e57f7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b7f40058af73f403e3752d64007e57f7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b7f40058af73f403e3752d64007e57f7 = MAKE_FUNCTION_FRAME(tstate, codeobj_b7f40058af73f403e3752d64007e57f7, module_arcade$text_pyglet, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b7f40058af73f403e3752d64007e57f7->m_type_description == NULL);
    frame_b7f40058af73f403e3752d64007e57f7 = cache_frame_b7f40058af73f403e3752d64007e57f7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_b7f40058af73f403e3752d64007e57f7);
    assert(Py_REFCNT(frame_b7f40058af73f403e3752d64007e57f7) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_arcade$text_pyglet, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_path);
        tmp_args_element_value_1 = par_path;
        frame_b7f40058af73f403e3752d64007e57f7->m_frame.f_lineno = 36;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_file_path == NULL);
        var_file_path = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_unicode_arg_1;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_arcade$text_pyglet, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[2]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[3]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_file_path);
        tmp_unicode_arg_1 = var_file_path;
        tmp_args_element_value_2 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 37;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_b7f40058af73f403e3752d64007e57f7->m_frame.f_lineno = 37;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
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
        exception_tb = MAKE_TRACEBACK(frame_b7f40058af73f403e3752d64007e57f7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b7f40058af73f403e3752d64007e57f7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b7f40058af73f403e3752d64007e57f7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b7f40058af73f403e3752d64007e57f7,
        type_description_1,
        par_path,
        var_file_path
    );


    // Release cached frame if used for exception.
    if (frame_b7f40058af73f403e3752d64007e57f7 == cache_frame_b7f40058af73f403e3752d64007e57f7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b7f40058af73f403e3752d64007e57f7);
        cache_frame_b7f40058af73f403e3752d64007e57f7 = NULL;
    }

    assertFrameObject(frame_b7f40058af73f403e3752d64007e57f7);

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
    CHECK_OBJECT(var_file_path);
    Py_DECREF(var_file_path);
    var_file_path = NULL;
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

    Py_XDECREF(var_file_path);
    var_file_path = NULL;
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
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_arcade$text_pyglet$$$function__2__attempt_font_name_resolution(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_font_name = python_pars[0];
    PyObject *var_font_list = NULL;
    PyObject *var_font = NULL;
    PyObject *var_path = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_4d7ab9233d3498686dab1b22c1a06106;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_4d7ab9233d3498686dab1b22c1a06106 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_4d7ab9233d3498686dab1b22c1a06106)) {
        Py_XDECREF(cache_frame_4d7ab9233d3498686dab1b22c1a06106);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4d7ab9233d3498686dab1b22c1a06106 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4d7ab9233d3498686dab1b22c1a06106 = MAKE_FUNCTION_FRAME(tstate, codeobj_4d7ab9233d3498686dab1b22c1a06106, module_arcade$text_pyglet, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4d7ab9233d3498686dab1b22c1a06106->m_type_description == NULL);
    frame_4d7ab9233d3498686dab1b22c1a06106 = cache_frame_4d7ab9233d3498686dab1b22c1a06106;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_4d7ab9233d3498686dab1b22c1a06106);
    assert(Py_REFCNT(frame_4d7ab9233d3498686dab1b22c1a06106) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_font_name);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_font_name);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "oooo";
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
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_font_name);
        tmp_isinstance_inst_1 = par_font_name;
        tmp_isinstance_cls_1 = (PyObject *)&PyUnicode_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(par_font_name);
        tmp_tuple_element_1 = par_font_name;
        tmp_assign_source_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_1, 0, tmp_tuple_element_1);
        assert(var_font_list == NULL);
        var_font_list = tmp_assign_source_1;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        CHECK_OBJECT(par_font_name);
        tmp_isinstance_inst_2 = par_font_name;
        tmp_isinstance_cls_2 = (PyObject *)&PyTuple_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT(par_font_name);
        tmp_assign_source_2 = par_font_name;
        assert(var_font_list == NULL);
        Py_INCREF(tmp_assign_source_2);
        var_font_list = tmp_assign_source_2;
    }
    goto branch_end_3;
    branch_no_3:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[5];
        frame_4d7ab9233d3498686dab1b22c1a06106->m_frame.f_lineno = 66;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 66;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    branch_end_3:;
    branch_end_2:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(var_font_list);
        tmp_iter_arg_1 = var_font_list;
        tmp_assign_source_3 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
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
                exception_lineno = 68;
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
            PyObject *old = var_font;
            var_font = tmp_assign_source_5;
            Py_INCREF(var_font);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_arcade$text_pyglet, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(var_font);
        tmp_args_element_value_1 = var_font;
        frame_4d7ab9233d3498686dab1b22c1a06106->m_frame.f_lineno = 70;
        tmp_assign_source_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = var_path;
            var_path = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(var_path);
        tmp_expression_value_1 = var_path;
        tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[6]);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }
        goto try_return_handler_2;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
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

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_4d7ab9233d3498686dab1b22c1a06106, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_4d7ab9233d3498686dab1b22c1a06106, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_FileNotFoundError;
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_4 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 69;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_4d7ab9233d3498686dab1b22c1a06106->m_frame) frame_4d7ab9233d3498686dab1b22c1a06106->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooo";
    goto try_except_handler_4;
    branch_no_4:;
    goto try_end_1;
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

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    goto try_end_2;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_2:;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 68;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
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
    branch_no_1:;
    if (par_font_name == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(tstate, exception_value);

        exception_lineno = 80;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = par_font_name;
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
        exception_tb = MAKE_TRACEBACK(frame_4d7ab9233d3498686dab1b22c1a06106, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4d7ab9233d3498686dab1b22c1a06106->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4d7ab9233d3498686dab1b22c1a06106, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4d7ab9233d3498686dab1b22c1a06106,
        type_description_1,
        par_font_name,
        var_font_list,
        var_font,
        var_path
    );


    // Release cached frame if used for exception.
    if (frame_4d7ab9233d3498686dab1b22c1a06106 == cache_frame_4d7ab9233d3498686dab1b22c1a06106) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4d7ab9233d3498686dab1b22c1a06106);
        cache_frame_4d7ab9233d3498686dab1b22c1a06106 = NULL;
    }

    assertFrameObject(frame_4d7ab9233d3498686dab1b22c1a06106);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_font_list);
    var_font_list = NULL;
    Py_XDECREF(var_font);
    var_font = NULL;
    Py_XDECREF(var_path);
    var_path = NULL;
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

    Py_XDECREF(var_font_list);
    var_font_list = NULL;
    Py_XDECREF(var_font);
    var_font = NULL;
    Py_XDECREF(var_path);
    var_path = NULL;
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
    CHECK_OBJECT(par_font_name);
    Py_DECREF(par_font_name);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_font_name);
    Py_DECREF(par_font_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_arcade$text_pyglet$$$function__3__draw_label_with_rotation(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_label = python_pars[0];
    PyObject *par_rotation = python_pars[1];
    PyObject *var_window = NULL;
    PyObject *var_angle_radians = NULL;
    PyObject *var_x = NULL;
    PyObject *var_y = NULL;
    PyObject *var_r_view = NULL;
    PyObject *var_t1_view = NULL;
    PyObject *var_t2_view = NULL;
    PyObject *var_final_view = NULL;
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__exit = NULL;
    nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_1__source = NULL;
    struct Nuitka_FrameObject *frame_d5777a1091714a0123e3b04c3ada8ae1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    int tmp_res;
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
    static struct Nuitka_FrameObject *cache_frame_d5777a1091714a0123e3b04c3ada8ae1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_d5777a1091714a0123e3b04c3ada8ae1)) {
        Py_XDECREF(cache_frame_d5777a1091714a0123e3b04c3ada8ae1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d5777a1091714a0123e3b04c3ada8ae1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d5777a1091714a0123e3b04c3ada8ae1 = MAKE_FUNCTION_FRAME(tstate, codeobj_d5777a1091714a0123e3b04c3ada8ae1, module_arcade$text_pyglet, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d5777a1091714a0123e3b04c3ada8ae1->m_type_description == NULL);
    frame_d5777a1091714a0123e3b04c3ada8ae1 = cache_frame_d5777a1091714a0123e3b04c3ada8ae1;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_d5777a1091714a0123e3b04c3ada8ae1);
    assert(Py_REFCNT(frame_d5777a1091714a0123e3b04c3ada8ae1) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_arcade$text_pyglet, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_d5777a1091714a0123e3b04c3ada8ae1->m_frame.f_lineno = 96;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[10]);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_window == NULL);
        var_window = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(var_window);
        tmp_expression_value_1 = var_window;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[11]);
        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        frame_d5777a1091714a0123e3b04c3ada8ae1->m_frame.f_lineno = 97;
        tmp_assign_source_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[12]);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_with_1__source == NULL);
        tmp_with_1__source = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_value_2 = tmp_with_1__source;
        tmp_called_value_1 = LOOKUP_SPECIAL(tstate, tmp_expression_value_2, mod_consts[13]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        frame_d5777a1091714a0123e3b04c3ada8ae1->m_frame.f_lineno = 97;
        tmp_assign_source_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_with_1__enter == NULL);
        tmp_with_1__enter = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_value_3 = tmp_with_1__source;
        tmp_assign_source_4 = LOOKUP_SPECIAL(tstate, tmp_expression_value_3, mod_consts[14]);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_with_1__exit == NULL);
        tmp_with_1__exit = tmp_assign_source_4;
    }
    {
        nuitka_bool tmp_assign_source_5;
        tmp_assign_source_5 = NUITKA_BOOL_TRUE;
        tmp_with_1__indicator = tmp_assign_source_5;
    }
    // Tried code:
    // Tried code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_rotation);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_rotation);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "oooooooooo";
            goto try_except_handler_4;
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
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_arcade$text_pyglet, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "oooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(par_rotation);
        tmp_args_element_value_1 = par_rotation;
        frame_d5777a1091714a0123e3b04c3ada8ae1->m_frame.f_lineno = 101;
        tmp_assign_source_6 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts[16], tmp_args_element_value_1);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "oooooooooo";
            goto try_except_handler_4;
        }
        assert(var_angle_radians == NULL);
        var_angle_radians = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(par_label);
        tmp_expression_value_4 = par_label;
        tmp_assign_source_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[17]);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "oooooooooo";
            goto try_except_handler_4;
        }
        assert(var_x == NULL);
        var_x = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(par_label);
        tmp_expression_value_5 = par_label;
        tmp_assign_source_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[18]);
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "oooooooooo";
            goto try_except_handler_4;
        }
        assert(var_y == NULL);
        var_y = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_arcade$text_pyglet, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_called_instance_4 == NULL)) {
            tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "oooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_angle_radians);
        tmp_args_element_value_2 = var_angle_radians;
        tmp_args_element_value_3 = mod_consts[21];
        frame_d5777a1091714a0123e3b04c3ada8ae1->m_frame.f_lineno = 106;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_assign_source_9 = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_4,
                mod_consts[20],
                call_args
            );
        }

        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "oooooooooo";
            goto try_except_handler_4;
        }
        assert(var_r_view == NULL);
        var_r_view = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_operand_value_1;
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_arcade$text_pyglet, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "oooooooooo";
            goto try_except_handler_4;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[22]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "oooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_x);
        tmp_operand_value_1 = var_x;
        tmp_tuple_element_1 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 107;
            type_description_1 = "oooooooooo";
            goto try_except_handler_4;
        }
        tmp_args_element_value_4 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_operand_value_2;
            PyTuple_SET_ITEM(tmp_args_element_value_4, 0, tmp_tuple_element_1);
            CHECK_OBJECT(var_y);
            tmp_operand_value_2 = var_y;
            tmp_tuple_element_1 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 107;
                type_description_1 = "oooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_args_element_value_4, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[23];
            PyTuple_SET_ITEM0(tmp_args_element_value_4, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_4);
        goto try_except_handler_4;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        frame_d5777a1091714a0123e3b04c3ada8ae1->m_frame.f_lineno = 107;
        tmp_assign_source_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "oooooooooo";
            goto try_except_handler_4;
        }
        assert(var_t1_view == NULL);
        var_t1_view = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_tuple_element_2;
        tmp_called_instance_5 = GET_STRING_DICT_VALUE(moduledict_arcade$text_pyglet, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_called_instance_5 == NULL)) {
            tmp_called_instance_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
        }

        if (tmp_called_instance_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "oooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_x);
        tmp_tuple_element_2 = var_x;
        tmp_args_element_value_5 = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM0(tmp_args_element_value_5, 0, tmp_tuple_element_2);
        CHECK_OBJECT(var_y);
        tmp_tuple_element_2 = var_y;
        PyTuple_SET_ITEM0(tmp_args_element_value_5, 1, tmp_tuple_element_2);
        tmp_tuple_element_2 = mod_consts[23];
        PyTuple_SET_ITEM0(tmp_args_element_value_5, 2, tmp_tuple_element_2);
        frame_d5777a1091714a0123e3b04c3ada8ae1->m_frame.f_lineno = 108;
        tmp_assign_source_11 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_5, mod_consts[22], tmp_args_element_value_5);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "oooooooooo";
            goto try_except_handler_4;
        }
        assert(var_t2_view == NULL);
        var_t2_view = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_matmult_expr_left_1;
        PyObject *tmp_matmult_expr_right_1;
        PyObject *tmp_matmult_expr_left_2;
        PyObject *tmp_matmult_expr_right_2;
        CHECK_OBJECT(var_t1_view);
        tmp_matmult_expr_left_2 = var_t1_view;
        CHECK_OBJECT(var_r_view);
        tmp_matmult_expr_right_2 = var_r_view;
        tmp_matmult_expr_left_1 = BINARY_OPERATION_MATMULT_OBJECT_OBJECT_OBJECT(tmp_matmult_expr_left_2, tmp_matmult_expr_right_2);
        if (tmp_matmult_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "oooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_t2_view);
        tmp_matmult_expr_right_1 = var_t2_view;
        tmp_assign_source_12 = BINARY_OPERATION_MATMULT_OBJECT_OBJECT_OBJECT(tmp_matmult_expr_left_1, tmp_matmult_expr_right_1);
        Py_DECREF(tmp_matmult_expr_left_1);
        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "oooooooooo";
            goto try_except_handler_4;
        }
        assert(var_final_view == NULL);
        var_final_view = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(var_final_view);
        tmp_assattr_value_1 = var_final_view;
        CHECK_OBJECT(var_window);
        tmp_assattr_target_1 = var_window;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[24], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "oooooooooo";
            goto try_except_handler_4;
        }
    }
    branch_no_1:;
    {
        PyObject *tmp_called_instance_6;
        PyObject *tmp_call_result_1;
        if (par_label == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[25]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 112;
            type_description_1 = "oooooooooo";
            goto try_except_handler_4;
        }

        tmp_called_instance_6 = par_label;
        frame_d5777a1091714a0123e3b04c3ada8ae1->m_frame.f_lineno = 112;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_6, mod_consts[26]);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "oooooooooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_1);
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

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_d5777a1091714a0123e3b04c3ada8ae1, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_d5777a1091714a0123e3b04c3ada8ae1, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_2 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        nuitka_bool tmp_assign_source_13;
        tmp_assign_source_13 = NUITKA_BOOL_FALSE;
        tmp_with_1__indicator = tmp_assign_source_13;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_3 = tmp_with_1__exit;
        tmp_args_element_value_6 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_7 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_8 = (PyObject *)EXC_TRACEBACK(PyThreadState_GET());
        frame_d5777a1091714a0123e3b04c3ada8ae1->m_frame.f_lineno = 97;
        {
            PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_operand_value_3 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_3, call_args);
        }

        if (tmp_operand_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "oooooooooo";
            goto try_except_handler_5;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        Py_DECREF(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "oooooooooo";
            goto try_except_handler_5;
        }
        tmp_condition_result_3 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 97;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_d5777a1091714a0123e3b04c3ada8ae1->m_frame) frame_d5777a1091714a0123e3b04c3ada8ae1->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooooo";
    goto try_except_handler_5;
    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 97;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_d5777a1091714a0123e3b04c3ada8ae1->m_frame) frame_d5777a1091714a0123e3b04c3ada8ae1->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooooo";
    goto try_except_handler_5;
    branch_end_2:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_5:;
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

    goto try_except_handler_3;
    // End of try:
    try_end_2:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    goto try_end_1;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_1:;
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

    {
        bool tmp_condition_result_4;
        nuitka_bool tmp_cmp_expr_left_2;
        nuitka_bool tmp_cmp_expr_right_2;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_2 = tmp_with_1__indicator;
        tmp_cmp_expr_right_2 = NUITKA_BOOL_TRUE;
        tmp_condition_result_4 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_4 = tmp_with_1__exit;
        frame_d5777a1091714a0123e3b04c3ada8ae1->m_frame.f_lineno = 97;
        tmp_call_result_2 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_4, mod_consts[27]);

        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_3);
            Py_XDECREF(exception_keeper_value_3);
            Py_XDECREF(exception_keeper_tb_3);

            exception_lineno = 97;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_4:;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_2;
    // End of try:
    try_end_3:;
    {
        bool tmp_condition_result_5;
        nuitka_bool tmp_cmp_expr_left_3;
        nuitka_bool tmp_cmp_expr_right_3;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_3 = tmp_with_1__indicator;
        tmp_cmp_expr_right_3 = NUITKA_BOOL_TRUE;
        tmp_condition_result_5 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_5 = tmp_with_1__exit;
        frame_d5777a1091714a0123e3b04c3ada8ae1->m_frame.f_lineno = 97;
        tmp_call_result_3 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_5, mod_consts[27]);

        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_no_5:;
    goto try_end_4;
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

    Py_XDECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    Py_XDECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    Py_XDECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d5777a1091714a0123e3b04c3ada8ae1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d5777a1091714a0123e3b04c3ada8ae1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d5777a1091714a0123e3b04c3ada8ae1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d5777a1091714a0123e3b04c3ada8ae1,
        type_description_1,
        par_label,
        par_rotation,
        var_window,
        var_angle_radians,
        var_x,
        var_y,
        var_r_view,
        var_t1_view,
        var_t2_view,
        var_final_view
    );


    // Release cached frame if used for exception.
    if (frame_d5777a1091714a0123e3b04c3ada8ae1 == cache_frame_d5777a1091714a0123e3b04c3ada8ae1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d5777a1091714a0123e3b04c3ada8ae1);
        cache_frame_d5777a1091714a0123e3b04c3ada8ae1 = NULL;
    }

    assertFrameObject(frame_d5777a1091714a0123e3b04c3ada8ae1);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(tmp_with_1__source);
    Py_DECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    CHECK_OBJECT(tmp_with_1__enter);
    Py_DECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    Py_XDECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_window);
    Py_DECREF(var_window);
    var_window = NULL;
    Py_XDECREF(var_angle_radians);
    var_angle_radians = NULL;
    Py_XDECREF(var_x);
    var_x = NULL;
    Py_XDECREF(var_y);
    var_y = NULL;
    Py_XDECREF(var_r_view);
    var_r_view = NULL;
    Py_XDECREF(var_t1_view);
    var_t1_view = NULL;
    Py_XDECREF(var_t2_view);
    var_t2_view = NULL;
    Py_XDECREF(var_final_view);
    var_final_view = NULL;
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

    Py_XDECREF(var_window);
    var_window = NULL;
    Py_XDECREF(var_angle_radians);
    var_angle_radians = NULL;
    Py_XDECREF(var_x);
    var_x = NULL;
    Py_XDECREF(var_y);
    var_y = NULL;
    Py_XDECREF(var_r_view);
    var_r_view = NULL;
    Py_XDECREF(var_t1_view);
    var_t1_view = NULL;
    Py_XDECREF(var_t2_view);
    var_t2_view = NULL;
    Py_XDECREF(var_final_view);
    var_final_view = NULL;
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
    CHECK_OBJECT(par_label);
    Py_DECREF(par_label);
    CHECK_OBJECT(par_rotation);
    Py_DECREF(par_rotation);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_label);
    Py_DECREF(par_label);
    CHECK_OBJECT(par_rotation);
    Py_DECREF(par_rotation);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_arcade$text_pyglet$$$function__4___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_text = python_pars[1];
    PyObject *par_start_x = python_pars[2];
    PyObject *par_start_y = python_pars[3];
    PyObject *par_color = python_pars[4];
    PyObject *par_font_size = python_pars[5];
    PyObject *par_width = python_pars[6];
    PyObject *par_align = python_pars[7];
    PyObject *par_font_name = python_pars[8];
    PyObject *par_bold = python_pars[9];
    PyObject *par_italic = python_pars[10];
    PyObject *par_anchor_x = python_pars[11];
    PyObject *par_anchor_y = python_pars[12];
    PyObject *par_multiline = python_pars[13];
    PyObject *par_rotation = python_pars[14];
    PyObject *var_adjusted_font = NULL;
    struct Nuitka_FrameObject *frame_3bdf983284b388c51904512574069de2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_3bdf983284b388c51904512574069de2 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_3bdf983284b388c51904512574069de2)) {
        Py_XDECREF(cache_frame_3bdf983284b388c51904512574069de2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3bdf983284b388c51904512574069de2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3bdf983284b388c51904512574069de2 = MAKE_FUNCTION_FRAME(tstate, codeobj_3bdf983284b388c51904512574069de2, module_arcade$text_pyglet, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3bdf983284b388c51904512574069de2->m_type_description == NULL);
    frame_3bdf983284b388c51904512574069de2 = cache_frame_3bdf983284b388c51904512574069de2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_3bdf983284b388c51904512574069de2);
    assert(Py_REFCNT(frame_3bdf983284b388c51904512574069de2) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(par_align);
        tmp_cmp_expr_left_1 = par_align;
        tmp_cmp_expr_right_1 = mod_consts[29];
        tmp_and_left_value_1 = RICH_COMPARE_NE_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_and_left_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_align);
        tmp_cmp_expr_left_2 = par_align;
        tmp_cmp_expr_right_2 = mod_consts[30];
        tmp_and_left_value_2 = RICH_COMPARE_NE_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_and_left_value_2 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        CHECK_OBJECT(par_align);
        tmp_cmp_expr_left_3 = par_align;
        tmp_cmp_expr_right_3 = mod_consts[31];
        tmp_and_right_value_2 = RICH_COMPARE_NE_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        if (tmp_and_right_value_2 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_and_right_value_1 = tmp_and_left_value_2;
        and_end_2:;
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
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[32];
        frame_3bdf983284b388c51904512574069de2->m_frame.f_lineno = 208;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 208;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        CHECK_OBJECT(par_align);
        tmp_cmp_expr_left_4 = par_align;
        tmp_cmp_expr_right_4 = mod_consts[30];
        tmp_condition_result_2 = RICH_COMPARE_NE_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "oooooooooooooooo";
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
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_True;
        {
            PyObject *old = par_multiline;
            assert(old != NULL);
            par_multiline = tmp_assign_source_1;
            Py_INCREF(par_multiline);
            Py_DECREF(old);
        }

    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_arcade$text_pyglet, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[33]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_font_name);
        tmp_args_element_value_1 = par_font_name;
        frame_3bdf983284b388c51904512574069de2->m_frame.f_lineno = 213;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_adjusted_font == NULL);
        var_adjusted_font = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_kw_call_value_3_1;
        PyObject *tmp_kw_call_value_4_1;
        PyObject *tmp_kw_call_value_5_1;
        PyObject *tmp_kw_call_value_6_1;
        PyObject *tmp_kw_call_value_7_1;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_kw_call_value_8_1;
        PyObject *tmp_kw_call_value_9_1;
        PyObject *tmp_kw_call_value_10_1;
        PyObject *tmp_kw_call_value_11_1;
        PyObject *tmp_kw_call_value_12_1;
        PyObject *tmp_assattr_target_1;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_arcade$text_pyglet, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[34]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[35]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_text);
        tmp_kw_call_value_0_1 = par_text;
        CHECK_OBJECT(par_start_x);
        tmp_kw_call_value_1_1 = par_start_x;
        CHECK_OBJECT(par_start_y);
        tmp_kw_call_value_2_1 = par_start_y;
        CHECK_OBJECT(var_adjusted_font);
        tmp_kw_call_value_3_1 = var_adjusted_font;
        CHECK_OBJECT(par_font_size);
        tmp_kw_call_value_4_1 = par_font_size;
        CHECK_OBJECT(par_anchor_x);
        tmp_kw_call_value_5_1 = par_anchor_x;
        CHECK_OBJECT(par_anchor_y);
        tmp_kw_call_value_6_1 = par_anchor_y;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_arcade$text_pyglet, (Nuitka_StringObject *)mod_consts[36]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[36]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 222;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_color);
        tmp_args_element_value_2 = par_color;
        frame_3bdf983284b388c51904512574069de2->m_frame.f_lineno = 222;
        tmp_kw_call_value_7_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
        if (tmp_kw_call_value_7_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 222;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_width);
        tmp_kw_call_value_8_1 = par_width;
        CHECK_OBJECT(par_align);
        tmp_kw_call_value_9_1 = par_align;
        CHECK_OBJECT(par_bold);
        tmp_kw_call_value_10_1 = par_bold;
        CHECK_OBJECT(par_italic);
        tmp_kw_call_value_11_1 = par_italic;
        CHECK_OBJECT(par_multiline);
        tmp_kw_call_value_12_1 = par_multiline;
        frame_3bdf983284b388c51904512574069de2->m_frame.f_lineno = 214;
        {
            PyObject *kw_values[13] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1, tmp_kw_call_value_5_1, tmp_kw_call_value_6_1, tmp_kw_call_value_7_1, tmp_kw_call_value_8_1, tmp_kw_call_value_9_1, tmp_kw_call_value_10_1, tmp_kw_call_value_11_1, tmp_kw_call_value_12_1};

            tmp_assattr_value_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_2, kw_values, mod_consts[37]);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_kw_call_value_7_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[38], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_rotation);
        tmp_assattr_value_2 = par_rotation;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[39], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3bdf983284b388c51904512574069de2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3bdf983284b388c51904512574069de2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3bdf983284b388c51904512574069de2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3bdf983284b388c51904512574069de2,
        type_description_1,
        par_self,
        par_text,
        par_start_x,
        par_start_y,
        par_color,
        par_font_size,
        par_width,
        par_align,
        par_font_name,
        par_bold,
        par_italic,
        par_anchor_x,
        par_anchor_y,
        par_multiline,
        par_rotation,
        var_adjusted_font
    );


    // Release cached frame if used for exception.
    if (frame_3bdf983284b388c51904512574069de2 == cache_frame_3bdf983284b388c51904512574069de2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3bdf983284b388c51904512574069de2);
        cache_frame_3bdf983284b388c51904512574069de2 = NULL;
    }

    assertFrameObject(frame_3bdf983284b388c51904512574069de2);

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
    CHECK_OBJECT(par_multiline);
    Py_DECREF(par_multiline);
    par_multiline = NULL;
    CHECK_OBJECT(var_adjusted_font);
    Py_DECREF(var_adjusted_font);
    var_adjusted_font = NULL;
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

    Py_XDECREF(par_multiline);
    par_multiline = NULL;
    Py_XDECREF(var_adjusted_font);
    var_adjusted_font = NULL;
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
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);
    CHECK_OBJECT(par_start_x);
    Py_DECREF(par_start_x);
    CHECK_OBJECT(par_start_y);
    Py_DECREF(par_start_y);
    CHECK_OBJECT(par_color);
    Py_DECREF(par_color);
    CHECK_OBJECT(par_font_size);
    Py_DECREF(par_font_size);
    CHECK_OBJECT(par_width);
    Py_DECREF(par_width);
    CHECK_OBJECT(par_align);
    Py_DECREF(par_align);
    CHECK_OBJECT(par_font_name);
    Py_DECREF(par_font_name);
    CHECK_OBJECT(par_bold);
    Py_DECREF(par_bold);
    CHECK_OBJECT(par_italic);
    Py_DECREF(par_italic);
    CHECK_OBJECT(par_anchor_x);
    Py_DECREF(par_anchor_x);
    CHECK_OBJECT(par_anchor_y);
    Py_DECREF(par_anchor_y);
    CHECK_OBJECT(par_rotation);
    Py_DECREF(par_rotation);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);
    CHECK_OBJECT(par_start_x);
    Py_DECREF(par_start_x);
    CHECK_OBJECT(par_start_y);
    Py_DECREF(par_start_y);
    CHECK_OBJECT(par_color);
    Py_DECREF(par_color);
    CHECK_OBJECT(par_font_size);
    Py_DECREF(par_font_size);
    CHECK_OBJECT(par_width);
    Py_DECREF(par_width);
    CHECK_OBJECT(par_align);
    Py_DECREF(par_align);
    CHECK_OBJECT(par_font_name);
    Py_DECREF(par_font_name);
    CHECK_OBJECT(par_bold);
    Py_DECREF(par_bold);
    CHECK_OBJECT(par_italic);
    Py_DECREF(par_italic);
    CHECK_OBJECT(par_anchor_x);
    Py_DECREF(par_anchor_x);
    CHECK_OBJECT(par_anchor_y);
    Py_DECREF(par_anchor_y);
    CHECK_OBJECT(par_rotation);
    Py_DECREF(par_rotation);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_arcade$text_pyglet$$$function__5_value(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_dcb62cb1903bf132a9e47c3061967988;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_dcb62cb1903bf132a9e47c3061967988 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_dcb62cb1903bf132a9e47c3061967988)) {
        Py_XDECREF(cache_frame_dcb62cb1903bf132a9e47c3061967988);

#if _DEBUG_REFCOUNTS
        if (cache_frame_dcb62cb1903bf132a9e47c3061967988 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_dcb62cb1903bf132a9e47c3061967988 = MAKE_FUNCTION_FRAME(tstate, codeobj_dcb62cb1903bf132a9e47c3061967988, module_arcade$text_pyglet, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_dcb62cb1903bf132a9e47c3061967988->m_type_description == NULL);
    frame_dcb62cb1903bf132a9e47c3061967988 = cache_frame_dcb62cb1903bf132a9e47c3061967988;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_dcb62cb1903bf132a9e47c3061967988);
    assert(Py_REFCNT(frame_dcb62cb1903bf132a9e47c3061967988) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[38]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[34]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
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
        exception_tb = MAKE_TRACEBACK(frame_dcb62cb1903bf132a9e47c3061967988, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_dcb62cb1903bf132a9e47c3061967988->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_dcb62cb1903bf132a9e47c3061967988, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_dcb62cb1903bf132a9e47c3061967988,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_dcb62cb1903bf132a9e47c3061967988 == cache_frame_dcb62cb1903bf132a9e47c3061967988) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_dcb62cb1903bf132a9e47c3061967988);
        cache_frame_dcb62cb1903bf132a9e47c3061967988 = NULL;
    }

    assertFrameObject(frame_dcb62cb1903bf132a9e47c3061967988);

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


static PyObject *impl_arcade$text_pyglet$$$function__6_value(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_8049751dba6196ce163c56a7a4fa9e71;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_8049751dba6196ce163c56a7a4fa9e71 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_8049751dba6196ce163c56a7a4fa9e71)) {
        Py_XDECREF(cache_frame_8049751dba6196ce163c56a7a4fa9e71);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8049751dba6196ce163c56a7a4fa9e71 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8049751dba6196ce163c56a7a4fa9e71 = MAKE_FUNCTION_FRAME(tstate, codeobj_8049751dba6196ce163c56a7a4fa9e71, module_arcade$text_pyglet, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8049751dba6196ce163c56a7a4fa9e71->m_type_description == NULL);
    frame_8049751dba6196ce163c56a7a4fa9e71 = cache_frame_8049751dba6196ce163c56a7a4fa9e71;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_8049751dba6196ce163c56a7a4fa9e71);
    assert(Py_REFCNT(frame_8049751dba6196ce163c56a7a4fa9e71) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_unicode_arg_1;
        CHECK_OBJECT(par_value);
        tmp_unicode_arg_1 = par_value;
        tmp_assign_source_1 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_value;
            assert(old != NULL);
            par_value = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[38]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[34]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_value);
        tmp_cmp_expr_right_1 = par_value;
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
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
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_value);
        tmp_assattr_value_1 = par_value;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_assattr_target_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[38]);
        if (tmp_assattr_target_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[34], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_target_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;
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
        exception_tb = MAKE_TRACEBACK(frame_8049751dba6196ce163c56a7a4fa9e71, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8049751dba6196ce163c56a7a4fa9e71->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8049751dba6196ce163c56a7a4fa9e71, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8049751dba6196ce163c56a7a4fa9e71,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_8049751dba6196ce163c56a7a4fa9e71 == cache_frame_8049751dba6196ce163c56a7a4fa9e71) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8049751dba6196ce163c56a7a4fa9e71);
        cache_frame_8049751dba6196ce163c56a7a4fa9e71 = NULL;
    }

    assertFrameObject(frame_8049751dba6196ce163c56a7a4fa9e71);

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
    Py_XDECREF(par_value);
    par_value = NULL;
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

    Py_XDECREF(par_value);
    par_value = NULL;
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


static PyObject *impl_arcade$text_pyglet$$$function__7_text(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_1138f532338039becb8c5dead477c2c9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1138f532338039becb8c5dead477c2c9 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1138f532338039becb8c5dead477c2c9)) {
        Py_XDECREF(cache_frame_1138f532338039becb8c5dead477c2c9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1138f532338039becb8c5dead477c2c9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1138f532338039becb8c5dead477c2c9 = MAKE_FUNCTION_FRAME(tstate, codeobj_1138f532338039becb8c5dead477c2c9, module_arcade$text_pyglet, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1138f532338039becb8c5dead477c2c9->m_type_description == NULL);
    frame_1138f532338039becb8c5dead477c2c9 = cache_frame_1138f532338039becb8c5dead477c2c9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_1138f532338039becb8c5dead477c2c9);
    assert(Py_REFCNT(frame_1138f532338039becb8c5dead477c2c9) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[38]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[34]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;
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
        exception_tb = MAKE_TRACEBACK(frame_1138f532338039becb8c5dead477c2c9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1138f532338039becb8c5dead477c2c9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1138f532338039becb8c5dead477c2c9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1138f532338039becb8c5dead477c2c9,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_1138f532338039becb8c5dead477c2c9 == cache_frame_1138f532338039becb8c5dead477c2c9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1138f532338039becb8c5dead477c2c9);
        cache_frame_1138f532338039becb8c5dead477c2c9 = NULL;
    }

    assertFrameObject(frame_1138f532338039becb8c5dead477c2c9);

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


static PyObject *impl_arcade$text_pyglet$$$function__8_text(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_50b9344432eaf3ce5c5516a809b78840;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_50b9344432eaf3ce5c5516a809b78840 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_50b9344432eaf3ce5c5516a809b78840)) {
        Py_XDECREF(cache_frame_50b9344432eaf3ce5c5516a809b78840);

#if _DEBUG_REFCOUNTS
        if (cache_frame_50b9344432eaf3ce5c5516a809b78840 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_50b9344432eaf3ce5c5516a809b78840 = MAKE_FUNCTION_FRAME(tstate, codeobj_50b9344432eaf3ce5c5516a809b78840, module_arcade$text_pyglet, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_50b9344432eaf3ce5c5516a809b78840->m_type_description == NULL);
    frame_50b9344432eaf3ce5c5516a809b78840 = cache_frame_50b9344432eaf3ce5c5516a809b78840;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_50b9344432eaf3ce5c5516a809b78840);
    assert(Py_REFCNT(frame_50b9344432eaf3ce5c5516a809b78840) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_unicode_arg_1;
        CHECK_OBJECT(par_value);
        tmp_unicode_arg_1 = par_value;
        tmp_assign_source_1 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_value;
            assert(old != NULL);
            par_value = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[38]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[34]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_value);
        tmp_cmp_expr_right_1 = par_value;
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
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
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_value);
        tmp_assattr_value_1 = par_value;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_assattr_target_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[38]);
        if (tmp_assattr_target_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[34], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_target_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
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
        exception_tb = MAKE_TRACEBACK(frame_50b9344432eaf3ce5c5516a809b78840, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_50b9344432eaf3ce5c5516a809b78840->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_50b9344432eaf3ce5c5516a809b78840, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_50b9344432eaf3ce5c5516a809b78840,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_50b9344432eaf3ce5c5516a809b78840 == cache_frame_50b9344432eaf3ce5c5516a809b78840) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_50b9344432eaf3ce5c5516a809b78840);
        cache_frame_50b9344432eaf3ce5c5516a809b78840 = NULL;
    }

    assertFrameObject(frame_50b9344432eaf3ce5c5516a809b78840);

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
    Py_XDECREF(par_value);
    par_value = NULL;
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

    Py_XDECREF(par_value);
    par_value = NULL;
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


static PyObject *impl_arcade$text_pyglet$$$function__9_x(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_07d1da091dc20b30b8d3b385b9d42803;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_07d1da091dc20b30b8d3b385b9d42803 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_07d1da091dc20b30b8d3b385b9d42803)) {
        Py_XDECREF(cache_frame_07d1da091dc20b30b8d3b385b9d42803);

#if _DEBUG_REFCOUNTS
        if (cache_frame_07d1da091dc20b30b8d3b385b9d42803 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_07d1da091dc20b30b8d3b385b9d42803 = MAKE_FUNCTION_FRAME(tstate, codeobj_07d1da091dc20b30b8d3b385b9d42803, module_arcade$text_pyglet, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_07d1da091dc20b30b8d3b385b9d42803->m_type_description == NULL);
    frame_07d1da091dc20b30b8d3b385b9d42803 = cache_frame_07d1da091dc20b30b8d3b385b9d42803;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_07d1da091dc20b30b8d3b385b9d42803);
    assert(Py_REFCNT(frame_07d1da091dc20b30b8d3b385b9d42803) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[38]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[17]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;
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
        exception_tb = MAKE_TRACEBACK(frame_07d1da091dc20b30b8d3b385b9d42803, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_07d1da091dc20b30b8d3b385b9d42803->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_07d1da091dc20b30b8d3b385b9d42803, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_07d1da091dc20b30b8d3b385b9d42803,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_07d1da091dc20b30b8d3b385b9d42803 == cache_frame_07d1da091dc20b30b8d3b385b9d42803) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_07d1da091dc20b30b8d3b385b9d42803);
        cache_frame_07d1da091dc20b30b8d3b385b9d42803 = NULL;
    }

    assertFrameObject(frame_07d1da091dc20b30b8d3b385b9d42803);

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


static PyObject *impl_arcade$text_pyglet$$$function__10_x(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_x = python_pars[1];
    struct Nuitka_FrameObject *frame_6e4cefc37624608ca3720e38d3cc2555;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_6e4cefc37624608ca3720e38d3cc2555 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6e4cefc37624608ca3720e38d3cc2555)) {
        Py_XDECREF(cache_frame_6e4cefc37624608ca3720e38d3cc2555);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6e4cefc37624608ca3720e38d3cc2555 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6e4cefc37624608ca3720e38d3cc2555 = MAKE_FUNCTION_FRAME(tstate, codeobj_6e4cefc37624608ca3720e38d3cc2555, module_arcade$text_pyglet, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6e4cefc37624608ca3720e38d3cc2555->m_type_description == NULL);
    frame_6e4cefc37624608ca3720e38d3cc2555 = cache_frame_6e4cefc37624608ca3720e38d3cc2555;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_6e4cefc37624608ca3720e38d3cc2555);
    assert(Py_REFCNT(frame_6e4cefc37624608ca3720e38d3cc2555) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[38]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[17]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_cmp_expr_right_1 = par_x;
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
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
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_x);
        tmp_assattr_value_1 = par_x;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_assattr_target_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[38]);
        if (tmp_assattr_target_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[17], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_target_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6e4cefc37624608ca3720e38d3cc2555, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6e4cefc37624608ca3720e38d3cc2555->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6e4cefc37624608ca3720e38d3cc2555, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6e4cefc37624608ca3720e38d3cc2555,
        type_description_1,
        par_self,
        par_x
    );


    // Release cached frame if used for exception.
    if (frame_6e4cefc37624608ca3720e38d3cc2555 == cache_frame_6e4cefc37624608ca3720e38d3cc2555) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6e4cefc37624608ca3720e38d3cc2555);
        cache_frame_6e4cefc37624608ca3720e38d3cc2555 = NULL;
    }

    assertFrameObject(frame_6e4cefc37624608ca3720e38d3cc2555);

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
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_arcade$text_pyglet$$$function__11_y(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_9da1c7002b8ddc709095266199a89c72;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9da1c7002b8ddc709095266199a89c72 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9da1c7002b8ddc709095266199a89c72)) {
        Py_XDECREF(cache_frame_9da1c7002b8ddc709095266199a89c72);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9da1c7002b8ddc709095266199a89c72 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9da1c7002b8ddc709095266199a89c72 = MAKE_FUNCTION_FRAME(tstate, codeobj_9da1c7002b8ddc709095266199a89c72, module_arcade$text_pyglet, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9da1c7002b8ddc709095266199a89c72->m_type_description == NULL);
    frame_9da1c7002b8ddc709095266199a89c72 = cache_frame_9da1c7002b8ddc709095266199a89c72;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_9da1c7002b8ddc709095266199a89c72);
    assert(Py_REFCNT(frame_9da1c7002b8ddc709095266199a89c72) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[38]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[18]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
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
        exception_tb = MAKE_TRACEBACK(frame_9da1c7002b8ddc709095266199a89c72, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9da1c7002b8ddc709095266199a89c72->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9da1c7002b8ddc709095266199a89c72, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9da1c7002b8ddc709095266199a89c72,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_9da1c7002b8ddc709095266199a89c72 == cache_frame_9da1c7002b8ddc709095266199a89c72) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9da1c7002b8ddc709095266199a89c72);
        cache_frame_9da1c7002b8ddc709095266199a89c72 = NULL;
    }

    assertFrameObject(frame_9da1c7002b8ddc709095266199a89c72);

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


static PyObject *impl_arcade$text_pyglet$$$function__12_y(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_y = python_pars[1];
    struct Nuitka_FrameObject *frame_39f783285607454a893201f2770e3d84;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_39f783285607454a893201f2770e3d84 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_39f783285607454a893201f2770e3d84)) {
        Py_XDECREF(cache_frame_39f783285607454a893201f2770e3d84);

#if _DEBUG_REFCOUNTS
        if (cache_frame_39f783285607454a893201f2770e3d84 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_39f783285607454a893201f2770e3d84 = MAKE_FUNCTION_FRAME(tstate, codeobj_39f783285607454a893201f2770e3d84, module_arcade$text_pyglet, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_39f783285607454a893201f2770e3d84->m_type_description == NULL);
    frame_39f783285607454a893201f2770e3d84 = cache_frame_39f783285607454a893201f2770e3d84;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_39f783285607454a893201f2770e3d84);
    assert(Py_REFCNT(frame_39f783285607454a893201f2770e3d84) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[38]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[18]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_y);
        tmp_cmp_expr_right_1 = par_y;
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
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
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_y);
        tmp_assattr_value_1 = par_y;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_assattr_target_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[38]);
        if (tmp_assattr_target_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[18], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_target_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_39f783285607454a893201f2770e3d84, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_39f783285607454a893201f2770e3d84->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_39f783285607454a893201f2770e3d84, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_39f783285607454a893201f2770e3d84,
        type_description_1,
        par_self,
        par_y
    );


    // Release cached frame if used for exception.
    if (frame_39f783285607454a893201f2770e3d84 == cache_frame_39f783285607454a893201f2770e3d84) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_39f783285607454a893201f2770e3d84);
        cache_frame_39f783285607454a893201f2770e3d84 = NULL;
    }

    assertFrameObject(frame_39f783285607454a893201f2770e3d84);

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
    CHECK_OBJECT(par_y);
    Py_DECREF(par_y);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_y);
    Py_DECREF(par_y);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_arcade$text_pyglet$$$function__13_font_name(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_d0cdde587b0ce5f6fccb838f43e73320;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d0cdde587b0ce5f6fccb838f43e73320 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d0cdde587b0ce5f6fccb838f43e73320)) {
        Py_XDECREF(cache_frame_d0cdde587b0ce5f6fccb838f43e73320);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d0cdde587b0ce5f6fccb838f43e73320 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d0cdde587b0ce5f6fccb838f43e73320 = MAKE_FUNCTION_FRAME(tstate, codeobj_d0cdde587b0ce5f6fccb838f43e73320, module_arcade$text_pyglet, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d0cdde587b0ce5f6fccb838f43e73320->m_type_description == NULL);
    frame_d0cdde587b0ce5f6fccb838f43e73320 = cache_frame_d0cdde587b0ce5f6fccb838f43e73320;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_d0cdde587b0ce5f6fccb838f43e73320);
    assert(Py_REFCNT(frame_d0cdde587b0ce5f6fccb838f43e73320) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[38]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[7]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;
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
        exception_tb = MAKE_TRACEBACK(frame_d0cdde587b0ce5f6fccb838f43e73320, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d0cdde587b0ce5f6fccb838f43e73320->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d0cdde587b0ce5f6fccb838f43e73320, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d0cdde587b0ce5f6fccb838f43e73320,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_d0cdde587b0ce5f6fccb838f43e73320 == cache_frame_d0cdde587b0ce5f6fccb838f43e73320) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d0cdde587b0ce5f6fccb838f43e73320);
        cache_frame_d0cdde587b0ce5f6fccb838f43e73320 = NULL;
    }

    assertFrameObject(frame_d0cdde587b0ce5f6fccb838f43e73320);

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


static PyObject *impl_arcade$text_pyglet$$$function__14_font_name(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_font_name = python_pars[1];
    struct Nuitka_FrameObject *frame_b3fe82871dabd02616b44405254b3c32;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_b3fe82871dabd02616b44405254b3c32 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b3fe82871dabd02616b44405254b3c32)) {
        Py_XDECREF(cache_frame_b3fe82871dabd02616b44405254b3c32);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b3fe82871dabd02616b44405254b3c32 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b3fe82871dabd02616b44405254b3c32 = MAKE_FUNCTION_FRAME(tstate, codeobj_b3fe82871dabd02616b44405254b3c32, module_arcade$text_pyglet, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b3fe82871dabd02616b44405254b3c32->m_type_description == NULL);
    frame_b3fe82871dabd02616b44405254b3c32 = cache_frame_b3fe82871dabd02616b44405254b3c32;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_b3fe82871dabd02616b44405254b3c32);
    assert(Py_REFCNT(frame_b3fe82871dabd02616b44405254b3c32) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_font_name);
        tmp_assattr_value_1 = par_font_name;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_assattr_target_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[38]);
        if (tmp_assattr_target_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[7], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_target_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b3fe82871dabd02616b44405254b3c32, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b3fe82871dabd02616b44405254b3c32->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b3fe82871dabd02616b44405254b3c32, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b3fe82871dabd02616b44405254b3c32,
        type_description_1,
        par_self,
        par_font_name
    );


    // Release cached frame if used for exception.
    if (frame_b3fe82871dabd02616b44405254b3c32 == cache_frame_b3fe82871dabd02616b44405254b3c32) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b3fe82871dabd02616b44405254b3c32);
        cache_frame_b3fe82871dabd02616b44405254b3c32 = NULL;
    }

    assertFrameObject(frame_b3fe82871dabd02616b44405254b3c32);

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
    CHECK_OBJECT(par_font_name);
    Py_DECREF(par_font_name);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_font_name);
    Py_DECREF(par_font_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_arcade$text_pyglet$$$function__15_font_size(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_aac852424581ac0ce190a367f2cace0e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_aac852424581ac0ce190a367f2cace0e = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_aac852424581ac0ce190a367f2cace0e)) {
        Py_XDECREF(cache_frame_aac852424581ac0ce190a367f2cace0e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_aac852424581ac0ce190a367f2cace0e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_aac852424581ac0ce190a367f2cace0e = MAKE_FUNCTION_FRAME(tstate, codeobj_aac852424581ac0ce190a367f2cace0e, module_arcade$text_pyglet, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_aac852424581ac0ce190a367f2cace0e->m_type_description == NULL);
    frame_aac852424581ac0ce190a367f2cace0e = cache_frame_aac852424581ac0ce190a367f2cace0e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_aac852424581ac0ce190a367f2cace0e);
    assert(Py_REFCNT(frame_aac852424581ac0ce190a367f2cace0e) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[38]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 307;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[46]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 307;
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
        exception_tb = MAKE_TRACEBACK(frame_aac852424581ac0ce190a367f2cace0e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_aac852424581ac0ce190a367f2cace0e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_aac852424581ac0ce190a367f2cace0e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_aac852424581ac0ce190a367f2cace0e,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_aac852424581ac0ce190a367f2cace0e == cache_frame_aac852424581ac0ce190a367f2cace0e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_aac852424581ac0ce190a367f2cace0e);
        cache_frame_aac852424581ac0ce190a367f2cace0e = NULL;
    }

    assertFrameObject(frame_aac852424581ac0ce190a367f2cace0e);

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


static PyObject *impl_arcade$text_pyglet$$$function__16_font_size(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_font_size = python_pars[1];
    struct Nuitka_FrameObject *frame_58fb157ac60b0674942a80a330c88ef4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_58fb157ac60b0674942a80a330c88ef4 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_58fb157ac60b0674942a80a330c88ef4)) {
        Py_XDECREF(cache_frame_58fb157ac60b0674942a80a330c88ef4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_58fb157ac60b0674942a80a330c88ef4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_58fb157ac60b0674942a80a330c88ef4 = MAKE_FUNCTION_FRAME(tstate, codeobj_58fb157ac60b0674942a80a330c88ef4, module_arcade$text_pyglet, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_58fb157ac60b0674942a80a330c88ef4->m_type_description == NULL);
    frame_58fb157ac60b0674942a80a330c88ef4 = cache_frame_58fb157ac60b0674942a80a330c88ef4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_58fb157ac60b0674942a80a330c88ef4);
    assert(Py_REFCNT(frame_58fb157ac60b0674942a80a330c88ef4) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_font_size);
        tmp_assattr_value_1 = par_font_size;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_assattr_target_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[38]);
        if (tmp_assattr_target_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[46], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_target_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_58fb157ac60b0674942a80a330c88ef4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_58fb157ac60b0674942a80a330c88ef4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_58fb157ac60b0674942a80a330c88ef4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_58fb157ac60b0674942a80a330c88ef4,
        type_description_1,
        par_self,
        par_font_size
    );


    // Release cached frame if used for exception.
    if (frame_58fb157ac60b0674942a80a330c88ef4 == cache_frame_58fb157ac60b0674942a80a330c88ef4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_58fb157ac60b0674942a80a330c88ef4);
        cache_frame_58fb157ac60b0674942a80a330c88ef4 = NULL;
    }

    assertFrameObject(frame_58fb157ac60b0674942a80a330c88ef4);

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
    CHECK_OBJECT(par_font_size);
    Py_DECREF(par_font_size);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_font_size);
    Py_DECREF(par_font_size);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_arcade$text_pyglet$$$function__17_anchor_x(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_56c9f50d84a47fa27e330c51923c0bf6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_56c9f50d84a47fa27e330c51923c0bf6 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_56c9f50d84a47fa27e330c51923c0bf6)) {
        Py_XDECREF(cache_frame_56c9f50d84a47fa27e330c51923c0bf6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_56c9f50d84a47fa27e330c51923c0bf6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_56c9f50d84a47fa27e330c51923c0bf6 = MAKE_FUNCTION_FRAME(tstate, codeobj_56c9f50d84a47fa27e330c51923c0bf6, module_arcade$text_pyglet, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_56c9f50d84a47fa27e330c51923c0bf6->m_type_description == NULL);
    frame_56c9f50d84a47fa27e330c51923c0bf6 = cache_frame_56c9f50d84a47fa27e330c51923c0bf6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_56c9f50d84a47fa27e330c51923c0bf6);
    assert(Py_REFCNT(frame_56c9f50d84a47fa27e330c51923c0bf6) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[38]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[48]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;
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
        exception_tb = MAKE_TRACEBACK(frame_56c9f50d84a47fa27e330c51923c0bf6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_56c9f50d84a47fa27e330c51923c0bf6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_56c9f50d84a47fa27e330c51923c0bf6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_56c9f50d84a47fa27e330c51923c0bf6,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_56c9f50d84a47fa27e330c51923c0bf6 == cache_frame_56c9f50d84a47fa27e330c51923c0bf6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_56c9f50d84a47fa27e330c51923c0bf6);
        cache_frame_56c9f50d84a47fa27e330c51923c0bf6 = NULL;
    }

    assertFrameObject(frame_56c9f50d84a47fa27e330c51923c0bf6);

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


static PyObject *impl_arcade$text_pyglet$$$function__18_anchor_x(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_anchor_x = python_pars[1];
    struct Nuitka_FrameObject *frame_b687ffadbe45483e00a24bf6b558f255;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_b687ffadbe45483e00a24bf6b558f255 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b687ffadbe45483e00a24bf6b558f255)) {
        Py_XDECREF(cache_frame_b687ffadbe45483e00a24bf6b558f255);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b687ffadbe45483e00a24bf6b558f255 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b687ffadbe45483e00a24bf6b558f255 = MAKE_FUNCTION_FRAME(tstate, codeobj_b687ffadbe45483e00a24bf6b558f255, module_arcade$text_pyglet, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b687ffadbe45483e00a24bf6b558f255->m_type_description == NULL);
    frame_b687ffadbe45483e00a24bf6b558f255 = cache_frame_b687ffadbe45483e00a24bf6b558f255;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_b687ffadbe45483e00a24bf6b558f255);
    assert(Py_REFCNT(frame_b687ffadbe45483e00a24bf6b558f255) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_anchor_x);
        tmp_assattr_value_1 = par_anchor_x;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_assattr_target_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[38]);
        if (tmp_assattr_target_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[48], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_target_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b687ffadbe45483e00a24bf6b558f255, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b687ffadbe45483e00a24bf6b558f255->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b687ffadbe45483e00a24bf6b558f255, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b687ffadbe45483e00a24bf6b558f255,
        type_description_1,
        par_self,
        par_anchor_x
    );


    // Release cached frame if used for exception.
    if (frame_b687ffadbe45483e00a24bf6b558f255 == cache_frame_b687ffadbe45483e00a24bf6b558f255) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b687ffadbe45483e00a24bf6b558f255);
        cache_frame_b687ffadbe45483e00a24bf6b558f255 = NULL;
    }

    assertFrameObject(frame_b687ffadbe45483e00a24bf6b558f255);

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
    CHECK_OBJECT(par_anchor_x);
    Py_DECREF(par_anchor_x);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_anchor_x);
    Py_DECREF(par_anchor_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_arcade$text_pyglet$$$function__19_anchor_y(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_09a2c232b6d16f1f3d4f4d04dee5a6a2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_09a2c232b6d16f1f3d4f4d04dee5a6a2 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_09a2c232b6d16f1f3d4f4d04dee5a6a2)) {
        Py_XDECREF(cache_frame_09a2c232b6d16f1f3d4f4d04dee5a6a2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_09a2c232b6d16f1f3d4f4d04dee5a6a2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_09a2c232b6d16f1f3d4f4d04dee5a6a2 = MAKE_FUNCTION_FRAME(tstate, codeobj_09a2c232b6d16f1f3d4f4d04dee5a6a2, module_arcade$text_pyglet, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_09a2c232b6d16f1f3d4f4d04dee5a6a2->m_type_description == NULL);
    frame_09a2c232b6d16f1f3d4f4d04dee5a6a2 = cache_frame_09a2c232b6d16f1f3d4f4d04dee5a6a2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_09a2c232b6d16f1f3d4f4d04dee5a6a2);
    assert(Py_REFCNT(frame_09a2c232b6d16f1f3d4f4d04dee5a6a2) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[38]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[50]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;
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
        exception_tb = MAKE_TRACEBACK(frame_09a2c232b6d16f1f3d4f4d04dee5a6a2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_09a2c232b6d16f1f3d4f4d04dee5a6a2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_09a2c232b6d16f1f3d4f4d04dee5a6a2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_09a2c232b6d16f1f3d4f4d04dee5a6a2,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_09a2c232b6d16f1f3d4f4d04dee5a6a2 == cache_frame_09a2c232b6d16f1f3d4f4d04dee5a6a2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_09a2c232b6d16f1f3d4f4d04dee5a6a2);
        cache_frame_09a2c232b6d16f1f3d4f4d04dee5a6a2 = NULL;
    }

    assertFrameObject(frame_09a2c232b6d16f1f3d4f4d04dee5a6a2);

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


static PyObject *impl_arcade$text_pyglet$$$function__20_anchor_y(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_anchor_y = python_pars[1];
    struct Nuitka_FrameObject *frame_22719b6e36de74ff933bba3c2c56a0bd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_22719b6e36de74ff933bba3c2c56a0bd = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_22719b6e36de74ff933bba3c2c56a0bd)) {
        Py_XDECREF(cache_frame_22719b6e36de74ff933bba3c2c56a0bd);

#if _DEBUG_REFCOUNTS
        if (cache_frame_22719b6e36de74ff933bba3c2c56a0bd == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_22719b6e36de74ff933bba3c2c56a0bd = MAKE_FUNCTION_FRAME(tstate, codeobj_22719b6e36de74ff933bba3c2c56a0bd, module_arcade$text_pyglet, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_22719b6e36de74ff933bba3c2c56a0bd->m_type_description == NULL);
    frame_22719b6e36de74ff933bba3c2c56a0bd = cache_frame_22719b6e36de74ff933bba3c2c56a0bd;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_22719b6e36de74ff933bba3c2c56a0bd);
    assert(Py_REFCNT(frame_22719b6e36de74ff933bba3c2c56a0bd) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_anchor_y);
        tmp_assattr_value_1 = par_anchor_y;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_assattr_target_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[38]);
        if (tmp_assattr_target_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[50], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_target_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_22719b6e36de74ff933bba3c2c56a0bd, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_22719b6e36de74ff933bba3c2c56a0bd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_22719b6e36de74ff933bba3c2c56a0bd, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_22719b6e36de74ff933bba3c2c56a0bd,
        type_description_1,
        par_self,
        par_anchor_y
    );


    // Release cached frame if used for exception.
    if (frame_22719b6e36de74ff933bba3c2c56a0bd == cache_frame_22719b6e36de74ff933bba3c2c56a0bd) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_22719b6e36de74ff933bba3c2c56a0bd);
        cache_frame_22719b6e36de74ff933bba3c2c56a0bd = NULL;
    }

    assertFrameObject(frame_22719b6e36de74ff933bba3c2c56a0bd);

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
    CHECK_OBJECT(par_anchor_y);
    Py_DECREF(par_anchor_y);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_anchor_y);
    Py_DECREF(par_anchor_y);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_arcade$text_pyglet$$$function__21_color(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_f669288e048aee45d047bfaefc5ad617;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f669288e048aee45d047bfaefc5ad617 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f669288e048aee45d047bfaefc5ad617)) {
        Py_XDECREF(cache_frame_f669288e048aee45d047bfaefc5ad617);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f669288e048aee45d047bfaefc5ad617 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f669288e048aee45d047bfaefc5ad617 = MAKE_FUNCTION_FRAME(tstate, codeobj_f669288e048aee45d047bfaefc5ad617, module_arcade$text_pyglet, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f669288e048aee45d047bfaefc5ad617->m_type_description == NULL);
    frame_f669288e048aee45d047bfaefc5ad617 = cache_frame_f669288e048aee45d047bfaefc5ad617;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_f669288e048aee45d047bfaefc5ad617);
    assert(Py_REFCNT(frame_f669288e048aee45d047bfaefc5ad617) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[38]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 344;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[52]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 344;
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
        exception_tb = MAKE_TRACEBACK(frame_f669288e048aee45d047bfaefc5ad617, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f669288e048aee45d047bfaefc5ad617->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f669288e048aee45d047bfaefc5ad617, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f669288e048aee45d047bfaefc5ad617,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_f669288e048aee45d047bfaefc5ad617 == cache_frame_f669288e048aee45d047bfaefc5ad617) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f669288e048aee45d047bfaefc5ad617);
        cache_frame_f669288e048aee45d047bfaefc5ad617 = NULL;
    }

    assertFrameObject(frame_f669288e048aee45d047bfaefc5ad617);

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


static PyObject *impl_arcade$text_pyglet$$$function__22_color(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_color = python_pars[1];
    struct Nuitka_FrameObject *frame_00d2398ae18bd320bb216049c05e8222;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_00d2398ae18bd320bb216049c05e8222 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_00d2398ae18bd320bb216049c05e8222)) {
        Py_XDECREF(cache_frame_00d2398ae18bd320bb216049c05e8222);

#if _DEBUG_REFCOUNTS
        if (cache_frame_00d2398ae18bd320bb216049c05e8222 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_00d2398ae18bd320bb216049c05e8222 = MAKE_FUNCTION_FRAME(tstate, codeobj_00d2398ae18bd320bb216049c05e8222, module_arcade$text_pyglet, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_00d2398ae18bd320bb216049c05e8222->m_type_description == NULL);
    frame_00d2398ae18bd320bb216049c05e8222 = cache_frame_00d2398ae18bd320bb216049c05e8222;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_00d2398ae18bd320bb216049c05e8222);
    assert(Py_REFCNT(frame_00d2398ae18bd320bb216049c05e8222) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_expression_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_arcade$text_pyglet, (Nuitka_StringObject *)mod_consts[36]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[36]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 348;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_color);
        tmp_args_element_value_1 = par_color;
        frame_00d2398ae18bd320bb216049c05e8222->m_frame.f_lineno = 348;
        tmp_assattr_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 348;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_assattr_target_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[38]);
        if (tmp_assattr_target_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_1);

            exception_lineno = 348;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[52], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_target_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 348;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_00d2398ae18bd320bb216049c05e8222, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_00d2398ae18bd320bb216049c05e8222->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_00d2398ae18bd320bb216049c05e8222, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_00d2398ae18bd320bb216049c05e8222,
        type_description_1,
        par_self,
        par_color
    );


    // Release cached frame if used for exception.
    if (frame_00d2398ae18bd320bb216049c05e8222 == cache_frame_00d2398ae18bd320bb216049c05e8222) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_00d2398ae18bd320bb216049c05e8222);
        cache_frame_00d2398ae18bd320bb216049c05e8222 = NULL;
    }

    assertFrameObject(frame_00d2398ae18bd320bb216049c05e8222);

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
    CHECK_OBJECT(par_color);
    Py_DECREF(par_color);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_color);
    Py_DECREF(par_color);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_arcade$text_pyglet$$$function__23_width(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_d8a0651b454437f11d929441d2b3e9f0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d8a0651b454437f11d929441d2b3e9f0 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d8a0651b454437f11d929441d2b3e9f0)) {
        Py_XDECREF(cache_frame_d8a0651b454437f11d929441d2b3e9f0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d8a0651b454437f11d929441d2b3e9f0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d8a0651b454437f11d929441d2b3e9f0 = MAKE_FUNCTION_FRAME(tstate, codeobj_d8a0651b454437f11d929441d2b3e9f0, module_arcade$text_pyglet, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d8a0651b454437f11d929441d2b3e9f0->m_type_description == NULL);
    frame_d8a0651b454437f11d929441d2b3e9f0 = cache_frame_d8a0651b454437f11d929441d2b3e9f0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_d8a0651b454437f11d929441d2b3e9f0);
    assert(Py_REFCNT(frame_d8a0651b454437f11d929441d2b3e9f0) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[38]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 358;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[54]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 358;
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
        exception_tb = MAKE_TRACEBACK(frame_d8a0651b454437f11d929441d2b3e9f0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d8a0651b454437f11d929441d2b3e9f0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d8a0651b454437f11d929441d2b3e9f0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d8a0651b454437f11d929441d2b3e9f0,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_d8a0651b454437f11d929441d2b3e9f0 == cache_frame_d8a0651b454437f11d929441d2b3e9f0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d8a0651b454437f11d929441d2b3e9f0);
        cache_frame_d8a0651b454437f11d929441d2b3e9f0 = NULL;
    }

    assertFrameObject(frame_d8a0651b454437f11d929441d2b3e9f0);

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


static PyObject *impl_arcade$text_pyglet$$$function__24_width(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_width = python_pars[1];
    struct Nuitka_FrameObject *frame_25001eb09d51d66a6c672017306f0038;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_25001eb09d51d66a6c672017306f0038 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_25001eb09d51d66a6c672017306f0038)) {
        Py_XDECREF(cache_frame_25001eb09d51d66a6c672017306f0038);

#if _DEBUG_REFCOUNTS
        if (cache_frame_25001eb09d51d66a6c672017306f0038 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_25001eb09d51d66a6c672017306f0038 = MAKE_FUNCTION_FRAME(tstate, codeobj_25001eb09d51d66a6c672017306f0038, module_arcade$text_pyglet, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_25001eb09d51d66a6c672017306f0038->m_type_description == NULL);
    frame_25001eb09d51d66a6c672017306f0038 = cache_frame_25001eb09d51d66a6c672017306f0038;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_25001eb09d51d66a6c672017306f0038);
    assert(Py_REFCNT(frame_25001eb09d51d66a6c672017306f0038) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_width);
        tmp_assattr_value_1 = par_width;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_assattr_target_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[38]);
        if (tmp_assattr_target_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[54], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_target_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_25001eb09d51d66a6c672017306f0038, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_25001eb09d51d66a6c672017306f0038->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_25001eb09d51d66a6c672017306f0038, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_25001eb09d51d66a6c672017306f0038,
        type_description_1,
        par_self,
        par_width
    );


    // Release cached frame if used for exception.
    if (frame_25001eb09d51d66a6c672017306f0038 == cache_frame_25001eb09d51d66a6c672017306f0038) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_25001eb09d51d66a6c672017306f0038);
        cache_frame_25001eb09d51d66a6c672017306f0038 = NULL;
    }

    assertFrameObject(frame_25001eb09d51d66a6c672017306f0038);

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
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_width);
    Py_DECREF(par_width);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_arcade$text_pyglet$$$function__25_height(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_1837010e24e3ce080310db112677f537;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1837010e24e3ce080310db112677f537 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1837010e24e3ce080310db112677f537)) {
        Py_XDECREF(cache_frame_1837010e24e3ce080310db112677f537);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1837010e24e3ce080310db112677f537 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1837010e24e3ce080310db112677f537 = MAKE_FUNCTION_FRAME(tstate, codeobj_1837010e24e3ce080310db112677f537, module_arcade$text_pyglet, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1837010e24e3ce080310db112677f537->m_type_description == NULL);
    frame_1837010e24e3ce080310db112677f537 = cache_frame_1837010e24e3ce080310db112677f537;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_1837010e24e3ce080310db112677f537);
    assert(Py_REFCNT(frame_1837010e24e3ce080310db112677f537) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[38]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 372;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[56]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 372;
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
        exception_tb = MAKE_TRACEBACK(frame_1837010e24e3ce080310db112677f537, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1837010e24e3ce080310db112677f537->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1837010e24e3ce080310db112677f537, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1837010e24e3ce080310db112677f537,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_1837010e24e3ce080310db112677f537 == cache_frame_1837010e24e3ce080310db112677f537) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1837010e24e3ce080310db112677f537);
        cache_frame_1837010e24e3ce080310db112677f537 = NULL;
    }

    assertFrameObject(frame_1837010e24e3ce080310db112677f537);

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


static PyObject *impl_arcade$text_pyglet$$$function__26_height(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_873c038ac72204b9b2b19c939405cf36;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_873c038ac72204b9b2b19c939405cf36 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_873c038ac72204b9b2b19c939405cf36)) {
        Py_XDECREF(cache_frame_873c038ac72204b9b2b19c939405cf36);

#if _DEBUG_REFCOUNTS
        if (cache_frame_873c038ac72204b9b2b19c939405cf36 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_873c038ac72204b9b2b19c939405cf36 = MAKE_FUNCTION_FRAME(tstate, codeobj_873c038ac72204b9b2b19c939405cf36, module_arcade$text_pyglet, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_873c038ac72204b9b2b19c939405cf36->m_type_description == NULL);
    frame_873c038ac72204b9b2b19c939405cf36 = cache_frame_873c038ac72204b9b2b19c939405cf36;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_873c038ac72204b9b2b19c939405cf36);
    assert(Py_REFCNT(frame_873c038ac72204b9b2b19c939405cf36) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_value);
        tmp_assattr_value_1 = par_value;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_assattr_target_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[38]);
        if (tmp_assattr_target_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 376;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[56], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_target_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 376;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_873c038ac72204b9b2b19c939405cf36, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_873c038ac72204b9b2b19c939405cf36->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_873c038ac72204b9b2b19c939405cf36, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_873c038ac72204b9b2b19c939405cf36,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_873c038ac72204b9b2b19c939405cf36 == cache_frame_873c038ac72204b9b2b19c939405cf36) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_873c038ac72204b9b2b19c939405cf36);
        cache_frame_873c038ac72204b9b2b19c939405cf36 = NULL;
    }

    assertFrameObject(frame_873c038ac72204b9b2b19c939405cf36);

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


static PyObject *impl_arcade$text_pyglet$$$function__27_size(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_0955524f37f288217f59c06f7a31c0e5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0955524f37f288217f59c06f7a31c0e5 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0955524f37f288217f59c06f7a31c0e5)) {
        Py_XDECREF(cache_frame_0955524f37f288217f59c06f7a31c0e5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0955524f37f288217f59c06f7a31c0e5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0955524f37f288217f59c06f7a31c0e5 = MAKE_FUNCTION_FRAME(tstate, codeobj_0955524f37f288217f59c06f7a31c0e5, module_arcade$text_pyglet, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0955524f37f288217f59c06f7a31c0e5->m_type_description == NULL);
    frame_0955524f37f288217f59c06f7a31c0e5 = cache_frame_0955524f37f288217f59c06f7a31c0e5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_0955524f37f288217f59c06f7a31c0e5);
    assert(Py_REFCNT(frame_0955524f37f288217f59c06f7a31c0e5) == 2);

    // Framed code:
    {
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[38]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[54]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_3;
            PyObject *tmp_expression_value_4;
            PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_4 = par_self;
            tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[38]);
            if (tmp_expression_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 383;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[56]);
            Py_DECREF(tmp_expression_value_3);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 383;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_1);
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0955524f37f288217f59c06f7a31c0e5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0955524f37f288217f59c06f7a31c0e5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0955524f37f288217f59c06f7a31c0e5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0955524f37f288217f59c06f7a31c0e5,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_0955524f37f288217f59c06f7a31c0e5 == cache_frame_0955524f37f288217f59c06f7a31c0e5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0955524f37f288217f59c06f7a31c0e5);
        cache_frame_0955524f37f288217f59c06f7a31c0e5 = NULL;
    }

    assertFrameObject(frame_0955524f37f288217f59c06f7a31c0e5);

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


static PyObject *impl_arcade$text_pyglet$$$function__28_content_width(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_903b7a1cc3e7994bf64b50c94416b009;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_903b7a1cc3e7994bf64b50c94416b009 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_903b7a1cc3e7994bf64b50c94416b009)) {
        Py_XDECREF(cache_frame_903b7a1cc3e7994bf64b50c94416b009);

#if _DEBUG_REFCOUNTS
        if (cache_frame_903b7a1cc3e7994bf64b50c94416b009 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_903b7a1cc3e7994bf64b50c94416b009 = MAKE_FUNCTION_FRAME(tstate, codeobj_903b7a1cc3e7994bf64b50c94416b009, module_arcade$text_pyglet, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_903b7a1cc3e7994bf64b50c94416b009->m_type_description == NULL);
    frame_903b7a1cc3e7994bf64b50c94416b009 = cache_frame_903b7a1cc3e7994bf64b50c94416b009;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_903b7a1cc3e7994bf64b50c94416b009);
    assert(Py_REFCNT(frame_903b7a1cc3e7994bf64b50c94416b009) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[38]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 390;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[59]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 390;
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
        exception_tb = MAKE_TRACEBACK(frame_903b7a1cc3e7994bf64b50c94416b009, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_903b7a1cc3e7994bf64b50c94416b009->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_903b7a1cc3e7994bf64b50c94416b009, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_903b7a1cc3e7994bf64b50c94416b009,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_903b7a1cc3e7994bf64b50c94416b009 == cache_frame_903b7a1cc3e7994bf64b50c94416b009) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_903b7a1cc3e7994bf64b50c94416b009);
        cache_frame_903b7a1cc3e7994bf64b50c94416b009 = NULL;
    }

    assertFrameObject(frame_903b7a1cc3e7994bf64b50c94416b009);

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


static PyObject *impl_arcade$text_pyglet$$$function__29_content_height(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_d081b60c39a77813276bd78aa7110fcb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d081b60c39a77813276bd78aa7110fcb = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d081b60c39a77813276bd78aa7110fcb)) {
        Py_XDECREF(cache_frame_d081b60c39a77813276bd78aa7110fcb);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d081b60c39a77813276bd78aa7110fcb == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d081b60c39a77813276bd78aa7110fcb = MAKE_FUNCTION_FRAME(tstate, codeobj_d081b60c39a77813276bd78aa7110fcb, module_arcade$text_pyglet, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d081b60c39a77813276bd78aa7110fcb->m_type_description == NULL);
    frame_d081b60c39a77813276bd78aa7110fcb = cache_frame_d081b60c39a77813276bd78aa7110fcb;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_d081b60c39a77813276bd78aa7110fcb);
    assert(Py_REFCNT(frame_d081b60c39a77813276bd78aa7110fcb) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[38]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[61]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;
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
        exception_tb = MAKE_TRACEBACK(frame_d081b60c39a77813276bd78aa7110fcb, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d081b60c39a77813276bd78aa7110fcb->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d081b60c39a77813276bd78aa7110fcb, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d081b60c39a77813276bd78aa7110fcb,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_d081b60c39a77813276bd78aa7110fcb == cache_frame_d081b60c39a77813276bd78aa7110fcb) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d081b60c39a77813276bd78aa7110fcb);
        cache_frame_d081b60c39a77813276bd78aa7110fcb = NULL;
    }

    assertFrameObject(frame_d081b60c39a77813276bd78aa7110fcb);

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


static PyObject *impl_arcade$text_pyglet$$$function__30_left(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_93681e0916ba7e7697215c51c6e2dc05;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_93681e0916ba7e7697215c51c6e2dc05 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_93681e0916ba7e7697215c51c6e2dc05)) {
        Py_XDECREF(cache_frame_93681e0916ba7e7697215c51c6e2dc05);

#if _DEBUG_REFCOUNTS
        if (cache_frame_93681e0916ba7e7697215c51c6e2dc05 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_93681e0916ba7e7697215c51c6e2dc05 = MAKE_FUNCTION_FRAME(tstate, codeobj_93681e0916ba7e7697215c51c6e2dc05, module_arcade$text_pyglet, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_93681e0916ba7e7697215c51c6e2dc05->m_type_description == NULL);
    frame_93681e0916ba7e7697215c51c6e2dc05 = cache_frame_93681e0916ba7e7697215c51c6e2dc05;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_93681e0916ba7e7697215c51c6e2dc05);
    assert(Py_REFCNT(frame_93681e0916ba7e7697215c51c6e2dc05) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[38]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 404;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_93681e0916ba7e7697215c51c6e2dc05->m_frame.f_lineno = 404;
        tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[63]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 404;
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
        exception_tb = MAKE_TRACEBACK(frame_93681e0916ba7e7697215c51c6e2dc05, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_93681e0916ba7e7697215c51c6e2dc05->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_93681e0916ba7e7697215c51c6e2dc05, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_93681e0916ba7e7697215c51c6e2dc05,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_93681e0916ba7e7697215c51c6e2dc05 == cache_frame_93681e0916ba7e7697215c51c6e2dc05) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_93681e0916ba7e7697215c51c6e2dc05);
        cache_frame_93681e0916ba7e7697215c51c6e2dc05 = NULL;
    }

    assertFrameObject(frame_93681e0916ba7e7697215c51c6e2dc05);

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


static PyObject *impl_arcade$text_pyglet$$$function__31_right(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_0867edcdb8e94e26456c823e1fdc03b7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0867edcdb8e94e26456c823e1fdc03b7 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0867edcdb8e94e26456c823e1fdc03b7)) {
        Py_XDECREF(cache_frame_0867edcdb8e94e26456c823e1fdc03b7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0867edcdb8e94e26456c823e1fdc03b7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0867edcdb8e94e26456c823e1fdc03b7 = MAKE_FUNCTION_FRAME(tstate, codeobj_0867edcdb8e94e26456c823e1fdc03b7, module_arcade$text_pyglet, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0867edcdb8e94e26456c823e1fdc03b7->m_type_description == NULL);
    frame_0867edcdb8e94e26456c823e1fdc03b7 = cache_frame_0867edcdb8e94e26456c823e1fdc03b7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_0867edcdb8e94e26456c823e1fdc03b7);
    assert(Py_REFCNT(frame_0867edcdb8e94e26456c823e1fdc03b7) == 2);

    // Framed code:
    {
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[38]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 411;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_0867edcdb8e94e26456c823e1fdc03b7->m_frame.f_lineno = 411;
        tmp_add_expr_left_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[63]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_add_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 411;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[38]);
        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 411;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[59]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_add_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 411;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 411;
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
        exception_tb = MAKE_TRACEBACK(frame_0867edcdb8e94e26456c823e1fdc03b7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0867edcdb8e94e26456c823e1fdc03b7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0867edcdb8e94e26456c823e1fdc03b7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0867edcdb8e94e26456c823e1fdc03b7,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_0867edcdb8e94e26456c823e1fdc03b7 == cache_frame_0867edcdb8e94e26456c823e1fdc03b7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0867edcdb8e94e26456c823e1fdc03b7);
        cache_frame_0867edcdb8e94e26456c823e1fdc03b7 = NULL;
    }

    assertFrameObject(frame_0867edcdb8e94e26456c823e1fdc03b7);

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


static PyObject *impl_arcade$text_pyglet$$$function__32_top(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_f25bc0dfcab8a725b225b472d00c9f0c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f25bc0dfcab8a725b225b472d00c9f0c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f25bc0dfcab8a725b225b472d00c9f0c)) {
        Py_XDECREF(cache_frame_f25bc0dfcab8a725b225b472d00c9f0c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f25bc0dfcab8a725b225b472d00c9f0c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f25bc0dfcab8a725b225b472d00c9f0c = MAKE_FUNCTION_FRAME(tstate, codeobj_f25bc0dfcab8a725b225b472d00c9f0c, module_arcade$text_pyglet, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f25bc0dfcab8a725b225b472d00c9f0c->m_type_description == NULL);
    frame_f25bc0dfcab8a725b225b472d00c9f0c = cache_frame_f25bc0dfcab8a725b225b472d00c9f0c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_f25bc0dfcab8a725b225b472d00c9f0c);
    assert(Py_REFCNT(frame_f25bc0dfcab8a725b225b472d00c9f0c) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[38]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 418;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[66]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 418;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[38]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 418;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_f25bc0dfcab8a725b225b472d00c9f0c->m_frame.f_lineno = 418;
        tmp_args_element_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[67]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 418;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_f25bc0dfcab8a725b225b472d00c9f0c->m_frame.f_lineno = 418;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 418;
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
        exception_tb = MAKE_TRACEBACK(frame_f25bc0dfcab8a725b225b472d00c9f0c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f25bc0dfcab8a725b225b472d00c9f0c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f25bc0dfcab8a725b225b472d00c9f0c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f25bc0dfcab8a725b225b472d00c9f0c,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_f25bc0dfcab8a725b225b472d00c9f0c == cache_frame_f25bc0dfcab8a725b225b472d00c9f0c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f25bc0dfcab8a725b225b472d00c9f0c);
        cache_frame_f25bc0dfcab8a725b225b472d00c9f0c = NULL;
    }

    assertFrameObject(frame_f25bc0dfcab8a725b225b472d00c9f0c);

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


static PyObject *impl_arcade$text_pyglet$$$function__33_bottom(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_e4b53f9109fe47fe80b0c201a5d1bd94;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e4b53f9109fe47fe80b0c201a5d1bd94 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e4b53f9109fe47fe80b0c201a5d1bd94)) {
        Py_XDECREF(cache_frame_e4b53f9109fe47fe80b0c201a5d1bd94);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e4b53f9109fe47fe80b0c201a5d1bd94 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e4b53f9109fe47fe80b0c201a5d1bd94 = MAKE_FUNCTION_FRAME(tstate, codeobj_e4b53f9109fe47fe80b0c201a5d1bd94, module_arcade$text_pyglet, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e4b53f9109fe47fe80b0c201a5d1bd94->m_type_description == NULL);
    frame_e4b53f9109fe47fe80b0c201a5d1bd94 = cache_frame_e4b53f9109fe47fe80b0c201a5d1bd94;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_e4b53f9109fe47fe80b0c201a5d1bd94);
    assert(Py_REFCNT(frame_e4b53f9109fe47fe80b0c201a5d1bd94) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[38]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 425;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[69]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 425;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[38]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 425;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_e4b53f9109fe47fe80b0c201a5d1bd94->m_frame.f_lineno = 425;
        tmp_args_element_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[67]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 425;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_e4b53f9109fe47fe80b0c201a5d1bd94->m_frame.f_lineno = 425;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 425;
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
        exception_tb = MAKE_TRACEBACK(frame_e4b53f9109fe47fe80b0c201a5d1bd94, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e4b53f9109fe47fe80b0c201a5d1bd94->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e4b53f9109fe47fe80b0c201a5d1bd94, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e4b53f9109fe47fe80b0c201a5d1bd94,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_e4b53f9109fe47fe80b0c201a5d1bd94 == cache_frame_e4b53f9109fe47fe80b0c201a5d1bd94) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e4b53f9109fe47fe80b0c201a5d1bd94);
        cache_frame_e4b53f9109fe47fe80b0c201a5d1bd94 = NULL;
    }

    assertFrameObject(frame_e4b53f9109fe47fe80b0c201a5d1bd94);

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


static PyObject *impl_arcade$text_pyglet$$$function__34_content_size(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_8543a40c399d5dc2f9c6145ff63e6b93;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_8543a40c399d5dc2f9c6145ff63e6b93 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_8543a40c399d5dc2f9c6145ff63e6b93)) {
        Py_XDECREF(cache_frame_8543a40c399d5dc2f9c6145ff63e6b93);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8543a40c399d5dc2f9c6145ff63e6b93 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8543a40c399d5dc2f9c6145ff63e6b93 = MAKE_FUNCTION_FRAME(tstate, codeobj_8543a40c399d5dc2f9c6145ff63e6b93, module_arcade$text_pyglet, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8543a40c399d5dc2f9c6145ff63e6b93->m_type_description == NULL);
    frame_8543a40c399d5dc2f9c6145ff63e6b93 = cache_frame_8543a40c399d5dc2f9c6145ff63e6b93;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_8543a40c399d5dc2f9c6145ff63e6b93);
    assert(Py_REFCNT(frame_8543a40c399d5dc2f9c6145ff63e6b93) == 2);

    // Framed code:
    {
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[38]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 432;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[59]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 432;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_3;
            PyObject *tmp_expression_value_4;
            PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_4 = par_self;
            tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[38]);
            if (tmp_expression_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 432;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[61]);
            Py_DECREF(tmp_expression_value_3);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 432;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_1);
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8543a40c399d5dc2f9c6145ff63e6b93, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8543a40c399d5dc2f9c6145ff63e6b93->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8543a40c399d5dc2f9c6145ff63e6b93, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8543a40c399d5dc2f9c6145ff63e6b93,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_8543a40c399d5dc2f9c6145ff63e6b93 == cache_frame_8543a40c399d5dc2f9c6145ff63e6b93) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8543a40c399d5dc2f9c6145ff63e6b93);
        cache_frame_8543a40c399d5dc2f9c6145ff63e6b93 = NULL;
    }

    assertFrameObject(frame_8543a40c399d5dc2f9c6145ff63e6b93);

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


static PyObject *impl_arcade$text_pyglet$$$function__35_align(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_faf0458aad6786573109b77b47c614cb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_faf0458aad6786573109b77b47c614cb = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_faf0458aad6786573109b77b47c614cb)) {
        Py_XDECREF(cache_frame_faf0458aad6786573109b77b47c614cb);

#if _DEBUG_REFCOUNTS
        if (cache_frame_faf0458aad6786573109b77b47c614cb == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_faf0458aad6786573109b77b47c614cb = MAKE_FUNCTION_FRAME(tstate, codeobj_faf0458aad6786573109b77b47c614cb, module_arcade$text_pyglet, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_faf0458aad6786573109b77b47c614cb->m_type_description == NULL);
    frame_faf0458aad6786573109b77b47c614cb = cache_frame_faf0458aad6786573109b77b47c614cb;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_faf0458aad6786573109b77b47c614cb);
    assert(Py_REFCNT(frame_faf0458aad6786573109b77b47c614cb) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[38]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 436;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_faf0458aad6786573109b77b47c614cb->m_frame.f_lineno = 436;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_1,
            mod_consts[72],
            PyTuple_GET_ITEM(mod_consts[73], 0)
        );

        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 436;
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
        exception_tb = MAKE_TRACEBACK(frame_faf0458aad6786573109b77b47c614cb, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_faf0458aad6786573109b77b47c614cb->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_faf0458aad6786573109b77b47c614cb, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_faf0458aad6786573109b77b47c614cb,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_faf0458aad6786573109b77b47c614cb == cache_frame_faf0458aad6786573109b77b47c614cb) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_faf0458aad6786573109b77b47c614cb);
        cache_frame_faf0458aad6786573109b77b47c614cb = NULL;
    }

    assertFrameObject(frame_faf0458aad6786573109b77b47c614cb);

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


static PyObject *impl_arcade$text_pyglet$$$function__36_align(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_align = python_pars[1];
    struct Nuitka_FrameObject *frame_1a28c5a60fd5f9037a891e28bc4ef226;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_1a28c5a60fd5f9037a891e28bc4ef226 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1a28c5a60fd5f9037a891e28bc4ef226)) {
        Py_XDECREF(cache_frame_1a28c5a60fd5f9037a891e28bc4ef226);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1a28c5a60fd5f9037a891e28bc4ef226 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1a28c5a60fd5f9037a891e28bc4ef226 = MAKE_FUNCTION_FRAME(tstate, codeobj_1a28c5a60fd5f9037a891e28bc4ef226, module_arcade$text_pyglet, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1a28c5a60fd5f9037a891e28bc4ef226->m_type_description == NULL);
    frame_1a28c5a60fd5f9037a891e28bc4ef226 = cache_frame_1a28c5a60fd5f9037a891e28bc4ef226;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_1a28c5a60fd5f9037a891e28bc4ef226);
    assert(Py_REFCNT(frame_1a28c5a60fd5f9037a891e28bc4ef226) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_align);
        tmp_cmp_expr_left_1 = par_align;
        tmp_cmp_expr_right_1 = mod_consts[30];
        tmp_condition_result_1 = RICH_COMPARE_NE_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;
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
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = Py_True;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[74], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 443;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_1:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[75]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 445;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[38]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 445;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[77];
        CHECK_OBJECT(par_align);
        tmp_args_element_value_2 = par_align;
        frame_1a28c5a60fd5f9037a891e28bc4ef226->m_frame.f_lineno = 445;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_1,
                mod_consts[76],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 445;
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
        exception_tb = MAKE_TRACEBACK(frame_1a28c5a60fd5f9037a891e28bc4ef226, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1a28c5a60fd5f9037a891e28bc4ef226->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1a28c5a60fd5f9037a891e28bc4ef226, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1a28c5a60fd5f9037a891e28bc4ef226,
        type_description_1,
        par_self,
        par_align
    );


    // Release cached frame if used for exception.
    if (frame_1a28c5a60fd5f9037a891e28bc4ef226 == cache_frame_1a28c5a60fd5f9037a891e28bc4ef226) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1a28c5a60fd5f9037a891e28bc4ef226);
        cache_frame_1a28c5a60fd5f9037a891e28bc4ef226 = NULL;
    }

    assertFrameObject(frame_1a28c5a60fd5f9037a891e28bc4ef226);

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
    CHECK_OBJECT(par_align);
    Py_DECREF(par_align);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_align);
    Py_DECREF(par_align);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_arcade$text_pyglet$$$function__37_bold(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_13b4cc5a814ecf6f3bc70c89077ed967;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_13b4cc5a814ecf6f3bc70c89077ed967 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_13b4cc5a814ecf6f3bc70c89077ed967)) {
        Py_XDECREF(cache_frame_13b4cc5a814ecf6f3bc70c89077ed967);

#if _DEBUG_REFCOUNTS
        if (cache_frame_13b4cc5a814ecf6f3bc70c89077ed967 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_13b4cc5a814ecf6f3bc70c89077ed967 = MAKE_FUNCTION_FRAME(tstate, codeobj_13b4cc5a814ecf6f3bc70c89077ed967, module_arcade$text_pyglet, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_13b4cc5a814ecf6f3bc70c89077ed967->m_type_description == NULL);
    frame_13b4cc5a814ecf6f3bc70c89077ed967 = cache_frame_13b4cc5a814ecf6f3bc70c89077ed967;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_13b4cc5a814ecf6f3bc70c89077ed967);
    assert(Py_REFCNT(frame_13b4cc5a814ecf6f3bc70c89077ed967) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[38]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 452;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[78]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 452;
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
        exception_tb = MAKE_TRACEBACK(frame_13b4cc5a814ecf6f3bc70c89077ed967, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_13b4cc5a814ecf6f3bc70c89077ed967->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_13b4cc5a814ecf6f3bc70c89077ed967, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_13b4cc5a814ecf6f3bc70c89077ed967,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_13b4cc5a814ecf6f3bc70c89077ed967 == cache_frame_13b4cc5a814ecf6f3bc70c89077ed967) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_13b4cc5a814ecf6f3bc70c89077ed967);
        cache_frame_13b4cc5a814ecf6f3bc70c89077ed967 = NULL;
    }

    assertFrameObject(frame_13b4cc5a814ecf6f3bc70c89077ed967);

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


static PyObject *impl_arcade$text_pyglet$$$function__38_bold(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_bold = python_pars[1];
    struct Nuitka_FrameObject *frame_948f5f63f5cf9041783cbd7e8cbf5187;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_948f5f63f5cf9041783cbd7e8cbf5187 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_948f5f63f5cf9041783cbd7e8cbf5187)) {
        Py_XDECREF(cache_frame_948f5f63f5cf9041783cbd7e8cbf5187);

#if _DEBUG_REFCOUNTS
        if (cache_frame_948f5f63f5cf9041783cbd7e8cbf5187 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_948f5f63f5cf9041783cbd7e8cbf5187 = MAKE_FUNCTION_FRAME(tstate, codeobj_948f5f63f5cf9041783cbd7e8cbf5187, module_arcade$text_pyglet, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_948f5f63f5cf9041783cbd7e8cbf5187->m_type_description == NULL);
    frame_948f5f63f5cf9041783cbd7e8cbf5187 = cache_frame_948f5f63f5cf9041783cbd7e8cbf5187;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_948f5f63f5cf9041783cbd7e8cbf5187);
    assert(Py_REFCNT(frame_948f5f63f5cf9041783cbd7e8cbf5187) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_bold);
        tmp_assattr_value_1 = par_bold;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_assattr_target_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[38]);
        if (tmp_assattr_target_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 456;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[78], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_target_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 456;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_948f5f63f5cf9041783cbd7e8cbf5187, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_948f5f63f5cf9041783cbd7e8cbf5187->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_948f5f63f5cf9041783cbd7e8cbf5187, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_948f5f63f5cf9041783cbd7e8cbf5187,
        type_description_1,
        par_self,
        par_bold
    );


    // Release cached frame if used for exception.
    if (frame_948f5f63f5cf9041783cbd7e8cbf5187 == cache_frame_948f5f63f5cf9041783cbd7e8cbf5187) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_948f5f63f5cf9041783cbd7e8cbf5187);
        cache_frame_948f5f63f5cf9041783cbd7e8cbf5187 = NULL;
    }

    assertFrameObject(frame_948f5f63f5cf9041783cbd7e8cbf5187);

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
    CHECK_OBJECT(par_bold);
    Py_DECREF(par_bold);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_bold);
    Py_DECREF(par_bold);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_arcade$text_pyglet$$$function__39_italic(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_304e55a5fc13d4deb40daa4a83621d6d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_304e55a5fc13d4deb40daa4a83621d6d = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_304e55a5fc13d4deb40daa4a83621d6d)) {
        Py_XDECREF(cache_frame_304e55a5fc13d4deb40daa4a83621d6d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_304e55a5fc13d4deb40daa4a83621d6d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_304e55a5fc13d4deb40daa4a83621d6d = MAKE_FUNCTION_FRAME(tstate, codeobj_304e55a5fc13d4deb40daa4a83621d6d, module_arcade$text_pyglet, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_304e55a5fc13d4deb40daa4a83621d6d->m_type_description == NULL);
    frame_304e55a5fc13d4deb40daa4a83621d6d = cache_frame_304e55a5fc13d4deb40daa4a83621d6d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_304e55a5fc13d4deb40daa4a83621d6d);
    assert(Py_REFCNT(frame_304e55a5fc13d4deb40daa4a83621d6d) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[38]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 463;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[80]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 463;
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
        exception_tb = MAKE_TRACEBACK(frame_304e55a5fc13d4deb40daa4a83621d6d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_304e55a5fc13d4deb40daa4a83621d6d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_304e55a5fc13d4deb40daa4a83621d6d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_304e55a5fc13d4deb40daa4a83621d6d,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_304e55a5fc13d4deb40daa4a83621d6d == cache_frame_304e55a5fc13d4deb40daa4a83621d6d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_304e55a5fc13d4deb40daa4a83621d6d);
        cache_frame_304e55a5fc13d4deb40daa4a83621d6d = NULL;
    }

    assertFrameObject(frame_304e55a5fc13d4deb40daa4a83621d6d);

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


static PyObject *impl_arcade$text_pyglet$$$function__40_italic(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_italic = python_pars[1];
    struct Nuitka_FrameObject *frame_2f5a304b16895d64456ad25c967c8b39;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_2f5a304b16895d64456ad25c967c8b39 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_2f5a304b16895d64456ad25c967c8b39)) {
        Py_XDECREF(cache_frame_2f5a304b16895d64456ad25c967c8b39);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2f5a304b16895d64456ad25c967c8b39 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2f5a304b16895d64456ad25c967c8b39 = MAKE_FUNCTION_FRAME(tstate, codeobj_2f5a304b16895d64456ad25c967c8b39, module_arcade$text_pyglet, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2f5a304b16895d64456ad25c967c8b39->m_type_description == NULL);
    frame_2f5a304b16895d64456ad25c967c8b39 = cache_frame_2f5a304b16895d64456ad25c967c8b39;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_2f5a304b16895d64456ad25c967c8b39);
    assert(Py_REFCNT(frame_2f5a304b16895d64456ad25c967c8b39) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_italic);
        tmp_assattr_value_1 = par_italic;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_assattr_target_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[38]);
        if (tmp_assattr_target_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 467;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[80], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_target_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 467;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2f5a304b16895d64456ad25c967c8b39, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2f5a304b16895d64456ad25c967c8b39->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2f5a304b16895d64456ad25c967c8b39, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2f5a304b16895d64456ad25c967c8b39,
        type_description_1,
        par_self,
        par_italic
    );


    // Release cached frame if used for exception.
    if (frame_2f5a304b16895d64456ad25c967c8b39 == cache_frame_2f5a304b16895d64456ad25c967c8b39) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2f5a304b16895d64456ad25c967c8b39);
        cache_frame_2f5a304b16895d64456ad25c967c8b39 = NULL;
    }

    assertFrameObject(frame_2f5a304b16895d64456ad25c967c8b39);

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
    CHECK_OBJECT(par_italic);
    Py_DECREF(par_italic);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_italic);
    Py_DECREF(par_italic);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_arcade$text_pyglet$$$function__41_multiline(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_8a8a6a9bfd6b2f825d95ded8edeab818;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_8a8a6a9bfd6b2f825d95ded8edeab818 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_8a8a6a9bfd6b2f825d95ded8edeab818)) {
        Py_XDECREF(cache_frame_8a8a6a9bfd6b2f825d95ded8edeab818);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8a8a6a9bfd6b2f825d95ded8edeab818 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8a8a6a9bfd6b2f825d95ded8edeab818 = MAKE_FUNCTION_FRAME(tstate, codeobj_8a8a6a9bfd6b2f825d95ded8edeab818, module_arcade$text_pyglet, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8a8a6a9bfd6b2f825d95ded8edeab818->m_type_description == NULL);
    frame_8a8a6a9bfd6b2f825d95ded8edeab818 = cache_frame_8a8a6a9bfd6b2f825d95ded8edeab818;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_8a8a6a9bfd6b2f825d95ded8edeab818);
    assert(Py_REFCNT(frame_8a8a6a9bfd6b2f825d95ded8edeab818) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[38]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 474;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[74]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 474;
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
        exception_tb = MAKE_TRACEBACK(frame_8a8a6a9bfd6b2f825d95ded8edeab818, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8a8a6a9bfd6b2f825d95ded8edeab818->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8a8a6a9bfd6b2f825d95ded8edeab818, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8a8a6a9bfd6b2f825d95ded8edeab818,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_8a8a6a9bfd6b2f825d95ded8edeab818 == cache_frame_8a8a6a9bfd6b2f825d95ded8edeab818) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8a8a6a9bfd6b2f825d95ded8edeab818);
        cache_frame_8a8a6a9bfd6b2f825d95ded8edeab818 = NULL;
    }

    assertFrameObject(frame_8a8a6a9bfd6b2f825d95ded8edeab818);

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


static PyObject *impl_arcade$text_pyglet$$$function__42_multiline(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_multiline = python_pars[1];
    struct Nuitka_FrameObject *frame_e01fb985343b19e5c3acc6f347433850;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_e01fb985343b19e5c3acc6f347433850 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e01fb985343b19e5c3acc6f347433850)) {
        Py_XDECREF(cache_frame_e01fb985343b19e5c3acc6f347433850);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e01fb985343b19e5c3acc6f347433850 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e01fb985343b19e5c3acc6f347433850 = MAKE_FUNCTION_FRAME(tstate, codeobj_e01fb985343b19e5c3acc6f347433850, module_arcade$text_pyglet, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e01fb985343b19e5c3acc6f347433850->m_type_description == NULL);
    frame_e01fb985343b19e5c3acc6f347433850 = cache_frame_e01fb985343b19e5c3acc6f347433850;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_e01fb985343b19e5c3acc6f347433850);
    assert(Py_REFCNT(frame_e01fb985343b19e5c3acc6f347433850) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_multiline);
        tmp_assattr_value_1 = par_multiline;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_assattr_target_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[38]);
        if (tmp_assattr_target_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 478;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[74], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_target_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 478;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e01fb985343b19e5c3acc6f347433850, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e01fb985343b19e5c3acc6f347433850->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e01fb985343b19e5c3acc6f347433850, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e01fb985343b19e5c3acc6f347433850,
        type_description_1,
        par_self,
        par_multiline
    );


    // Release cached frame if used for exception.
    if (frame_e01fb985343b19e5c3acc6f347433850 == cache_frame_e01fb985343b19e5c3acc6f347433850) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e01fb985343b19e5c3acc6f347433850);
        cache_frame_e01fb985343b19e5c3acc6f347433850 = NULL;
    }

    assertFrameObject(frame_e01fb985343b19e5c3acc6f347433850);

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
    CHECK_OBJECT(par_multiline);
    Py_DECREF(par_multiline);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_multiline);
    Py_DECREF(par_multiline);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_arcade$text_pyglet$$$function__43_draw(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_d82f6dc63445d197180967e97f5c1d7b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d82f6dc63445d197180967e97f5c1d7b = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d82f6dc63445d197180967e97f5c1d7b)) {
        Py_XDECREF(cache_frame_d82f6dc63445d197180967e97f5c1d7b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d82f6dc63445d197180967e97f5c1d7b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d82f6dc63445d197180967e97f5c1d7b = MAKE_FUNCTION_FRAME(tstate, codeobj_d82f6dc63445d197180967e97f5c1d7b, module_arcade$text_pyglet, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d82f6dc63445d197180967e97f5c1d7b->m_type_description == NULL);
    frame_d82f6dc63445d197180967e97f5c1d7b = cache_frame_d82f6dc63445d197180967e97f5c1d7b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_d82f6dc63445d197180967e97f5c1d7b);
    assert(Py_REFCNT(frame_d82f6dc63445d197180967e97f5c1d7b) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_arcade$text_pyglet, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[83]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 491;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[38]);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 491;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[39]);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 491;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_d82f6dc63445d197180967e97f5c1d7b->m_frame.f_lineno = 491;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 491;
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
        exception_tb = MAKE_TRACEBACK(frame_d82f6dc63445d197180967e97f5c1d7b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d82f6dc63445d197180967e97f5c1d7b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d82f6dc63445d197180967e97f5c1d7b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d82f6dc63445d197180967e97f5c1d7b,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_d82f6dc63445d197180967e97f5c1d7b == cache_frame_d82f6dc63445d197180967e97f5c1d7b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d82f6dc63445d197180967e97f5c1d7b);
        cache_frame_d82f6dc63445d197180967e97f5c1d7b = NULL;
    }

    assertFrameObject(frame_d82f6dc63445d197180967e97f5c1d7b);

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


static PyObject *impl_arcade$text_pyglet$$$function__44_draw_debug(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_anchor_color = python_pars[1];
    PyObject *par_background_color = python_pars[2];
    PyObject *par_outline_color = python_pars[3];
    PyObject *var_left = NULL;
    PyObject *var_right = NULL;
    PyObject *var_top = NULL;
    PyObject *var_bottom = NULL;
    struct Nuitka_FrameObject *frame_78bb1917bae962733c58af94fd553209;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_78bb1917bae962733c58af94fd553209 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_78bb1917bae962733c58af94fd553209)) {
        Py_XDECREF(cache_frame_78bb1917bae962733c58af94fd553209);

#if _DEBUG_REFCOUNTS
        if (cache_frame_78bb1917bae962733c58af94fd553209 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_78bb1917bae962733c58af94fd553209 = MAKE_FUNCTION_FRAME(tstate, codeobj_78bb1917bae962733c58af94fd553209, module_arcade$text_pyglet, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_78bb1917bae962733c58af94fd553209->m_type_description == NULL);
    frame_78bb1917bae962733c58af94fd553209 = cache_frame_78bb1917bae962733c58af94fd553209;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_78bb1917bae962733c58af94fd553209);
    assert(Py_REFCNT(frame_78bb1917bae962733c58af94fd553209) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[30]);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 507;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_left == NULL);
        var_left = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[31]);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 508;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_right == NULL);
        var_right = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_assign_source_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[85]);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 509;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_top == NULL);
        var_top = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[86]);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 510;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_bottom == NULL);
        var_bottom = tmp_assign_source_4;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_arg_value_2_1;
        PyObject *tmp_kw_call_arg_value_3_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_arcade$text_pyglet, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 513;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[87]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 513;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_left);
        tmp_kw_call_arg_value_0_1 = var_left;
        CHECK_OBJECT(var_right);
        tmp_kw_call_arg_value_1_1 = var_right;
        CHECK_OBJECT(var_top);
        tmp_kw_call_arg_value_2_1 = var_top;
        CHECK_OBJECT(var_bottom);
        tmp_kw_call_arg_value_3_1 = var_bottom;
        CHECK_OBJECT(par_background_color);
        tmp_kw_call_dict_value_0_1 = par_background_color;
        frame_78bb1917bae962733c58af94fd553209->m_frame.f_lineno = 513;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1, tmp_kw_call_arg_value_3_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS4_KWSPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts[88]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 513;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_call_result_2;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_arg_value_1_2;
        PyObject *tmp_kw_call_arg_value_2_2;
        PyObject *tmp_kw_call_arg_value_3_2;
        PyObject *tmp_kw_call_dict_value_0_2;
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_arcade$text_pyglet, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 516;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[89]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 516;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_left);
        tmp_kw_call_arg_value_0_2 = var_left;
        CHECK_OBJECT(var_right);
        tmp_kw_call_arg_value_1_2 = var_right;
        CHECK_OBJECT(var_top);
        tmp_kw_call_arg_value_2_2 = var_top;
        CHECK_OBJECT(var_bottom);
        tmp_kw_call_arg_value_3_2 = var_bottom;
        CHECK_OBJECT(par_outline_color);
        tmp_kw_call_dict_value_0_2 = par_outline_color;
        frame_78bb1917bae962733c58af94fd553209->m_frame.f_lineno = 516;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_2, tmp_kw_call_arg_value_2_2, tmp_kw_call_arg_value_3_2};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS4_KWSPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts[88]);
        }

        Py_DECREF(tmp_called_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 516;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_call_result_3;
        PyObject *tmp_kw_call_arg_value_0_3;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_kw_call_arg_value_1_3;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_kw_call_dict_value_0_3;
        PyObject *tmp_kw_call_dict_value_1_1;
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_arcade$text_pyglet, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 519;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[90]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 519;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_8 = par_self;
        tmp_kw_call_arg_value_0_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[17]);
        if (tmp_kw_call_arg_value_0_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 519;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_9 = par_self;
        tmp_kw_call_arg_value_1_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[18]);
        if (tmp_kw_call_arg_value_1_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_kw_call_arg_value_0_3);

            exception_lineno = 519;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_anchor_color);
        tmp_kw_call_dict_value_0_3 = par_anchor_color;
        tmp_kw_call_dict_value_1_1 = mod_consts[91];
        frame_78bb1917bae962733c58af94fd553209->m_frame.f_lineno = 519;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_3, tmp_kw_call_arg_value_1_3};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_3, tmp_kw_call_dict_value_1_1};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tstate, tmp_called_value_3, args, kw_values, mod_consts[92]);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_kw_call_arg_value_0_3);
        Py_DECREF(tmp_kw_call_arg_value_1_3);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 519;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_11;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_arcade$text_pyglet, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[83]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 521;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_10 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[38]);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 521;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_11 = par_self;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[39]);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 521;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_78bb1917bae962733c58af94fd553209->m_frame.f_lineno = 521;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 521;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_78bb1917bae962733c58af94fd553209, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_78bb1917bae962733c58af94fd553209->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_78bb1917bae962733c58af94fd553209, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_78bb1917bae962733c58af94fd553209,
        type_description_1,
        par_self,
        par_anchor_color,
        par_background_color,
        par_outline_color,
        var_left,
        var_right,
        var_top,
        var_bottom
    );


    // Release cached frame if used for exception.
    if (frame_78bb1917bae962733c58af94fd553209 == cache_frame_78bb1917bae962733c58af94fd553209) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_78bb1917bae962733c58af94fd553209);
        cache_frame_78bb1917bae962733c58af94fd553209 = NULL;
    }

    assertFrameObject(frame_78bb1917bae962733c58af94fd553209);

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
    CHECK_OBJECT(var_left);
    Py_DECREF(var_left);
    var_left = NULL;
    CHECK_OBJECT(var_right);
    Py_DECREF(var_right);
    var_right = NULL;
    CHECK_OBJECT(var_top);
    Py_DECREF(var_top);
    var_top = NULL;
    CHECK_OBJECT(var_bottom);
    Py_DECREF(var_bottom);
    var_bottom = NULL;
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

    Py_XDECREF(var_left);
    var_left = NULL;
    Py_XDECREF(var_right);
    var_right = NULL;
    Py_XDECREF(var_top);
    var_top = NULL;
    Py_XDECREF(var_bottom);
    var_bottom = NULL;
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
    CHECK_OBJECT(par_anchor_color);
    Py_DECREF(par_anchor_color);
    CHECK_OBJECT(par_background_color);
    Py_DECREF(par_background_color);
    CHECK_OBJECT(par_outline_color);
    Py_DECREF(par_outline_color);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_anchor_color);
    Py_DECREF(par_anchor_color);
    CHECK_OBJECT(par_background_color);
    Py_DECREF(par_background_color);
    CHECK_OBJECT(par_outline_color);
    Py_DECREF(par_outline_color);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_arcade$text_pyglet$$$function__45_position(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_ee4219d3d37eef8964425ed8ceeb0cd8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ee4219d3d37eef8964425ed8ceeb0cd8 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ee4219d3d37eef8964425ed8ceeb0cd8)) {
        Py_XDECREF(cache_frame_ee4219d3d37eef8964425ed8ceeb0cd8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ee4219d3d37eef8964425ed8ceeb0cd8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ee4219d3d37eef8964425ed8ceeb0cd8 = MAKE_FUNCTION_FRAME(tstate, codeobj_ee4219d3d37eef8964425ed8ceeb0cd8, module_arcade$text_pyglet, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ee4219d3d37eef8964425ed8ceeb0cd8->m_type_description == NULL);
    frame_ee4219d3d37eef8964425ed8ceeb0cd8 = cache_frame_ee4219d3d37eef8964425ed8ceeb0cd8;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_ee4219d3d37eef8964425ed8ceeb0cd8);
    assert(Py_REFCNT(frame_ee4219d3d37eef8964425ed8ceeb0cd8) == 2);

    // Framed code:
    {
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[38]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 531;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[17]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 531;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_3;
            PyObject *tmp_expression_value_4;
            PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_4 = par_self;
            tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[38]);
            if (tmp_expression_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 531;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[18]);
            Py_DECREF(tmp_expression_value_3);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 531;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_1);
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ee4219d3d37eef8964425ed8ceeb0cd8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ee4219d3d37eef8964425ed8ceeb0cd8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ee4219d3d37eef8964425ed8ceeb0cd8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ee4219d3d37eef8964425ed8ceeb0cd8,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_ee4219d3d37eef8964425ed8ceeb0cd8 == cache_frame_ee4219d3d37eef8964425ed8ceeb0cd8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ee4219d3d37eef8964425ed8ceeb0cd8);
        cache_frame_ee4219d3d37eef8964425ed8ceeb0cd8 = NULL;
    }

    assertFrameObject(frame_ee4219d3d37eef8964425ed8ceeb0cd8);

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


static PyObject *impl_arcade$text_pyglet$$$function__46_position(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_point = python_pars[1];
    struct Nuitka_FrameObject *frame_e4d97256a4d83c6da07ae6adae3f3175;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_e4d97256a4d83c6da07ae6adae3f3175 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e4d97256a4d83c6da07ae6adae3f3175)) {
        Py_XDECREF(cache_frame_e4d97256a4d83c6da07ae6adae3f3175);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e4d97256a4d83c6da07ae6adae3f3175 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e4d97256a4d83c6da07ae6adae3f3175 = MAKE_FUNCTION_FRAME(tstate, codeobj_e4d97256a4d83c6da07ae6adae3f3175, module_arcade$text_pyglet, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e4d97256a4d83c6da07ae6adae3f3175->m_type_description == NULL);
    frame_e4d97256a4d83c6da07ae6adae3f3175 = cache_frame_e4d97256a4d83c6da07ae6adae3f3175;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_e4d97256a4d83c6da07ae6adae3f3175);
    assert(Py_REFCNT(frame_e4d97256a4d83c6da07ae6adae3f3175) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_point);
        tmp_assattr_value_1 = par_point;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_assattr_target_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[38]);
        if (tmp_assattr_target_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 535;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[95], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_target_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 535;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e4d97256a4d83c6da07ae6adae3f3175, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e4d97256a4d83c6da07ae6adae3f3175->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e4d97256a4d83c6da07ae6adae3f3175, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e4d97256a4d83c6da07ae6adae3f3175,
        type_description_1,
        par_self,
        par_point
    );


    // Release cached frame if used for exception.
    if (frame_e4d97256a4d83c6da07ae6adae3f3175 == cache_frame_e4d97256a4d83c6da07ae6adae3f3175) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e4d97256a4d83c6da07ae6adae3f3175);
        cache_frame_e4d97256a4d83c6da07ae6adae3f3175 = NULL;
    }

    assertFrameObject(frame_e4d97256a4d83c6da07ae6adae3f3175);

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
    CHECK_OBJECT(par_point);
    Py_DECREF(par_point);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_point);
    Py_DECREF(par_point);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_arcade$text_pyglet$$$function__47_draw_text(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_text = python_pars[0];
    PyObject *par_start_x = python_pars[1];
    PyObject *par_start_y = python_pars[2];
    PyObject *par_color = python_pars[3];
    PyObject *par_font_size = python_pars[4];
    PyObject *par_width = python_pars[5];
    PyObject *par_align = python_pars[6];
    PyObject *par_font_name = python_pars[7];
    PyObject *par_bold = python_pars[8];
    PyObject *par_italic = python_pars[9];
    PyObject *par_anchor_x = python_pars[10];
    PyObject *par_anchor_y = python_pars[11];
    PyObject *par_multiline = python_pars[12];
    PyObject *par_rotation = python_pars[13];
    PyObject *var_key = NULL;
    PyObject *var_cache = NULL;
    PyObject *var_label = NULL;
    PyObject *var_adjusted_font = NULL;
    struct Nuitka_FrameObject *frame_150cf4b09d5fb0440b9972e839fad3b1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_150cf4b09d5fb0440b9972e839fad3b1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_150cf4b09d5fb0440b9972e839fad3b1)) {
        Py_XDECREF(cache_frame_150cf4b09d5fb0440b9972e839fad3b1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_150cf4b09d5fb0440b9972e839fad3b1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_150cf4b09d5fb0440b9972e839fad3b1 = MAKE_FUNCTION_FRAME(tstate, codeobj_150cf4b09d5fb0440b9972e839fad3b1, module_arcade$text_pyglet, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_150cf4b09d5fb0440b9972e839fad3b1->m_type_description == NULL);
    frame_150cf4b09d5fb0440b9972e839fad3b1 = cache_frame_150cf4b09d5fb0440b9972e839fad3b1;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_150cf4b09d5fb0440b9972e839fad3b1);
    assert(Py_REFCNT(frame_150cf4b09d5fb0440b9972e839fad3b1) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_arcade$text_pyglet, (Nuitka_StringObject *)mod_consts[36]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[36]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 710;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_color);
        tmp_args_element_value_1 = par_color;
        frame_150cf4b09d5fb0440b9972e839fad3b1->m_frame.f_lineno = 710;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 710;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_color;
            assert(old != NULL);
            par_color = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_format_value_1;
        PyObject *tmp_format_spec_1;
        CHECK_OBJECT(par_font_size);
        tmp_format_value_1 = par_font_size;
        tmp_format_spec_1 = mod_consts[96];
        tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 712;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(8);
        {
            PyObject *tmp_format_value_2;
            PyObject *tmp_format_spec_2;
            PyObject *tmp_format_value_3;
            PyObject *tmp_format_spec_3;
            PyObject *tmp_format_value_4;
            PyObject *tmp_format_spec_4;
            PyObject *tmp_format_value_5;
            PyObject *tmp_format_spec_5;
            PyObject *tmp_format_value_6;
            PyObject *tmp_format_spec_6;
            PyObject *tmp_format_value_7;
            PyObject *tmp_format_spec_7;
            PyObject *tmp_format_value_8;
            PyObject *tmp_format_spec_8;
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_font_name);
            tmp_format_value_2 = par_font_name;
            tmp_format_spec_2 = mod_consts[96];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 712;
                type_description_1 = "oooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            CHECK_OBJECT(par_bold);
            tmp_format_value_3 = par_bold;
            tmp_format_spec_3 = mod_consts[96];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 712;
                type_description_1 = "oooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
            CHECK_OBJECT(par_italic);
            tmp_format_value_4 = par_italic;
            tmp_format_spec_4 = mod_consts[96];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_4, tmp_format_spec_4);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 712;
                type_description_1 = "oooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
            CHECK_OBJECT(par_anchor_x);
            tmp_format_value_5 = par_anchor_x;
            tmp_format_spec_5 = mod_consts[96];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_5, tmp_format_spec_5);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 712;
                type_description_1 = "oooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 4, tmp_tuple_element_1);
            CHECK_OBJECT(par_anchor_y);
            tmp_format_value_6 = par_anchor_y;
            tmp_format_spec_6 = mod_consts[96];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_6, tmp_format_spec_6);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 712;
                type_description_1 = "oooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 5, tmp_tuple_element_1);
            CHECK_OBJECT(par_align);
            tmp_format_value_7 = par_align;
            tmp_format_spec_7 = mod_consts[96];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_7, tmp_format_spec_7);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 712;
                type_description_1 = "oooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 6, tmp_tuple_element_1);
            CHECK_OBJECT(par_width);
            tmp_format_value_8 = par_width;
            tmp_format_spec_8 = mod_consts[96];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_8, tmp_format_spec_8);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 712;
                type_description_1 = "oooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 7, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_assign_source_2 = PyUnicode_Join(mod_consts[96], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 712;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_key == NULL);
        var_key = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_arcade$text_pyglet, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 713;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_150cf4b09d5fb0440b9972e839fad3b1->m_frame.f_lineno = 713;
        tmp_expression_value_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[10]);
        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 713;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[11]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 713;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[97]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 713;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_cache == NULL);
        var_cache = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(var_cache);
        tmp_expression_value_3 = var_cache;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[98]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 714;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_key);
        tmp_args_element_value_2 = var_key;
        frame_150cf4b09d5fb0440b9972e839fad3b1->m_frame.f_lineno = 714;
        tmp_assign_source_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 714;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_label == NULL);
        var_label = tmp_assign_source_4;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(par_align);
        tmp_cmp_expr_left_1 = par_align;
        tmp_cmp_expr_right_1 = mod_consts[29];
        tmp_and_left_value_1 = RICH_COMPARE_NE_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_and_left_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 715;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 715;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_align);
        tmp_cmp_expr_left_2 = par_align;
        tmp_cmp_expr_right_2 = mod_consts[30];
        tmp_and_left_value_2 = RICH_COMPARE_NE_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_and_left_value_2 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 715;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 715;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        CHECK_OBJECT(par_align);
        tmp_cmp_expr_left_3 = par_align;
        tmp_cmp_expr_right_3 = mod_consts[31];
        tmp_and_right_value_2 = RICH_COMPARE_NE_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        if (tmp_and_right_value_2 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 715;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_and_right_value_1 = tmp_and_left_value_2;
        and_end_2:;
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
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[32];
        frame_150cf4b09d5fb0440b9972e839fad3b1->m_frame.f_lineno = 716;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 716;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        CHECK_OBJECT(par_align);
        tmp_cmp_expr_left_4 = par_align;
        tmp_cmp_expr_right_4 = mod_consts[30];
        tmp_condition_result_2 = RICH_COMPARE_NE_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 718;
            type_description_1 = "oooooooooooooooooo";
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
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = Py_True;
        {
            PyObject *old = par_multiline;
            assert(old != NULL);
            par_multiline = tmp_assign_source_5;
            Py_INCREF(par_multiline);
            Py_DECREF(old);
        }

    }
    branch_no_2:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        CHECK_OBJECT(var_label);
        tmp_operand_value_1 = var_label;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 721;
            type_description_1 = "oooooooooooooooooo";
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
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_arcade$text_pyglet, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[33]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 722;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_font_name);
        tmp_args_element_value_3 = par_font_name;
        frame_150cf4b09d5fb0440b9972e839fad3b1->m_frame.f_lineno = 722;
        tmp_assign_source_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 722;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_adjusted_font == NULL);
        var_adjusted_font = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_unicode_arg_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_kw_call_value_3_1;
        PyObject *tmp_kw_call_value_4_1;
        PyObject *tmp_kw_call_value_5_1;
        PyObject *tmp_kw_call_value_6_1;
        PyObject *tmp_kw_call_value_7_1;
        PyObject *tmp_kw_call_value_8_1;
        PyObject *tmp_kw_call_value_9_1;
        PyObject *tmp_kw_call_value_10_1;
        PyObject *tmp_kw_call_value_11_1;
        PyObject *tmp_kw_call_value_12_1;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_arcade$text_pyglet, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 724;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[34]);
        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 724;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[35]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 724;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_text);
        tmp_unicode_arg_1 = par_text;
        tmp_kw_call_value_0_1 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 725;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_start_x);
        tmp_kw_call_value_1_1 = par_start_x;
        CHECK_OBJECT(par_start_y);
        tmp_kw_call_value_2_1 = par_start_y;
        CHECK_OBJECT(var_adjusted_font);
        tmp_kw_call_value_3_1 = var_adjusted_font;
        CHECK_OBJECT(par_font_size);
        tmp_kw_call_value_4_1 = par_font_size;
        CHECK_OBJECT(par_anchor_x);
        tmp_kw_call_value_5_1 = par_anchor_x;
        CHECK_OBJECT(par_anchor_y);
        tmp_kw_call_value_6_1 = par_anchor_y;
        CHECK_OBJECT(par_color);
        tmp_kw_call_value_7_1 = par_color;
        CHECK_OBJECT(par_width);
        tmp_kw_call_value_8_1 = par_width;
        CHECK_OBJECT(par_align);
        tmp_kw_call_value_9_1 = par_align;
        CHECK_OBJECT(par_bold);
        tmp_kw_call_value_10_1 = par_bold;
        CHECK_OBJECT(par_italic);
        tmp_kw_call_value_11_1 = par_italic;
        CHECK_OBJECT(par_multiline);
        tmp_kw_call_value_12_1 = par_multiline;
        frame_150cf4b09d5fb0440b9972e839fad3b1->m_frame.f_lineno = 724;
        {
            PyObject *kw_values[13] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1, tmp_kw_call_value_5_1, tmp_kw_call_value_6_1, tmp_kw_call_value_7_1, tmp_kw_call_value_8_1, tmp_kw_call_value_9_1, tmp_kw_call_value_10_1, tmp_kw_call_value_11_1, tmp_kw_call_value_12_1};

            tmp_assign_source_7 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_4, kw_values, mod_consts[37]);
        }

        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 724;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_label;
            assert(old != NULL);
            var_label = tmp_assign_source_7;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(var_label);
        tmp_ass_subvalue_1 = var_label;
        CHECK_OBJECT(var_cache);
        tmp_ass_subscribed_1 = var_cache;
        CHECK_OBJECT(var_key);
        tmp_ass_subscript_1 = var_key;
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 739;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        PyObject *tmp_expression_value_6;
        if (var_label == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[25]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 742;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_6 = var_label;
        tmp_cmp_expr_left_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[34]);
        if (tmp_cmp_expr_left_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 742;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_text);
        tmp_cmp_expr_right_5 = par_text;
        tmp_condition_result_4 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        Py_DECREF(tmp_cmp_expr_left_5);
        if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 742;
            type_description_1 = "oooooooooooooooooo";
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
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_unicode_arg_2;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_text);
        tmp_unicode_arg_2 = par_text;
        tmp_assattr_value_1 = BUILTIN_UNICODE1(tmp_unicode_arg_2);
        if (tmp_assattr_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 743;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_label == NULL) {
            Py_DECREF(tmp_assattr_value_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[25]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 743;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_1 = var_label;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[34], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 743;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_4:;
    {
        nuitka_bool tmp_condition_result_5;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        PyObject *tmp_expression_value_8;
        if (var_label == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[25]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 744;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_7 = var_label;
        tmp_cmp_expr_left_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[17]);
        if (tmp_cmp_expr_left_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 744;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_start_x == NULL) {
            Py_DECREF(tmp_cmp_expr_left_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[99]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 744;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_right_6 = par_start_x;
        tmp_or_left_value_1 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
        Py_DECREF(tmp_cmp_expr_left_6);
        if (tmp_or_left_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 744;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 744;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        if (var_label == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[25]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 744;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_8 = var_label;
        tmp_cmp_expr_left_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[18]);
        if (tmp_cmp_expr_left_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 744;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_start_y == NULL) {
            Py_DECREF(tmp_cmp_expr_left_7);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[100]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 744;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_right_7 = par_start_y;
        tmp_or_right_value_1 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
        Py_DECREF(tmp_cmp_expr_left_7);
        if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 744;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_5 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_assattr_target_2;
        if (par_start_x == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[99]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 745;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_2 = par_start_x;
        tmp_assattr_value_2 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_assattr_value_2, 0, tmp_tuple_element_2);
        if (par_start_y == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[100]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 745;
            type_description_1 = "oooooooooooooooooo";
            goto tuple_build_exception_2;
        }

        tmp_tuple_element_2 = par_start_y;
        PyTuple_SET_ITEM0(tmp_assattr_value_2, 1, tmp_tuple_element_2);
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_assattr_value_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        if (var_label == NULL) {
            Py_DECREF(tmp_assattr_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[25]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 745;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_2 = var_label;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[95], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 745;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_5:;
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_cmp_expr_left_8;
        PyObject *tmp_cmp_expr_right_8;
        PyObject *tmp_expression_value_9;
        if (var_label == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[25]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 746;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_9 = var_label;
        tmp_cmp_expr_left_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[52]);
        if (tmp_cmp_expr_left_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 746;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_color == NULL) {
            Py_DECREF(tmp_cmp_expr_left_8);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[52]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 746;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_right_8 = par_color;
        tmp_condition_result_6 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
        Py_DECREF(tmp_cmp_expr_left_8);
        if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 746;
            type_description_1 = "oooooooooooooooooo";
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
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        if (par_color == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[52]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 747;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_value_3 = par_color;
        if (var_label == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[25]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 747;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_3 = var_label;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[52], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 747;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_6:;
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_arcade$text_pyglet, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[83]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 749;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_label == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[25]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 749;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_4 = var_label;
        CHECK_OBJECT(par_rotation);
        tmp_args_element_value_5 = par_rotation;
        frame_150cf4b09d5fb0440b9972e839fad3b1->m_frame.f_lineno = 749;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
        }

        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 749;
            type_description_1 = "oooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_150cf4b09d5fb0440b9972e839fad3b1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_150cf4b09d5fb0440b9972e839fad3b1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_150cf4b09d5fb0440b9972e839fad3b1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_150cf4b09d5fb0440b9972e839fad3b1,
        type_description_1,
        par_text,
        par_start_x,
        par_start_y,
        par_color,
        par_font_size,
        par_width,
        par_align,
        par_font_name,
        par_bold,
        par_italic,
        par_anchor_x,
        par_anchor_y,
        par_multiline,
        par_rotation,
        var_key,
        var_cache,
        var_label,
        var_adjusted_font
    );


    // Release cached frame if used for exception.
    if (frame_150cf4b09d5fb0440b9972e839fad3b1 == cache_frame_150cf4b09d5fb0440b9972e839fad3b1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_150cf4b09d5fb0440b9972e839fad3b1);
        cache_frame_150cf4b09d5fb0440b9972e839fad3b1 = NULL;
    }

    assertFrameObject(frame_150cf4b09d5fb0440b9972e839fad3b1);

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
    Py_XDECREF(par_color);
    par_color = NULL;
    Py_XDECREF(par_multiline);
    par_multiline = NULL;
    CHECK_OBJECT(var_key);
    Py_DECREF(var_key);
    var_key = NULL;
    CHECK_OBJECT(var_cache);
    Py_DECREF(var_cache);
    var_cache = NULL;
    Py_XDECREF(var_label);
    var_label = NULL;
    Py_XDECREF(var_adjusted_font);
    var_adjusted_font = NULL;
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

    Py_XDECREF(par_color);
    par_color = NULL;
    Py_XDECREF(par_multiline);
    par_multiline = NULL;
    Py_XDECREF(var_key);
    var_key = NULL;
    Py_XDECREF(var_cache);
    var_cache = NULL;
    Py_XDECREF(var_label);
    var_label = NULL;
    Py_XDECREF(var_adjusted_font);
    var_adjusted_font = NULL;
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
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);
    CHECK_OBJECT(par_start_x);
    Py_DECREF(par_start_x);
    CHECK_OBJECT(par_start_y);
    Py_DECREF(par_start_y);
    CHECK_OBJECT(par_font_size);
    Py_DECREF(par_font_size);
    CHECK_OBJECT(par_width);
    Py_DECREF(par_width);
    CHECK_OBJECT(par_align);
    Py_DECREF(par_align);
    CHECK_OBJECT(par_font_name);
    Py_DECREF(par_font_name);
    CHECK_OBJECT(par_bold);
    Py_DECREF(par_bold);
    CHECK_OBJECT(par_italic);
    Py_DECREF(par_italic);
    CHECK_OBJECT(par_anchor_x);
    Py_DECREF(par_anchor_x);
    CHECK_OBJECT(par_anchor_y);
    Py_DECREF(par_anchor_y);
    CHECK_OBJECT(par_rotation);
    Py_DECREF(par_rotation);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_text);
    Py_DECREF(par_text);
    CHECK_OBJECT(par_start_x);
    Py_DECREF(par_start_x);
    CHECK_OBJECT(par_start_y);
    Py_DECREF(par_start_y);
    CHECK_OBJECT(par_font_size);
    Py_DECREF(par_font_size);
    CHECK_OBJECT(par_width);
    Py_DECREF(par_width);
    CHECK_OBJECT(par_align);
    Py_DECREF(par_align);
    CHECK_OBJECT(par_font_name);
    Py_DECREF(par_font_name);
    CHECK_OBJECT(par_bold);
    Py_DECREF(par_bold);
    CHECK_OBJECT(par_italic);
    Py_DECREF(par_italic);
    CHECK_OBJECT(par_anchor_x);
    Py_DECREF(par_anchor_x);
    CHECK_OBJECT(par_anchor_y);
    Py_DECREF(par_anchor_y);
    CHECK_OBJECT(par_rotation);
    Py_DECREF(par_rotation);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_arcade$text_pyglet$$$function__10_x(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$text_pyglet$$$function__10_x,
        mod_consts[17],
#if PYTHON_VERSION >= 0x300
        mod_consts[147],
#endif
        codeobj_6e4cefc37624608ca3720e38d3cc2555,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_arcade$text_pyglet,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_arcade$text_pyglet$$$function__11_y(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$text_pyglet$$$function__11_y,
        mod_consts[18],
#if PYTHON_VERSION >= 0x300
        mod_consts[149],
#endif
        codeobj_9da1c7002b8ddc709095266199a89c72,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_arcade$text_pyglet,
        mod_consts[44],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_arcade$text_pyglet$$$function__12_y(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$text_pyglet$$$function__12_y,
        mod_consts[18],
#if PYTHON_VERSION >= 0x300
        mod_consts[149],
#endif
        codeobj_39f783285607454a893201f2770e3d84,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_arcade$text_pyglet,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_arcade$text_pyglet$$$function__13_font_name(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$text_pyglet$$$function__13_font_name,
        mod_consts[7],
#if PYTHON_VERSION >= 0x300
        mod_consts[151],
#endif
        codeobj_d0cdde587b0ce5f6fccb838f43e73320,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_arcade$text_pyglet,
        mod_consts[45],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_arcade$text_pyglet$$$function__14_font_name(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$text_pyglet$$$function__14_font_name,
        mod_consts[7],
#if PYTHON_VERSION >= 0x300
        mod_consts[151],
#endif
        codeobj_b3fe82871dabd02616b44405254b3c32,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_arcade$text_pyglet,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_arcade$text_pyglet$$$function__15_font_size(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$text_pyglet$$$function__15_font_size,
        mod_consts[46],
#if PYTHON_VERSION >= 0x300
        mod_consts[152],
#endif
        codeobj_aac852424581ac0ce190a367f2cace0e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_arcade$text_pyglet,
        mod_consts[47],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_arcade$text_pyglet$$$function__16_font_size(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$text_pyglet$$$function__16_font_size,
        mod_consts[46],
#if PYTHON_VERSION >= 0x300
        mod_consts[152],
#endif
        codeobj_58fb157ac60b0674942a80a330c88ef4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_arcade$text_pyglet,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_arcade$text_pyglet$$$function__17_anchor_x(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$text_pyglet$$$function__17_anchor_x,
        mod_consts[48],
#if PYTHON_VERSION >= 0x300
        mod_consts[154],
#endif
        codeobj_56c9f50d84a47fa27e330c51923c0bf6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_arcade$text_pyglet,
        mod_consts[49],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_arcade$text_pyglet$$$function__18_anchor_x(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$text_pyglet$$$function__18_anchor_x,
        mod_consts[48],
#if PYTHON_VERSION >= 0x300
        mod_consts[154],
#endif
        codeobj_b687ffadbe45483e00a24bf6b558f255,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_arcade$text_pyglet,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_arcade$text_pyglet$$$function__19_anchor_y(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$text_pyglet$$$function__19_anchor_y,
        mod_consts[50],
#if PYTHON_VERSION >= 0x300
        mod_consts[156],
#endif
        codeobj_09a2c232b6d16f1f3d4f4d04dee5a6a2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_arcade$text_pyglet,
        mod_consts[51],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_arcade$text_pyglet$$$function__1_load_font(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$text_pyglet$$$function__1_load_font,
        mod_consts[127],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b7f40058af73f403e3752d64007e57f7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_arcade$text_pyglet,
        mod_consts[4],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_arcade$text_pyglet$$$function__20_anchor_y(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$text_pyglet$$$function__20_anchor_y,
        mod_consts[50],
#if PYTHON_VERSION >= 0x300
        mod_consts[156],
#endif
        codeobj_22719b6e36de74ff933bba3c2c56a0bd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_arcade$text_pyglet,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_arcade$text_pyglet$$$function__21_color(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$text_pyglet$$$function__21_color,
        mod_consts[52],
#if PYTHON_VERSION >= 0x300
        mod_consts[158],
#endif
        codeobj_f669288e048aee45d047bfaefc5ad617,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_arcade$text_pyglet,
        mod_consts[53],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_arcade$text_pyglet$$$function__22_color(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$text_pyglet$$$function__22_color,
        mod_consts[52],
#if PYTHON_VERSION >= 0x300
        mod_consts[158],
#endif
        codeobj_00d2398ae18bd320bb216049c05e8222,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_arcade$text_pyglet,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_arcade$text_pyglet$$$function__23_width(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$text_pyglet$$$function__23_width,
        mod_consts[54],
#if PYTHON_VERSION >= 0x300
        mod_consts[160],
#endif
        codeobj_d8a0651b454437f11d929441d2b3e9f0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_arcade$text_pyglet,
        mod_consts[55],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_arcade$text_pyglet$$$function__24_width(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$text_pyglet$$$function__24_width,
        mod_consts[54],
#if PYTHON_VERSION >= 0x300
        mod_consts[160],
#endif
        codeobj_25001eb09d51d66a6c672017306f0038,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_arcade$text_pyglet,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_arcade$text_pyglet$$$function__25_height(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$text_pyglet$$$function__25_height,
        mod_consts[56],
#if PYTHON_VERSION >= 0x300
        mod_consts[162],
#endif
        codeobj_1837010e24e3ce080310db112677f537,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_arcade$text_pyglet,
        mod_consts[57],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_arcade$text_pyglet$$$function__26_height() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$text_pyglet$$$function__26_height,
        mod_consts[56],
#if PYTHON_VERSION >= 0x300
        mod_consts[162],
#endif
        codeobj_873c038ac72204b9b2b19c939405cf36,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_arcade$text_pyglet,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_arcade$text_pyglet$$$function__27_size() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$text_pyglet$$$function__27_size,
        mod_consts[163],
#if PYTHON_VERSION >= 0x300
        mod_consts[164],
#endif
        codeobj_0955524f37f288217f59c06f7a31c0e5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_arcade$text_pyglet,
        mod_consts[58],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_arcade$text_pyglet$$$function__28_content_width(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$text_pyglet$$$function__28_content_width,
        mod_consts[59],
#if PYTHON_VERSION >= 0x300
        mod_consts[165],
#endif
        codeobj_903b7a1cc3e7994bf64b50c94416b009,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_arcade$text_pyglet,
        mod_consts[60],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_arcade$text_pyglet$$$function__29_content_height(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$text_pyglet$$$function__29_content_height,
        mod_consts[61],
#if PYTHON_VERSION >= 0x300
        mod_consts[166],
#endif
        codeobj_d081b60c39a77813276bd78aa7110fcb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_arcade$text_pyglet,
        mod_consts[62],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_arcade$text_pyglet$$$function__2__attempt_font_name_resolution(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$text_pyglet$$$function__2__attempt_font_name_resolution,
        mod_consts[33],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_4d7ab9233d3498686dab1b22c1a06106,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_arcade$text_pyglet,
        mod_consts[8],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_arcade$text_pyglet$$$function__30_left(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$text_pyglet$$$function__30_left,
        mod_consts[30],
#if PYTHON_VERSION >= 0x300
        mod_consts[167],
#endif
        codeobj_93681e0916ba7e7697215c51c6e2dc05,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_arcade$text_pyglet,
        mod_consts[64],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_arcade$text_pyglet$$$function__31_right(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$text_pyglet$$$function__31_right,
        mod_consts[31],
#if PYTHON_VERSION >= 0x300
        mod_consts[168],
#endif
        codeobj_0867edcdb8e94e26456c823e1fdc03b7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_arcade$text_pyglet,
        mod_consts[65],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_arcade$text_pyglet$$$function__32_top(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$text_pyglet$$$function__32_top,
        mod_consts[85],
#if PYTHON_VERSION >= 0x300
        mod_consts[169],
#endif
        codeobj_f25bc0dfcab8a725b225b472d00c9f0c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_arcade$text_pyglet,
        mod_consts[68],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_arcade$text_pyglet$$$function__33_bottom(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$text_pyglet$$$function__33_bottom,
        mod_consts[86],
#if PYTHON_VERSION >= 0x300
        mod_consts[170],
#endif
        codeobj_e4b53f9109fe47fe80b0c201a5d1bd94,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_arcade$text_pyglet,
        mod_consts[70],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_arcade$text_pyglet$$$function__34_content_size(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$text_pyglet$$$function__34_content_size,
        mod_consts[172],
#if PYTHON_VERSION >= 0x300
        mod_consts[173],
#endif
        codeobj_8543a40c399d5dc2f9c6145ff63e6b93,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_arcade$text_pyglet,
        mod_consts[71],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_arcade$text_pyglet$$$function__35_align(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$text_pyglet$$$function__35_align,
        mod_consts[77],
#if PYTHON_VERSION >= 0x300
        mod_consts[174],
#endif
        codeobj_faf0458aad6786573109b77b47c614cb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_arcade$text_pyglet,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_arcade$text_pyglet$$$function__36_align(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$text_pyglet$$$function__36_align,
        mod_consts[77],
#if PYTHON_VERSION >= 0x300
        mod_consts[174],
#endif
        codeobj_1a28c5a60fd5f9037a891e28bc4ef226,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_arcade$text_pyglet,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_arcade$text_pyglet$$$function__37_bold(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$text_pyglet$$$function__37_bold,
        mod_consts[78],
#if PYTHON_VERSION >= 0x300
        mod_consts[177],
#endif
        codeobj_13b4cc5a814ecf6f3bc70c89077ed967,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_arcade$text_pyglet,
        mod_consts[79],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_arcade$text_pyglet$$$function__38_bold(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$text_pyglet$$$function__38_bold,
        mod_consts[78],
#if PYTHON_VERSION >= 0x300
        mod_consts[177],
#endif
        codeobj_948f5f63f5cf9041783cbd7e8cbf5187,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_arcade$text_pyglet,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_arcade$text_pyglet$$$function__39_italic(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$text_pyglet$$$function__39_italic,
        mod_consts[80],
#if PYTHON_VERSION >= 0x300
        mod_consts[179],
#endif
        codeobj_304e55a5fc13d4deb40daa4a83621d6d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_arcade$text_pyglet,
        mod_consts[81],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_arcade$text_pyglet$$$function__3__draw_label_with_rotation(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$text_pyglet$$$function__3__draw_label_with_rotation,
        mod_consts[83],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d5777a1091714a0123e3b04c3ada8ae1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_arcade$text_pyglet,
        mod_consts[28],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_arcade$text_pyglet$$$function__40_italic(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$text_pyglet$$$function__40_italic,
        mod_consts[80],
#if PYTHON_VERSION >= 0x300
        mod_consts[179],
#endif
        codeobj_2f5a304b16895d64456ad25c967c8b39,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_arcade$text_pyglet,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_arcade$text_pyglet$$$function__41_multiline(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$text_pyglet$$$function__41_multiline,
        mod_consts[74],
#if PYTHON_VERSION >= 0x300
        mod_consts[181],
#endif
        codeobj_8a8a6a9bfd6b2f825d95ded8edeab818,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_arcade$text_pyglet,
        mod_consts[82],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_arcade$text_pyglet$$$function__42_multiline(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$text_pyglet$$$function__42_multiline,
        mod_consts[74],
#if PYTHON_VERSION >= 0x300
        mod_consts[181],
#endif
        codeobj_e01fb985343b19e5c3acc6f347433850,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_arcade$text_pyglet,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_arcade$text_pyglet$$$function__43_draw(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$text_pyglet$$$function__43_draw,
        mod_consts[26],
#if PYTHON_VERSION >= 0x300
        mod_consts[184],
#endif
        codeobj_d82f6dc63445d197180967e97f5c1d7b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_arcade$text_pyglet,
        mod_consts[84],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_arcade$text_pyglet$$$function__44_draw_debug(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$text_pyglet$$$function__44_draw_debug,
        mod_consts[190],
#if PYTHON_VERSION >= 0x300
        mod_consts[191],
#endif
        codeobj_78bb1917bae962733c58af94fd553209,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_arcade$text_pyglet,
        mod_consts[93],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_arcade$text_pyglet$$$function__45_position(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$text_pyglet$$$function__45_position,
        mod_consts[95],
#if PYTHON_VERSION >= 0x300
        mod_consts[192],
#endif
        codeobj_ee4219d3d37eef8964425ed8ceeb0cd8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_arcade$text_pyglet,
        mod_consts[94],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_arcade$text_pyglet$$$function__46_position(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$text_pyglet$$$function__46_position,
        mod_consts[95],
#if PYTHON_VERSION >= 0x300
        mod_consts[192],
#endif
        codeobj_e4d97256a4d83c6da07ae6adae3f3175,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_arcade$text_pyglet,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_arcade$text_pyglet$$$function__47_draw_text(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$text_pyglet$$$function__47_draw_text,
        mod_consts[195],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_150cf4b09d5fb0440b9972e839fad3b1,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_arcade$text_pyglet,
        mod_consts[101],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_arcade$text_pyglet$$$function__4___init__(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$text_pyglet$$$function__4___init__,
        mod_consts[139],
#if PYTHON_VERSION >= 0x300
        mod_consts[140],
#endif
        codeobj_3bdf983284b388c51904512574069de2,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_arcade$text_pyglet,
        mod_consts[40],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_arcade$text_pyglet$$$function__5_value(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$text_pyglet$$$function__5_value,
        mod_consts[142],
#if PYTHON_VERSION >= 0x300
        mod_consts[143],
#endif
        codeobj_dcb62cb1903bf132a9e47c3061967988,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_arcade$text_pyglet,
        mod_consts[41],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_arcade$text_pyglet$$$function__6_value(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$text_pyglet$$$function__6_value,
        mod_consts[142],
#if PYTHON_VERSION >= 0x300
        mod_consts[143],
#endif
        codeobj_8049751dba6196ce163c56a7a4fa9e71,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_arcade$text_pyglet,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_arcade$text_pyglet$$$function__7_text(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$text_pyglet$$$function__7_text,
        mod_consts[34],
#if PYTHON_VERSION >= 0x300
        mod_consts[145],
#endif
        codeobj_1138f532338039becb8c5dead477c2c9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_arcade$text_pyglet,
        mod_consts[42],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_arcade$text_pyglet$$$function__8_text(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$text_pyglet$$$function__8_text,
        mod_consts[34],
#if PYTHON_VERSION >= 0x300
        mod_consts[145],
#endif
        codeobj_50b9344432eaf3ce5c5516a809b78840,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_arcade$text_pyglet,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_arcade$text_pyglet$$$function__9_x(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_arcade$text_pyglet$$$function__9_x,
        mod_consts[17],
#if PYTHON_VERSION >= 0x300
        mod_consts[147],
#endif
        codeobj_07d1da091dc20b30b8d3b385b9d42803,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_arcade$text_pyglet,
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

function_impl_code functable_arcade$text_pyglet[] = {
    impl_arcade$text_pyglet$$$function__1_load_font,
    impl_arcade$text_pyglet$$$function__2__attempt_font_name_resolution,
    impl_arcade$text_pyglet$$$function__3__draw_label_with_rotation,
    impl_arcade$text_pyglet$$$function__4___init__,
    impl_arcade$text_pyglet$$$function__5_value,
    impl_arcade$text_pyglet$$$function__6_value,
    impl_arcade$text_pyglet$$$function__7_text,
    impl_arcade$text_pyglet$$$function__8_text,
    impl_arcade$text_pyglet$$$function__9_x,
    impl_arcade$text_pyglet$$$function__10_x,
    impl_arcade$text_pyglet$$$function__11_y,
    impl_arcade$text_pyglet$$$function__12_y,
    impl_arcade$text_pyglet$$$function__13_font_name,
    impl_arcade$text_pyglet$$$function__14_font_name,
    impl_arcade$text_pyglet$$$function__15_font_size,
    impl_arcade$text_pyglet$$$function__16_font_size,
    impl_arcade$text_pyglet$$$function__17_anchor_x,
    impl_arcade$text_pyglet$$$function__18_anchor_x,
    impl_arcade$text_pyglet$$$function__19_anchor_y,
    impl_arcade$text_pyglet$$$function__20_anchor_y,
    impl_arcade$text_pyglet$$$function__21_color,
    impl_arcade$text_pyglet$$$function__22_color,
    impl_arcade$text_pyglet$$$function__23_width,
    impl_arcade$text_pyglet$$$function__24_width,
    impl_arcade$text_pyglet$$$function__25_height,
    impl_arcade$text_pyglet$$$function__26_height,
    impl_arcade$text_pyglet$$$function__27_size,
    impl_arcade$text_pyglet$$$function__28_content_width,
    impl_arcade$text_pyglet$$$function__29_content_height,
    impl_arcade$text_pyglet$$$function__30_left,
    impl_arcade$text_pyglet$$$function__31_right,
    impl_arcade$text_pyglet$$$function__32_top,
    impl_arcade$text_pyglet$$$function__33_bottom,
    impl_arcade$text_pyglet$$$function__34_content_size,
    impl_arcade$text_pyglet$$$function__35_align,
    impl_arcade$text_pyglet$$$function__36_align,
    impl_arcade$text_pyglet$$$function__37_bold,
    impl_arcade$text_pyglet$$$function__38_bold,
    impl_arcade$text_pyglet$$$function__39_italic,
    impl_arcade$text_pyglet$$$function__40_italic,
    impl_arcade$text_pyglet$$$function__41_multiline,
    impl_arcade$text_pyglet$$$function__42_multiline,
    impl_arcade$text_pyglet$$$function__43_draw,
    impl_arcade$text_pyglet$$$function__44_draw_debug,
    impl_arcade$text_pyglet$$$function__45_position,
    impl_arcade$text_pyglet$$$function__46_position,
    impl_arcade$text_pyglet$$$function__47_draw_text,
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

    function_impl_code *current = functable_arcade$text_pyglet;
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

    if (offset > sizeof(functable_arcade$text_pyglet) || offset < 0) {
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
        functable_arcade$text_pyglet[offset],
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
        module_arcade$text_pyglet,
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
PyObject *modulecode_arcade$text_pyglet(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("arcade.text_pyglet");

    // Store the module for future use.
    module_arcade$text_pyglet = module;

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
        PRINT_STRING("arcade.text_pyglet: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("arcade.text_pyglet: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initarcade$text_pyglet\n");

    moduledict_arcade$text_pyglet = MODULE_DICT(module_arcade$text_pyglet);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(tstate, loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_arcade$text_pyglet,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_arcade$text_pyglet,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[96]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_arcade$text_pyglet, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_arcade$text_pyglet,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_arcade$text_pyglet, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_arcade$text_pyglet,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_arcade$text_pyglet, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_arcade$text_pyglet,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_arcade$text_pyglet);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_arcade$text_pyglet, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_arcade$text_pyglet, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_arcade$text_pyglet, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_arcade$text_pyglet, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_arcade$text_pyglet);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_arcade$text_pyglet, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    struct Nuitka_FrameObject *frame_7b80a212e3fe688c4de5bb809cfc8b9d;
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
    int tmp_res;
    PyObject *locals_arcade$text_pyglet$$$class__1_Text_120 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_7ec8f6d32449d56c44112a2c1f2481d5_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[102];
        UPDATE_STRING_DICT0(moduledict_arcade$text_pyglet, (Nuitka_StringObject *)mod_consts[103], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_arcade$text_pyglet, (Nuitka_StringObject *)mod_consts[104], tmp_assign_source_2);
    }
    frame_7b80a212e3fe688c4de5bb809cfc8b9d = MAKE_MODULE_FRAME(codeobj_7b80a212e3fe688c4de5bb809cfc8b9d, module_arcade$text_pyglet);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_7b80a212e3fe688c4de5bb809cfc8b9d);
    assert(Py_REFCNT(frame_7b80a212e3fe688c4de5bb809cfc8b9d) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_arcade$text_pyglet, (Nuitka_StringObject *)mod_consts[105]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[105]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[106], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_arcade$text_pyglet, (Nuitka_StringObject *)mod_consts[105]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[105]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[107], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_arcade$text_pyglet, (Nuitka_StringObject *)mod_consts[108], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[15];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_arcade$text_pyglet;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[23];
        frame_7b80a212e3fe688c4de5bb809cfc8b9d->m_frame.f_lineno = 4;
        tmp_assign_source_4 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT1(moduledict_arcade$text_pyglet, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[109];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_arcade$text_pyglet;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[110];
        tmp_level_value_2 = mod_consts[23];
        frame_7b80a212e3fe688c4de5bb809cfc8b9d->m_frame.f_lineno = 5;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_arcade$text_pyglet,
                mod_consts[111],
                mod_consts[23]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[111]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_arcade$text_pyglet, (Nuitka_StringObject *)mod_consts[111], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = IMPORT_HARD_TYPING();
        assert(!(tmp_assign_source_6 == NULL));
        assert(tmp_import_from_1__module == NULL);
        Py_INCREF(tmp_assign_source_6);
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
                (PyObject *)moduledict_arcade$text_pyglet,
                mod_consts[112],
                mod_consts[23]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[112]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_arcade$text_pyglet, (Nuitka_StringObject *)mod_consts[112], tmp_assign_source_7);
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
                (PyObject *)moduledict_arcade$text_pyglet,
                mod_consts[113],
                mod_consts[23]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts[113]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_arcade$text_pyglet, (Nuitka_StringObject *)mod_consts[113], tmp_assign_source_8);
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
                (PyObject *)moduledict_arcade$text_pyglet,
                mod_consts[114],
                mod_consts[23]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts[114]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_arcade$text_pyglet, (Nuitka_StringObject *)mod_consts[114], tmp_assign_source_9);
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
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[9];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_arcade$text_pyglet;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = Py_None;
        tmp_level_value_3 = mod_consts[23];
        frame_7b80a212e3fe688c4de5bb809cfc8b9d->m_frame.f_lineno = 8;
        tmp_assign_source_10 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_arcade$text_pyglet, (Nuitka_StringObject *)mod_consts[9], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[1];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_arcade$text_pyglet;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = Py_None;
        tmp_level_value_4 = mod_consts[23];
        frame_7b80a212e3fe688c4de5bb809cfc8b9d->m_frame.f_lineno = 9;
        tmp_assign_source_11 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_arcade$text_pyglet, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[115];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_arcade$text_pyglet;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[116];
        tmp_level_value_5 = mod_consts[23];
        frame_7b80a212e3fe688c4de5bb809cfc8b9d->m_frame.f_lineno = 10;
        tmp_assign_source_12 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_12;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_5 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_5,
                (PyObject *)moduledict_arcade$text_pyglet,
                mod_consts[117],
                mod_consts[23]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts[117]);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_arcade$text_pyglet, (Nuitka_StringObject *)mod_consts[117], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_6 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_6,
                (PyObject *)moduledict_arcade$text_pyglet,
                mod_consts[118],
                mod_consts[23]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts[118]);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_arcade$text_pyglet, (Nuitka_StringObject *)mod_consts[118], tmp_assign_source_14);
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
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_7;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[119];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_arcade$text_pyglet;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[120];
        tmp_level_value_6 = mod_consts[23];
        frame_7b80a212e3fe688c4de5bb809cfc8b9d->m_frame.f_lineno = 11;
        tmp_import_name_from_7 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_import_name_from_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_7,
                (PyObject *)moduledict_arcade$text_pyglet,
                mod_consts[36],
                mod_consts[23]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts[36]);
        }

        Py_DECREF(tmp_import_name_from_7);
        if (tmp_assign_source_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_arcade$text_pyglet, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_8;
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[121];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_arcade$text_pyglet;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = mod_consts[122];
        tmp_level_value_7 = mod_consts[23];
        frame_7b80a212e3fe688c4de5bb809cfc8b9d->m_frame.f_lineno = 12;
        tmp_import_name_from_8 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
        if (tmp_import_name_from_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_8,
                (PyObject *)moduledict_arcade$text_pyglet,
                mod_consts[19],
                mod_consts[23]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts[19]);
        }

        Py_DECREF(tmp_import_name_from_8);
        if (tmp_assign_source_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_arcade$text_pyglet, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_9;
        PyObject *tmp_name_value_8;
        PyObject *tmp_globals_arg_value_8;
        PyObject *tmp_locals_arg_value_8;
        PyObject *tmp_fromlist_value_8;
        PyObject *tmp_level_value_8;
        tmp_name_value_8 = mod_consts[123];
        tmp_globals_arg_value_8 = (PyObject *)moduledict_arcade$text_pyglet;
        tmp_locals_arg_value_8 = Py_None;
        tmp_fromlist_value_8 = mod_consts[124];
        tmp_level_value_8 = mod_consts[23];
        frame_7b80a212e3fe688c4de5bb809cfc8b9d->m_frame.f_lineno = 13;
        tmp_import_name_from_9 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
        if (tmp_import_name_from_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_9,
                (PyObject *)moduledict_arcade$text_pyglet,
                mod_consts[0],
                mod_consts[23]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts[0]);
        }

        Py_DECREF(tmp_import_name_from_9);
        if (tmp_assign_source_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_arcade$text_pyglet, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_annotations_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_tuple_element_1;
        tmp_dict_key_1 = mod_consts[125];
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_arcade$text_pyglet, (Nuitka_StringObject *)mod_consts[114]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[114]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = (PyObject *)&PyUnicode_Type;
        tmp_subscript_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_subscript_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_arcade$text_pyglet, (Nuitka_StringObject *)mod_consts[111]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[111]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_subscript_value_1, 1, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_subscript_value_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_dict_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        tmp_annotations_1 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[126];
        tmp_dict_value_1 = Py_None;
        tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));


        tmp_assign_source_18 = MAKE_FUNCTION_arcade$text_pyglet$$$function__1_load_font(tmp_annotations_1);

        UPDATE_STRING_DICT1(moduledict_arcade$text_pyglet, (Nuitka_StringObject *)mod_consts[127], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_tuple_element_2;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_arcade$text_pyglet, (Nuitka_StringObject *)mod_consts[114]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[114]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_2 = (PyObject *)&PyUnicode_Type;
        tmp_subscript_value_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_3;
            PyObject *tmp_subscript_value_3;
            PyTuple_SET_ITEM0(tmp_subscript_value_2, 0, tmp_tuple_element_2);
            tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_arcade$text_pyglet, (Nuitka_StringObject *)mod_consts[113]);

            if (unlikely(tmp_expression_value_3 == NULL)) {
                tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[113]);
            }

            if (tmp_expression_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 40;

                goto tuple_build_exception_2;
            }
            tmp_subscript_value_3 = mod_consts[128];
            tmp_tuple_element_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_3);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 40;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_2, 1, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_subscript_value_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_assign_source_19 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_2);
        Py_DECREF(tmp_subscript_value_2);
        if (tmp_assign_source_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_arcade$text_pyglet, (Nuitka_StringObject *)mod_consts[129], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_annotations_2;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        tmp_dict_key_2 = mod_consts[7];
        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_arcade$text_pyglet, (Nuitka_StringObject *)mod_consts[129]);

        if (unlikely(tmp_dict_value_2 == NULL)) {
            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[129]);
        }

        assert(!(tmp_dict_value_2 == NULL));
        tmp_annotations_2 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[126];
        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_arcade$text_pyglet, (Nuitka_StringObject *)mod_consts[129]);

        if (unlikely(tmp_dict_value_2 == NULL)) {
            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[129]);
        }

        assert(!(tmp_dict_value_2 == NULL));
        tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));


        tmp_assign_source_20 = MAKE_FUNCTION_arcade$text_pyglet$$$function__2__attempt_font_name_resolution(tmp_annotations_2);

        UPDATE_STRING_DICT1(moduledict_arcade$text_pyglet, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_annotations_3;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        tmp_dict_key_3 = mod_consts[25];
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_arcade$text_pyglet, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[34]);
        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[35]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_dict_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto frame_exception_exit_1;
        }
        tmp_annotations_3 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
        Py_DECREF(tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = mod_consts[39];
        tmp_dict_value_3 = (PyObject *)&PyFloat_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = mod_consts[126];
        tmp_dict_value_3 = Py_None;
        tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));


        tmp_assign_source_21 = MAKE_FUNCTION_arcade$text_pyglet$$$function__3__draw_label_with_rotation(tmp_annotations_3);

        UPDATE_STRING_DICT1(moduledict_arcade$text_pyglet, (Nuitka_StringObject *)mod_consts[83], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_23;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_24;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_arcade$text_pyglet$$$class__1_Text_120 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        tmp_dictset_value = mod_consts[130];
        tmp_res = PyDict_SetItem(locals_arcade$text_pyglet$$$class__1_Text_120, mod_consts[131], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[132];
        tmp_res = PyDict_SetItem(locals_arcade$text_pyglet$$$class__1_Text_120, mod_consts[103], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[133];
        tmp_res = PyDict_SetItem(locals_arcade$text_pyglet$$$class__1_Text_120, mod_consts[134], tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        frame_7ec8f6d32449d56c44112a2c1f2481d5_2 = MAKE_CLASS_FRAME(tstate, codeobj_7ec8f6d32449d56c44112a2c1f2481d5, module_arcade$text_pyglet, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_7ec8f6d32449d56c44112a2c1f2481d5_2);
        assert(Py_REFCNT(frame_7ec8f6d32449d56c44112a2c1f2481d5_2) == 2);

        // Framed code:
        {
            PyObject *tmp_defaults_1;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_expression_value_6;
            PyObject *tmp_expression_value_7;
            PyObject *tmp_annotations_4;
            PyObject *tmp_dict_key_4;
            PyObject *tmp_dict_value_4;
            tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_arcade$text_pyglet, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_7 == NULL)) {
                tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 193;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[52]);
            if (tmp_expression_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 193;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[135]);
            Py_DECREF(tmp_expression_value_6);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 193;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_defaults_1 = MAKE_TUPLE_EMPTY(11);
            PyTuple_SET_ITEM(tmp_defaults_1, 0, tmp_tuple_element_3);
            tmp_tuple_element_3 = mod_consts[136];
            PyTuple_SET_ITEM0(tmp_defaults_1, 1, tmp_tuple_element_3);
            tmp_tuple_element_3 = mod_consts[23];
            PyTuple_SET_ITEM0(tmp_defaults_1, 2, tmp_tuple_element_3);
            tmp_tuple_element_3 = mod_consts[30];
            PyTuple_SET_ITEM0(tmp_defaults_1, 3, tmp_tuple_element_3);
            tmp_tuple_element_3 = mod_consts[137];
            PyTuple_SET_ITEM0(tmp_defaults_1, 4, tmp_tuple_element_3);
            tmp_tuple_element_3 = Py_False;
            PyTuple_SET_ITEM0(tmp_defaults_1, 5, tmp_tuple_element_3);
            tmp_tuple_element_3 = Py_False;
            PyTuple_SET_ITEM0(tmp_defaults_1, 6, tmp_tuple_element_3);
            tmp_tuple_element_3 = mod_consts[30];
            PyTuple_SET_ITEM0(tmp_defaults_1, 7, tmp_tuple_element_3);
            tmp_tuple_element_3 = mod_consts[138];
            PyTuple_SET_ITEM0(tmp_defaults_1, 8, tmp_tuple_element_3);
            tmp_tuple_element_3 = Py_False;
            PyTuple_SET_ITEM0(tmp_defaults_1, 9, tmp_tuple_element_3);
            tmp_tuple_element_3 = mod_consts[23];
            PyTuple_SET_ITEM0(tmp_defaults_1, 10, tmp_tuple_element_3);
            tmp_dict_key_4 = mod_consts[34];
            tmp_dict_value_4 = (PyObject *)&PyUnicode_Type;
            tmp_annotations_4 = _PyDict_NewPresized( 14 );
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[99];
            tmp_dict_value_4 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[100];
            tmp_dict_value_4 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[52];
            tmp_dict_value_4 = GET_STRING_DICT_VALUE(moduledict_arcade$text_pyglet, (Nuitka_StringObject *)mod_consts[117]);

            if (unlikely(tmp_dict_value_4 == NULL)) {
                tmp_dict_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[117]);
            }

            if (tmp_dict_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 193;
                type_description_2 = "o";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[46];
            tmp_dict_value_4 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[54];
            tmp_dict_value_4 = (PyObject *)&PyLong_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[77];
            tmp_dict_value_4 = (PyObject *)&PyUnicode_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[7];
            tmp_dict_value_4 = GET_STRING_DICT_VALUE(moduledict_arcade$text_pyglet, (Nuitka_StringObject *)mod_consts[129]);

            if (unlikely(tmp_dict_value_4 == NULL)) {
                tmp_dict_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[129]);
            }

            if (tmp_dict_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 197;
                type_description_2 = "o";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[78];
            tmp_dict_value_4 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[80];
            tmp_dict_value_4 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[48];
            tmp_dict_value_4 = (PyObject *)&PyUnicode_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[50];
            tmp_dict_value_4 = (PyObject *)&PyUnicode_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[74];
            tmp_dict_value_4 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[39];
            tmp_dict_value_4 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            goto dict_build_noexception_1;
            // Exception handling pass through code for dict_build:
            dict_build_exception_1:;
            Py_DECREF(tmp_defaults_1);
            Py_DECREF(tmp_annotations_4);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_1:;


            tmp_dictset_value = MAKE_FUNCTION_arcade$text_pyglet$$$function__4___init__(tmp_defaults_1, tmp_annotations_4);

            tmp_res = PyDict_SetItem(locals_arcade$text_pyglet$$$class__1_Text_120, mod_consts[139], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 188;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_1;
            PyObject *tmp_args_element_value_1;
            PyObject *tmp_annotations_5;
            tmp_called_value_1 = (PyObject *)&PyProperty_Type;
            tmp_annotations_5 = DICT_COPY(mod_consts[141]);


            tmp_args_element_value_1 = MAKE_FUNCTION_arcade$text_pyglet$$$function__5_value(tmp_annotations_5);

            frame_7ec8f6d32449d56c44112a2c1f2481d5_2->m_frame.f_lineno = 231;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_1);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 231;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_arcade$text_pyglet$$$class__1_Text_120, mod_consts[142], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 232;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_2;
            PyObject *tmp_expression_value_8;
            PyObject *tmp_args_element_value_2;
            PyObject *tmp_annotations_6;
            PyObject *tmp_dict_key_5;
            PyObject *tmp_dict_value_5;
            tmp_expression_value_8 = DICT_GET_ITEM0(tstate, locals_arcade$text_pyglet$$$class__1_Text_120, mod_consts[142]);

            if (unlikely(tmp_expression_value_8 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[142]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 240;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 240;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[144]);
            if (tmp_called_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 240;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_5 = mod_consts[142];
            tmp_dict_value_5 = GET_STRING_DICT_VALUE(moduledict_arcade$text_pyglet, (Nuitka_StringObject *)mod_consts[112]);

            if (unlikely(tmp_dict_value_5 == NULL)) {
                tmp_dict_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
            }

            if (tmp_dict_value_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_2);

                exception_lineno = 241;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_annotations_6 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_5, tmp_dict_value_5);
            assert(!(tmp_res != 0));


            tmp_args_element_value_2 = MAKE_FUNCTION_arcade$text_pyglet$$$function__6_value(tmp_annotations_6);

            frame_7ec8f6d32449d56c44112a2c1f2481d5_2->m_frame.f_lineno = 240;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_2);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 240;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_arcade$text_pyglet$$$class__1_Text_120, mod_consts[142], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 241;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_3;
            PyObject *tmp_args_element_value_3;
            PyObject *tmp_annotations_7;
            tmp_called_value_3 = (PyObject *)&PyProperty_Type;
            tmp_annotations_7 = DICT_COPY(mod_consts[141]);


            tmp_args_element_value_3 = MAKE_FUNCTION_arcade$text_pyglet$$$function__7_text(tmp_annotations_7);

            frame_7ec8f6d32449d56c44112a2c1f2481d5_2->m_frame.f_lineno = 247;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_3);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 247;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_arcade$text_pyglet$$$class__1_Text_120, mod_consts[34], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 248;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_4;
            PyObject *tmp_expression_value_9;
            PyObject *tmp_args_element_value_4;
            PyObject *tmp_annotations_8;
            PyObject *tmp_dict_key_6;
            PyObject *tmp_dict_value_6;
            tmp_expression_value_9 = DICT_GET_ITEM0(tstate, locals_arcade$text_pyglet$$$class__1_Text_120, mod_consts[34]);

            if (unlikely(tmp_expression_value_9 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[34]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 258;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 258;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[144]);
            if (tmp_called_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 258;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_6 = mod_consts[142];
            tmp_dict_value_6 = GET_STRING_DICT_VALUE(moduledict_arcade$text_pyglet, (Nuitka_StringObject *)mod_consts[112]);

            if (unlikely(tmp_dict_value_6 == NULL)) {
                tmp_dict_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
            }

            if (tmp_dict_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_4);

                exception_lineno = 259;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_annotations_8 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_6, tmp_dict_value_6);
            assert(!(tmp_res != 0));


            tmp_args_element_value_4 = MAKE_FUNCTION_arcade$text_pyglet$$$function__8_text(tmp_annotations_8);

            frame_7ec8f6d32449d56c44112a2c1f2481d5_2->m_frame.f_lineno = 258;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_4);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_4);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 258;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_arcade$text_pyglet$$$class__1_Text_120, mod_consts[34], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 259;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_5;
            PyObject *tmp_args_element_value_5;
            PyObject *tmp_annotations_9;
            tmp_called_value_5 = (PyObject *)&PyProperty_Type;
            tmp_annotations_9 = DICT_COPY(mod_consts[146]);


            tmp_args_element_value_5 = MAKE_FUNCTION_arcade$text_pyglet$$$function__9_x(tmp_annotations_9);

            frame_7ec8f6d32449d56c44112a2c1f2481d5_2->m_frame.f_lineno = 265;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_5);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 265;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_arcade$text_pyglet$$$class__1_Text_120, mod_consts[17], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 266;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_1;
            PyObject *tmp_args_element_value_6;
            PyObject *tmp_annotations_10;
            tmp_called_instance_1 = DICT_GET_ITEM0(tstate, locals_arcade$text_pyglet$$$class__1_Text_120, mod_consts[17]);

            if (unlikely(tmp_called_instance_1 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[17]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 272;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_instance_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 272;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_annotations_10 = DICT_COPY(mod_consts[148]);


            tmp_args_element_value_6 = MAKE_FUNCTION_arcade$text_pyglet$$$function__10_x(tmp_annotations_10);

            frame_7ec8f6d32449d56c44112a2c1f2481d5_2->m_frame.f_lineno = 272;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[144], tmp_args_element_value_6);
            Py_DECREF(tmp_args_element_value_6);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 272;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_arcade$text_pyglet$$$class__1_Text_120, mod_consts[17], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 273;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_6;
            PyObject *tmp_args_element_value_7;
            PyObject *tmp_annotations_11;
            tmp_called_value_6 = (PyObject *)&PyProperty_Type;
            tmp_annotations_11 = DICT_COPY(mod_consts[146]);


            tmp_args_element_value_7 = MAKE_FUNCTION_arcade$text_pyglet$$$function__11_y(tmp_annotations_11);

            frame_7ec8f6d32449d56c44112a2c1f2481d5_2->m_frame.f_lineno = 278;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_7);
            Py_DECREF(tmp_args_element_value_7);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 278;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_arcade$text_pyglet$$$class__1_Text_120, mod_consts[18], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 279;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_2;
            PyObject *tmp_args_element_value_8;
            PyObject *tmp_annotations_12;
            tmp_called_instance_2 = DICT_GET_ITEM0(tstate, locals_arcade$text_pyglet$$$class__1_Text_120, mod_consts[18]);

            if (unlikely(tmp_called_instance_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[18]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 285;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_instance_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 285;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_annotations_12 = DICT_COPY(mod_consts[150]);


            tmp_args_element_value_8 = MAKE_FUNCTION_arcade$text_pyglet$$$function__12_y(tmp_annotations_12);

            frame_7ec8f6d32449d56c44112a2c1f2481d5_2->m_frame.f_lineno = 285;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts[144], tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_8);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 285;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_arcade$text_pyglet$$$class__1_Text_120, mod_consts[18], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 286;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_7;
            PyObject *tmp_args_element_value_9;
            PyObject *tmp_annotations_13;
            PyObject *tmp_dict_key_7;
            PyObject *tmp_dict_value_7;
            tmp_called_value_7 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_7 = mod_consts[126];
            tmp_dict_value_7 = GET_STRING_DICT_VALUE(moduledict_arcade$text_pyglet, (Nuitka_StringObject *)mod_consts[129]);

            if (unlikely(tmp_dict_value_7 == NULL)) {
                tmp_dict_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[129]);
            }

            if (tmp_dict_value_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 292;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_annotations_13 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_7, tmp_dict_value_7);
            assert(!(tmp_res != 0));


            tmp_args_element_value_9 = MAKE_FUNCTION_arcade$text_pyglet$$$function__13_font_name(tmp_annotations_13);

            frame_7ec8f6d32449d56c44112a2c1f2481d5_2->m_frame.f_lineno = 291;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_9);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 291;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_arcade$text_pyglet$$$class__1_Text_120, mod_consts[7], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 292;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_8;
            PyObject *tmp_expression_value_10;
            PyObject *tmp_args_element_value_10;
            PyObject *tmp_annotations_14;
            PyObject *tmp_dict_key_8;
            PyObject *tmp_dict_value_8;
            tmp_expression_value_10 = DICT_GET_ITEM0(tstate, locals_arcade$text_pyglet$$$class__1_Text_120, mod_consts[7]);

            if (unlikely(tmp_expression_value_10 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 298;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 298;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[144]);
            if (tmp_called_value_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 298;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_8 = mod_consts[7];
            tmp_dict_value_8 = GET_STRING_DICT_VALUE(moduledict_arcade$text_pyglet, (Nuitka_StringObject *)mod_consts[129]);

            if (unlikely(tmp_dict_value_8 == NULL)) {
                tmp_dict_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[129]);
            }

            if (tmp_dict_value_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_8);

                exception_lineno = 299;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_annotations_14 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_8, tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[126];
            tmp_dict_value_8 = Py_None;
            tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_8, tmp_dict_value_8);
            assert(!(tmp_res != 0));


            tmp_args_element_value_10 = MAKE_FUNCTION_arcade$text_pyglet$$$function__14_font_name(tmp_annotations_14);

            frame_7ec8f6d32449d56c44112a2c1f2481d5_2->m_frame.f_lineno = 298;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_10);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_args_element_value_10);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 298;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_arcade$text_pyglet$$$class__1_Text_120, mod_consts[7], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 299;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_9;
            PyObject *tmp_args_element_value_11;
            PyObject *tmp_annotations_15;
            tmp_called_value_9 = (PyObject *)&PyProperty_Type;
            tmp_annotations_15 = DICT_COPY(mod_consts[146]);


            tmp_args_element_value_11 = MAKE_FUNCTION_arcade$text_pyglet$$$function__15_font_size(tmp_annotations_15);

            frame_7ec8f6d32449d56c44112a2c1f2481d5_2->m_frame.f_lineno = 302;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_11);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 302;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_arcade$text_pyglet$$$class__1_Text_120, mod_consts[46], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 303;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_3;
            PyObject *tmp_args_element_value_12;
            PyObject *tmp_annotations_16;
            tmp_called_instance_3 = DICT_GET_ITEM0(tstate, locals_arcade$text_pyglet$$$class__1_Text_120, mod_consts[46]);

            if (unlikely(tmp_called_instance_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[46]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 309;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_instance_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 309;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_annotations_16 = DICT_COPY(mod_consts[153]);


            tmp_args_element_value_12 = MAKE_FUNCTION_arcade$text_pyglet$$$function__16_font_size(tmp_annotations_16);

            frame_7ec8f6d32449d56c44112a2c1f2481d5_2->m_frame.f_lineno = 309;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts[144], tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_12);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 309;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_arcade$text_pyglet$$$class__1_Text_120, mod_consts[46], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 310;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_10;
            PyObject *tmp_args_element_value_13;
            PyObject *tmp_annotations_17;
            tmp_called_value_10 = (PyObject *)&PyProperty_Type;
            tmp_annotations_17 = DICT_COPY(mod_consts[141]);


            tmp_args_element_value_13 = MAKE_FUNCTION_arcade$text_pyglet$$$function__17_anchor_x(tmp_annotations_17);

            frame_7ec8f6d32449d56c44112a2c1f2481d5_2->m_frame.f_lineno = 313;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_13);
            Py_DECREF(tmp_args_element_value_13);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 313;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_arcade$text_pyglet$$$class__1_Text_120, mod_consts[48], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 314;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_4;
            PyObject *tmp_args_element_value_14;
            PyObject *tmp_annotations_18;
            tmp_called_instance_4 = DICT_GET_ITEM0(tstate, locals_arcade$text_pyglet$$$class__1_Text_120, mod_consts[48]);

            if (unlikely(tmp_called_instance_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[48]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 322;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_instance_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 322;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_annotations_18 = DICT_COPY(mod_consts[155]);


            tmp_args_element_value_14 = MAKE_FUNCTION_arcade$text_pyglet$$$function__18_anchor_x(tmp_annotations_18);

            frame_7ec8f6d32449d56c44112a2c1f2481d5_2->m_frame.f_lineno = 322;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts[144], tmp_args_element_value_14);
            Py_DECREF(tmp_args_element_value_14);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 322;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_arcade$text_pyglet$$$class__1_Text_120, mod_consts[48], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 323;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_11;
            PyObject *tmp_args_element_value_15;
            PyObject *tmp_annotations_19;
            tmp_called_value_11 = (PyObject *)&PyProperty_Type;
            tmp_annotations_19 = DICT_COPY(mod_consts[141]);


            tmp_args_element_value_15 = MAKE_FUNCTION_arcade$text_pyglet$$$function__19_anchor_y(tmp_annotations_19);

            frame_7ec8f6d32449d56c44112a2c1f2481d5_2->m_frame.f_lineno = 326;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_15);
            Py_DECREF(tmp_args_element_value_15);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 326;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_arcade$text_pyglet$$$class__1_Text_120, mod_consts[50], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 327;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_5;
            PyObject *tmp_args_element_value_16;
            PyObject *tmp_annotations_20;
            tmp_called_instance_5 = DICT_GET_ITEM0(tstate, locals_arcade$text_pyglet$$$class__1_Text_120, mod_consts[50]);

            if (unlikely(tmp_called_instance_5 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[50]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 335;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_instance_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 335;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_annotations_20 = DICT_COPY(mod_consts[157]);


            tmp_args_element_value_16 = MAKE_FUNCTION_arcade$text_pyglet$$$function__20_anchor_y(tmp_annotations_20);

            frame_7ec8f6d32449d56c44112a2c1f2481d5_2->m_frame.f_lineno = 335;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_5, mod_consts[144], tmp_args_element_value_16);
            Py_DECREF(tmp_args_element_value_16);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 335;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_arcade$text_pyglet$$$class__1_Text_120, mod_consts[50], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 336;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_12;
            PyObject *tmp_args_element_value_17;
            PyObject *tmp_annotations_21;
            PyObject *tmp_dict_key_9;
            PyObject *tmp_dict_value_9;
            tmp_called_value_12 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_9 = mod_consts[126];
            tmp_dict_value_9 = GET_STRING_DICT_VALUE(moduledict_arcade$text_pyglet, (Nuitka_StringObject *)mod_consts[117]);

            if (unlikely(tmp_dict_value_9 == NULL)) {
                tmp_dict_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[117]);
            }

            if (tmp_dict_value_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 340;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_annotations_21 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_21, tmp_dict_key_9, tmp_dict_value_9);
            assert(!(tmp_res != 0));


            tmp_args_element_value_17 = MAKE_FUNCTION_arcade$text_pyglet$$$function__21_color(tmp_annotations_21);

            frame_7ec8f6d32449d56c44112a2c1f2481d5_2->m_frame.f_lineno = 339;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_17);
            Py_DECREF(tmp_args_element_value_17);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 339;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_arcade$text_pyglet$$$class__1_Text_120, mod_consts[52], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 340;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_13;
            PyObject *tmp_expression_value_11;
            PyObject *tmp_args_element_value_18;
            PyObject *tmp_annotations_22;
            PyObject *tmp_dict_key_10;
            PyObject *tmp_dict_value_10;
            tmp_expression_value_11 = DICT_GET_ITEM0(tstate, locals_arcade$text_pyglet$$$class__1_Text_120, mod_consts[52]);

            if (unlikely(tmp_expression_value_11 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[52]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 346;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 346;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[144]);
            if (tmp_called_value_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 346;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_10 = mod_consts[52];
            tmp_dict_value_10 = GET_STRING_DICT_VALUE(moduledict_arcade$text_pyglet, (Nuitka_StringObject *)mod_consts[117]);

            if (unlikely(tmp_dict_value_10 == NULL)) {
                tmp_dict_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[117]);
            }

            if (tmp_dict_value_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_13);

                exception_lineno = 347;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_annotations_22 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_22, tmp_dict_key_10, tmp_dict_value_10);
            assert(!(tmp_res != 0));


            tmp_args_element_value_18 = MAKE_FUNCTION_arcade$text_pyglet$$$function__22_color(tmp_annotations_22);

            frame_7ec8f6d32449d56c44112a2c1f2481d5_2->m_frame.f_lineno = 346;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_13, tmp_args_element_value_18);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_args_element_value_18);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 346;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_arcade$text_pyglet$$$class__1_Text_120, mod_consts[52], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 347;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_14;
            PyObject *tmp_args_element_value_19;
            PyObject *tmp_annotations_23;
            tmp_called_value_14 = (PyObject *)&PyProperty_Type;
            tmp_annotations_23 = DICT_COPY(mod_consts[159]);


            tmp_args_element_value_19 = MAKE_FUNCTION_arcade$text_pyglet$$$function__23_width(tmp_annotations_23);

            frame_7ec8f6d32449d56c44112a2c1f2481d5_2->m_frame.f_lineno = 350;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_14, tmp_args_element_value_19);
            Py_DECREF(tmp_args_element_value_19);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 350;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_arcade$text_pyglet$$$class__1_Text_120, mod_consts[54], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 351;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_6;
            PyObject *tmp_args_element_value_20;
            PyObject *tmp_annotations_24;
            tmp_called_instance_6 = DICT_GET_ITEM0(tstate, locals_arcade$text_pyglet$$$class__1_Text_120, mod_consts[54]);

            if (unlikely(tmp_called_instance_6 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[54]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 360;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_instance_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 360;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_annotations_24 = DICT_COPY(mod_consts[161]);


            tmp_args_element_value_20 = MAKE_FUNCTION_arcade$text_pyglet$$$function__24_width(tmp_annotations_24);

            frame_7ec8f6d32449d56c44112a2c1f2481d5_2->m_frame.f_lineno = 360;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_6, mod_consts[144], tmp_args_element_value_20);
            Py_DECREF(tmp_args_element_value_20);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 360;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_arcade$text_pyglet$$$class__1_Text_120, mod_consts[54], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 361;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_15;
            PyObject *tmp_args_element_value_21;
            PyObject *tmp_annotations_25;
            tmp_called_value_15 = (PyObject *)&PyProperty_Type;
            tmp_annotations_25 = DICT_COPY(mod_consts[159]);


            tmp_args_element_value_21 = MAKE_FUNCTION_arcade$text_pyglet$$$function__25_height(tmp_annotations_25);

            frame_7ec8f6d32449d56c44112a2c1f2481d5_2->m_frame.f_lineno = 364;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_15, tmp_args_element_value_21);
            Py_DECREF(tmp_args_element_value_21);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 364;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_arcade$text_pyglet$$$class__1_Text_120, mod_consts[56], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 365;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_7;
            PyObject *tmp_args_element_value_22;
            tmp_called_instance_7 = DICT_GET_ITEM0(tstate, locals_arcade$text_pyglet$$$class__1_Text_120, mod_consts[56]);

            if (unlikely(tmp_called_instance_7 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[56]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 374;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_instance_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 374;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_22 = MAKE_FUNCTION_arcade$text_pyglet$$$function__26_height();

            frame_7ec8f6d32449d56c44112a2c1f2481d5_2->m_frame.f_lineno = 374;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_7, mod_consts[144], tmp_args_element_value_22);
            Py_DECREF(tmp_args_element_value_22);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 374;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_arcade$text_pyglet$$$class__1_Text_120, mod_consts[56], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 375;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_16;
            PyObject *tmp_args_element_value_23;
            tmp_called_value_16 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_23 = MAKE_FUNCTION_arcade$text_pyglet$$$function__27_size();

            frame_7ec8f6d32449d56c44112a2c1f2481d5_2->m_frame.f_lineno = 378;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_16, tmp_args_element_value_23);
            Py_DECREF(tmp_args_element_value_23);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 378;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_arcade$text_pyglet$$$class__1_Text_120, mod_consts[163], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 379;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_17;
            PyObject *tmp_args_element_value_24;
            PyObject *tmp_annotations_26;
            tmp_called_value_17 = (PyObject *)&PyProperty_Type;
            tmp_annotations_26 = DICT_COPY(mod_consts[159]);


            tmp_args_element_value_24 = MAKE_FUNCTION_arcade$text_pyglet$$$function__28_content_width(tmp_annotations_26);

            frame_7ec8f6d32449d56c44112a2c1f2481d5_2->m_frame.f_lineno = 385;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_17, tmp_args_element_value_24);
            Py_DECREF(tmp_args_element_value_24);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 385;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_arcade$text_pyglet$$$class__1_Text_120, mod_consts[59], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 386;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_18;
            PyObject *tmp_args_element_value_25;
            PyObject *tmp_annotations_27;
            tmp_called_value_18 = (PyObject *)&PyProperty_Type;
            tmp_annotations_27 = DICT_COPY(mod_consts[159]);


            tmp_args_element_value_25 = MAKE_FUNCTION_arcade$text_pyglet$$$function__29_content_height(tmp_annotations_27);

            frame_7ec8f6d32449d56c44112a2c1f2481d5_2->m_frame.f_lineno = 392;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_18, tmp_args_element_value_25);
            Py_DECREF(tmp_args_element_value_25);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 392;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_arcade$text_pyglet$$$class__1_Text_120, mod_consts[61], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 393;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_19;
            PyObject *tmp_args_element_value_26;
            PyObject *tmp_annotations_28;
            tmp_called_value_19 = (PyObject *)&PyProperty_Type;
            tmp_annotations_28 = DICT_COPY(mod_consts[159]);


            tmp_args_element_value_26 = MAKE_FUNCTION_arcade$text_pyglet$$$function__30_left(tmp_annotations_28);

            frame_7ec8f6d32449d56c44112a2c1f2481d5_2->m_frame.f_lineno = 399;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_19, tmp_args_element_value_26);
            Py_DECREF(tmp_args_element_value_26);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 399;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_arcade$text_pyglet$$$class__1_Text_120, mod_consts[30], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 400;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_20;
            PyObject *tmp_args_element_value_27;
            PyObject *tmp_annotations_29;
            tmp_called_value_20 = (PyObject *)&PyProperty_Type;
            tmp_annotations_29 = DICT_COPY(mod_consts[159]);


            tmp_args_element_value_27 = MAKE_FUNCTION_arcade$text_pyglet$$$function__31_right(tmp_annotations_29);

            frame_7ec8f6d32449d56c44112a2c1f2481d5_2->m_frame.f_lineno = 406;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_20, tmp_args_element_value_27);
            Py_DECREF(tmp_args_element_value_27);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 406;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_arcade$text_pyglet$$$class__1_Text_120, mod_consts[31], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 407;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_21;
            PyObject *tmp_args_element_value_28;
            PyObject *tmp_annotations_30;
            tmp_called_value_21 = (PyObject *)&PyProperty_Type;
            tmp_annotations_30 = DICT_COPY(mod_consts[159]);


            tmp_args_element_value_28 = MAKE_FUNCTION_arcade$text_pyglet$$$function__32_top(tmp_annotations_30);

            frame_7ec8f6d32449d56c44112a2c1f2481d5_2->m_frame.f_lineno = 413;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_21, tmp_args_element_value_28);
            Py_DECREF(tmp_args_element_value_28);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 413;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_arcade$text_pyglet$$$class__1_Text_120, mod_consts[85], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 414;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_22;
            PyObject *tmp_args_element_value_29;
            PyObject *tmp_annotations_31;
            tmp_called_value_22 = (PyObject *)&PyProperty_Type;
            tmp_annotations_31 = DICT_COPY(mod_consts[159]);


            tmp_args_element_value_29 = MAKE_FUNCTION_arcade$text_pyglet$$$function__33_bottom(tmp_annotations_31);

            frame_7ec8f6d32449d56c44112a2c1f2481d5_2->m_frame.f_lineno = 420;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_22, tmp_args_element_value_29);
            Py_DECREF(tmp_args_element_value_29);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 420;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_arcade$text_pyglet$$$class__1_Text_120, mod_consts[86], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 421;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_23;
            PyObject *tmp_args_element_value_30;
            PyObject *tmp_annotations_32;
            PyObject *tmp_dict_key_11;
            PyObject *tmp_dict_value_11;
            PyObject *tmp_expression_value_12;
            PyObject *tmp_subscript_value_4;
            tmp_called_value_23 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_11 = mod_consts[126];
            tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_arcade$text_pyglet, (Nuitka_StringObject *)mod_consts[113]);

            if (unlikely(tmp_expression_value_12 == NULL)) {
                tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[113]);
            }

            if (tmp_expression_value_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 428;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_subscript_value_4 = mod_consts[171];
            tmp_dict_value_11 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_12, tmp_subscript_value_4);
            if (tmp_dict_value_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 428;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_annotations_32 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_32, tmp_dict_key_11, tmp_dict_value_11);
            Py_DECREF(tmp_dict_value_11);
            assert(!(tmp_res != 0));


            tmp_args_element_value_30 = MAKE_FUNCTION_arcade$text_pyglet$$$function__34_content_size(tmp_annotations_32);

            frame_7ec8f6d32449d56c44112a2c1f2481d5_2->m_frame.f_lineno = 427;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_23, tmp_args_element_value_30);
            Py_DECREF(tmp_args_element_value_30);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 427;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_arcade$text_pyglet$$$class__1_Text_120, mod_consts[172], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 428;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_24;
            PyObject *tmp_args_element_value_31;
            PyObject *tmp_annotations_33;
            tmp_called_value_24 = (PyObject *)&PyProperty_Type;
            tmp_annotations_33 = DICT_COPY(mod_consts[141]);


            tmp_args_element_value_31 = MAKE_FUNCTION_arcade$text_pyglet$$$function__35_align(tmp_annotations_33);

            frame_7ec8f6d32449d56c44112a2c1f2481d5_2->m_frame.f_lineno = 434;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_24, tmp_args_element_value_31);
            Py_DECREF(tmp_args_element_value_31);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 434;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_arcade$text_pyglet$$$class__1_Text_120, mod_consts[77], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 435;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_8;
            PyObject *tmp_args_element_value_32;
            PyObject *tmp_annotations_34;
            tmp_called_instance_8 = DICT_GET_ITEM0(tstate, locals_arcade$text_pyglet$$$class__1_Text_120, mod_consts[77]);

            if (unlikely(tmp_called_instance_8 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[77]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 438;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_instance_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 438;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_annotations_34 = DICT_COPY(mod_consts[175]);


            tmp_args_element_value_32 = MAKE_FUNCTION_arcade$text_pyglet$$$function__36_align(tmp_annotations_34);

            frame_7ec8f6d32449d56c44112a2c1f2481d5_2->m_frame.f_lineno = 438;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_8, mod_consts[144], tmp_args_element_value_32);
            Py_DECREF(tmp_args_element_value_32);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 438;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_arcade$text_pyglet$$$class__1_Text_120, mod_consts[77], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 439;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_25;
            PyObject *tmp_args_element_value_33;
            PyObject *tmp_annotations_35;
            tmp_called_value_25 = (PyObject *)&PyProperty_Type;
            tmp_annotations_35 = DICT_COPY(mod_consts[176]);


            tmp_args_element_value_33 = MAKE_FUNCTION_arcade$text_pyglet$$$function__37_bold(tmp_annotations_35);

            frame_7ec8f6d32449d56c44112a2c1f2481d5_2->m_frame.f_lineno = 447;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_25, tmp_args_element_value_33);
            Py_DECREF(tmp_args_element_value_33);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 447;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_arcade$text_pyglet$$$class__1_Text_120, mod_consts[78], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 448;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_9;
            PyObject *tmp_args_element_value_34;
            PyObject *tmp_annotations_36;
            tmp_called_instance_9 = DICT_GET_ITEM0(tstate, locals_arcade$text_pyglet$$$class__1_Text_120, mod_consts[78]);

            if (unlikely(tmp_called_instance_9 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[78]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 454;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_instance_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 454;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_annotations_36 = DICT_COPY(mod_consts[178]);


            tmp_args_element_value_34 = MAKE_FUNCTION_arcade$text_pyglet$$$function__38_bold(tmp_annotations_36);

            frame_7ec8f6d32449d56c44112a2c1f2481d5_2->m_frame.f_lineno = 454;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_9, mod_consts[144], tmp_args_element_value_34);
            Py_DECREF(tmp_args_element_value_34);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 454;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_arcade$text_pyglet$$$class__1_Text_120, mod_consts[78], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 455;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_26;
            PyObject *tmp_args_element_value_35;
            PyObject *tmp_annotations_37;
            tmp_called_value_26 = (PyObject *)&PyProperty_Type;
            tmp_annotations_37 = DICT_COPY(mod_consts[176]);


            tmp_args_element_value_35 = MAKE_FUNCTION_arcade$text_pyglet$$$function__39_italic(tmp_annotations_37);

            frame_7ec8f6d32449d56c44112a2c1f2481d5_2->m_frame.f_lineno = 458;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_26, tmp_args_element_value_35);
            Py_DECREF(tmp_args_element_value_35);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 458;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_arcade$text_pyglet$$$class__1_Text_120, mod_consts[80], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 459;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_10;
            PyObject *tmp_args_element_value_36;
            PyObject *tmp_annotations_38;
            tmp_called_instance_10 = DICT_GET_ITEM0(tstate, locals_arcade$text_pyglet$$$class__1_Text_120, mod_consts[80]);

            if (unlikely(tmp_called_instance_10 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[80]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 465;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_instance_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 465;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_annotations_38 = DICT_COPY(mod_consts[180]);


            tmp_args_element_value_36 = MAKE_FUNCTION_arcade$text_pyglet$$$function__40_italic(tmp_annotations_38);

            frame_7ec8f6d32449d56c44112a2c1f2481d5_2->m_frame.f_lineno = 465;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_10, mod_consts[144], tmp_args_element_value_36);
            Py_DECREF(tmp_args_element_value_36);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 465;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_arcade$text_pyglet$$$class__1_Text_120, mod_consts[80], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 466;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_27;
            PyObject *tmp_args_element_value_37;
            PyObject *tmp_annotations_39;
            tmp_called_value_27 = (PyObject *)&PyProperty_Type;
            tmp_annotations_39 = DICT_COPY(mod_consts[176]);


            tmp_args_element_value_37 = MAKE_FUNCTION_arcade$text_pyglet$$$function__41_multiline(tmp_annotations_39);

            frame_7ec8f6d32449d56c44112a2c1f2481d5_2->m_frame.f_lineno = 469;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_27, tmp_args_element_value_37);
            Py_DECREF(tmp_args_element_value_37);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 469;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_arcade$text_pyglet$$$class__1_Text_120, mod_consts[74], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 470;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_11;
            PyObject *tmp_args_element_value_38;
            PyObject *tmp_annotations_40;
            tmp_called_instance_11 = DICT_GET_ITEM0(tstate, locals_arcade$text_pyglet$$$class__1_Text_120, mod_consts[74]);

            if (unlikely(tmp_called_instance_11 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[74]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 476;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_instance_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 476;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_annotations_40 = DICT_COPY(mod_consts[182]);


            tmp_args_element_value_38 = MAKE_FUNCTION_arcade$text_pyglet$$$function__42_multiline(tmp_annotations_40);

            frame_7ec8f6d32449d56c44112a2c1f2481d5_2->m_frame.f_lineno = 476;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_11, mod_consts[144], tmp_args_element_value_38);
            Py_DECREF(tmp_args_element_value_38);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 476;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_arcade$text_pyglet$$$class__1_Text_120, mod_consts[74], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 477;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_annotations_41;
            tmp_annotations_41 = DICT_COPY(mod_consts[183]);


            tmp_dictset_value = MAKE_FUNCTION_arcade$text_pyglet$$$function__43_draw(tmp_annotations_41);

            tmp_res = PyDict_SetItem(locals_arcade$text_pyglet$$$class__1_Text_120, mod_consts[26], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_defaults_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_expression_value_13;
            PyObject *tmp_expression_value_14;
            PyObject *tmp_annotations_42;
            PyObject *tmp_dict_key_12;
            PyObject *tmp_dict_value_12;
            tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_arcade$text_pyglet, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_14 == NULL)) {
                tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 495;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_expression_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[52]);
            if (tmp_expression_value_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 495;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[185]);
            Py_DECREF(tmp_expression_value_13);
            if (tmp_tuple_element_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 495;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_defaults_2 = MAKE_TUPLE_EMPTY(3);
            {
                PyObject *tmp_expression_value_15;
                PyObject *tmp_expression_value_16;
                PyObject *tmp_expression_value_17;
                PyObject *tmp_expression_value_18;
                PyTuple_SET_ITEM(tmp_defaults_2, 0, tmp_tuple_element_4);
                tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_arcade$text_pyglet, (Nuitka_StringObject *)mod_consts[9]);

                if (unlikely(tmp_expression_value_16 == NULL)) {
                    tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
                }

                if (tmp_expression_value_16 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 496;
                    type_description_2 = "o";
                    goto tuple_build_exception_3;
                }
                tmp_expression_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[52]);
                if (tmp_expression_value_15 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 496;
                    type_description_2 = "o";
                    goto tuple_build_exception_3;
                }
                tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[186]);
                Py_DECREF(tmp_expression_value_15);
                if (tmp_tuple_element_4 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 496;
                    type_description_2 = "o";
                    goto tuple_build_exception_3;
                }
                PyTuple_SET_ITEM(tmp_defaults_2, 1, tmp_tuple_element_4);
                tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_arcade$text_pyglet, (Nuitka_StringObject *)mod_consts[9]);

                if (unlikely(tmp_expression_value_18 == NULL)) {
                    tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
                }

                if (tmp_expression_value_18 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 497;
                    type_description_2 = "o";
                    goto tuple_build_exception_3;
                }
                tmp_expression_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts[52]);
                if (tmp_expression_value_17 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 497;
                    type_description_2 = "o";
                    goto tuple_build_exception_3;
                }
                tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts[135]);
                Py_DECREF(tmp_expression_value_17);
                if (tmp_tuple_element_4 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 497;
                    type_description_2 = "o";
                    goto tuple_build_exception_3;
                }
                PyTuple_SET_ITEM(tmp_defaults_2, 2, tmp_tuple_element_4);
            }
            goto tuple_build_noexception_3;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_3:;
            Py_DECREF(tmp_defaults_2);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_3:;
            tmp_dict_key_12 = mod_consts[187];
            tmp_dict_value_12 = GET_STRING_DICT_VALUE(moduledict_arcade$text_pyglet, (Nuitka_StringObject *)mod_consts[117]);

            if (unlikely(tmp_dict_value_12 == NULL)) {
                tmp_dict_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[117]);
            }

            if (tmp_dict_value_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_defaults_2);

                exception_lineno = 495;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_annotations_42 = _PyDict_NewPresized( 4 );
            tmp_res = PyDict_SetItem(tmp_annotations_42, tmp_dict_key_12, tmp_dict_value_12);
            assert(!(tmp_res != 0));
            tmp_dict_key_12 = mod_consts[188];
            tmp_dict_value_12 = GET_STRING_DICT_VALUE(moduledict_arcade$text_pyglet, (Nuitka_StringObject *)mod_consts[117]);

            if (unlikely(tmp_dict_value_12 == NULL)) {
                tmp_dict_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[117]);
            }

            if (tmp_dict_value_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 496;
                type_description_2 = "o";
                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_42, tmp_dict_key_12, tmp_dict_value_12);
            assert(!(tmp_res != 0));
            tmp_dict_key_12 = mod_consts[189];
            tmp_dict_value_12 = GET_STRING_DICT_VALUE(moduledict_arcade$text_pyglet, (Nuitka_StringObject *)mod_consts[117]);

            if (unlikely(tmp_dict_value_12 == NULL)) {
                tmp_dict_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[117]);
            }

            if (tmp_dict_value_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 497;
                type_description_2 = "o";
                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_42, tmp_dict_key_12, tmp_dict_value_12);
            assert(!(tmp_res != 0));
            tmp_dict_key_12 = mod_consts[126];
            tmp_dict_value_12 = Py_None;
            tmp_res = PyDict_SetItem(tmp_annotations_42, tmp_dict_key_12, tmp_dict_value_12);
            assert(!(tmp_res != 0));
            goto dict_build_noexception_2;
            // Exception handling pass through code for dict_build:
            dict_build_exception_2:;
            Py_DECREF(tmp_defaults_2);
            Py_DECREF(tmp_annotations_42);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_2:;


            tmp_dictset_value = MAKE_FUNCTION_arcade$text_pyglet$$$function__44_draw_debug(tmp_defaults_2, tmp_annotations_42);

            tmp_res = PyDict_SetItem(locals_arcade$text_pyglet$$$class__1_Text_120, mod_consts[190], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 493;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_28;
            PyObject *tmp_args_element_value_39;
            PyObject *tmp_annotations_43;
            PyObject *tmp_dict_key_13;
            PyObject *tmp_dict_value_13;
            tmp_called_value_28 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_13 = mod_consts[126];
            tmp_dict_value_13 = GET_STRING_DICT_VALUE(moduledict_arcade$text_pyglet, (Nuitka_StringObject *)mod_consts[118]);

            if (unlikely(tmp_dict_value_13 == NULL)) {
                tmp_dict_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[118]);
            }

            if (tmp_dict_value_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 524;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_annotations_43 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_43, tmp_dict_key_13, tmp_dict_value_13);
            assert(!(tmp_res != 0));


            tmp_args_element_value_39 = MAKE_FUNCTION_arcade$text_pyglet$$$function__45_position(tmp_annotations_43);

            frame_7ec8f6d32449d56c44112a2c1f2481d5_2->m_frame.f_lineno = 523;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_28, tmp_args_element_value_39);
            Py_DECREF(tmp_args_element_value_39);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 523;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_arcade$text_pyglet$$$class__1_Text_120, mod_consts[95], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 524;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_29;
            PyObject *tmp_expression_value_19;
            PyObject *tmp_args_element_value_40;
            PyObject *tmp_annotations_44;
            PyObject *tmp_dict_key_14;
            PyObject *tmp_dict_value_14;
            tmp_expression_value_19 = DICT_GET_ITEM0(tstate, locals_arcade$text_pyglet$$$class__1_Text_120, mod_consts[95]);

            if (unlikely(tmp_expression_value_19 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[95]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 533;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 533;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_29 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts[144]);
            if (tmp_called_value_29 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 533;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_14 = mod_consts[193];
            tmp_dict_value_14 = GET_STRING_DICT_VALUE(moduledict_arcade$text_pyglet, (Nuitka_StringObject *)mod_consts[118]);

            if (unlikely(tmp_dict_value_14 == NULL)) {
                tmp_dict_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[118]);
            }

            if (tmp_dict_value_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_29);

                exception_lineno = 534;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_annotations_44 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_44, tmp_dict_key_14, tmp_dict_value_14);
            assert(!(tmp_res != 0));


            tmp_args_element_value_40 = MAKE_FUNCTION_arcade$text_pyglet$$$function__46_position(tmp_annotations_44);

            frame_7ec8f6d32449d56c44112a2c1f2481d5_2->m_frame.f_lineno = 533;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_29, tmp_args_element_value_40);
            Py_DECREF(tmp_called_value_29);
            Py_DECREF(tmp_args_element_value_40);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 533;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_arcade$text_pyglet$$$class__1_Text_120, mod_consts[95], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 534;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_7ec8f6d32449d56c44112a2c1f2481d5_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_7ec8f6d32449d56c44112a2c1f2481d5_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_7ec8f6d32449d56c44112a2c1f2481d5_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_7ec8f6d32449d56c44112a2c1f2481d5_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_7ec8f6d32449d56c44112a2c1f2481d5_2);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_5;
        skip_nested_handling_1:;
        {
            PyObject *tmp_assign_source_25;
            PyObject *tmp_called_value_30;
            PyObject *tmp_args_value_1;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_kwargs_value_1;
            tmp_called_value_30 = (PyObject *)&PyType_Type;
            tmp_tuple_element_5 = mod_consts[133];
            tmp_args_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_5);
            tmp_tuple_element_5 = mod_consts[194];
            PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_5);
            tmp_tuple_element_5 = locals_arcade$text_pyglet$$$class__1_Text_120;
            PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_5);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
            frame_7b80a212e3fe688c4de5bb809cfc8b9d->m_frame.f_lineno = 120;
            tmp_assign_source_25 = CALL_FUNCTION(tstate, tmp_called_value_30, tmp_args_value_1, tmp_kwargs_value_1);
            Py_DECREF(tmp_args_value_1);
            if (tmp_assign_source_25 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 120;

                goto try_except_handler_5;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_25;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_24 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_24);
        goto try_return_handler_5;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        Py_DECREF(locals_arcade$text_pyglet$$$class__1_Text_120);
        locals_arcade$text_pyglet$$$class__1_Text_120 = NULL;
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

        Py_DECREF(locals_arcade$text_pyglet$$$class__1_Text_120);
        locals_arcade$text_pyglet$$$class__1_Text_120 = NULL;
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
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
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

        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 120;
        goto try_except_handler_3;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_arcade$text_pyglet, (Nuitka_StringObject *)mod_consts[133], tmp_assign_source_24);
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
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
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_defaults_3;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_annotations_45;
        PyObject *tmp_dict_key_15;
        PyObject *tmp_dict_value_15;
        tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_arcade$text_pyglet, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_expression_value_21 == NULL)) {
            tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        if (tmp_expression_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 542;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts[52]);
        if (tmp_expression_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 542;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts[135]);
        Py_DECREF(tmp_expression_value_20);
        if (tmp_tuple_element_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 542;

            goto frame_exception_exit_1;
        }
        tmp_defaults_3 = MAKE_TUPLE_EMPTY(11);
        PyTuple_SET_ITEM(tmp_defaults_3, 0, tmp_tuple_element_6);
        tmp_tuple_element_6 = mod_consts[136];
        PyTuple_SET_ITEM0(tmp_defaults_3, 1, tmp_tuple_element_6);
        tmp_tuple_element_6 = mod_consts[23];
        PyTuple_SET_ITEM0(tmp_defaults_3, 2, tmp_tuple_element_6);
        tmp_tuple_element_6 = mod_consts[30];
        PyTuple_SET_ITEM0(tmp_defaults_3, 3, tmp_tuple_element_6);
        tmp_tuple_element_6 = mod_consts[137];
        PyTuple_SET_ITEM0(tmp_defaults_3, 4, tmp_tuple_element_6);
        tmp_tuple_element_6 = Py_False;
        PyTuple_SET_ITEM0(tmp_defaults_3, 5, tmp_tuple_element_6);
        tmp_tuple_element_6 = Py_False;
        PyTuple_SET_ITEM0(tmp_defaults_3, 6, tmp_tuple_element_6);
        tmp_tuple_element_6 = mod_consts[30];
        PyTuple_SET_ITEM0(tmp_defaults_3, 7, tmp_tuple_element_6);
        tmp_tuple_element_6 = mod_consts[138];
        PyTuple_SET_ITEM0(tmp_defaults_3, 8, tmp_tuple_element_6);
        tmp_tuple_element_6 = Py_False;
        PyTuple_SET_ITEM0(tmp_defaults_3, 9, tmp_tuple_element_6);
        tmp_tuple_element_6 = mod_consts[23];
        PyTuple_SET_ITEM0(tmp_defaults_3, 10, tmp_tuple_element_6);
        tmp_dict_key_15 = mod_consts[34];
        tmp_dict_value_15 = GET_STRING_DICT_VALUE(moduledict_arcade$text_pyglet, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_dict_value_15 == NULL)) {
            tmp_dict_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_dict_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_defaults_3);

            exception_lineno = 539;

            goto frame_exception_exit_1;
        }
        tmp_annotations_45 = _PyDict_NewPresized( 14 );
        tmp_res = PyDict_SetItem(tmp_annotations_45, tmp_dict_key_15, tmp_dict_value_15);
        assert(!(tmp_res != 0));
        tmp_dict_key_15 = mod_consts[99];
        tmp_dict_value_15 = (PyObject *)&PyFloat_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_45, tmp_dict_key_15, tmp_dict_value_15);
        assert(!(tmp_res != 0));
        tmp_dict_key_15 = mod_consts[100];
        tmp_dict_value_15 = (PyObject *)&PyFloat_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_45, tmp_dict_key_15, tmp_dict_value_15);
        assert(!(tmp_res != 0));
        tmp_dict_key_15 = mod_consts[52];
        tmp_dict_value_15 = GET_STRING_DICT_VALUE(moduledict_arcade$text_pyglet, (Nuitka_StringObject *)mod_consts[117]);

        if (unlikely(tmp_dict_value_15 == NULL)) {
            tmp_dict_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[117]);
        }

        if (tmp_dict_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 542;

            goto dict_build_exception_3;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_45, tmp_dict_key_15, tmp_dict_value_15);
        assert(!(tmp_res != 0));
        tmp_dict_key_15 = mod_consts[46];
        tmp_dict_value_15 = (PyObject *)&PyFloat_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_45, tmp_dict_key_15, tmp_dict_value_15);
        assert(!(tmp_res != 0));
        tmp_dict_key_15 = mod_consts[54];
        tmp_dict_value_15 = (PyObject *)&PyLong_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_45, tmp_dict_key_15, tmp_dict_value_15);
        assert(!(tmp_res != 0));
        tmp_dict_key_15 = mod_consts[77];
        tmp_dict_value_15 = (PyObject *)&PyUnicode_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_45, tmp_dict_key_15, tmp_dict_value_15);
        assert(!(tmp_res != 0));
        tmp_dict_key_15 = mod_consts[7];
        tmp_dict_value_15 = GET_STRING_DICT_VALUE(moduledict_arcade$text_pyglet, (Nuitka_StringObject *)mod_consts[129]);

        if (unlikely(tmp_dict_value_15 == NULL)) {
            tmp_dict_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[129]);
        }

        if (tmp_dict_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 546;

            goto dict_build_exception_3;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_45, tmp_dict_key_15, tmp_dict_value_15);
        assert(!(tmp_res != 0));
        tmp_dict_key_15 = mod_consts[78];
        tmp_dict_value_15 = (PyObject *)&PyBool_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_45, tmp_dict_key_15, tmp_dict_value_15);
        assert(!(tmp_res != 0));
        tmp_dict_key_15 = mod_consts[80];
        tmp_dict_value_15 = (PyObject *)&PyBool_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_45, tmp_dict_key_15, tmp_dict_value_15);
        assert(!(tmp_res != 0));
        tmp_dict_key_15 = mod_consts[48];
        tmp_dict_value_15 = (PyObject *)&PyUnicode_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_45, tmp_dict_key_15, tmp_dict_value_15);
        assert(!(tmp_res != 0));
        tmp_dict_key_15 = mod_consts[50];
        tmp_dict_value_15 = (PyObject *)&PyUnicode_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_45, tmp_dict_key_15, tmp_dict_value_15);
        assert(!(tmp_res != 0));
        tmp_dict_key_15 = mod_consts[74];
        tmp_dict_value_15 = (PyObject *)&PyBool_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_45, tmp_dict_key_15, tmp_dict_value_15);
        assert(!(tmp_res != 0));
        tmp_dict_key_15 = mod_consts[39];
        tmp_dict_value_15 = (PyObject *)&PyFloat_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_45, tmp_dict_key_15, tmp_dict_value_15);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_3;
        // Exception handling pass through code for dict_build:
        dict_build_exception_3:;
        Py_DECREF(tmp_defaults_3);
        Py_DECREF(tmp_annotations_45);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_3:;


        tmp_assign_source_26 = MAKE_FUNCTION_arcade$text_pyglet$$$function__47_draw_text(tmp_defaults_3, tmp_annotations_45);

        UPDATE_STRING_DICT1(moduledict_arcade$text_pyglet, (Nuitka_StringObject *)mod_consts[195], tmp_assign_source_26);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_2;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7b80a212e3fe688c4de5bb809cfc8b9d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7b80a212e3fe688c4de5bb809cfc8b9d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7b80a212e3fe688c4de5bb809cfc8b9d, exception_lineno);
    }



    assertFrameObject(frame_7b80a212e3fe688c4de5bb809cfc8b9d);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_2:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("arcade.text_pyglet", false);

    Py_INCREF(module_arcade$text_pyglet);
    return module_arcade$text_pyglet;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_arcade$text_pyglet, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("arcade$text_pyglet", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
