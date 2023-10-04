/* Generated code for Python module 'attr.validators'
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

/* The "module_attr$validators" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_attr$validators;
PyDictObject *moduledict_attr$validators;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[244];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[244];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("attr.validators"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 244; i++) {
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
void checkModuleConstants_attr$validators(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 244; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_647b8b6062d81078654e9408f230cd17;
static PyCodeObject *codeobj_e679cc00fa9bb510390fa6d28c105412;
static PyCodeObject *codeobj_5c984834de402303c340c5ad32bd6871;
static PyCodeObject *codeobj_aa4ce93cea2a9280e99feccb3a96c584;
static PyCodeObject *codeobj_dd6da70bf9d976787d76d03b64e1283f;
static PyCodeObject *codeobj_ad9f2b63788dbe119b3f45689596ed88;
static PyCodeObject *codeobj_22d69bee2c770bb2e74c15e940e8cef8;
static PyCodeObject *codeobj_76f04fd65912700408b83c6dac385e3d;
static PyCodeObject *codeobj_5085d7a89ed12af3d42281efca988a00;
static PyCodeObject *codeobj_eead991384a97d1ad3ea891a9bffd4be;
static PyCodeObject *codeobj_bb9f9367a8cef951b24934dc455ced47;
static PyCodeObject *codeobj_0be3a33eda892766855e9e593f430e45;
static PyCodeObject *codeobj_9e0fe831b8e2a744aa9d3f113b3a39e5;
static PyCodeObject *codeobj_345c2917192e8f850d3dd6ab7827c01e;
static PyCodeObject *codeobj_988862692cdc9850a09610961ea820b2;
static PyCodeObject *codeobj_b2f764ab5e0250250229c187d9299450;
static PyCodeObject *codeobj_c7f22820f9a87859fffb3e49c6231c4a;
static PyCodeObject *codeobj_a186867c3f9b3c67b231c15bad10a01f;
static PyCodeObject *codeobj_4eab6374cf9d075bcbc4d7063f54e2f9;
static PyCodeObject *codeobj_10735ebeb38bc196b0bb17585db9c33c;
static PyCodeObject *codeobj_63ace2698c66b7e3bed989917a9c7b6f;
static PyCodeObject *codeobj_5e3484542a566bdee3917cbd135450cf;
static PyCodeObject *codeobj_861b51623cd62076b3ea8a7f72cc173a;
static PyCodeObject *codeobj_1dea7cb8c76a75069be97bb4832990eb;
static PyCodeObject *codeobj_ceed3b8c0904e85e69066524d473c134;
static PyCodeObject *codeobj_405035a4c203576113a6d3086c4d0b6d;
static PyCodeObject *codeobj_5b40ac93c2d6c7f39f8529c055df8015;
static PyCodeObject *codeobj_aa8c8eb3239fb45f4eb742e1a67a6b8a;
static PyCodeObject *codeobj_320b7d0d2b552c4d9e727089e8234ea3;
static PyCodeObject *codeobj_e3ab098afffbbdf4299e77bfb37db923;
static PyCodeObject *codeobj_88c1c11c442b66e37a172e9b157bef3d;
static PyCodeObject *codeobj_3e117b2bf495016ab769c655de4fa118;
static PyCodeObject *codeobj_8ea1cab079976ff91470642f1c7dc83e;
static PyCodeObject *codeobj_54d72b3d67e21c0e1f04de166ade5a20;
static PyCodeObject *codeobj_98471cd8d3e98b993e47830ee662ef30;
static PyCodeObject *codeobj_b72670c7af8872b75391a36bbdb1cab0;
static PyCodeObject *codeobj_74a908f0b575950cbc78e560ccca653e;
static PyCodeObject *codeobj_e23a9646c52656abe4c54c89795e762f;
static PyCodeObject *codeobj_12573e910eab43e3f5baadb25e52bd0f;
static PyCodeObject *codeobj_72bfd1af4ec0868cca3cea92fdff1391;
static PyCodeObject *codeobj_1afbab5d8f6c5bcd330a759fe55d6904;
static PyCodeObject *codeobj_cafeae836fe5b3d7a303f978e377b5af;
static PyCodeObject *codeobj_29eaa102e8ae6445d5e24adf330f979e;
static PyCodeObject *codeobj_88dd6c1d8621e7b00a249fff4fe36b10;
static PyCodeObject *codeobj_81128da0653898e6ace28dfc76cdd66b;
static PyCodeObject *codeobj_0c171d1716088877bb7331d474cd9df7;
static PyCodeObject *codeobj_4f5fd3a67f7d7044fe627ed9d3b04aa0;
static PyCodeObject *codeobj_48912133c975765978884ea671cbb058;
static PyCodeObject *codeobj_fc048ae62e98d67b43f949c41d7ea7d4;
static PyCodeObject *codeobj_36e5b231644e2870fc60d8b058f99004;
static PyCodeObject *codeobj_430a57b8f0a58523b830d32518f43620;
static PyCodeObject *codeobj_0357d6cd1f556e00a28d71590e5c6f5c;
static PyCodeObject *codeobj_7d018cf8b9bc1437fb99fb5a1845bdbd;
static PyCodeObject *codeobj_1b1f75ce236e73e2e9374cd5d9e3ccc0;
static PyCodeObject *codeobj_f4c97841ad82abddd45a9d89a1c85045;
static PyCodeObject *codeobj_f076ce2421f7b03a97a72080814daeda;
static PyCodeObject *codeobj_514111c1a5df8603de5d67d9e0db68b2;
static PyCodeObject *codeobj_477c713fc232886fa1955e7eb8c050da;
static PyCodeObject *codeobj_76e050eb140159f97c596abee38a3af9;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[226]); CHECK_OBJECT(module_filename_obj);
    codeobj_647b8b6062d81078654e9408f230cd17 = MAKE_CODE_OBJECT(module_filename_obj, 182, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[37], mod_consts[37], mod_consts[227], NULL, 1, 0, 0);
    codeobj_e679cc00fa9bb510390fa6d28c105412 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[228], mod_consts[228], NULL, NULL, 0, 0, 0);
    codeobj_5c984834de402303c340c5ad32bd6871 = MAKE_CODE_OBJECT(module_filename_obj, 382, CO_NOFREE, mod_consts[85], mod_consts[85], mod_consts[229], NULL, 0, 0, 0);
    codeobj_aa4ce93cea2a9280e99feccb3a96c584 = MAKE_CODE_OBJECT(module_filename_obj, 431, CO_NOFREE, mod_consts[92], mod_consts[92], mod_consts[229], NULL, 0, 0, 0);
    codeobj_dd6da70bf9d976787d76d03b64e1283f = MAKE_CODE_OBJECT(module_filename_obj, 297, CO_NOFREE, mod_consts[65], mod_consts[65], mod_consts[229], NULL, 0, 0, 0);
    codeobj_ad9f2b63788dbe119b3f45689596ed88 = MAKE_CODE_OBJECT(module_filename_obj, 92, CO_NOFREE, mod_consts[15], mod_consts[15], mod_consts[229], NULL, 0, 0, 0);
    codeobj_22d69bee2c770bb2e74c15e940e8cef8 = MAKE_CODE_OBJECT(module_filename_obj, 136, CO_NOFREE, mod_consts[33], mod_consts[33], mod_consts[229], NULL, 0, 0, 0);
    codeobj_76f04fd65912700408b83c6dac385e3d = MAKE_CODE_OBJECT(module_filename_obj, 544, CO_NOFREE, mod_consts[119], mod_consts[119], mod_consts[229], NULL, 0, 0, 0);
    codeobj_5085d7a89ed12af3d42281efca988a00 = MAKE_CODE_OBJECT(module_filename_obj, 575, CO_NOFREE, mod_consts[125], mod_consts[125], mod_consts[229], NULL, 0, 0, 0);
    codeobj_eead991384a97d1ad3ea891a9bffd4be = MAKE_CODE_OBJECT(module_filename_obj, 649, CO_NOFREE, mod_consts[138], mod_consts[138], mod_consts[229], NULL, 0, 0, 0);
    codeobj_bb9f9367a8cef951b24934dc455ced47 = MAKE_CODE_OBJECT(module_filename_obj, 470, CO_NOFREE, mod_consts[101], mod_consts[101], mod_consts[229], NULL, 0, 0, 0);
    codeobj_0be3a33eda892766855e9e593f430e45 = MAKE_CODE_OBJECT(module_filename_obj, 262, CO_NOFREE, mod_consts[57], mod_consts[57], mod_consts[229], NULL, 0, 0, 0);
    codeobj_9e0fe831b8e2a744aa9d3f113b3a39e5 = MAKE_CODE_OBJECT(module_filename_obj, 210, CO_NOFREE, mod_consts[51], mod_consts[51], mod_consts[229], NULL, 0, 0, 0);
    codeobj_345c2917192e8f850d3dd6ab7827c01e = MAKE_CODE_OBJECT(module_filename_obj, 606, CO_NOFREE, mod_consts[130], mod_consts[130], mod_consts[229], NULL, 0, 0, 0);
    codeobj_988862692cdc9850a09610961ea820b2 = MAKE_CODE_OBJECT(module_filename_obj, 95, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[172], mod_consts[172], mod_consts[230], NULL, 4, 0, 0);
    codeobj_b2f764ab5e0250250229c187d9299450 = MAKE_CODE_OBJECT(module_filename_obj, 140, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[172], mod_consts[172], mod_consts[230], NULL, 4, 0, 0);
    codeobj_c7f22820f9a87859fffb3e49c6231c4a = MAKE_CODE_OBJECT(module_filename_obj, 213, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[172], mod_consts[172], mod_consts[230], NULL, 4, 0, 0);
    codeobj_a186867c3f9b3c67b231c15bad10a01f = MAKE_CODE_OBJECT(module_filename_obj, 265, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[172], mod_consts[172], mod_consts[230], NULL, 4, 0, 0);
    codeobj_4eab6374cf9d075bcbc4d7063f54e2f9 = MAKE_CODE_OBJECT(module_filename_obj, 475, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[172], mod_consts[172], mod_consts[230], NULL, 4, 0, 0);
    codeobj_10735ebeb38bc196b0bb17585db9c33c = MAKE_CODE_OBJECT(module_filename_obj, 547, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[172], mod_consts[172], mod_consts[230], NULL, 4, 0, 0);
    codeobj_63ace2698c66b7e3bed989917a9c7b6f = MAKE_CODE_OBJECT(module_filename_obj, 578, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[172], mod_consts[172], mod_consts[230], NULL, 4, 0, 0);
    codeobj_5e3484542a566bdee3917cbd135450cf = MAKE_CODE_OBJECT(module_filename_obj, 609, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[172], mod_consts[172], mod_consts[230], NULL, 4, 0, 0);
    codeobj_861b51623cd62076b3ea8a7f72cc173a = MAKE_CODE_OBJECT(module_filename_obj, 664, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[172], mod_consts[172], mod_consts[230], NULL, 4, 0, 0);
    codeobj_1dea7cb8c76a75069be97bb4832990eb = MAKE_CODE_OBJECT(module_filename_obj, 300, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[172], mod_consts[172], mod_consts[231], NULL, 4, 0, 0);
    codeobj_ceed3b8c0904e85e69066524d473c134 = MAKE_CODE_OBJECT(module_filename_obj, 436, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[172], mod_consts[172], mod_consts[232], NULL, 4, 0, 0);
    codeobj_405035a4c203576113a6d3086c4d0b6d = MAKE_CODE_OBJECT(module_filename_obj, 388, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[172], mod_consts[172], mod_consts[233], NULL, 4, 0, 0);
    codeobj_5b40ac93c2d6c7f39f8529c055df8015 = MAKE_CODE_OBJECT(module_filename_obj, 346, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[172], mod_consts[172], mod_consts[234], NULL, 4, 0, 0);
    codeobj_aa8c8eb3239fb45f4eb742e1a67a6b8a = MAKE_CODE_OBJECT(module_filename_obj, 113, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[174], mod_consts[174], mod_consts[235], NULL, 1, 0, 0);
    codeobj_320b7d0d2b552c4d9e727089e8234ea3 = MAKE_CODE_OBJECT(module_filename_obj, 155, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[174], mod_consts[174], mod_consts[235], NULL, 1, 0, 0);
    codeobj_e3ab098afffbbdf4299e77bfb37db923 = MAKE_CODE_OBJECT(module_filename_obj, 228, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[174], mod_consts[174], mod_consts[235], NULL, 1, 0, 0);
    codeobj_88c1c11c442b66e37a172e9b157bef3d = MAKE_CODE_OBJECT(module_filename_obj, 271, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[174], mod_consts[174], mod_consts[235], NULL, 1, 0, 0);
    codeobj_3e117b2bf495016ab769c655de4fa118 = MAKE_CODE_OBJECT(module_filename_obj, 316, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[174], mod_consts[174], mod_consts[235], NULL, 1, 0, 0);
    codeobj_8ea1cab079976ff91470642f1c7dc83e = MAKE_CODE_OBJECT(module_filename_obj, 362, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[174], mod_consts[174], mod_consts[235], NULL, 1, 0, 0);
    codeobj_54d72b3d67e21c0e1f04de166ade5a20 = MAKE_CODE_OBJECT(module_filename_obj, 447, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[174], mod_consts[174], mod_consts[235], NULL, 1, 0, 0);
    codeobj_98471cd8d3e98b993e47830ee662ef30 = MAKE_CODE_OBJECT(module_filename_obj, 489, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[174], mod_consts[174], mod_consts[235], NULL, 1, 0, 0);
    codeobj_b72670c7af8872b75391a36bbdb1cab0 = MAKE_CODE_OBJECT(module_filename_obj, 558, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[174], mod_consts[174], mod_consts[235], NULL, 1, 0, 0);
    codeobj_74a908f0b575950cbc78e560ccca653e = MAKE_CODE_OBJECT(module_filename_obj, 589, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[174], mod_consts[174], mod_consts[235], NULL, 1, 0, 0);
    codeobj_e23a9646c52656abe4c54c89795e762f = MAKE_CODE_OBJECT(module_filename_obj, 626, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[174], mod_consts[174], mod_consts[235], NULL, 1, 0, 0);
    codeobj_12573e910eab43e3f5baadb25e52bd0f = MAKE_CODE_OBJECT(module_filename_obj, 681, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[174], mod_consts[174], mod_consts[235], NULL, 1, 0, 0);
    codeobj_72bfd1af4ec0868cca3cea92fdff1391 = MAKE_CODE_OBJECT(module_filename_obj, 398, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[174], mod_consts[174], mod_consts[236], NULL, 1, 0, 0);
    codeobj_1afbab5d8f6c5bcd330a759fe55d6904 = MAKE_CODE_OBJECT(module_filename_obj, 632, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[216], mod_consts[216], mod_consts[14], NULL, 1, 0, 0);
    codeobj_cafeae836fe5b3d7a303f978e377b5af = MAKE_CODE_OBJECT(module_filename_obj, 413, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[202], mod_consts[202], mod_consts[221], NULL, 2, 0, 0);
    codeobj_29eaa102e8ae6445d5e24adf330f979e = MAKE_CODE_OBJECT(module_filename_obj, 453, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[205], mod_consts[205], mod_consts[237], NULL, 3, 0, 0);
    codeobj_88dd6c1d8621e7b00a249fff4fe36b10 = MAKE_CODE_OBJECT(module_filename_obj, 74, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[7], mod_consts[7], NULL, NULL, 0, 0, 0);
    codeobj_81128da0653898e6ace28dfc76cdd66b = MAKE_CODE_OBJECT(module_filename_obj, 519, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[110], mod_consts[110], mod_consts[238], NULL, 1, 0, 0);
    codeobj_0c171d1716088877bb7331d474cd9df7 = MAKE_CODE_OBJECT(module_filename_obj, 61, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[166], mod_consts[166], NULL, NULL, 0, 0, 0);
    codeobj_4f5fd3a67f7d7044fe627ed9d3b04aa0 = MAKE_CODE_OBJECT(module_filename_obj, 531, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[113], mod_consts[113], mod_consts[238], NULL, 1, 0, 0);
    codeobj_48912133c975765978884ea671cbb058 = MAKE_CODE_OBJECT(module_filename_obj, 322, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[191], mod_consts[191], mod_consts[64], NULL, 1, 0, 0);
    codeobj_fc048ae62e98d67b43f949c41d7ea7d4 = MAKE_CODE_OBJECT(module_filename_obj, 119, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[177], mod_consts[177], mod_consts[14], NULL, 1, 0, 0);
    codeobj_36e5b231644e2870fc60d8b058f99004 = MAKE_CODE_OBJECT(module_filename_obj, 366, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[196], mod_consts[196], NULL, NULL, 0, 0, 0);
    codeobj_430a57b8f0a58523b830d32518f43620 = MAKE_CODE_OBJECT(module_filename_obj, 507, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[107], mod_consts[107], mod_consts[238], NULL, 1, 0, 0);
    codeobj_0357d6cd1f556e00a28d71590e5c6f5c = MAKE_CODE_OBJECT(module_filename_obj, 495, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[104], mod_consts[104], mod_consts[238], NULL, 1, 0, 0);
    codeobj_7d018cf8b9bc1437fb99fb5a1845bdbd = MAKE_CODE_OBJECT(module_filename_obj, 161, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[182], mod_consts[182], mod_consts[239], NULL, 3, 0, 0);
    codeobj_1b1f75ce236e73e2e9374cd5d9e3ccc0 = MAKE_CODE_OBJECT(module_filename_obj, 562, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[210], mod_consts[210], mod_consts[240], NULL, 1, 0, 0);
    codeobj_f4c97841ad82abddd45a9d89a1c85045 = MAKE_CODE_OBJECT(module_filename_obj, 593, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[213], mod_consts[213], mod_consts[240], NULL, 1, 0, 0);
    codeobj_f076ce2421f7b03a97a72080814daeda = MAKE_CODE_OBJECT(module_filename_obj, 690, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[225], mod_consts[225], mod_consts[241], NULL, 1, 2, 0);
    codeobj_514111c1a5df8603de5d67d9e0db68b2 = MAKE_CODE_OBJECT(module_filename_obj, 277, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[188], mod_consts[188], mod_consts[197], NULL, 1, 0, 0);
    codeobj_477c713fc232886fa1955e7eb8c050da = MAKE_CODE_OBJECT(module_filename_obj, 234, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[185], mod_consts[185], mod_consts[242], NULL, 1, 0, 0);
    codeobj_76e050eb140159f97c596abee38a3af9 = MAKE_CODE_OBJECT(module_filename_obj, 43, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[165], mod_consts[165], mod_consts[243], NULL, 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_GENERATOR_attr$validators$$$function__3_disabled$$$genobj__1_disabled();


static PyObject *MAKE_GENERATOR_attr$validators$$$function__9_matches_re$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__5_complex_call_helper_star_list(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_attr$validators$$$function__10___call__();


static PyObject *MAKE_FUNCTION_attr$validators$$$function__11___repr__();


static PyObject *MAKE_FUNCTION_attr$validators$$$function__12_provides();


static PyObject *MAKE_FUNCTION_attr$validators$$$function__13___call__();


static PyObject *MAKE_FUNCTION_attr$validators$$$function__14___repr__();


static PyObject *MAKE_FUNCTION_attr$validators$$$function__15_optional();


static PyObject *MAKE_FUNCTION_attr$validators$$$function__16___call__();


static PyObject *MAKE_FUNCTION_attr$validators$$$function__17___repr__();


static PyObject *MAKE_FUNCTION_attr$validators$$$function__18_in_();


static PyObject *MAKE_FUNCTION_attr$validators$$$function__19___call__();


static PyObject *MAKE_FUNCTION_attr$validators$$$function__1_set_disabled();


static PyObject *MAKE_FUNCTION_attr$validators$$$function__20___repr__();


static PyObject *MAKE_FUNCTION_attr$validators$$$function__21_is_callable();


static PyObject *MAKE_FUNCTION_attr$validators$$$function__22___call__();


static PyObject *MAKE_FUNCTION_attr$validators$$$function__23___repr__();


static PyObject *MAKE_FUNCTION_attr$validators$$$function__24_deep_iterable(PyObject *defaults);


static PyObject *MAKE_FUNCTION_attr$validators$$$function__25___call__();


static PyObject *MAKE_FUNCTION_attr$validators$$$function__26___repr__();


static PyObject *MAKE_FUNCTION_attr$validators$$$function__27_deep_mapping(PyObject *defaults);


static PyObject *MAKE_FUNCTION_attr$validators$$$function__28___call__();


static PyObject *MAKE_FUNCTION_attr$validators$$$function__29___repr__();


static PyObject *MAKE_FUNCTION_attr$validators$$$function__2_get_disabled();


static PyObject *MAKE_FUNCTION_attr$validators$$$function__30_lt();


static PyObject *MAKE_FUNCTION_attr$validators$$$function__31_le();


static PyObject *MAKE_FUNCTION_attr$validators$$$function__32_ge();


static PyObject *MAKE_FUNCTION_attr$validators$$$function__33_gt();


static PyObject *MAKE_FUNCTION_attr$validators$$$function__34___call__();


static PyObject *MAKE_FUNCTION_attr$validators$$$function__35___repr__();


static PyObject *MAKE_FUNCTION_attr$validators$$$function__36_max_len();


static PyObject *MAKE_FUNCTION_attr$validators$$$function__37___call__();


static PyObject *MAKE_FUNCTION_attr$validators$$$function__38___repr__();


static PyObject *MAKE_FUNCTION_attr$validators$$$function__39_min_len();


static PyObject *MAKE_FUNCTION_attr$validators$$$function__3_disabled();


static PyObject *MAKE_FUNCTION_attr$validators$$$function__40___call__();


static PyObject *MAKE_FUNCTION_attr$validators$$$function__41___repr__();


static PyObject *MAKE_FUNCTION_attr$validators$$$function__42__subclass_of();


static PyObject *MAKE_FUNCTION_attr$validators$$$function__43___call__();


static PyObject *MAKE_FUNCTION_attr$validators$$$function__44___repr__();


static PyObject *MAKE_FUNCTION_attr$validators$$$function__45_not_(PyObject *kw_defaults);


static PyObject *MAKE_FUNCTION_attr$validators$$$function__4___call__();


static PyObject *MAKE_FUNCTION_attr$validators$$$function__5___repr__();


static PyObject *MAKE_FUNCTION_attr$validators$$$function__6_instance_of();


static PyObject *MAKE_FUNCTION_attr$validators$$$function__7___call__();


static PyObject *MAKE_FUNCTION_attr$validators$$$function__8___repr__();


static PyObject *MAKE_FUNCTION_attr$validators$$$function__9_matches_re(PyObject *defaults);


// The module function definitions.
static PyObject *impl_attr$validators$$$function__1_set_disabled(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_disabled = python_pars[0];
    struct Nuitka_FrameObject *frame_76e050eb140159f97c596abee38a3af9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_76e050eb140159f97c596abee38a3af9 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_76e050eb140159f97c596abee38a3af9)) {
        Py_XDECREF(cache_frame_76e050eb140159f97c596abee38a3af9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_76e050eb140159f97c596abee38a3af9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_76e050eb140159f97c596abee38a3af9 = MAKE_FUNCTION_FRAME(tstate, codeobj_76e050eb140159f97c596abee38a3af9, module_attr$validators, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_76e050eb140159f97c596abee38a3af9->m_type_description == NULL);
    frame_76e050eb140159f97c596abee38a3af9 = cache_frame_76e050eb140159f97c596abee38a3af9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_76e050eb140159f97c596abee38a3af9);
    assert(Py_REFCNT(frame_76e050eb140159f97c596abee38a3af9) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_operand_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_disabled);
        tmp_operand_value_1 = par_disabled;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = (tmp_res == 0) ? Py_True : Py_False;
        frame_76e050eb140159f97c596abee38a3af9->m_frame.f_lineno = 58;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
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
        exception_tb = MAKE_TRACEBACK(frame_76e050eb140159f97c596abee38a3af9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_76e050eb140159f97c596abee38a3af9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_76e050eb140159f97c596abee38a3af9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_76e050eb140159f97c596abee38a3af9,
        type_description_1,
        par_disabled
    );


    // Release cached frame if used for exception.
    if (frame_76e050eb140159f97c596abee38a3af9 == cache_frame_76e050eb140159f97c596abee38a3af9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_76e050eb140159f97c596abee38a3af9);
        cache_frame_76e050eb140159f97c596abee38a3af9 = NULL;
    }

    assertFrameObject(frame_76e050eb140159f97c596abee38a3af9);

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
    CHECK_OBJECT(par_disabled);
    Py_DECREF(par_disabled);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_disabled);
    Py_DECREF(par_disabled);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_attr$validators$$$function__2_get_disabled(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_0c171d1716088877bb7331d474cd9df7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_0c171d1716088877bb7331d474cd9df7 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0c171d1716088877bb7331d474cd9df7)) {
        Py_XDECREF(cache_frame_0c171d1716088877bb7331d474cd9df7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0c171d1716088877bb7331d474cd9df7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0c171d1716088877bb7331d474cd9df7 = MAKE_FUNCTION_FRAME(tstate, codeobj_0c171d1716088877bb7331d474cd9df7, module_attr$validators, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0c171d1716088877bb7331d474cd9df7->m_type_description == NULL);
    frame_0c171d1716088877bb7331d474cd9df7 = cache_frame_0c171d1716088877bb7331d474cd9df7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_0c171d1716088877bb7331d474cd9df7);
    assert(Py_REFCNT(frame_0c171d1716088877bb7331d474cd9df7) == 2);

    // Framed code:
    {
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto frame_exception_exit_1;
        }
        frame_0c171d1716088877bb7331d474cd9df7->m_frame.f_lineno = 70;
        tmp_operand_value_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        if (tmp_operand_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto frame_exception_exit_1;
        }
        tmp_return_value = (tmp_res == 0) ? Py_True : Py_False;
        Py_INCREF(tmp_return_value);
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
        exception_tb = MAKE_TRACEBACK(frame_0c171d1716088877bb7331d474cd9df7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0c171d1716088877bb7331d474cd9df7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0c171d1716088877bb7331d474cd9df7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0c171d1716088877bb7331d474cd9df7,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_0c171d1716088877bb7331d474cd9df7 == cache_frame_0c171d1716088877bb7331d474cd9df7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0c171d1716088877bb7331d474cd9df7);
        cache_frame_0c171d1716088877bb7331d474cd9df7 = NULL;
    }

    assertFrameObject(frame_0c171d1716088877bb7331d474cd9df7);

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


static PyObject *impl_attr$validators$$$function__3_disabled(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.


    tmp_return_value = MAKE_GENERATOR_attr$validators$$$function__3_disabled$$$genobj__1_disabled();

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



#if 1
struct attr$validators$$$function__3_disabled$$$genobj__1_disabled_locals {
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
};
#endif

static PyObject *attr$validators$$$function__3_disabled$$$genobj__1_disabled_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
    struct attr$validators$$$function__3_disabled$$$genobj__1_disabled_locals *generator_heap = (struct attr$validators$$$function__3_disabled$$$genobj__1_disabled_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
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
        cache_m_frame = MAKE_FUNCTION_FRAME(tstate, codeobj_88dd6c1d8621e7b00a249fff4fe36b10, module_attr$validators, 0);
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
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 84;

            goto frame_exception_exit_1;
        }
        generator->m_frame->m_frame.f_lineno = 84;
        tmp_call_result_1 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_1, mod_consts[5]);

        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 84;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    // Tried code:
    {
        PyObject *tmp_expression_value_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        tmp_expression_value_1 = Py_None;
        Py_INCREF(tmp_expression_value_1);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_1;
        yield_return_1:
        if (yield_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 86;

            goto try_except_handler_1;
        }
        tmp_yield_result_1 = yield_return_value;
        Py_DECREF(tmp_yield_result_1);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Preserve existing published exception id 1.
    generator_heap->exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

    if (generator_heap->exception_keeper_tb_1 == NULL) {
        generator_heap->exception_keeper_tb_1 = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_keeper_lineno_1);
    } else if (generator_heap->exception_keeper_lineno_1 != 0) {
        generator_heap->exception_keeper_tb_1 = ADD_TRACEBACK(generator_heap->exception_keeper_tb_1, generator->m_frame, generator_heap->exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &generator_heap->exception_keeper_type_1, &generator_heap->exception_keeper_value_1, &generator_heap->exception_keeper_tb_1);
    // Tried code:
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_call_result_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 88;

            goto try_except_handler_2;
        }
        generator->m_frame->m_frame.f_lineno = 88;
        tmp_call_result_2 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_2, mod_consts[6]);

        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 88;

            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    generator_heap->tmp_result = RERAISE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
    if (unlikely(generator_heap->tmp_result == false)) {
        generator_heap->exception_lineno = 85;
    }

    if (generator_heap->exception_tb && generator_heap->exception_tb->tb_frame == &generator->m_frame->m_frame) generator->m_frame->m_frame.f_lineno = generator_heap->exception_tb->tb_lineno;

    goto try_except_handler_2;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &generator_heap->exception_preserved_1);

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_1:;
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_call_result_3;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 88;

            goto frame_exception_exit_1;
        }
        generator->m_frame->m_frame.f_lineno = 88;
        tmp_call_result_3 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_3, mod_consts[6]);

        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 88;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }

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
            generator_heap->type_description_1
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
    goto function_exception_exit;

    frame_no_exception_1:;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(tstate, generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_attr$validators$$$function__3_disabled$$$genobj__1_disabled() {
    return Nuitka_Generator_New(
        attr$validators$$$function__3_disabled$$$genobj__1_disabled_context,
        module_attr$validators,
        mod_consts[7],
#if PYTHON_VERSION >= 0x350
        NULL,
#endif
        codeobj_88dd6c1d8621e7b00a249fff4fe36b10,
        NULL,
        0,
#if 1
        sizeof(struct attr$validators$$$function__3_disabled$$$genobj__1_disabled_locals)
#else
        0
#endif
    );
}


static PyObject *impl_attr$validators$$$function__4___call__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_inst = python_pars[1];
    PyObject *par_attr = python_pars[2];
    PyObject *par_value = python_pars[3];
    struct Nuitka_FrameObject *frame_988862692cdc9850a09610961ea820b2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_988862692cdc9850a09610961ea820b2 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_988862692cdc9850a09610961ea820b2)) {
        Py_XDECREF(cache_frame_988862692cdc9850a09610961ea820b2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_988862692cdc9850a09610961ea820b2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_988862692cdc9850a09610961ea820b2 = MAKE_FUNCTION_FRAME(tstate, codeobj_988862692cdc9850a09610961ea820b2, module_attr$validators, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_988862692cdc9850a09610961ea820b2->m_type_description == NULL);
    frame_988862692cdc9850a09610961ea820b2 = cache_frame_988862692cdc9850a09610961ea820b2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_988862692cdc9850a09610961ea820b2);
    assert(Py_REFCNT(frame_988862692cdc9850a09610961ea820b2) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_value);
        tmp_isinstance_inst_1 = par_value;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[8]);
        if (tmp_isinstance_cls_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "oooo";
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
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_kw_call_dict_value_2_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_kw_call_dict_value_3_1;
        PyObject *tmp_make_exception_arg_2;
        PyObject *tmp_make_exception_arg_3;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_make_exception_arg_4;
        tmp_kw_call_arg_value_0_1 = mod_consts[9];
        CHECK_OBJECT(par_attr);
        tmp_expression_value_2 = par_attr;
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[10]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_kw_call_dict_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[8]);
        if (tmp_kw_call_dict_value_1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_dict_value_0_1);

            exception_lineno = 104;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_value);
        tmp_expression_value_4 = par_value;
        tmp_kw_call_dict_value_2_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tstate, tmp_expression_value_4);
        if (tmp_kw_call_dict_value_2_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_dict_value_0_1);
            Py_DECREF(tmp_kw_call_dict_value_1_1);

            exception_lineno = 105;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_value);
        tmp_kw_call_dict_value_3_1 = par_value;
        frame_988862692cdc9850a09610961ea820b2->m_frame.f_lineno = 101;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[4] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1};
            tmp_make_exception_arg_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, unicode_builtin_format, args, kw_values, mod_consts[11]);
        }

        Py_DECREF(tmp_kw_call_dict_value_0_1);
        Py_DECREF(tmp_kw_call_dict_value_1_1);
        Py_DECREF(tmp_kw_call_dict_value_2_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_attr);
        tmp_make_exception_arg_2 = par_attr;
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_make_exception_arg_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[8]);
        if (tmp_make_exception_arg_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_make_exception_arg_1);

            exception_lineno = 109;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_value);
        tmp_make_exception_arg_4 = par_value;
        frame_988862692cdc9850a09610961ea820b2->m_frame.f_lineno = 100;
        {
            PyObject *call_args[] = {tmp_make_exception_arg_1, tmp_make_exception_arg_2, tmp_make_exception_arg_3, tmp_make_exception_arg_4};
            tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS4(tstate, PyExc_TypeError, call_args);
        }

        Py_DECREF(tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_3);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 100;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_988862692cdc9850a09610961ea820b2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_988862692cdc9850a09610961ea820b2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_988862692cdc9850a09610961ea820b2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_988862692cdc9850a09610961ea820b2,
        type_description_1,
        par_self,
        par_inst,
        par_attr,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_988862692cdc9850a09610961ea820b2 == cache_frame_988862692cdc9850a09610961ea820b2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_988862692cdc9850a09610961ea820b2);
        cache_frame_988862692cdc9850a09610961ea820b2 = NULL;
    }

    assertFrameObject(frame_988862692cdc9850a09610961ea820b2);

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
    CHECK_OBJECT(par_inst);
    Py_DECREF(par_inst);
    CHECK_OBJECT(par_attr);
    Py_DECREF(par_attr);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_inst);
    Py_DECREF(par_inst);
    CHECK_OBJECT(par_attr);
    Py_DECREF(par_attr);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_attr$validators$$$function__5___repr__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_aa8c8eb3239fb45f4eb742e1a67a6b8a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_aa8c8eb3239fb45f4eb742e1a67a6b8a = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_aa8c8eb3239fb45f4eb742e1a67a6b8a)) {
        Py_XDECREF(cache_frame_aa8c8eb3239fb45f4eb742e1a67a6b8a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_aa8c8eb3239fb45f4eb742e1a67a6b8a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_aa8c8eb3239fb45f4eb742e1a67a6b8a = MAKE_FUNCTION_FRAME(tstate, codeobj_aa8c8eb3239fb45f4eb742e1a67a6b8a, module_attr$validators, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_aa8c8eb3239fb45f4eb742e1a67a6b8a->m_type_description == NULL);
    frame_aa8c8eb3239fb45f4eb742e1a67a6b8a = cache_frame_aa8c8eb3239fb45f4eb742e1a67a6b8a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_aa8c8eb3239fb45f4eb742e1a67a6b8a);
    assert(Py_REFCNT(frame_aa8c8eb3239fb45f4eb742e1a67a6b8a) == 2);

    // Framed code:
    {
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_1;
        tmp_kw_call_arg_value_0_1 = mod_consts[13];
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[8]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_aa8c8eb3239fb45f4eb742e1a67a6b8a->m_frame.f_lineno = 114;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, unicode_builtin_format, args, kw_values, mod_consts[14]);
        }

        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
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
        exception_tb = MAKE_TRACEBACK(frame_aa8c8eb3239fb45f4eb742e1a67a6b8a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_aa8c8eb3239fb45f4eb742e1a67a6b8a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_aa8c8eb3239fb45f4eb742e1a67a6b8a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_aa8c8eb3239fb45f4eb742e1a67a6b8a,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_aa8c8eb3239fb45f4eb742e1a67a6b8a == cache_frame_aa8c8eb3239fb45f4eb742e1a67a6b8a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_aa8c8eb3239fb45f4eb742e1a67a6b8a);
        cache_frame_aa8c8eb3239fb45f4eb742e1a67a6b8a = NULL;
    }

    assertFrameObject(frame_aa8c8eb3239fb45f4eb742e1a67a6b8a);

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


static PyObject *impl_attr$validators$$$function__6_instance_of(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_type = python_pars[0];
    struct Nuitka_FrameObject *frame_fc048ae62e98d67b43f949c41d7ea7d4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_fc048ae62e98d67b43f949c41d7ea7d4 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_fc048ae62e98d67b43f949c41d7ea7d4)) {
        Py_XDECREF(cache_frame_fc048ae62e98d67b43f949c41d7ea7d4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_fc048ae62e98d67b43f949c41d7ea7d4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_fc048ae62e98d67b43f949c41d7ea7d4 = MAKE_FUNCTION_FRAME(tstate, codeobj_fc048ae62e98d67b43f949c41d7ea7d4, module_attr$validators, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_fc048ae62e98d67b43f949c41d7ea7d4->m_type_description == NULL);
    frame_fc048ae62e98d67b43f949c41d7ea7d4 = cache_frame_fc048ae62e98d67b43f949c41d7ea7d4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_fc048ae62e98d67b43f949c41d7ea7d4);
    assert(Py_REFCNT(frame_fc048ae62e98d67b43f949c41d7ea7d4) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_type);
        tmp_args_element_value_1 = par_type;
        frame_fc048ae62e98d67b43f949c41d7ea7d4->m_frame.f_lineno = 132;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
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
        exception_tb = MAKE_TRACEBACK(frame_fc048ae62e98d67b43f949c41d7ea7d4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_fc048ae62e98d67b43f949c41d7ea7d4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_fc048ae62e98d67b43f949c41d7ea7d4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_fc048ae62e98d67b43f949c41d7ea7d4,
        type_description_1,
        par_type
    );


    // Release cached frame if used for exception.
    if (frame_fc048ae62e98d67b43f949c41d7ea7d4 == cache_frame_fc048ae62e98d67b43f949c41d7ea7d4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_fc048ae62e98d67b43f949c41d7ea7d4);
        cache_frame_fc048ae62e98d67b43f949c41d7ea7d4 = NULL;
    }

    assertFrameObject(frame_fc048ae62e98d67b43f949c41d7ea7d4);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_type);
    Py_DECREF(par_type);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_type);
    Py_DECREF(par_type);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_attr$validators$$$function__7___call__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_inst = python_pars[1];
    PyObject *par_attr = python_pars[2];
    PyObject *par_value = python_pars[3];
    struct Nuitka_FrameObject *frame_b2f764ab5e0250250229c187d9299450;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_b2f764ab5e0250250229c187d9299450 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b2f764ab5e0250250229c187d9299450)) {
        Py_XDECREF(cache_frame_b2f764ab5e0250250229c187d9299450);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b2f764ab5e0250250229c187d9299450 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b2f764ab5e0250250229c187d9299450 = MAKE_FUNCTION_FRAME(tstate, codeobj_b2f764ab5e0250250229c187d9299450, module_attr$validators, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b2f764ab5e0250250229c187d9299450->m_type_description == NULL);
    frame_b2f764ab5e0250250229c187d9299450 = cache_frame_b2f764ab5e0250250229c187d9299450;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_b2f764ab5e0250250229c187d9299450);
    assert(Py_REFCNT(frame_b2f764ab5e0250250229c187d9299450) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_value);
        tmp_args_element_value_1 = par_value;
        frame_b2f764ab5e0250250229c187d9299450->m_frame.f_lineno = 144;
        tmp_operand_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[17], tmp_args_element_value_1);
        if (tmp_operand_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "oooo";
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
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_kw_call_dict_value_2_1;
        PyObject *tmp_make_exception_arg_2;
        PyObject *tmp_make_exception_arg_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_make_exception_arg_4;
        tmp_kw_call_arg_value_0_1 = mod_consts[18];
        CHECK_OBJECT(par_attr);
        tmp_expression_value_1 = par_attr;
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[10]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[19]);
        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_dict_value_0_1);

            exception_lineno = 148;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[19]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_kw_call_dict_value_1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_dict_value_0_1);

            exception_lineno = 148;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_value);
        tmp_kw_call_dict_value_2_1 = par_value;
        frame_b2f764ab5e0250250229c187d9299450->m_frame.f_lineno = 146;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[3] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1};
            tmp_make_exception_arg_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, unicode_builtin_format, args, kw_values, mod_consts[20]);
        }

        Py_DECREF(tmp_kw_call_dict_value_0_1);
        Py_DECREF(tmp_kw_call_dict_value_1_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_attr);
        tmp_make_exception_arg_2 = par_attr;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_make_exception_arg_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[19]);
        if (tmp_make_exception_arg_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_make_exception_arg_1);

            exception_lineno = 151;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_value);
        tmp_make_exception_arg_4 = par_value;
        frame_b2f764ab5e0250250229c187d9299450->m_frame.f_lineno = 145;
        {
            PyObject *call_args[] = {tmp_make_exception_arg_1, tmp_make_exception_arg_2, tmp_make_exception_arg_3, tmp_make_exception_arg_4};
            tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS4(tstate, PyExc_ValueError, call_args);
        }

        Py_DECREF(tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_3);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 145;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b2f764ab5e0250250229c187d9299450, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b2f764ab5e0250250229c187d9299450->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b2f764ab5e0250250229c187d9299450, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b2f764ab5e0250250229c187d9299450,
        type_description_1,
        par_self,
        par_inst,
        par_attr,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_b2f764ab5e0250250229c187d9299450 == cache_frame_b2f764ab5e0250250229c187d9299450) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b2f764ab5e0250250229c187d9299450);
        cache_frame_b2f764ab5e0250250229c187d9299450 = NULL;
    }

    assertFrameObject(frame_b2f764ab5e0250250229c187d9299450);

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
    CHECK_OBJECT(par_inst);
    Py_DECREF(par_inst);
    CHECK_OBJECT(par_attr);
    Py_DECREF(par_attr);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_inst);
    Py_DECREF(par_inst);
    CHECK_OBJECT(par_attr);
    Py_DECREF(par_attr);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_attr$validators$$$function__8___repr__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_320b7d0d2b552c4d9e727089e8234ea3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_320b7d0d2b552c4d9e727089e8234ea3 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_320b7d0d2b552c4d9e727089e8234ea3)) {
        Py_XDECREF(cache_frame_320b7d0d2b552c4d9e727089e8234ea3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_320b7d0d2b552c4d9e727089e8234ea3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_320b7d0d2b552c4d9e727089e8234ea3 = MAKE_FUNCTION_FRAME(tstate, codeobj_320b7d0d2b552c4d9e727089e8234ea3, module_attr$validators, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_320b7d0d2b552c4d9e727089e8234ea3->m_type_description == NULL);
    frame_320b7d0d2b552c4d9e727089e8234ea3 = cache_frame_320b7d0d2b552c4d9e727089e8234ea3;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_320b7d0d2b552c4d9e727089e8234ea3);
    assert(Py_REFCNT(frame_320b7d0d2b552c4d9e727089e8234ea3) == 2);

    // Framed code:
    {
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_1;
        tmp_kw_call_arg_value_0_1 = mod_consts[21];
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[19]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_320b7d0d2b552c4d9e727089e8234ea3->m_frame.f_lineno = 156;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, unicode_builtin_format, args, kw_values, mod_consts[22]);
        }

        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
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
        exception_tb = MAKE_TRACEBACK(frame_320b7d0d2b552c4d9e727089e8234ea3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_320b7d0d2b552c4d9e727089e8234ea3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_320b7d0d2b552c4d9e727089e8234ea3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_320b7d0d2b552c4d9e727089e8234ea3,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_320b7d0d2b552c4d9e727089e8234ea3 == cache_frame_320b7d0d2b552c4d9e727089e8234ea3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_320b7d0d2b552c4d9e727089e8234ea3);
        cache_frame_320b7d0d2b552c4d9e727089e8234ea3 = NULL;
    }

    assertFrameObject(frame_320b7d0d2b552c4d9e727089e8234ea3);

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


static PyObject *impl_attr$validators$$$function__9_matches_re(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_regex = python_pars[0];
    PyObject *par_flags = python_pars[1];
    PyObject *par_func = python_pars[2];
    PyObject *var_valid_funcs = NULL;
    PyObject *var_pattern = NULL;
    PyObject *var_match_func = NULL;
    PyObject *tmp_genexpr_1__$0 = NULL;
    struct Nuitka_FrameObject *frame_7d018cf8b9bc1437fb99fb5a1845bdbd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_7d018cf8b9bc1437fb99fb5a1845bdbd = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_7d018cf8b9bc1437fb99fb5a1845bdbd)) {
        Py_XDECREF(cache_frame_7d018cf8b9bc1437fb99fb5a1845bdbd);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7d018cf8b9bc1437fb99fb5a1845bdbd == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7d018cf8b9bc1437fb99fb5a1845bdbd = MAKE_FUNCTION_FRAME(tstate, codeobj_7d018cf8b9bc1437fb99fb5a1845bdbd, module_attr$validators, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7d018cf8b9bc1437fb99fb5a1845bdbd->m_type_description == NULL);
    frame_7d018cf8b9bc1437fb99fb5a1845bdbd = cache_frame_7d018cf8b9bc1437fb99fb5a1845bdbd;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_7d018cf8b9bc1437fb99fb5a1845bdbd);
    assert(Py_REFCNT(frame_7d018cf8b9bc1437fb99fb5a1845bdbd) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[24]);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_TUPLE_EMPTY(4);
        {
            PyObject *tmp_expression_value_2;
            PyObject *tmp_expression_value_3;
            PyTuple_SET_ITEM(tmp_assign_source_1, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = Py_None;
            PyTuple_SET_ITEM0(tmp_assign_source_1, 1, tmp_tuple_element_1);
            tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_expression_value_2 == NULL)) {
                tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_expression_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 177;
                type_description_1 = "oooooo";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[25]);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 177;
                type_description_1 = "oooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_assign_source_1, 2, tmp_tuple_element_1);
            tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_expression_value_3 == NULL)) {
                tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_expression_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 177;
                type_description_1 = "oooooo";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[26]);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 177;
                type_description_1 = "oooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_assign_source_1, 3, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_assign_source_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        assert(var_valid_funcs == NULL);
        var_valid_funcs = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_func);
        tmp_cmp_expr_left_1 = par_func;
        CHECK_OBJECT(var_valid_funcs);
        tmp_cmp_expr_right_1 = var_valid_funcs;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
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
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_str_arg_value_1;
        PyObject *tmp_iterable_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_kw_call_arg_value_0_1 = mod_consts[27];
        tmp_str_arg_value_1 = mod_consts[28];
        tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts[29]);
        assert(tmp_called_value_1 != NULL);
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_set_arg_1;
            CHECK_OBJECT(var_valid_funcs);
            tmp_set_arg_1 = var_valid_funcs;
            tmp_iter_arg_1 = PySet_New(tmp_set_arg_1);
            if (tmp_iter_arg_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 183;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_2 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_1);
            Py_DECREF(tmp_iter_arg_1);
            assert(!(tmp_assign_source_2 == NULL));
            assert(tmp_genexpr_1__$0 == NULL);
            tmp_genexpr_1__$0 = tmp_assign_source_2;
        }
        // Tried code:
        {
            struct Nuitka_CellObject *tmp_closure_1[1];

            tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);

            tmp_args_element_value_1 = MAKE_GENERATOR_attr$validators$$$function__9_matches_re$$$genexpr__1_genexpr(tmp_closure_1);

            goto try_return_handler_2;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT(tmp_genexpr_1__$0);
        Py_DECREF(tmp_genexpr_1__$0);
        tmp_genexpr_1__$0 = NULL;
        goto outline_result_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_1:;
        frame_7d018cf8b9bc1437fb99fb5a1845bdbd->m_frame.f_lineno = 182;
        tmp_iterable_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_iterable_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_1_1 = UNICODE_JOIN(tstate, tmp_str_arg_value_1, tmp_iterable_value_1);
        Py_DECREF(tmp_iterable_value_1);
        if (tmp_kw_call_arg_value_1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_7d018cf8b9bc1437fb99fb5a1845bdbd->m_frame.f_lineno = 180;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            tmp_make_exception_arg_1 = CALL_FUNCTION_WITH_ARGS2(tstate, unicode_builtin_format, call_args);
        }

        Py_DECREF(tmp_kw_call_arg_value_1_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_7d018cf8b9bc1437fb99fb5a1845bdbd->m_frame.f_lineno = 179;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 179;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_regex);
        tmp_isinstance_inst_1 = par_regex;
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "oooooo";
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
        nuitka_bool tmp_condition_result_3;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_flags);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_flags);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_2;
        tmp_make_exception_arg_2 = mod_consts[31];
        frame_7d018cf8b9bc1437fb99fb5a1845bdbd->m_frame.f_lineno = 191;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        exception_lineno = 191;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    branch_no_3:;
    {
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(par_regex);
        tmp_assign_source_3 = par_regex;
        assert(var_pattern == NULL);
        Py_INCREF(tmp_assign_source_3);
        var_pattern = tmp_assign_source_3;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_regex);
        tmp_args_element_value_2 = par_regex;
        CHECK_OBJECT(par_flags);
        tmp_args_element_value_3 = par_flags;
        frame_7d018cf8b9bc1437fb99fb5a1845bdbd->m_frame.f_lineno = 197;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_assign_source_4 = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_1,
                mod_consts[32],
                call_args
            );
        }

        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_pattern == NULL);
        var_pattern = tmp_assign_source_4;
    }
    branch_end_2:;
    {
        bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(par_func);
        tmp_cmp_expr_left_2 = par_func;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[26]);
        if (tmp_cmp_expr_right_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
        Py_DECREF(tmp_cmp_expr_right_2);
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(var_pattern);
        tmp_expression_value_5 = var_pattern;
        tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[26]);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_match_func == NULL);
        var_match_func = tmp_assign_source_5;
    }
    goto branch_end_4;
    branch_no_4:;
    {
        bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(par_func);
        tmp_cmp_expr_left_3 = par_func;
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[25]);
        if (tmp_cmp_expr_right_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
        Py_DECREF(tmp_cmp_expr_right_3);
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(var_pattern);
        tmp_expression_value_7 = var_pattern;
        tmp_assign_source_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[25]);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_match_func == NULL);
        var_match_func = tmp_assign_source_6;
    }
    goto branch_end_5;
    branch_no_5:;
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(var_pattern);
        tmp_expression_value_8 = var_pattern;
        tmp_assign_source_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[24]);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_match_func == NULL);
        var_match_func = tmp_assign_source_7;
    }
    branch_end_5:;
    branch_end_4:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[33]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (var_pattern == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[19]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 206;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_4 = var_pattern;
        CHECK_OBJECT(var_match_func);
        tmp_args_element_value_5 = var_match_func;
        frame_7d018cf8b9bc1437fb99fb5a1845bdbd->m_frame.f_lineno = 206;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "oooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_7d018cf8b9bc1437fb99fb5a1845bdbd, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7d018cf8b9bc1437fb99fb5a1845bdbd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7d018cf8b9bc1437fb99fb5a1845bdbd, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7d018cf8b9bc1437fb99fb5a1845bdbd,
        type_description_1,
        par_regex,
        par_flags,
        par_func,
        var_valid_funcs,
        var_pattern,
        var_match_func
    );


    // Release cached frame if used for exception.
    if (frame_7d018cf8b9bc1437fb99fb5a1845bdbd == cache_frame_7d018cf8b9bc1437fb99fb5a1845bdbd) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7d018cf8b9bc1437fb99fb5a1845bdbd);
        cache_frame_7d018cf8b9bc1437fb99fb5a1845bdbd = NULL;
    }

    assertFrameObject(frame_7d018cf8b9bc1437fb99fb5a1845bdbd);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_valid_funcs);
    Py_DECREF(var_valid_funcs);
    var_valid_funcs = NULL;
    Py_XDECREF(var_pattern);
    var_pattern = NULL;
    CHECK_OBJECT(var_match_func);
    Py_DECREF(var_match_func);
    var_match_func = NULL;
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

    Py_XDECREF(var_valid_funcs);
    var_valid_funcs = NULL;
    Py_XDECREF(var_pattern);
    var_pattern = NULL;
    Py_XDECREF(var_match_func);
    var_match_func = NULL;
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
    CHECK_OBJECT(par_regex);
    Py_DECREF(par_regex);
    CHECK_OBJECT(par_flags);
    Py_DECREF(par_flags);
    CHECK_OBJECT(par_func);
    Py_DECREF(par_func);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_regex);
    Py_DECREF(par_regex);
    CHECK_OBJECT(par_flags);
    Py_DECREF(par_flags);
    CHECK_OBJECT(par_func);
    Py_DECREF(par_func);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct attr$validators$$$function__9_matches_re$$$genexpr__1_genexpr_locals {
    PyObject *var_e;
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

static PyObject *attr$validators$$$function__9_matches_re$$$genexpr__1_genexpr_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
    struct attr$validators$$$function__9_matches_re$$$genexpr__1_genexpr_locals *generator_heap = (struct attr$validators$$$function__9_matches_re$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_e = NULL;
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
        cache_m_frame = MAKE_FUNCTION_FRAME(tstate, codeobj_647b8b6062d81078654e9408f230cd17, module_attr$validators, sizeof(void *)+sizeof(void *));
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
                generator_heap->type_description_1 = "No";
                generator_heap->exception_lineno = 182;
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
            PyObject *old = generator_heap->var_e;
            generator_heap->var_e = tmp_assign_source_2;
            Py_INCREF(generator_heap->var_e);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_expression_value_1;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        PyObject *tmp_expression_value_2;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT(generator_heap->var_e);
        tmp_and_left_value_1 = generator_heap->var_e;
        tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
        if (tmp_and_left_truth_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 183;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(generator_heap->var_e);
        tmp_expression_value_2 = generator_heap->var_e;
        tmp_and_right_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[35]);
        if (tmp_and_right_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 183;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_or_left_value_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        Py_INCREF(tmp_and_left_value_1);
        tmp_or_left_value_1 = tmp_and_left_value_1;
        and_end_1:;
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_or_left_value_1);

            generator_heap->exception_lineno = 183;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        Py_DECREF(tmp_or_left_value_1);
        tmp_or_right_value_1 = mod_consts[36];
        Py_INCREF(tmp_or_right_value_1);
        tmp_expression_value_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_expression_value_1 = tmp_or_left_value_1;
        or_end_1:;
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_or_left_truth_1, sizeof(int), &tmp_or_left_value_1, sizeof(PyObject *), &tmp_or_right_value_1, sizeof(PyObject *), &tmp_and_left_truth_1, sizeof(int), &tmp_and_left_value_1, sizeof(PyObject *), &tmp_and_right_value_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_1;
        yield_return_1:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_or_left_truth_1, sizeof(int), &tmp_or_left_value_1, sizeof(PyObject *), &tmp_or_right_value_1, sizeof(PyObject *), &tmp_and_left_truth_1, sizeof(int), &tmp_and_left_value_1, sizeof(PyObject *), &tmp_and_right_value_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 183;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
        Py_DECREF(tmp_yield_result_1);
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 182;
        generator_heap->type_description_1 = "No";
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
            generator_heap->var_e
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

    Py_XDECREF(generator_heap->var_e);
    generator_heap->var_e = NULL;
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
    Py_XDECREF(generator_heap->var_e);
    generator_heap->var_e = NULL;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(tstate, generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_attr$validators$$$function__9_matches_re$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        attr$validators$$$function__9_matches_re$$$genexpr__1_genexpr_context,
        module_attr$validators,
        mod_consts[37],
#if PYTHON_VERSION >= 0x350
        mod_consts[38],
#endif
        codeobj_647b8b6062d81078654e9408f230cd17,
        closure,
        1,
#if 1
        sizeof(struct attr$validators$$$function__9_matches_re$$$genexpr__1_genexpr_locals)
#else
        0
#endif
    );
}


static PyObject *impl_attr$validators$$$function__10___call__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_inst = python_pars[1];
    PyObject *par_attr = python_pars[2];
    PyObject *par_value = python_pars[3];
    struct Nuitka_FrameObject *frame_c7f22820f9a87859fffb3e49c6231c4a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_c7f22820f9a87859fffb3e49c6231c4a = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c7f22820f9a87859fffb3e49c6231c4a)) {
        Py_XDECREF(cache_frame_c7f22820f9a87859fffb3e49c6231c4a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c7f22820f9a87859fffb3e49c6231c4a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c7f22820f9a87859fffb3e49c6231c4a = MAKE_FUNCTION_FRAME(tstate, codeobj_c7f22820f9a87859fffb3e49c6231c4a, module_attr$validators, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c7f22820f9a87859fffb3e49c6231c4a->m_type_description == NULL);
    frame_c7f22820f9a87859fffb3e49c6231c4a = cache_frame_c7f22820f9a87859fffb3e49c6231c4a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_c7f22820f9a87859fffb3e49c6231c4a);
    assert(Py_REFCNT(frame_c7f22820f9a87859fffb3e49c6231c4a) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[39]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_value);
        tmp_args_element_value_1 = par_value;
        frame_c7f22820f9a87859fffb3e49c6231c4a->m_frame.f_lineno = 217;
        tmp_operand_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[40], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_operand_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "oooo";
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
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_kw_call_dict_value_2_1;
        PyObject *tmp_make_exception_arg_2;
        PyObject *tmp_make_exception_arg_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_make_exception_arg_4;
        tmp_kw_call_arg_value_0_1 = mod_consts[41];
        CHECK_OBJECT(par_attr);
        tmp_expression_value_2 = par_attr;
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[10]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_kw_call_dict_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[39]);
        if (tmp_kw_call_dict_value_1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_dict_value_0_1);

            exception_lineno = 221;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_value);
        tmp_kw_call_dict_value_2_1 = par_value;
        frame_c7f22820f9a87859fffb3e49c6231c4a->m_frame.f_lineno = 219;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[3] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1};
            tmp_make_exception_arg_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, unicode_builtin_format, args, kw_values, mod_consts[42]);
        }

        Py_DECREF(tmp_kw_call_dict_value_0_1);
        Py_DECREF(tmp_kw_call_dict_value_1_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_attr);
        tmp_make_exception_arg_2 = par_attr;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_make_exception_arg_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[39]);
        if (tmp_make_exception_arg_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_make_exception_arg_1);

            exception_lineno = 224;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_value);
        tmp_make_exception_arg_4 = par_value;
        frame_c7f22820f9a87859fffb3e49c6231c4a->m_frame.f_lineno = 218;
        {
            PyObject *call_args[] = {tmp_make_exception_arg_1, tmp_make_exception_arg_2, tmp_make_exception_arg_3, tmp_make_exception_arg_4};
            tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS4(tstate, PyExc_TypeError, call_args);
        }

        Py_DECREF(tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_3);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 218;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c7f22820f9a87859fffb3e49c6231c4a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c7f22820f9a87859fffb3e49c6231c4a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c7f22820f9a87859fffb3e49c6231c4a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c7f22820f9a87859fffb3e49c6231c4a,
        type_description_1,
        par_self,
        par_inst,
        par_attr,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_c7f22820f9a87859fffb3e49c6231c4a == cache_frame_c7f22820f9a87859fffb3e49c6231c4a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c7f22820f9a87859fffb3e49c6231c4a);
        cache_frame_c7f22820f9a87859fffb3e49c6231c4a = NULL;
    }

    assertFrameObject(frame_c7f22820f9a87859fffb3e49c6231c4a);

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
    CHECK_OBJECT(par_inst);
    Py_DECREF(par_inst);
    CHECK_OBJECT(par_attr);
    Py_DECREF(par_attr);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_inst);
    Py_DECREF(par_inst);
    CHECK_OBJECT(par_attr);
    Py_DECREF(par_attr);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_attr$validators$$$function__11___repr__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_e3ab098afffbbdf4299e77bfb37db923;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e3ab098afffbbdf4299e77bfb37db923 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e3ab098afffbbdf4299e77bfb37db923)) {
        Py_XDECREF(cache_frame_e3ab098afffbbdf4299e77bfb37db923);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e3ab098afffbbdf4299e77bfb37db923 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e3ab098afffbbdf4299e77bfb37db923 = MAKE_FUNCTION_FRAME(tstate, codeobj_e3ab098afffbbdf4299e77bfb37db923, module_attr$validators, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e3ab098afffbbdf4299e77bfb37db923->m_type_description == NULL);
    frame_e3ab098afffbbdf4299e77bfb37db923 = cache_frame_e3ab098afffbbdf4299e77bfb37db923;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_e3ab098afffbbdf4299e77bfb37db923);
    assert(Py_REFCNT(frame_e3ab098afffbbdf4299e77bfb37db923) == 2);

    // Framed code:
    {
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_1;
        tmp_kw_call_arg_value_0_1 = mod_consts[43];
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[39]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_e3ab098afffbbdf4299e77bfb37db923->m_frame.f_lineno = 229;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, unicode_builtin_format, args, kw_values, mod_consts[44]);
        }

        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
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
        exception_tb = MAKE_TRACEBACK(frame_e3ab098afffbbdf4299e77bfb37db923, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e3ab098afffbbdf4299e77bfb37db923->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e3ab098afffbbdf4299e77bfb37db923, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e3ab098afffbbdf4299e77bfb37db923,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_e3ab098afffbbdf4299e77bfb37db923 == cache_frame_e3ab098afffbbdf4299e77bfb37db923) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e3ab098afffbbdf4299e77bfb37db923);
        cache_frame_e3ab098afffbbdf4299e77bfb37db923 = NULL;
    }

    assertFrameObject(frame_e3ab098afffbbdf4299e77bfb37db923);

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


static PyObject *impl_attr$validators$$$function__12_provides(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_interface = python_pars[0];
    PyObject *var_warnings = NULL;
    struct Nuitka_FrameObject *frame_477c713fc232886fa1955e7eb8c050da;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_477c713fc232886fa1955e7eb8c050da = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_477c713fc232886fa1955e7eb8c050da)) {
        Py_XDECREF(cache_frame_477c713fc232886fa1955e7eb8c050da);

#if _DEBUG_REFCOUNTS
        if (cache_frame_477c713fc232886fa1955e7eb8c050da == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_477c713fc232886fa1955e7eb8c050da = MAKE_FUNCTION_FRAME(tstate, codeobj_477c713fc232886fa1955e7eb8c050da, module_attr$validators, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_477c713fc232886fa1955e7eb8c050da->m_type_description == NULL);
    frame_477c713fc232886fa1955e7eb8c050da = cache_frame_477c713fc232886fa1955e7eb8c050da;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_477c713fc232886fa1955e7eb8c050da);
    assert(Py_REFCNT(frame_477c713fc232886fa1955e7eb8c050da) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[45];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_attr$validators;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[46];
        frame_477c713fc232886fa1955e7eb8c050da->m_frame.f_lineno = 250;
        tmp_assign_source_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_warnings == NULL);
        var_warnings = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(var_warnings);
        tmp_expression_value_1 = var_warnings;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[47]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = mod_consts[48];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "oo";
            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[50]);
        frame_477c713fc232886fa1955e7eb8c050da->m_frame.f_lineno = 252;
        tmp_call_result_1 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[51]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_interface);
        tmp_args_element_value_1 = par_interface;
        frame_477c713fc232886fa1955e7eb8c050da->m_frame.f_lineno = 258;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
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
        exception_tb = MAKE_TRACEBACK(frame_477c713fc232886fa1955e7eb8c050da, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_477c713fc232886fa1955e7eb8c050da->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_477c713fc232886fa1955e7eb8c050da, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_477c713fc232886fa1955e7eb8c050da,
        type_description_1,
        par_interface,
        var_warnings
    );


    // Release cached frame if used for exception.
    if (frame_477c713fc232886fa1955e7eb8c050da == cache_frame_477c713fc232886fa1955e7eb8c050da) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_477c713fc232886fa1955e7eb8c050da);
        cache_frame_477c713fc232886fa1955e7eb8c050da = NULL;
    }

    assertFrameObject(frame_477c713fc232886fa1955e7eb8c050da);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_warnings);
    Py_DECREF(var_warnings);
    var_warnings = NULL;
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

    Py_XDECREF(var_warnings);
    var_warnings = NULL;
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
    CHECK_OBJECT(par_interface);
    Py_DECREF(par_interface);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_interface);
    Py_DECREF(par_interface);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_attr$validators$$$function__13___call__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_inst = python_pars[1];
    PyObject *par_attr = python_pars[2];
    PyObject *par_value = python_pars[3];
    PyObject *tmp_return_value = NULL;
    struct Nuitka_FrameObject *frame_a186867c3f9b3c67b231c15bad10a01f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a186867c3f9b3c67b231c15bad10a01f = NULL;

    // Actual function body.
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_value);
        tmp_cmp_expr_left_1 = par_value;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;
    branch_no_1:;
    if (isFrameUnusable(cache_frame_a186867c3f9b3c67b231c15bad10a01f)) {
        Py_XDECREF(cache_frame_a186867c3f9b3c67b231c15bad10a01f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a186867c3f9b3c67b231c15bad10a01f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a186867c3f9b3c67b231c15bad10a01f = MAKE_FUNCTION_FRAME(tstate, codeobj_a186867c3f9b3c67b231c15bad10a01f, module_attr$validators, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a186867c3f9b3c67b231c15bad10a01f->m_type_description == NULL);
    frame_a186867c3f9b3c67b231c15bad10a01f = cache_frame_a186867c3f9b3c67b231c15bad10a01f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_a186867c3f9b3c67b231c15bad10a01f);
    assert(Py_REFCNT(frame_a186867c3f9b3c67b231c15bad10a01f) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_inst);
        tmp_args_element_value_1 = par_inst;
        CHECK_OBJECT(par_attr);
        tmp_args_element_value_2 = par_attr;
        CHECK_OBJECT(par_value);
        tmp_args_element_value_3 = par_value;
        frame_a186867c3f9b3c67b231c15bad10a01f->m_frame.f_lineno = 269;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS3(
                tstate,
                tmp_called_instance_1,
                mod_consts[53],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a186867c3f9b3c67b231c15bad10a01f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a186867c3f9b3c67b231c15bad10a01f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a186867c3f9b3c67b231c15bad10a01f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a186867c3f9b3c67b231c15bad10a01f,
        type_description_1,
        par_self,
        par_inst,
        par_attr,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_a186867c3f9b3c67b231c15bad10a01f == cache_frame_a186867c3f9b3c67b231c15bad10a01f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a186867c3f9b3c67b231c15bad10a01f);
        cache_frame_a186867c3f9b3c67b231c15bad10a01f = NULL;
    }

    assertFrameObject(frame_a186867c3f9b3c67b231c15bad10a01f);

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
    CHECK_OBJECT(par_inst);
    Py_DECREF(par_inst);
    CHECK_OBJECT(par_attr);
    Py_DECREF(par_attr);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_inst);
    Py_DECREF(par_inst);
    CHECK_OBJECT(par_attr);
    Py_DECREF(par_attr);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_attr$validators$$$function__14___repr__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_88c1c11c442b66e37a172e9b157bef3d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_88c1c11c442b66e37a172e9b157bef3d = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_88c1c11c442b66e37a172e9b157bef3d)) {
        Py_XDECREF(cache_frame_88c1c11c442b66e37a172e9b157bef3d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_88c1c11c442b66e37a172e9b157bef3d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_88c1c11c442b66e37a172e9b157bef3d = MAKE_FUNCTION_FRAME(tstate, codeobj_88c1c11c442b66e37a172e9b157bef3d, module_attr$validators, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_88c1c11c442b66e37a172e9b157bef3d->m_type_description == NULL);
    frame_88c1c11c442b66e37a172e9b157bef3d = cache_frame_88c1c11c442b66e37a172e9b157bef3d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_88c1c11c442b66e37a172e9b157bef3d);
    assert(Py_REFCNT(frame_88c1c11c442b66e37a172e9b157bef3d) == 2);

    // Framed code:
    {
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_1;
        tmp_kw_call_arg_value_0_1 = mod_consts[54];
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[53]);
        if (tmp_operand_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_0_1 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_88c1c11c442b66e37a172e9b157bef3d->m_frame.f_lineno = 272;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, unicode_builtin_format, args, kw_values, mod_consts[55]);
        }

        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
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
        exception_tb = MAKE_TRACEBACK(frame_88c1c11c442b66e37a172e9b157bef3d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_88c1c11c442b66e37a172e9b157bef3d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_88c1c11c442b66e37a172e9b157bef3d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_88c1c11c442b66e37a172e9b157bef3d,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_88c1c11c442b66e37a172e9b157bef3d == cache_frame_88c1c11c442b66e37a172e9b157bef3d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_88c1c11c442b66e37a172e9b157bef3d);
        cache_frame_88c1c11c442b66e37a172e9b157bef3d = NULL;
    }

    assertFrameObject(frame_88c1c11c442b66e37a172e9b157bef3d);

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


static PyObject *impl_attr$validators$$$function__15_optional(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_validator = python_pars[0];
    struct Nuitka_FrameObject *frame_514111c1a5df8603de5d67d9e0db68b2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_514111c1a5df8603de5d67d9e0db68b2 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_514111c1a5df8603de5d67d9e0db68b2)) {
        Py_XDECREF(cache_frame_514111c1a5df8603de5d67d9e0db68b2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_514111c1a5df8603de5d67d9e0db68b2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_514111c1a5df8603de5d67d9e0db68b2 = MAKE_FUNCTION_FRAME(tstate, codeobj_514111c1a5df8603de5d67d9e0db68b2, module_attr$validators, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_514111c1a5df8603de5d67d9e0db68b2->m_type_description == NULL);
    frame_514111c1a5df8603de5d67d9e0db68b2 = cache_frame_514111c1a5df8603de5d67d9e0db68b2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_514111c1a5df8603de5d67d9e0db68b2);
    assert(Py_REFCNT(frame_514111c1a5df8603de5d67d9e0db68b2) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_validator);
        tmp_isinstance_inst_1 = par_validator;
        tmp_isinstance_cls_1 = mod_consts[56];
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_validator);
        tmp_args_element_value_2 = par_validator;
        frame_514111c1a5df8603de5d67d9e0db68b2->m_frame.f_lineno = 291;
        tmp_args_element_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_514111c1a5df8603de5d67d9e0db68b2->m_frame.f_lineno = 291;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_validator);
        tmp_args_element_value_3 = par_validator;
        frame_514111c1a5df8603de5d67d9e0db68b2->m_frame.f_lineno = 293;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;
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
        exception_tb = MAKE_TRACEBACK(frame_514111c1a5df8603de5d67d9e0db68b2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_514111c1a5df8603de5d67d9e0db68b2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_514111c1a5df8603de5d67d9e0db68b2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_514111c1a5df8603de5d67d9e0db68b2,
        type_description_1,
        par_validator
    );


    // Release cached frame if used for exception.
    if (frame_514111c1a5df8603de5d67d9e0db68b2 == cache_frame_514111c1a5df8603de5d67d9e0db68b2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_514111c1a5df8603de5d67d9e0db68b2);
        cache_frame_514111c1a5df8603de5d67d9e0db68b2 = NULL;
    }

    assertFrameObject(frame_514111c1a5df8603de5d67d9e0db68b2);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_validator);
    Py_DECREF(par_validator);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_validator);
    Py_DECREF(par_validator);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_attr$validators$$$function__16___call__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_inst = python_pars[1];
    PyObject *par_attr = python_pars[2];
    PyObject *par_value = python_pars[3];
    nuitka_bool var_in_options = NUITKA_BOOL_UNASSIGNED;
    struct Nuitka_FrameObject *frame_1dea7cb8c76a75069be97bb4832990eb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
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
    static struct Nuitka_FrameObject *cache_frame_1dea7cb8c76a75069be97bb4832990eb = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_1dea7cb8c76a75069be97bb4832990eb)) {
        Py_XDECREF(cache_frame_1dea7cb8c76a75069be97bb4832990eb);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1dea7cb8c76a75069be97bb4832990eb == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1dea7cb8c76a75069be97bb4832990eb = MAKE_FUNCTION_FRAME(tstate, codeobj_1dea7cb8c76a75069be97bb4832990eb, module_attr$validators, sizeof(nuitka_bool)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1dea7cb8c76a75069be97bb4832990eb->m_type_description == NULL);
    frame_1dea7cb8c76a75069be97bb4832990eb = cache_frame_1dea7cb8c76a75069be97bb4832990eb;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_1dea7cb8c76a75069be97bb4832990eb);
    assert(Py_REFCNT(frame_1dea7cb8c76a75069be97bb4832990eb) == 2);

    // Framed code:
    // Tried code:
    {
        nuitka_bool tmp_assign_source_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_value);
        tmp_cmp_expr_left_1 = par_value;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[60]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;
            type_description_1 = "oooob";
            goto try_except_handler_2;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;
            type_description_1 = "oooob";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        var_in_options = tmp_assign_source_1;
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
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_1dea7cb8c76a75069be97bb4832990eb, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_1dea7cb8c76a75069be97bb4832990eb, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        tmp_cmp_expr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_2 = PyExc_TypeError;
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
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
        nuitka_bool tmp_assign_source_2;
        tmp_assign_source_2 = NUITKA_BOOL_FALSE;
        var_in_options = tmp_assign_source_2;
    }
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 301;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_1dea7cb8c76a75069be97bb4832990eb->m_frame) frame_1dea7cb8c76a75069be97bb4832990eb->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooob";
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
    {
        bool tmp_condition_result_2;
        PyObject *tmp_operand_value_1;
        assert(var_in_options != NUITKA_BOOL_UNASSIGNED);
        tmp_operand_value_1 = (var_in_options == NUITKA_BOOL_TRUE) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        assert(!(tmp_res == -1));
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
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_kw_call_dict_value_2_1;
        PyObject *tmp_make_exception_arg_2;
        PyObject *tmp_make_exception_arg_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_make_exception_arg_4;
        tmp_kw_call_arg_value_0_1 = mod_consts[61];
        CHECK_OBJECT(par_attr);
        tmp_expression_value_2 = par_attr;
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[10]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;
            type_description_1 = "oooob";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_kw_call_dict_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[60]);
        if (tmp_kw_call_dict_value_1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_dict_value_0_1);

            exception_lineno = 309;
            type_description_1 = "oooob";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_value);
        tmp_kw_call_dict_value_2_1 = par_value;
        frame_1dea7cb8c76a75069be97bb4832990eb->m_frame.f_lineno = 308;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[3] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1};
            tmp_make_exception_arg_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, unicode_builtin_format, args, kw_values, mod_consts[62]);
        }

        Py_DECREF(tmp_kw_call_dict_value_0_1);
        Py_DECREF(tmp_kw_call_dict_value_1_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;
            type_description_1 = "oooob";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_attr);
        tmp_make_exception_arg_2 = par_attr;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_make_exception_arg_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[60]);
        if (tmp_make_exception_arg_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_make_exception_arg_1);

            exception_lineno = 312;
            type_description_1 = "oooob";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_value);
        tmp_make_exception_arg_4 = par_value;
        frame_1dea7cb8c76a75069be97bb4832990eb->m_frame.f_lineno = 307;
        {
            PyObject *call_args[] = {tmp_make_exception_arg_1, tmp_make_exception_arg_2, tmp_make_exception_arg_3, tmp_make_exception_arg_4};
            tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS4(tstate, PyExc_ValueError, call_args);
        }

        Py_DECREF(tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_3);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 307;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooob";
        goto frame_exception_exit_1;
    }
    branch_no_2:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1dea7cb8c76a75069be97bb4832990eb, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1dea7cb8c76a75069be97bb4832990eb->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1dea7cb8c76a75069be97bb4832990eb, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1dea7cb8c76a75069be97bb4832990eb,
        type_description_1,
        par_self,
        par_inst,
        par_attr,
        par_value,
        (int)var_in_options
    );


    // Release cached frame if used for exception.
    if (frame_1dea7cb8c76a75069be97bb4832990eb == cache_frame_1dea7cb8c76a75069be97bb4832990eb) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1dea7cb8c76a75069be97bb4832990eb);
        cache_frame_1dea7cb8c76a75069be97bb4832990eb = NULL;
    }

    assertFrameObject(frame_1dea7cb8c76a75069be97bb4832990eb);

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
    assert(var_in_options != NUITKA_BOOL_UNASSIGNED);
    var_in_options = NUITKA_BOOL_UNASSIGNED;
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

    var_in_options = NUITKA_BOOL_UNASSIGNED;
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
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_inst);
    Py_DECREF(par_inst);
    CHECK_OBJECT(par_attr);
    Py_DECREF(par_attr);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_inst);
    Py_DECREF(par_inst);
    CHECK_OBJECT(par_attr);
    Py_DECREF(par_attr);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_attr$validators$$$function__17___repr__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_3e117b2bf495016ab769c655de4fa118;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3e117b2bf495016ab769c655de4fa118 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_3e117b2bf495016ab769c655de4fa118)) {
        Py_XDECREF(cache_frame_3e117b2bf495016ab769c655de4fa118);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3e117b2bf495016ab769c655de4fa118 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3e117b2bf495016ab769c655de4fa118 = MAKE_FUNCTION_FRAME(tstate, codeobj_3e117b2bf495016ab769c655de4fa118, module_attr$validators, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3e117b2bf495016ab769c655de4fa118->m_type_description == NULL);
    frame_3e117b2bf495016ab769c655de4fa118 = cache_frame_3e117b2bf495016ab769c655de4fa118;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_3e117b2bf495016ab769c655de4fa118);
    assert(Py_REFCNT(frame_3e117b2bf495016ab769c655de4fa118) == 2);

    // Framed code:
    {
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_1;
        tmp_kw_call_arg_value_0_1 = mod_consts[63];
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[60]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_3e117b2bf495016ab769c655de4fa118->m_frame.f_lineno = 317;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, unicode_builtin_format, args, kw_values, mod_consts[64]);
        }

        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;
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
        exception_tb = MAKE_TRACEBACK(frame_3e117b2bf495016ab769c655de4fa118, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3e117b2bf495016ab769c655de4fa118->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3e117b2bf495016ab769c655de4fa118, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3e117b2bf495016ab769c655de4fa118,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_3e117b2bf495016ab769c655de4fa118 == cache_frame_3e117b2bf495016ab769c655de4fa118) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3e117b2bf495016ab769c655de4fa118);
        cache_frame_3e117b2bf495016ab769c655de4fa118 = NULL;
    }

    assertFrameObject(frame_3e117b2bf495016ab769c655de4fa118);

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


static PyObject *impl_attr$validators$$$function__18_in_(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_options = python_pars[0];
    struct Nuitka_FrameObject *frame_48912133c975765978884ea671cbb058;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_48912133c975765978884ea671cbb058 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_48912133c975765978884ea671cbb058)) {
        Py_XDECREF(cache_frame_48912133c975765978884ea671cbb058);

#if _DEBUG_REFCOUNTS
        if (cache_frame_48912133c975765978884ea671cbb058 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_48912133c975765978884ea671cbb058 = MAKE_FUNCTION_FRAME(tstate, codeobj_48912133c975765978884ea671cbb058, module_attr$validators, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_48912133c975765978884ea671cbb058->m_type_description == NULL);
    frame_48912133c975765978884ea671cbb058 = cache_frame_48912133c975765978884ea671cbb058;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_48912133c975765978884ea671cbb058);
    assert(Py_REFCNT(frame_48912133c975765978884ea671cbb058) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[65]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 341;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_options);
        tmp_args_element_value_1 = par_options;
        frame_48912133c975765978884ea671cbb058->m_frame.f_lineno = 341;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 341;
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
        exception_tb = MAKE_TRACEBACK(frame_48912133c975765978884ea671cbb058, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_48912133c975765978884ea671cbb058->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_48912133c975765978884ea671cbb058, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_48912133c975765978884ea671cbb058,
        type_description_1,
        par_options
    );


    // Release cached frame if used for exception.
    if (frame_48912133c975765978884ea671cbb058 == cache_frame_48912133c975765978884ea671cbb058) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_48912133c975765978884ea671cbb058);
        cache_frame_48912133c975765978884ea671cbb058 = NULL;
    }

    assertFrameObject(frame_48912133c975765978884ea671cbb058);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_options);
    Py_DECREF(par_options);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_options);
    Py_DECREF(par_options);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_attr$validators$$$function__19___call__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_inst = python_pars[1];
    PyObject *par_attr = python_pars[2];
    PyObject *par_value = python_pars[3];
    struct Nuitka_FrameObject *frame_5b40ac93c2d6c7f39f8529c055df8015;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_5b40ac93c2d6c7f39f8529c055df8015 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5b40ac93c2d6c7f39f8529c055df8015)) {
        Py_XDECREF(cache_frame_5b40ac93c2d6c7f39f8529c055df8015);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5b40ac93c2d6c7f39f8529c055df8015 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5b40ac93c2d6c7f39f8529c055df8015 = MAKE_FUNCTION_FRAME(tstate, codeobj_5b40ac93c2d6c7f39f8529c055df8015, module_attr$validators, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5b40ac93c2d6c7f39f8529c055df8015->m_type_description == NULL);
    frame_5b40ac93c2d6c7f39f8529c055df8015 = cache_frame_5b40ac93c2d6c7f39f8529c055df8015;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_5b40ac93c2d6c7f39f8529c055df8015);
    assert(Py_REFCNT(frame_5b40ac93c2d6c7f39f8529c055df8015) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts[67]);
        assert(tmp_called_value_1 != NULL);
        CHECK_OBJECT(par_value);
        tmp_args_element_value_1 = par_value;
        frame_5b40ac93c2d6c7f39f8529c055df8015->m_frame.f_lineno = 350;
        tmp_operand_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_operand_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;
            type_description_1 = "ooooN";
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
        PyObject *tmp_called_value_2;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_kw_call_dict_value_2_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_kw_call_value_1_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[68]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 355;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_1 = mod_consts[69];
        CHECK_OBJECT(par_attr);
        tmp_expression_value_1 = par_attr;
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[10]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 357;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_value);
        tmp_kw_call_dict_value_1_1 = par_value;
        CHECK_OBJECT(par_value);
        tmp_expression_value_2 = par_value;
        tmp_kw_call_dict_value_2_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tstate, tmp_expression_value_2);
        if (tmp_kw_call_dict_value_2_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_dict_value_0_1);

            exception_lineno = 357;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        frame_5b40ac93c2d6c7f39f8529c055df8015->m_frame.f_lineno = 356;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[3] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1};
            tmp_kw_call_value_0_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, unicode_builtin_format, args, kw_values, mod_consts[70]);
        }

        Py_DECREF(tmp_kw_call_dict_value_0_1);
        Py_DECREF(tmp_kw_call_dict_value_2_1);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 356;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_value);
        tmp_kw_call_value_1_1 = par_value;
        frame_5b40ac93c2d6c7f39f8529c055df8015->m_frame.f_lineno = 355;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

            tmp_raise_type_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_2, kw_values, mod_consts[71]);
        }

        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_raise_type_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 355;
            type_description_1 = "ooooN";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 355;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooN";
        goto frame_exception_exit_1;
    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5b40ac93c2d6c7f39f8529c055df8015, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5b40ac93c2d6c7f39f8529c055df8015->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5b40ac93c2d6c7f39f8529c055df8015, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5b40ac93c2d6c7f39f8529c055df8015,
        type_description_1,
        par_self,
        par_inst,
        par_attr,
        par_value,
        NULL
    );


    // Release cached frame if used for exception.
    if (frame_5b40ac93c2d6c7f39f8529c055df8015 == cache_frame_5b40ac93c2d6c7f39f8529c055df8015) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5b40ac93c2d6c7f39f8529c055df8015);
        cache_frame_5b40ac93c2d6c7f39f8529c055df8015 = NULL;
    }

    assertFrameObject(frame_5b40ac93c2d6c7f39f8529c055df8015);

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
    CHECK_OBJECT(par_inst);
    Py_DECREF(par_inst);
    CHECK_OBJECT(par_attr);
    Py_DECREF(par_attr);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_inst);
    Py_DECREF(par_inst);
    CHECK_OBJECT(par_attr);
    Py_DECREF(par_attr);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_attr$validators$$$function__21_is_callable(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_36e5b231644e2870fc60d8b058f99004;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_36e5b231644e2870fc60d8b058f99004 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_36e5b231644e2870fc60d8b058f99004)) {
        Py_XDECREF(cache_frame_36e5b231644e2870fc60d8b058f99004);

#if _DEBUG_REFCOUNTS
        if (cache_frame_36e5b231644e2870fc60d8b058f99004 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_36e5b231644e2870fc60d8b058f99004 = MAKE_FUNCTION_FRAME(tstate, codeobj_36e5b231644e2870fc60d8b058f99004, module_attr$validators, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_36e5b231644e2870fc60d8b058f99004->m_type_description == NULL);
    frame_36e5b231644e2870fc60d8b058f99004 = cache_frame_36e5b231644e2870fc60d8b058f99004;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_36e5b231644e2870fc60d8b058f99004);
    assert(Py_REFCNT(frame_36e5b231644e2870fc60d8b058f99004) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[72]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[72]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 378;

            goto frame_exception_exit_1;
        }
        frame_36e5b231644e2870fc60d8b058f99004->m_frame.f_lineno = 378;
        tmp_return_value = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 378;

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
        exception_tb = MAKE_TRACEBACK(frame_36e5b231644e2870fc60d8b058f99004, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_36e5b231644e2870fc60d8b058f99004->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_36e5b231644e2870fc60d8b058f99004, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_36e5b231644e2870fc60d8b058f99004,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_36e5b231644e2870fc60d8b058f99004 == cache_frame_36e5b231644e2870fc60d8b058f99004) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_36e5b231644e2870fc60d8b058f99004);
        cache_frame_36e5b231644e2870fc60d8b058f99004 = NULL;
    }

    assertFrameObject(frame_36e5b231644e2870fc60d8b058f99004);

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


static PyObject *impl_attr$validators$$$function__22___call__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_inst = python_pars[1];
    PyObject *par_attr = python_pars[2];
    PyObject *par_value = python_pars[3];
    PyObject *var_member = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_405035a4c203576113a6d3086c4d0b6d;
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
    static struct Nuitka_FrameObject *cache_frame_405035a4c203576113a6d3086c4d0b6d = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_405035a4c203576113a6d3086c4d0b6d)) {
        Py_XDECREF(cache_frame_405035a4c203576113a6d3086c4d0b6d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_405035a4c203576113a6d3086c4d0b6d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_405035a4c203576113a6d3086c4d0b6d = MAKE_FUNCTION_FRAME(tstate, codeobj_405035a4c203576113a6d3086c4d0b6d, module_attr$validators, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_405035a4c203576113a6d3086c4d0b6d->m_type_description == NULL);
    frame_405035a4c203576113a6d3086c4d0b6d = cache_frame_405035a4c203576113a6d3086c4d0b6d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_405035a4c203576113a6d3086c4d0b6d);
    assert(Py_REFCNT(frame_405035a4c203576113a6d3086c4d0b6d) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[74]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 392;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_inst);
        tmp_args_element_value_1 = par_inst;
        CHECK_OBJECT(par_attr);
        tmp_args_element_value_2 = par_attr;
        CHECK_OBJECT(par_value);
        tmp_args_element_value_3 = par_value;
        frame_405035a4c203576113a6d3086c4d0b6d->m_frame.f_lineno = 393;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS3(
                tstate,
                tmp_called_instance_1,
                mod_consts[74],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 393;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        if (par_value == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[75]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 395;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_iter_arg_1 = par_value;
        tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 395;
            type_description_1 = "ooooo";
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
                type_description_1 = "ooooo";
                exception_lineno = 395;
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
            PyObject *old = var_member;
            var_member = tmp_assign_source_3;
            Py_INCREF(var_member);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[76]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 396;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_2 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[77]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 396;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        if (par_inst == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[78]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 396;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_4 = par_inst;
        if (par_attr == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[79]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 396;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_5 = par_attr;
        CHECK_OBJECT(var_member);
        tmp_args_element_value_6 = var_member;
        frame_405035a4c203576113a6d3086c4d0b6d->m_frame.f_lineno = 396;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 396;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 395;
        type_description_1 = "ooooo";
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


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_405035a4c203576113a6d3086c4d0b6d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_405035a4c203576113a6d3086c4d0b6d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_405035a4c203576113a6d3086c4d0b6d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_405035a4c203576113a6d3086c4d0b6d,
        type_description_1,
        par_self,
        par_inst,
        par_attr,
        par_value,
        var_member
    );


    // Release cached frame if used for exception.
    if (frame_405035a4c203576113a6d3086c4d0b6d == cache_frame_405035a4c203576113a6d3086c4d0b6d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_405035a4c203576113a6d3086c4d0b6d);
        cache_frame_405035a4c203576113a6d3086c4d0b6d = NULL;
    }

    assertFrameObject(frame_405035a4c203576113a6d3086c4d0b6d);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_member);
    var_member = NULL;
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

    Py_XDECREF(var_member);
    var_member = NULL;
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
    CHECK_OBJECT(par_inst);
    Py_DECREF(par_inst);
    CHECK_OBJECT(par_attr);
    Py_DECREF(par_attr);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_inst);
    Py_DECREF(par_inst);
    CHECK_OBJECT(par_attr);
    Py_DECREF(par_attr);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_attr$validators$$$function__23___repr__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_iterable_identifier = NULL;
    struct Nuitka_FrameObject *frame_72bfd1af4ec0868cca3cea92fdff1391;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_72bfd1af4ec0868cca3cea92fdff1391 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_72bfd1af4ec0868cca3cea92fdff1391)) {
        Py_XDECREF(cache_frame_72bfd1af4ec0868cca3cea92fdff1391);

#if _DEBUG_REFCOUNTS
        if (cache_frame_72bfd1af4ec0868cca3cea92fdff1391 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_72bfd1af4ec0868cca3cea92fdff1391 = MAKE_FUNCTION_FRAME(tstate, codeobj_72bfd1af4ec0868cca3cea92fdff1391, module_attr$validators, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_72bfd1af4ec0868cca3cea92fdff1391->m_type_description == NULL);
    frame_72bfd1af4ec0868cca3cea92fdff1391 = cache_frame_72bfd1af4ec0868cca3cea92fdff1391;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_72bfd1af4ec0868cca3cea92fdff1391);
    assert(Py_REFCNT(frame_72bfd1af4ec0868cca3cea92fdff1391) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[74]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 401;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 != false) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        tmp_assign_source_1 = mod_consts[80];
        Py_INCREF(tmp_assign_source_1);
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_tuple_element_1 = mod_consts[81];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_operand_value_1;
            PyObject *tmp_expression_value_2;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_2 = par_self;
            tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[74]);
            if (tmp_operand_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 402;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            tmp_format_value_1 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_1);
            Py_DECREF(tmp_operand_value_1);
            if (tmp_format_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 402;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_1 = mod_consts[80];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
            Py_DECREF(tmp_format_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 402;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_assign_source_1 = PyUnicode_Join(mod_consts[80], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 402;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        condexpr_end_1:;
        assert(var_iterable_identifier == NULL);
        var_iterable_identifier = tmp_assign_source_1;
    }
    {
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_expression_value_3;
        tmp_kw_call_arg_value_0_1 = mod_consts[82];
        CHECK_OBJECT(var_iterable_identifier);
        tmp_kw_call_dict_value_0_1 = var_iterable_identifier;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_kw_call_dict_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[77]);
        if (tmp_kw_call_dict_value_1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 409;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_72bfd1af4ec0868cca3cea92fdff1391->m_frame.f_lineno = 404;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, unicode_builtin_format, args, kw_values, mod_consts[83]);
        }

        Py_DECREF(tmp_kw_call_dict_value_1_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 404;
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
        exception_tb = MAKE_TRACEBACK(frame_72bfd1af4ec0868cca3cea92fdff1391, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_72bfd1af4ec0868cca3cea92fdff1391->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_72bfd1af4ec0868cca3cea92fdff1391, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_72bfd1af4ec0868cca3cea92fdff1391,
        type_description_1,
        par_self,
        var_iterable_identifier
    );


    // Release cached frame if used for exception.
    if (frame_72bfd1af4ec0868cca3cea92fdff1391 == cache_frame_72bfd1af4ec0868cca3cea92fdff1391) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_72bfd1af4ec0868cca3cea92fdff1391);
        cache_frame_72bfd1af4ec0868cca3cea92fdff1391 = NULL;
    }

    assertFrameObject(frame_72bfd1af4ec0868cca3cea92fdff1391);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_iterable_identifier);
    Py_DECREF(var_iterable_identifier);
    var_iterable_identifier = NULL;
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

    Py_XDECREF(var_iterable_identifier);
    var_iterable_identifier = NULL;
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


static PyObject *impl_attr$validators$$$function__24_deep_iterable(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_member_validator = python_pars[0];
    PyObject *par_iterable_validator = python_pars[1];
    struct Nuitka_FrameObject *frame_cafeae836fe5b3d7a303f978e377b5af;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_cafeae836fe5b3d7a303f978e377b5af = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_cafeae836fe5b3d7a303f978e377b5af)) {
        Py_XDECREF(cache_frame_cafeae836fe5b3d7a303f978e377b5af);

#if _DEBUG_REFCOUNTS
        if (cache_frame_cafeae836fe5b3d7a303f978e377b5af == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_cafeae836fe5b3d7a303f978e377b5af = MAKE_FUNCTION_FRAME(tstate, codeobj_cafeae836fe5b3d7a303f978e377b5af, module_attr$validators, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_cafeae836fe5b3d7a303f978e377b5af->m_type_description == NULL);
    frame_cafeae836fe5b3d7a303f978e377b5af = cache_frame_cafeae836fe5b3d7a303f978e377b5af;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_cafeae836fe5b3d7a303f978e377b5af);
    assert(Py_REFCNT(frame_cafeae836fe5b3d7a303f978e377b5af) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_member_validator);
        tmp_isinstance_inst_1 = par_member_validator;
        tmp_isinstance_cls_1 = mod_consts[56];
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 425;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[84]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[84]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 426;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_member_validator);
        tmp_dircall_arg2_1 = par_member_validator;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg2_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_assign_source_1 = impl___main__$$$function__5_complex_call_helper_star_list(tstate, dir_call_args);
        }
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 426;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_member_validator;
            assert(old != NULL);
            par_member_validator = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[85]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[85]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 427;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_member_validator);
        tmp_args_element_value_1 = par_member_validator;
        CHECK_OBJECT(par_iterable_validator);
        tmp_args_element_value_2 = par_iterable_validator;
        frame_cafeae836fe5b3d7a303f978e377b5af->m_frame.f_lineno = 427;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 427;
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
        exception_tb = MAKE_TRACEBACK(frame_cafeae836fe5b3d7a303f978e377b5af, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cafeae836fe5b3d7a303f978e377b5af->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cafeae836fe5b3d7a303f978e377b5af, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_cafeae836fe5b3d7a303f978e377b5af,
        type_description_1,
        par_member_validator,
        par_iterable_validator
    );


    // Release cached frame if used for exception.
    if (frame_cafeae836fe5b3d7a303f978e377b5af == cache_frame_cafeae836fe5b3d7a303f978e377b5af) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_cafeae836fe5b3d7a303f978e377b5af);
        cache_frame_cafeae836fe5b3d7a303f978e377b5af = NULL;
    }

    assertFrameObject(frame_cafeae836fe5b3d7a303f978e377b5af);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_member_validator);
    Py_DECREF(par_member_validator);
    par_member_validator = NULL;
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

    Py_XDECREF(par_member_validator);
    par_member_validator = NULL;
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
    CHECK_OBJECT(par_iterable_validator);
    Py_DECREF(par_iterable_validator);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_iterable_validator);
    Py_DECREF(par_iterable_validator);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_attr$validators$$$function__25___call__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_inst = python_pars[1];
    PyObject *par_attr = python_pars[2];
    PyObject *par_value = python_pars[3];
    PyObject *var_key = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_ceed3b8c0904e85e69066524d473c134;
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
    static struct Nuitka_FrameObject *cache_frame_ceed3b8c0904e85e69066524d473c134 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_ceed3b8c0904e85e69066524d473c134)) {
        Py_XDECREF(cache_frame_ceed3b8c0904e85e69066524d473c134);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ceed3b8c0904e85e69066524d473c134 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ceed3b8c0904e85e69066524d473c134 = MAKE_FUNCTION_FRAME(tstate, codeobj_ceed3b8c0904e85e69066524d473c134, module_attr$validators, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ceed3b8c0904e85e69066524d473c134->m_type_description == NULL);
    frame_ceed3b8c0904e85e69066524d473c134 = cache_frame_ceed3b8c0904e85e69066524d473c134;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_ceed3b8c0904e85e69066524d473c134);
    assert(Py_REFCNT(frame_ceed3b8c0904e85e69066524d473c134) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[87]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 440;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_inst);
        tmp_args_element_value_1 = par_inst;
        CHECK_OBJECT(par_attr);
        tmp_args_element_value_2 = par_attr;
        CHECK_OBJECT(par_value);
        tmp_args_element_value_3 = par_value;
        frame_ceed3b8c0904e85e69066524d473c134->m_frame.f_lineno = 441;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS3(
                tstate,
                tmp_called_instance_1,
                mod_consts[87],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 441;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        if (par_value == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[75]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 443;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_iter_arg_1 = par_value;
        tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 443;
            type_description_1 = "ooooo";
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
                type_description_1 = "ooooo";
                exception_lineno = 443;
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
            PyObject *old = var_key;
            var_key = tmp_assign_source_3;
            Py_INCREF(var_key);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[76]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 444;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_2 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[88]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 444;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        if (par_inst == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[78]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 444;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_4 = par_inst;
        if (par_attr == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[79]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 444;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_5 = par_attr;
        CHECK_OBJECT(var_key);
        tmp_args_element_value_6 = var_key;
        frame_ceed3b8c0904e85e69066524d473c134->m_frame.f_lineno = 444;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 444;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_1;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[76]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 445;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_3 = par_self;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[89]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 445;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        if (par_inst == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[78]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 445;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_7 = par_inst;
        if (par_attr == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[79]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 445;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_8 = par_attr;
        if (par_value == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[75]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 445;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_4 = par_value;
        CHECK_OBJECT(var_key);
        tmp_subscript_value_1 = var_key;
        tmp_args_element_value_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_1);
        if (tmp_args_element_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 445;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        frame_ceed3b8c0904e85e69066524d473c134->m_frame.f_lineno = 445;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_9);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 445;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_3);
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 443;
        type_description_1 = "ooooo";
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


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ceed3b8c0904e85e69066524d473c134, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ceed3b8c0904e85e69066524d473c134->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ceed3b8c0904e85e69066524d473c134, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ceed3b8c0904e85e69066524d473c134,
        type_description_1,
        par_self,
        par_inst,
        par_attr,
        par_value,
        var_key
    );


    // Release cached frame if used for exception.
    if (frame_ceed3b8c0904e85e69066524d473c134 == cache_frame_ceed3b8c0904e85e69066524d473c134) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ceed3b8c0904e85e69066524d473c134);
        cache_frame_ceed3b8c0904e85e69066524d473c134 = NULL;
    }

    assertFrameObject(frame_ceed3b8c0904e85e69066524d473c134);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_key);
    var_key = NULL;
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

    Py_XDECREF(var_key);
    var_key = NULL;
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
    CHECK_OBJECT(par_inst);
    Py_DECREF(par_inst);
    CHECK_OBJECT(par_attr);
    Py_DECREF(par_attr);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_inst);
    Py_DECREF(par_inst);
    CHECK_OBJECT(par_attr);
    Py_DECREF(par_attr);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_attr$validators$$$function__26___repr__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_54d72b3d67e21c0e1f04de166ade5a20;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_54d72b3d67e21c0e1f04de166ade5a20 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_54d72b3d67e21c0e1f04de166ade5a20)) {
        Py_XDECREF(cache_frame_54d72b3d67e21c0e1f04de166ade5a20);

#if _DEBUG_REFCOUNTS
        if (cache_frame_54d72b3d67e21c0e1f04de166ade5a20 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_54d72b3d67e21c0e1f04de166ade5a20 = MAKE_FUNCTION_FRAME(tstate, codeobj_54d72b3d67e21c0e1f04de166ade5a20, module_attr$validators, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_54d72b3d67e21c0e1f04de166ade5a20->m_type_description == NULL);
    frame_54d72b3d67e21c0e1f04de166ade5a20 = cache_frame_54d72b3d67e21c0e1f04de166ade5a20;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_54d72b3d67e21c0e1f04de166ade5a20);
    assert(Py_REFCNT(frame_54d72b3d67e21c0e1f04de166ade5a20) == 2);

    // Framed code:
    {
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_expression_value_2;
        tmp_kw_call_arg_value_0_1 = mod_consts[90];
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[88]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 450;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_kw_call_dict_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[89]);
        if (tmp_kw_call_dict_value_1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_dict_value_0_1);

            exception_lineno = 450;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_54d72b3d67e21c0e1f04de166ade5a20->m_frame.f_lineno = 448;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, unicode_builtin_format, args, kw_values, mod_consts[91]);
        }

        Py_DECREF(tmp_kw_call_dict_value_0_1);
        Py_DECREF(tmp_kw_call_dict_value_1_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 448;
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
        exception_tb = MAKE_TRACEBACK(frame_54d72b3d67e21c0e1f04de166ade5a20, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_54d72b3d67e21c0e1f04de166ade5a20->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_54d72b3d67e21c0e1f04de166ade5a20, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_54d72b3d67e21c0e1f04de166ade5a20,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_54d72b3d67e21c0e1f04de166ade5a20 == cache_frame_54d72b3d67e21c0e1f04de166ade5a20) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_54d72b3d67e21c0e1f04de166ade5a20);
        cache_frame_54d72b3d67e21c0e1f04de166ade5a20 = NULL;
    }

    assertFrameObject(frame_54d72b3d67e21c0e1f04de166ade5a20);

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


static PyObject *impl_attr$validators$$$function__27_deep_mapping(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_key_validator = python_pars[0];
    PyObject *par_value_validator = python_pars[1];
    PyObject *par_mapping_validator = python_pars[2];
    struct Nuitka_FrameObject *frame_29eaa102e8ae6445d5e24adf330f979e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_29eaa102e8ae6445d5e24adf330f979e = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_29eaa102e8ae6445d5e24adf330f979e)) {
        Py_XDECREF(cache_frame_29eaa102e8ae6445d5e24adf330f979e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_29eaa102e8ae6445d5e24adf330f979e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_29eaa102e8ae6445d5e24adf330f979e = MAKE_FUNCTION_FRAME(tstate, codeobj_29eaa102e8ae6445d5e24adf330f979e, module_attr$validators, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_29eaa102e8ae6445d5e24adf330f979e->m_type_description == NULL);
    frame_29eaa102e8ae6445d5e24adf330f979e = cache_frame_29eaa102e8ae6445d5e24adf330f979e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_29eaa102e8ae6445d5e24adf330f979e);
    assert(Py_REFCNT(frame_29eaa102e8ae6445d5e24adf330f979e) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[92]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 466;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_key_validator);
        tmp_args_element_value_1 = par_key_validator;
        CHECK_OBJECT(par_value_validator);
        tmp_args_element_value_2 = par_value_validator;
        CHECK_OBJECT(par_mapping_validator);
        tmp_args_element_value_3 = par_mapping_validator;
        frame_29eaa102e8ae6445d5e24adf330f979e->m_frame.f_lineno = 466;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 466;
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
        exception_tb = MAKE_TRACEBACK(frame_29eaa102e8ae6445d5e24adf330f979e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_29eaa102e8ae6445d5e24adf330f979e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_29eaa102e8ae6445d5e24adf330f979e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_29eaa102e8ae6445d5e24adf330f979e,
        type_description_1,
        par_key_validator,
        par_value_validator,
        par_mapping_validator
    );


    // Release cached frame if used for exception.
    if (frame_29eaa102e8ae6445d5e24adf330f979e == cache_frame_29eaa102e8ae6445d5e24adf330f979e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_29eaa102e8ae6445d5e24adf330f979e);
        cache_frame_29eaa102e8ae6445d5e24adf330f979e = NULL;
    }

    assertFrameObject(frame_29eaa102e8ae6445d5e24adf330f979e);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_key_validator);
    Py_DECREF(par_key_validator);
    CHECK_OBJECT(par_value_validator);
    Py_DECREF(par_value_validator);
    CHECK_OBJECT(par_mapping_validator);
    Py_DECREF(par_mapping_validator);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_key_validator);
    Py_DECREF(par_key_validator);
    CHECK_OBJECT(par_value_validator);
    Py_DECREF(par_value_validator);
    CHECK_OBJECT(par_mapping_validator);
    Py_DECREF(par_mapping_validator);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_attr$validators$$$function__28___call__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_inst = python_pars[1];
    PyObject *par_attr = python_pars[2];
    PyObject *par_value = python_pars[3];
    struct Nuitka_FrameObject *frame_4eab6374cf9d075bcbc4d7063f54e2f9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_4eab6374cf9d075bcbc4d7063f54e2f9 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4eab6374cf9d075bcbc4d7063f54e2f9)) {
        Py_XDECREF(cache_frame_4eab6374cf9d075bcbc4d7063f54e2f9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4eab6374cf9d075bcbc4d7063f54e2f9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4eab6374cf9d075bcbc4d7063f54e2f9 = MAKE_FUNCTION_FRAME(tstate, codeobj_4eab6374cf9d075bcbc4d7063f54e2f9, module_attr$validators, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4eab6374cf9d075bcbc4d7063f54e2f9->m_type_description == NULL);
    frame_4eab6374cf9d075bcbc4d7063f54e2f9 = cache_frame_4eab6374cf9d075bcbc4d7063f54e2f9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_4eab6374cf9d075bcbc4d7063f54e2f9);
    assert(Py_REFCNT(frame_4eab6374cf9d075bcbc4d7063f54e2f9) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[94]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 479;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_value);
        tmp_args_element_value_1 = par_value;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[95]);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 479;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_4eab6374cf9d075bcbc4d7063f54e2f9->m_frame.f_lineno = 479;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_operand_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 479;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 479;
            type_description_1 = "oooo";
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
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_kw_call_dict_value_2_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_kw_call_dict_value_3_1;
        tmp_kw_call_arg_value_0_1 = mod_consts[96];
        CHECK_OBJECT(par_attr);
        tmp_expression_value_3 = par_attr;
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[10]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 482;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_kw_call_dict_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[97]);
        if (tmp_kw_call_dict_value_1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_dict_value_0_1);

            exception_lineno = 483;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_kw_call_dict_value_2_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[95]);
        if (tmp_kw_call_dict_value_2_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_dict_value_0_1);
            Py_DECREF(tmp_kw_call_dict_value_1_1);

            exception_lineno = 484;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_value);
        tmp_kw_call_dict_value_3_1 = par_value;
        frame_4eab6374cf9d075bcbc4d7063f54e2f9->m_frame.f_lineno = 481;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[4] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1};
            tmp_make_exception_arg_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, unicode_builtin_format, args, kw_values, mod_consts[98]);
        }

        Py_DECREF(tmp_kw_call_dict_value_0_1);
        Py_DECREF(tmp_kw_call_dict_value_1_1);
        Py_DECREF(tmp_kw_call_dict_value_2_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 481;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_4eab6374cf9d075bcbc4d7063f54e2f9->m_frame.f_lineno = 480;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 480;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4eab6374cf9d075bcbc4d7063f54e2f9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4eab6374cf9d075bcbc4d7063f54e2f9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4eab6374cf9d075bcbc4d7063f54e2f9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4eab6374cf9d075bcbc4d7063f54e2f9,
        type_description_1,
        par_self,
        par_inst,
        par_attr,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_4eab6374cf9d075bcbc4d7063f54e2f9 == cache_frame_4eab6374cf9d075bcbc4d7063f54e2f9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4eab6374cf9d075bcbc4d7063f54e2f9);
        cache_frame_4eab6374cf9d075bcbc4d7063f54e2f9 = NULL;
    }

    assertFrameObject(frame_4eab6374cf9d075bcbc4d7063f54e2f9);

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
    CHECK_OBJECT(par_inst);
    Py_DECREF(par_inst);
    CHECK_OBJECT(par_attr);
    Py_DECREF(par_attr);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_inst);
    Py_DECREF(par_inst);
    CHECK_OBJECT(par_attr);
    Py_DECREF(par_attr);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_attr$validators$$$function__29___repr__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_98471cd8d3e98b993e47830ee662ef30;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_98471cd8d3e98b993e47830ee662ef30 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_98471cd8d3e98b993e47830ee662ef30)) {
        Py_XDECREF(cache_frame_98471cd8d3e98b993e47830ee662ef30);

#if _DEBUG_REFCOUNTS
        if (cache_frame_98471cd8d3e98b993e47830ee662ef30 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_98471cd8d3e98b993e47830ee662ef30 = MAKE_FUNCTION_FRAME(tstate, codeobj_98471cd8d3e98b993e47830ee662ef30, module_attr$validators, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_98471cd8d3e98b993e47830ee662ef30->m_type_description == NULL);
    frame_98471cd8d3e98b993e47830ee662ef30 = cache_frame_98471cd8d3e98b993e47830ee662ef30;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_98471cd8d3e98b993e47830ee662ef30);
    assert(Py_REFCNT(frame_98471cd8d3e98b993e47830ee662ef30) == 2);

    // Framed code:
    {
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_expression_value_2;
        tmp_kw_call_arg_value_0_1 = mod_consts[99];
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[97]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 491;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_kw_call_dict_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[95]);
        if (tmp_kw_call_dict_value_1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_dict_value_0_1);

            exception_lineno = 491;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_98471cd8d3e98b993e47830ee662ef30->m_frame.f_lineno = 490;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, unicode_builtin_format, args, kw_values, mod_consts[100]);
        }

        Py_DECREF(tmp_kw_call_dict_value_0_1);
        Py_DECREF(tmp_kw_call_dict_value_1_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 490;
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
        exception_tb = MAKE_TRACEBACK(frame_98471cd8d3e98b993e47830ee662ef30, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_98471cd8d3e98b993e47830ee662ef30->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_98471cd8d3e98b993e47830ee662ef30, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_98471cd8d3e98b993e47830ee662ef30,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_98471cd8d3e98b993e47830ee662ef30 == cache_frame_98471cd8d3e98b993e47830ee662ef30) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_98471cd8d3e98b993e47830ee662ef30);
        cache_frame_98471cd8d3e98b993e47830ee662ef30 = NULL;
    }

    assertFrameObject(frame_98471cd8d3e98b993e47830ee662ef30);

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


static PyObject *impl_attr$validators$$$function__30_lt(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_val = python_pars[0];
    struct Nuitka_FrameObject *frame_0357d6cd1f556e00a28d71590e5c6f5c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0357d6cd1f556e00a28d71590e5c6f5c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0357d6cd1f556e00a28d71590e5c6f5c)) {
        Py_XDECREF(cache_frame_0357d6cd1f556e00a28d71590e5c6f5c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0357d6cd1f556e00a28d71590e5c6f5c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0357d6cd1f556e00a28d71590e5c6f5c = MAKE_FUNCTION_FRAME(tstate, codeobj_0357d6cd1f556e00a28d71590e5c6f5c, module_attr$validators, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0357d6cd1f556e00a28d71590e5c6f5c->m_type_description == NULL);
    frame_0357d6cd1f556e00a28d71590e5c6f5c = cache_frame_0357d6cd1f556e00a28d71590e5c6f5c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_0357d6cd1f556e00a28d71590e5c6f5c);
    assert(Py_REFCNT(frame_0357d6cd1f556e00a28d71590e5c6f5c) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[101]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[101]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 504;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_val);
        tmp_args_element_value_1 = par_val;
        tmp_args_element_value_2 = mod_consts[102];
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[103]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[103]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 504;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[104]);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 504;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_0357d6cd1f556e00a28d71590e5c6f5c->m_frame.f_lineno = 504;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_3);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 504;
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
        exception_tb = MAKE_TRACEBACK(frame_0357d6cd1f556e00a28d71590e5c6f5c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0357d6cd1f556e00a28d71590e5c6f5c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0357d6cd1f556e00a28d71590e5c6f5c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0357d6cd1f556e00a28d71590e5c6f5c,
        type_description_1,
        par_val
    );


    // Release cached frame if used for exception.
    if (frame_0357d6cd1f556e00a28d71590e5c6f5c == cache_frame_0357d6cd1f556e00a28d71590e5c6f5c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0357d6cd1f556e00a28d71590e5c6f5c);
        cache_frame_0357d6cd1f556e00a28d71590e5c6f5c = NULL;
    }

    assertFrameObject(frame_0357d6cd1f556e00a28d71590e5c6f5c);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_val);
    Py_DECREF(par_val);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_val);
    Py_DECREF(par_val);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_attr$validators$$$function__31_le(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_val = python_pars[0];
    struct Nuitka_FrameObject *frame_430a57b8f0a58523b830d32518f43620;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_430a57b8f0a58523b830d32518f43620 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_430a57b8f0a58523b830d32518f43620)) {
        Py_XDECREF(cache_frame_430a57b8f0a58523b830d32518f43620);

#if _DEBUG_REFCOUNTS
        if (cache_frame_430a57b8f0a58523b830d32518f43620 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_430a57b8f0a58523b830d32518f43620 = MAKE_FUNCTION_FRAME(tstate, codeobj_430a57b8f0a58523b830d32518f43620, module_attr$validators, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_430a57b8f0a58523b830d32518f43620->m_type_description == NULL);
    frame_430a57b8f0a58523b830d32518f43620 = cache_frame_430a57b8f0a58523b830d32518f43620;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_430a57b8f0a58523b830d32518f43620);
    assert(Py_REFCNT(frame_430a57b8f0a58523b830d32518f43620) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[101]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[101]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 516;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_val);
        tmp_args_element_value_1 = par_val;
        tmp_args_element_value_2 = mod_consts[106];
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[103]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[103]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 516;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[107]);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 516;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_430a57b8f0a58523b830d32518f43620->m_frame.f_lineno = 516;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_3);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 516;
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
        exception_tb = MAKE_TRACEBACK(frame_430a57b8f0a58523b830d32518f43620, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_430a57b8f0a58523b830d32518f43620->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_430a57b8f0a58523b830d32518f43620, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_430a57b8f0a58523b830d32518f43620,
        type_description_1,
        par_val
    );


    // Release cached frame if used for exception.
    if (frame_430a57b8f0a58523b830d32518f43620 == cache_frame_430a57b8f0a58523b830d32518f43620) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_430a57b8f0a58523b830d32518f43620);
        cache_frame_430a57b8f0a58523b830d32518f43620 = NULL;
    }

    assertFrameObject(frame_430a57b8f0a58523b830d32518f43620);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_val);
    Py_DECREF(par_val);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_val);
    Py_DECREF(par_val);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_attr$validators$$$function__32_ge(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_val = python_pars[0];
    struct Nuitka_FrameObject *frame_81128da0653898e6ace28dfc76cdd66b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_81128da0653898e6ace28dfc76cdd66b = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_81128da0653898e6ace28dfc76cdd66b)) {
        Py_XDECREF(cache_frame_81128da0653898e6ace28dfc76cdd66b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_81128da0653898e6ace28dfc76cdd66b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_81128da0653898e6ace28dfc76cdd66b = MAKE_FUNCTION_FRAME(tstate, codeobj_81128da0653898e6ace28dfc76cdd66b, module_attr$validators, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_81128da0653898e6ace28dfc76cdd66b->m_type_description == NULL);
    frame_81128da0653898e6ace28dfc76cdd66b = cache_frame_81128da0653898e6ace28dfc76cdd66b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_81128da0653898e6ace28dfc76cdd66b);
    assert(Py_REFCNT(frame_81128da0653898e6ace28dfc76cdd66b) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[101]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[101]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 528;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_val);
        tmp_args_element_value_1 = par_val;
        tmp_args_element_value_2 = mod_consts[109];
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[103]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[103]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 528;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[110]);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 528;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_81128da0653898e6ace28dfc76cdd66b->m_frame.f_lineno = 528;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_3);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 528;
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
        exception_tb = MAKE_TRACEBACK(frame_81128da0653898e6ace28dfc76cdd66b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_81128da0653898e6ace28dfc76cdd66b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_81128da0653898e6ace28dfc76cdd66b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_81128da0653898e6ace28dfc76cdd66b,
        type_description_1,
        par_val
    );


    // Release cached frame if used for exception.
    if (frame_81128da0653898e6ace28dfc76cdd66b == cache_frame_81128da0653898e6ace28dfc76cdd66b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_81128da0653898e6ace28dfc76cdd66b);
        cache_frame_81128da0653898e6ace28dfc76cdd66b = NULL;
    }

    assertFrameObject(frame_81128da0653898e6ace28dfc76cdd66b);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_val);
    Py_DECREF(par_val);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_val);
    Py_DECREF(par_val);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_attr$validators$$$function__33_gt(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_val = python_pars[0];
    struct Nuitka_FrameObject *frame_4f5fd3a67f7d7044fe627ed9d3b04aa0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4f5fd3a67f7d7044fe627ed9d3b04aa0 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4f5fd3a67f7d7044fe627ed9d3b04aa0)) {
        Py_XDECREF(cache_frame_4f5fd3a67f7d7044fe627ed9d3b04aa0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4f5fd3a67f7d7044fe627ed9d3b04aa0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4f5fd3a67f7d7044fe627ed9d3b04aa0 = MAKE_FUNCTION_FRAME(tstate, codeobj_4f5fd3a67f7d7044fe627ed9d3b04aa0, module_attr$validators, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4f5fd3a67f7d7044fe627ed9d3b04aa0->m_type_description == NULL);
    frame_4f5fd3a67f7d7044fe627ed9d3b04aa0 = cache_frame_4f5fd3a67f7d7044fe627ed9d3b04aa0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_4f5fd3a67f7d7044fe627ed9d3b04aa0);
    assert(Py_REFCNT(frame_4f5fd3a67f7d7044fe627ed9d3b04aa0) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[101]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[101]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 540;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_val);
        tmp_args_element_value_1 = par_val;
        tmp_args_element_value_2 = mod_consts[112];
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[103]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[103]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 540;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[113]);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 540;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_4f5fd3a67f7d7044fe627ed9d3b04aa0->m_frame.f_lineno = 540;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_3);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 540;
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
        exception_tb = MAKE_TRACEBACK(frame_4f5fd3a67f7d7044fe627ed9d3b04aa0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4f5fd3a67f7d7044fe627ed9d3b04aa0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4f5fd3a67f7d7044fe627ed9d3b04aa0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4f5fd3a67f7d7044fe627ed9d3b04aa0,
        type_description_1,
        par_val
    );


    // Release cached frame if used for exception.
    if (frame_4f5fd3a67f7d7044fe627ed9d3b04aa0 == cache_frame_4f5fd3a67f7d7044fe627ed9d3b04aa0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4f5fd3a67f7d7044fe627ed9d3b04aa0);
        cache_frame_4f5fd3a67f7d7044fe627ed9d3b04aa0 = NULL;
    }

    assertFrameObject(frame_4f5fd3a67f7d7044fe627ed9d3b04aa0);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_val);
    Py_DECREF(par_val);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_val);
    Py_DECREF(par_val);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_attr$validators$$$function__34___call__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_inst = python_pars[1];
    PyObject *par_attr = python_pars[2];
    PyObject *par_value = python_pars[3];
    struct Nuitka_FrameObject *frame_10735ebeb38bc196b0bb17585db9c33c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_10735ebeb38bc196b0bb17585db9c33c = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_10735ebeb38bc196b0bb17585db9c33c)) {
        Py_XDECREF(cache_frame_10735ebeb38bc196b0bb17585db9c33c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_10735ebeb38bc196b0bb17585db9c33c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_10735ebeb38bc196b0bb17585db9c33c = MAKE_FUNCTION_FRAME(tstate, codeobj_10735ebeb38bc196b0bb17585db9c33c, module_attr$validators, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_10735ebeb38bc196b0bb17585db9c33c->m_type_description == NULL);
    frame_10735ebeb38bc196b0bb17585db9c33c = cache_frame_10735ebeb38bc196b0bb17585db9c33c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_10735ebeb38bc196b0bb17585db9c33c);
    assert(Py_REFCNT(frame_10735ebeb38bc196b0bb17585db9c33c) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_value);
        tmp_len_arg_1 = par_value;
        tmp_cmp_expr_left_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 551;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[115]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 551;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = RICH_COMPARE_GT_NBOOL_LONG_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 551;
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
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_kw_call_dict_value_2_1;
        PyObject *tmp_len_arg_2;
        tmp_kw_call_arg_value_0_1 = mod_consts[116];
        CHECK_OBJECT(par_attr);
        tmp_expression_value_2 = par_attr;
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[10]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 554;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_kw_call_dict_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[115]);
        if (tmp_kw_call_dict_value_1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_dict_value_0_1);

            exception_lineno = 554;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_value);
        tmp_len_arg_2 = par_value;
        tmp_kw_call_dict_value_2_1 = BUILTIN_LEN(tstate, tmp_len_arg_2);
        if (tmp_kw_call_dict_value_2_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_dict_value_0_1);
            Py_DECREF(tmp_kw_call_dict_value_1_1);

            exception_lineno = 554;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_10735ebeb38bc196b0bb17585db9c33c->m_frame.f_lineno = 553;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[3] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1};
            tmp_make_exception_arg_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, unicode_builtin_format, args, kw_values, mod_consts[117]);
        }

        Py_DECREF(tmp_kw_call_dict_value_0_1);
        Py_DECREF(tmp_kw_call_dict_value_1_1);
        Py_DECREF(tmp_kw_call_dict_value_2_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 553;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_10735ebeb38bc196b0bb17585db9c33c->m_frame.f_lineno = 552;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 552;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_10735ebeb38bc196b0bb17585db9c33c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_10735ebeb38bc196b0bb17585db9c33c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_10735ebeb38bc196b0bb17585db9c33c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_10735ebeb38bc196b0bb17585db9c33c,
        type_description_1,
        par_self,
        par_inst,
        par_attr,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_10735ebeb38bc196b0bb17585db9c33c == cache_frame_10735ebeb38bc196b0bb17585db9c33c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_10735ebeb38bc196b0bb17585db9c33c);
        cache_frame_10735ebeb38bc196b0bb17585db9c33c = NULL;
    }

    assertFrameObject(frame_10735ebeb38bc196b0bb17585db9c33c);

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
    CHECK_OBJECT(par_inst);
    Py_DECREF(par_inst);
    CHECK_OBJECT(par_attr);
    Py_DECREF(par_attr);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_inst);
    Py_DECREF(par_inst);
    CHECK_OBJECT(par_attr);
    Py_DECREF(par_attr);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_attr$validators$$$function__35___repr__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_b72670c7af8872b75391a36bbdb1cab0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b72670c7af8872b75391a36bbdb1cab0 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b72670c7af8872b75391a36bbdb1cab0)) {
        Py_XDECREF(cache_frame_b72670c7af8872b75391a36bbdb1cab0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b72670c7af8872b75391a36bbdb1cab0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b72670c7af8872b75391a36bbdb1cab0 = MAKE_FUNCTION_FRAME(tstate, codeobj_b72670c7af8872b75391a36bbdb1cab0, module_attr$validators, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b72670c7af8872b75391a36bbdb1cab0->m_type_description == NULL);
    frame_b72670c7af8872b75391a36bbdb1cab0 = cache_frame_b72670c7af8872b75391a36bbdb1cab0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_b72670c7af8872b75391a36bbdb1cab0);
    assert(Py_REFCNT(frame_b72670c7af8872b75391a36bbdb1cab0) == 2);

    // Framed code:
    {
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[118];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_expression_value_1;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_1 = par_self;
            tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[115]);
            if (tmp_format_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 559;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_1 = mod_consts[80];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
            Py_DECREF(tmp_format_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 559;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[112];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_return_value = PyUnicode_Join(mod_consts[80], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 559;
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
        exception_tb = MAKE_TRACEBACK(frame_b72670c7af8872b75391a36bbdb1cab0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b72670c7af8872b75391a36bbdb1cab0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b72670c7af8872b75391a36bbdb1cab0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b72670c7af8872b75391a36bbdb1cab0,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_b72670c7af8872b75391a36bbdb1cab0 == cache_frame_b72670c7af8872b75391a36bbdb1cab0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b72670c7af8872b75391a36bbdb1cab0);
        cache_frame_b72670c7af8872b75391a36bbdb1cab0 = NULL;
    }

    assertFrameObject(frame_b72670c7af8872b75391a36bbdb1cab0);

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


static PyObject *impl_attr$validators$$$function__36_max_len(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_length = python_pars[0];
    struct Nuitka_FrameObject *frame_1b1f75ce236e73e2e9374cd5d9e3ccc0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1b1f75ce236e73e2e9374cd5d9e3ccc0 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1b1f75ce236e73e2e9374cd5d9e3ccc0)) {
        Py_XDECREF(cache_frame_1b1f75ce236e73e2e9374cd5d9e3ccc0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1b1f75ce236e73e2e9374cd5d9e3ccc0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1b1f75ce236e73e2e9374cd5d9e3ccc0 = MAKE_FUNCTION_FRAME(tstate, codeobj_1b1f75ce236e73e2e9374cd5d9e3ccc0, module_attr$validators, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1b1f75ce236e73e2e9374cd5d9e3ccc0->m_type_description == NULL);
    frame_1b1f75ce236e73e2e9374cd5d9e3ccc0 = cache_frame_1b1f75ce236e73e2e9374cd5d9e3ccc0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_1b1f75ce236e73e2e9374cd5d9e3ccc0);
    assert(Py_REFCNT(frame_1b1f75ce236e73e2e9374cd5d9e3ccc0) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[119]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[119]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 571;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_length);
        tmp_args_element_value_1 = par_length;
        frame_1b1f75ce236e73e2e9374cd5d9e3ccc0->m_frame.f_lineno = 571;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 571;
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
        exception_tb = MAKE_TRACEBACK(frame_1b1f75ce236e73e2e9374cd5d9e3ccc0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1b1f75ce236e73e2e9374cd5d9e3ccc0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1b1f75ce236e73e2e9374cd5d9e3ccc0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1b1f75ce236e73e2e9374cd5d9e3ccc0,
        type_description_1,
        par_length
    );


    // Release cached frame if used for exception.
    if (frame_1b1f75ce236e73e2e9374cd5d9e3ccc0 == cache_frame_1b1f75ce236e73e2e9374cd5d9e3ccc0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1b1f75ce236e73e2e9374cd5d9e3ccc0);
        cache_frame_1b1f75ce236e73e2e9374cd5d9e3ccc0 = NULL;
    }

    assertFrameObject(frame_1b1f75ce236e73e2e9374cd5d9e3ccc0);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_length);
    Py_DECREF(par_length);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_length);
    Py_DECREF(par_length);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_attr$validators$$$function__37___call__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_inst = python_pars[1];
    PyObject *par_attr = python_pars[2];
    PyObject *par_value = python_pars[3];
    struct Nuitka_FrameObject *frame_63ace2698c66b7e3bed989917a9c7b6f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_63ace2698c66b7e3bed989917a9c7b6f = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_63ace2698c66b7e3bed989917a9c7b6f)) {
        Py_XDECREF(cache_frame_63ace2698c66b7e3bed989917a9c7b6f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_63ace2698c66b7e3bed989917a9c7b6f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_63ace2698c66b7e3bed989917a9c7b6f = MAKE_FUNCTION_FRAME(tstate, codeobj_63ace2698c66b7e3bed989917a9c7b6f, module_attr$validators, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_63ace2698c66b7e3bed989917a9c7b6f->m_type_description == NULL);
    frame_63ace2698c66b7e3bed989917a9c7b6f = cache_frame_63ace2698c66b7e3bed989917a9c7b6f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_63ace2698c66b7e3bed989917a9c7b6f);
    assert(Py_REFCNT(frame_63ace2698c66b7e3bed989917a9c7b6f) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_value);
        tmp_len_arg_1 = par_value;
        tmp_cmp_expr_left_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 582;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[121]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 582;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = RICH_COMPARE_LT_NBOOL_LONG_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 582;
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
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_kw_call_dict_value_2_1;
        PyObject *tmp_len_arg_2;
        tmp_kw_call_arg_value_0_1 = mod_consts[122];
        CHECK_OBJECT(par_attr);
        tmp_expression_value_2 = par_attr;
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[10]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 585;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_kw_call_dict_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[121]);
        if (tmp_kw_call_dict_value_1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_dict_value_0_1);

            exception_lineno = 585;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_value);
        tmp_len_arg_2 = par_value;
        tmp_kw_call_dict_value_2_1 = BUILTIN_LEN(tstate, tmp_len_arg_2);
        if (tmp_kw_call_dict_value_2_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_dict_value_0_1);
            Py_DECREF(tmp_kw_call_dict_value_1_1);

            exception_lineno = 585;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_63ace2698c66b7e3bed989917a9c7b6f->m_frame.f_lineno = 584;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[3] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1};
            tmp_make_exception_arg_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, unicode_builtin_format, args, kw_values, mod_consts[123]);
        }

        Py_DECREF(tmp_kw_call_dict_value_0_1);
        Py_DECREF(tmp_kw_call_dict_value_1_1);
        Py_DECREF(tmp_kw_call_dict_value_2_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 584;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_63ace2698c66b7e3bed989917a9c7b6f->m_frame.f_lineno = 583;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 583;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_63ace2698c66b7e3bed989917a9c7b6f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_63ace2698c66b7e3bed989917a9c7b6f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_63ace2698c66b7e3bed989917a9c7b6f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_63ace2698c66b7e3bed989917a9c7b6f,
        type_description_1,
        par_self,
        par_inst,
        par_attr,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_63ace2698c66b7e3bed989917a9c7b6f == cache_frame_63ace2698c66b7e3bed989917a9c7b6f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_63ace2698c66b7e3bed989917a9c7b6f);
        cache_frame_63ace2698c66b7e3bed989917a9c7b6f = NULL;
    }

    assertFrameObject(frame_63ace2698c66b7e3bed989917a9c7b6f);

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
    CHECK_OBJECT(par_inst);
    Py_DECREF(par_inst);
    CHECK_OBJECT(par_attr);
    Py_DECREF(par_attr);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_inst);
    Py_DECREF(par_inst);
    CHECK_OBJECT(par_attr);
    Py_DECREF(par_attr);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_attr$validators$$$function__38___repr__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_74a908f0b575950cbc78e560ccca653e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_74a908f0b575950cbc78e560ccca653e = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_74a908f0b575950cbc78e560ccca653e)) {
        Py_XDECREF(cache_frame_74a908f0b575950cbc78e560ccca653e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_74a908f0b575950cbc78e560ccca653e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_74a908f0b575950cbc78e560ccca653e = MAKE_FUNCTION_FRAME(tstate, codeobj_74a908f0b575950cbc78e560ccca653e, module_attr$validators, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_74a908f0b575950cbc78e560ccca653e->m_type_description == NULL);
    frame_74a908f0b575950cbc78e560ccca653e = cache_frame_74a908f0b575950cbc78e560ccca653e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_74a908f0b575950cbc78e560ccca653e);
    assert(Py_REFCNT(frame_74a908f0b575950cbc78e560ccca653e) == 2);

    // Framed code:
    {
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[124];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_expression_value_1;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_1 = par_self;
            tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[121]);
            if (tmp_format_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 590;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_1 = mod_consts[80];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
            Py_DECREF(tmp_format_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 590;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[112];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_return_value = PyUnicode_Join(mod_consts[80], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 590;
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
        exception_tb = MAKE_TRACEBACK(frame_74a908f0b575950cbc78e560ccca653e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_74a908f0b575950cbc78e560ccca653e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_74a908f0b575950cbc78e560ccca653e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_74a908f0b575950cbc78e560ccca653e,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_74a908f0b575950cbc78e560ccca653e == cache_frame_74a908f0b575950cbc78e560ccca653e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_74a908f0b575950cbc78e560ccca653e);
        cache_frame_74a908f0b575950cbc78e560ccca653e = NULL;
    }

    assertFrameObject(frame_74a908f0b575950cbc78e560ccca653e);

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


static PyObject *impl_attr$validators$$$function__39_min_len(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_length = python_pars[0];
    struct Nuitka_FrameObject *frame_f4c97841ad82abddd45a9d89a1c85045;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f4c97841ad82abddd45a9d89a1c85045 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f4c97841ad82abddd45a9d89a1c85045)) {
        Py_XDECREF(cache_frame_f4c97841ad82abddd45a9d89a1c85045);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f4c97841ad82abddd45a9d89a1c85045 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f4c97841ad82abddd45a9d89a1c85045 = MAKE_FUNCTION_FRAME(tstate, codeobj_f4c97841ad82abddd45a9d89a1c85045, module_attr$validators, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f4c97841ad82abddd45a9d89a1c85045->m_type_description == NULL);
    frame_f4c97841ad82abddd45a9d89a1c85045 = cache_frame_f4c97841ad82abddd45a9d89a1c85045;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_f4c97841ad82abddd45a9d89a1c85045);
    assert(Py_REFCNT(frame_f4c97841ad82abddd45a9d89a1c85045) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[125]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[125]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 602;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_length);
        tmp_args_element_value_1 = par_length;
        frame_f4c97841ad82abddd45a9d89a1c85045->m_frame.f_lineno = 602;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 602;
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
        exception_tb = MAKE_TRACEBACK(frame_f4c97841ad82abddd45a9d89a1c85045, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f4c97841ad82abddd45a9d89a1c85045->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f4c97841ad82abddd45a9d89a1c85045, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f4c97841ad82abddd45a9d89a1c85045,
        type_description_1,
        par_length
    );


    // Release cached frame if used for exception.
    if (frame_f4c97841ad82abddd45a9d89a1c85045 == cache_frame_f4c97841ad82abddd45a9d89a1c85045) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f4c97841ad82abddd45a9d89a1c85045);
        cache_frame_f4c97841ad82abddd45a9d89a1c85045 = NULL;
    }

    assertFrameObject(frame_f4c97841ad82abddd45a9d89a1c85045);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_length);
    Py_DECREF(par_length);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_length);
    Py_DECREF(par_length);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_attr$validators$$$function__40___call__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_inst = python_pars[1];
    PyObject *par_attr = python_pars[2];
    PyObject *par_value = python_pars[3];
    struct Nuitka_FrameObject *frame_5e3484542a566bdee3917cbd135450cf;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_5e3484542a566bdee3917cbd135450cf = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5e3484542a566bdee3917cbd135450cf)) {
        Py_XDECREF(cache_frame_5e3484542a566bdee3917cbd135450cf);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5e3484542a566bdee3917cbd135450cf == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5e3484542a566bdee3917cbd135450cf = MAKE_FUNCTION_FRAME(tstate, codeobj_5e3484542a566bdee3917cbd135450cf, module_attr$validators, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5e3484542a566bdee3917cbd135450cf->m_type_description == NULL);
    frame_5e3484542a566bdee3917cbd135450cf = cache_frame_5e3484542a566bdee3917cbd135450cf;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_5e3484542a566bdee3917cbd135450cf);
    assert(Py_REFCNT(frame_5e3484542a566bdee3917cbd135450cf) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_issubclass_cls_1;
        PyObject *tmp_issubclass_classes_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_value);
        tmp_issubclass_cls_1 = par_value;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_issubclass_classes_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[8]);
        if (tmp_issubclass_classes_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 613;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsSubclass(tmp_issubclass_cls_1, tmp_issubclass_classes_1);
        Py_DECREF(tmp_issubclass_classes_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 613;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 613;
            type_description_1 = "oooo";
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
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_kw_call_dict_value_2_1;
        PyObject *tmp_make_exception_arg_2;
        PyObject *tmp_make_exception_arg_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_make_exception_arg_4;
        tmp_kw_call_arg_value_0_1 = mod_consts[127];
        CHECK_OBJECT(par_attr);
        tmp_expression_value_2 = par_attr;
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[10]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 617;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_kw_call_dict_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[8]);
        if (tmp_kw_call_dict_value_1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_dict_value_0_1);

            exception_lineno = 618;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_value);
        tmp_kw_call_dict_value_2_1 = par_value;
        frame_5e3484542a566bdee3917cbd135450cf->m_frame.f_lineno = 615;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[3] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1};
            tmp_make_exception_arg_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, unicode_builtin_format, args, kw_values, mod_consts[128]);
        }

        Py_DECREF(tmp_kw_call_dict_value_0_1);
        Py_DECREF(tmp_kw_call_dict_value_1_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 615;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_attr);
        tmp_make_exception_arg_2 = par_attr;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_make_exception_arg_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[8]);
        if (tmp_make_exception_arg_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_make_exception_arg_1);

            exception_lineno = 622;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_value);
        tmp_make_exception_arg_4 = par_value;
        frame_5e3484542a566bdee3917cbd135450cf->m_frame.f_lineno = 614;
        {
            PyObject *call_args[] = {tmp_make_exception_arg_1, tmp_make_exception_arg_2, tmp_make_exception_arg_3, tmp_make_exception_arg_4};
            tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS4(tstate, PyExc_TypeError, call_args);
        }

        Py_DECREF(tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_3);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 614;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5e3484542a566bdee3917cbd135450cf, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5e3484542a566bdee3917cbd135450cf->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5e3484542a566bdee3917cbd135450cf, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5e3484542a566bdee3917cbd135450cf,
        type_description_1,
        par_self,
        par_inst,
        par_attr,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_5e3484542a566bdee3917cbd135450cf == cache_frame_5e3484542a566bdee3917cbd135450cf) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5e3484542a566bdee3917cbd135450cf);
        cache_frame_5e3484542a566bdee3917cbd135450cf = NULL;
    }

    assertFrameObject(frame_5e3484542a566bdee3917cbd135450cf);

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
    CHECK_OBJECT(par_inst);
    Py_DECREF(par_inst);
    CHECK_OBJECT(par_attr);
    Py_DECREF(par_attr);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_inst);
    Py_DECREF(par_inst);
    CHECK_OBJECT(par_attr);
    Py_DECREF(par_attr);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_attr$validators$$$function__41___repr__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_e23a9646c52656abe4c54c89795e762f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e23a9646c52656abe4c54c89795e762f = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e23a9646c52656abe4c54c89795e762f)) {
        Py_XDECREF(cache_frame_e23a9646c52656abe4c54c89795e762f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e23a9646c52656abe4c54c89795e762f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e23a9646c52656abe4c54c89795e762f = MAKE_FUNCTION_FRAME(tstate, codeobj_e23a9646c52656abe4c54c89795e762f, module_attr$validators, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e23a9646c52656abe4c54c89795e762f->m_type_description == NULL);
    frame_e23a9646c52656abe4c54c89795e762f = cache_frame_e23a9646c52656abe4c54c89795e762f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_e23a9646c52656abe4c54c89795e762f);
    assert(Py_REFCNT(frame_e23a9646c52656abe4c54c89795e762f) == 2);

    // Framed code:
    {
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_1;
        tmp_kw_call_arg_value_0_1 = mod_consts[129];
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[8]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 628;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_e23a9646c52656abe4c54c89795e762f->m_frame.f_lineno = 627;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, unicode_builtin_format, args, kw_values, mod_consts[14]);
        }

        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 627;
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
        exception_tb = MAKE_TRACEBACK(frame_e23a9646c52656abe4c54c89795e762f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e23a9646c52656abe4c54c89795e762f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e23a9646c52656abe4c54c89795e762f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e23a9646c52656abe4c54c89795e762f,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_e23a9646c52656abe4c54c89795e762f == cache_frame_e23a9646c52656abe4c54c89795e762f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e23a9646c52656abe4c54c89795e762f);
        cache_frame_e23a9646c52656abe4c54c89795e762f = NULL;
    }

    assertFrameObject(frame_e23a9646c52656abe4c54c89795e762f);

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


static PyObject *impl_attr$validators$$$function__42__subclass_of(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_type = python_pars[0];
    struct Nuitka_FrameObject *frame_1afbab5d8f6c5bcd330a759fe55d6904;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1afbab5d8f6c5bcd330a759fe55d6904 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1afbab5d8f6c5bcd330a759fe55d6904)) {
        Py_XDECREF(cache_frame_1afbab5d8f6c5bcd330a759fe55d6904);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1afbab5d8f6c5bcd330a759fe55d6904 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1afbab5d8f6c5bcd330a759fe55d6904 = MAKE_FUNCTION_FRAME(tstate, codeobj_1afbab5d8f6c5bcd330a759fe55d6904, module_attr$validators, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1afbab5d8f6c5bcd330a759fe55d6904->m_type_description == NULL);
    frame_1afbab5d8f6c5bcd330a759fe55d6904 = cache_frame_1afbab5d8f6c5bcd330a759fe55d6904;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_1afbab5d8f6c5bcd330a759fe55d6904);
    assert(Py_REFCNT(frame_1afbab5d8f6c5bcd330a759fe55d6904) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[130]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[130]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 645;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_type);
        tmp_args_element_value_1 = par_type;
        frame_1afbab5d8f6c5bcd330a759fe55d6904->m_frame.f_lineno = 645;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 645;
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
        exception_tb = MAKE_TRACEBACK(frame_1afbab5d8f6c5bcd330a759fe55d6904, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1afbab5d8f6c5bcd330a759fe55d6904->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1afbab5d8f6c5bcd330a759fe55d6904, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1afbab5d8f6c5bcd330a759fe55d6904,
        type_description_1,
        par_type
    );


    // Release cached frame if used for exception.
    if (frame_1afbab5d8f6c5bcd330a759fe55d6904 == cache_frame_1afbab5d8f6c5bcd330a759fe55d6904) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1afbab5d8f6c5bcd330a759fe55d6904);
        cache_frame_1afbab5d8f6c5bcd330a759fe55d6904 = NULL;
    }

    assertFrameObject(frame_1afbab5d8f6c5bcd330a759fe55d6904);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_type);
    Py_DECREF(par_type);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_type);
    Py_DECREF(par_type);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_attr$validators$$$function__43___call__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_inst = python_pars[1];
    PyObject *par_attr = python_pars[2];
    PyObject *par_value = python_pars[3];
    nuitka_bool tmp_try_except_1__unhandled_indicator = NUITKA_BOOL_UNASSIGNED;
    struct Nuitka_FrameObject *frame_861b51623cd62076b3ea8a7f72cc173a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
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
    static struct Nuitka_FrameObject *cache_frame_861b51623cd62076b3ea8a7f72cc173a = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        nuitka_bool tmp_assign_source_1;
        tmp_assign_source_1 = NUITKA_BOOL_TRUE;
        tmp_try_except_1__unhandled_indicator = tmp_assign_source_1;
    }
    if (isFrameUnusable(cache_frame_861b51623cd62076b3ea8a7f72cc173a)) {
        Py_XDECREF(cache_frame_861b51623cd62076b3ea8a7f72cc173a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_861b51623cd62076b3ea8a7f72cc173a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_861b51623cd62076b3ea8a7f72cc173a = MAKE_FUNCTION_FRAME(tstate, codeobj_861b51623cd62076b3ea8a7f72cc173a, module_attr$validators, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_861b51623cd62076b3ea8a7f72cc173a->m_type_description == NULL);
    frame_861b51623cd62076b3ea8a7f72cc173a = cache_frame_861b51623cd62076b3ea8a7f72cc173a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_861b51623cd62076b3ea8a7f72cc173a);
    assert(Py_REFCNT(frame_861b51623cd62076b3ea8a7f72cc173a) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_inst);
        tmp_args_element_value_1 = par_inst;
        CHECK_OBJECT(par_attr);
        tmp_args_element_value_2 = par_attr;
        CHECK_OBJECT(par_value);
        tmp_args_element_value_3 = par_value;
        frame_861b51623cd62076b3ea8a7f72cc173a->m_frame.f_lineno = 666;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS3(
                tstate,
                tmp_called_instance_1,
                mod_consts[53],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 666;
            type_description_1 = "oooo";
            goto try_except_handler_1;
        }
        Py_DECREF(tmp_call_result_1);
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

    {
        nuitka_bool tmp_assign_source_2;
        tmp_assign_source_2 = NUITKA_BOOL_FALSE;
        tmp_try_except_1__unhandled_indicator = tmp_assign_source_2;
    }
    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_861b51623cd62076b3ea8a7f72cc173a, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_861b51623cd62076b3ea8a7f72cc173a, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[132]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 667;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 667;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 665;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_861b51623cd62076b3ea8a7f72cc173a->m_frame) frame_861b51623cd62076b3ea8a7f72cc173a->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooo";
    goto try_except_handler_2;
    branch_no_1:;
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
    {
        bool tmp_condition_result_2;
        nuitka_bool tmp_cmp_expr_left_2;
        nuitka_bool tmp_cmp_expr_right_2;
        assert(tmp_try_except_1__unhandled_indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_2 = tmp_try_except_1__unhandled_indicator;
        tmp_cmp_expr_right_2 = NUITKA_BOOL_TRUE;
        tmp_condition_result_2 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_make_exception_arg_2;
        PyObject *tmp_make_exception_arg_3;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_make_exception_arg_4;
        PyObject *tmp_make_exception_arg_5;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[133]);
        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 671;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[134]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 671;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[53]);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 672;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_kw_call_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[132]);
        if (tmp_kw_call_value_1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 673;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_861b51623cd62076b3ea8a7f72cc173a->m_frame.f_lineno = 671;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

            tmp_make_exception_arg_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_1, kw_values, mod_consts[135]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_value_0_1);
        Py_DECREF(tmp_kw_call_value_1_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 671;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (par_attr == NULL) {
            Py_DECREF(tmp_make_exception_arg_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[79]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 675;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_make_exception_arg_2 = par_attr;
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_make_exception_arg_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[53]);
        if (tmp_make_exception_arg_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_make_exception_arg_1);

            exception_lineno = 676;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (par_value == NULL) {
            Py_DECREF(tmp_make_exception_arg_1);
            Py_DECREF(tmp_make_exception_arg_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[75]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 677;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_make_exception_arg_4 = par_value;
        CHECK_OBJECT(par_self);
        tmp_expression_value_7 = par_self;
        tmp_make_exception_arg_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[132]);
        if (tmp_make_exception_arg_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_make_exception_arg_1);
            Py_DECREF(tmp_make_exception_arg_3);

            exception_lineno = 678;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_861b51623cd62076b3ea8a7f72cc173a->m_frame.f_lineno = 670;
        {
            PyObject *call_args[] = {tmp_make_exception_arg_1, tmp_make_exception_arg_2, tmp_make_exception_arg_3, tmp_make_exception_arg_4, tmp_make_exception_arg_5};
            tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS5(tstate, PyExc_ValueError, call_args);
        }

        Py_DECREF(tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_3);
        Py_DECREF(tmp_make_exception_arg_5);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 670;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_861b51623cd62076b3ea8a7f72cc173a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_861b51623cd62076b3ea8a7f72cc173a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_861b51623cd62076b3ea8a7f72cc173a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_861b51623cd62076b3ea8a7f72cc173a,
        type_description_1,
        par_self,
        par_inst,
        par_attr,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_861b51623cd62076b3ea8a7f72cc173a == cache_frame_861b51623cd62076b3ea8a7f72cc173a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_861b51623cd62076b3ea8a7f72cc173a);
        cache_frame_861b51623cd62076b3ea8a7f72cc173a = NULL;
    }

    assertFrameObject(frame_861b51623cd62076b3ea8a7f72cc173a);

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
    CHECK_OBJECT(par_inst);
    Py_DECREF(par_inst);
    CHECK_OBJECT(par_attr);
    Py_DECREF(par_attr);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_inst);
    Py_DECREF(par_inst);
    CHECK_OBJECT(par_attr);
    Py_DECREF(par_attr);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_attr$validators$$$function__44___repr__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_12573e910eab43e3f5baadb25e52bd0f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_12573e910eab43e3f5baadb25e52bd0f = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_12573e910eab43e3f5baadb25e52bd0f)) {
        Py_XDECREF(cache_frame_12573e910eab43e3f5baadb25e52bd0f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_12573e910eab43e3f5baadb25e52bd0f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_12573e910eab43e3f5baadb25e52bd0f = MAKE_FUNCTION_FRAME(tstate, codeobj_12573e910eab43e3f5baadb25e52bd0f, module_attr$validators, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_12573e910eab43e3f5baadb25e52bd0f->m_type_description == NULL);
    frame_12573e910eab43e3f5baadb25e52bd0f = cache_frame_12573e910eab43e3f5baadb25e52bd0f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_12573e910eab43e3f5baadb25e52bd0f);
    assert(Py_REFCNT(frame_12573e910eab43e3f5baadb25e52bd0f) == 2);

    // Framed code:
    {
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_expression_value_2;
        tmp_kw_call_arg_value_0_1 = mod_consts[136];
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[53]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 685;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_kw_call_dict_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[132]);
        if (tmp_kw_call_dict_value_1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_dict_value_0_1);

            exception_lineno = 686;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_12573e910eab43e3f5baadb25e52bd0f->m_frame.f_lineno = 682;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, unicode_builtin_format, args, kw_values, mod_consts[137]);
        }

        Py_DECREF(tmp_kw_call_dict_value_0_1);
        Py_DECREF(tmp_kw_call_dict_value_1_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 682;
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
        exception_tb = MAKE_TRACEBACK(frame_12573e910eab43e3f5baadb25e52bd0f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_12573e910eab43e3f5baadb25e52bd0f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_12573e910eab43e3f5baadb25e52bd0f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_12573e910eab43e3f5baadb25e52bd0f,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_12573e910eab43e3f5baadb25e52bd0f == cache_frame_12573e910eab43e3f5baadb25e52bd0f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_12573e910eab43e3f5baadb25e52bd0f);
        cache_frame_12573e910eab43e3f5baadb25e52bd0f = NULL;
    }

    assertFrameObject(frame_12573e910eab43e3f5baadb25e52bd0f);

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


static PyObject *impl_attr$validators$$$function__45_not_(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_validator = python_pars[0];
    PyObject *par_msg = python_pars[1];
    PyObject *par_exc_types = python_pars[2];
    struct Nuitka_FrameObject *frame_f076ce2421f7b03a97a72080814daeda;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_f076ce2421f7b03a97a72080814daeda = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_f076ce2421f7b03a97a72080814daeda)) {
        Py_XDECREF(cache_frame_f076ce2421f7b03a97a72080814daeda);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f076ce2421f7b03a97a72080814daeda == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f076ce2421f7b03a97a72080814daeda = MAKE_FUNCTION_FRAME(tstate, codeobj_f076ce2421f7b03a97a72080814daeda, module_attr$validators, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f076ce2421f7b03a97a72080814daeda->m_type_description == NULL);
    frame_f076ce2421f7b03a97a72080814daeda = cache_frame_f076ce2421f7b03a97a72080814daeda;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_f076ce2421f7b03a97a72080814daeda);
    assert(Py_REFCNT(frame_f076ce2421f7b03a97a72080814daeda) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_tuple_arg_1;
        CHECK_OBJECT(par_exc_types);
        tmp_tuple_arg_1 = par_exc_types;
        tmp_assign_source_1 = PySequence_Tuple(tmp_tuple_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 717;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = par_exc_types;
            assert(old != NULL);
            par_exc_types = tmp_assign_source_1;
            Py_DECREF(old);
        }

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
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_f076ce2421f7b03a97a72080814daeda, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_f076ce2421f7b03a97a72080814daeda, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_TypeError;
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
        PyObject *tmp_assign_source_2;
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(par_exc_types);
        tmp_tuple_element_1 = par_exc_types;
        tmp_assign_source_2 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_2, 0, tmp_tuple_element_1);
        {
            PyObject *old = par_exc_types;
            assert(old != NULL);
            par_exc_types = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 716;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_f076ce2421f7b03a97a72080814daeda->m_frame) frame_f076ce2421f7b03a97a72080814daeda->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooo";
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
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[138]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[138]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 720;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_validator);
        tmp_args_element_value_1 = par_validator;
        CHECK_OBJECT(par_msg);
        tmp_args_element_value_2 = par_msg;
        CHECK_OBJECT(par_exc_types);
        tmp_args_element_value_3 = par_exc_types;
        frame_f076ce2421f7b03a97a72080814daeda->m_frame.f_lineno = 720;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 720;
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
        exception_tb = MAKE_TRACEBACK(frame_f076ce2421f7b03a97a72080814daeda, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f076ce2421f7b03a97a72080814daeda->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f076ce2421f7b03a97a72080814daeda, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f076ce2421f7b03a97a72080814daeda,
        type_description_1,
        par_validator,
        par_msg,
        par_exc_types
    );


    // Release cached frame if used for exception.
    if (frame_f076ce2421f7b03a97a72080814daeda == cache_frame_f076ce2421f7b03a97a72080814daeda) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f076ce2421f7b03a97a72080814daeda);
        cache_frame_f076ce2421f7b03a97a72080814daeda = NULL;
    }

    assertFrameObject(frame_f076ce2421f7b03a97a72080814daeda);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_exc_types);
    Py_DECREF(par_exc_types);
    par_exc_types = NULL;
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

    Py_XDECREF(par_exc_types);
    par_exc_types = NULL;
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
    CHECK_OBJECT(par_validator);
    Py_DECREF(par_validator);
    CHECK_OBJECT(par_msg);
    Py_DECREF(par_msg);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_validator);
    Py_DECREF(par_validator);
    CHECK_OBJECT(par_msg);
    Py_DECREF(par_msg);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_attr$validators$$$function__10___call__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_attr$validators$$$function__10___call__,
        mod_consts[172],
#if PYTHON_VERSION >= 0x300
        mod_consts[183],
#endif
        codeobj_c7f22820f9a87859fffb3e49c6231c4a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_attr$validators,
        mod_consts[12],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_attr$validators$$$function__11___repr__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_attr$validators$$$function__11___repr__,
        mod_consts[174],
#if PYTHON_VERSION >= 0x300
        mod_consts[184],
#endif
        codeobj_e3ab098afffbbdf4299e77bfb37db923,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_attr$validators,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_attr$validators$$$function__12_provides() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_attr$validators$$$function__12_provides,
        mod_consts[185],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_477c713fc232886fa1955e7eb8c050da,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_attr$validators,
        mod_consts[52],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_attr$validators$$$function__13___call__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_attr$validators$$$function__13___call__,
        mod_consts[172],
#if PYTHON_VERSION >= 0x300
        mod_consts[186],
#endif
        codeobj_a186867c3f9b3c67b231c15bad10a01f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_attr$validators,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_attr$validators$$$function__14___repr__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_attr$validators$$$function__14___repr__,
        mod_consts[174],
#if PYTHON_VERSION >= 0x300
        mod_consts[187],
#endif
        codeobj_88c1c11c442b66e37a172e9b157bef3d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_attr$validators,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_attr$validators$$$function__15_optional() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_attr$validators$$$function__15_optional,
        mod_consts[188],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_514111c1a5df8603de5d67d9e0db68b2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_attr$validators,
        mod_consts[59],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_attr$validators$$$function__16___call__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_attr$validators$$$function__16___call__,
        mod_consts[172],
#if PYTHON_VERSION >= 0x300
        mod_consts[189],
#endif
        codeobj_1dea7cb8c76a75069be97bb4832990eb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_attr$validators,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_attr$validators$$$function__17___repr__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_attr$validators$$$function__17___repr__,
        mod_consts[174],
#if PYTHON_VERSION >= 0x300
        mod_consts[190],
#endif
        codeobj_3e117b2bf495016ab769c655de4fa118,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_attr$validators,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_attr$validators$$$function__18_in_() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_attr$validators$$$function__18_in_,
        mod_consts[191],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_48912133c975765978884ea671cbb058,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_attr$validators,
        mod_consts[66],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_attr$validators$$$function__19___call__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_attr$validators$$$function__19___call__,
        mod_consts[172],
#if PYTHON_VERSION >= 0x300
        mod_consts[193],
#endif
        codeobj_5b40ac93c2d6c7f39f8529c055df8015,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_attr$validators,
        mod_consts[12],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_attr$validators$$$function__1_set_disabled() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_attr$validators$$$function__1_set_disabled,
        mod_consts[165],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_76e050eb140159f97c596abee38a3af9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_attr$validators,
        mod_consts[1],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_attr$validators$$$function__20___repr__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[174],
#if PYTHON_VERSION >= 0x300
        mod_consts[195],
#endif
        codeobj_8ea1cab079976ff91470642f1c7dc83e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_attr$validators,
        NULL,
        NULL,
        0
    );
    Nuitka_Function_EnableConstReturnGeneric(result, mod_consts[194]);

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_attr$validators$$$function__21_is_callable() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_attr$validators$$$function__21_is_callable,
        mod_consts[196],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_36e5b231644e2870fc60d8b058f99004,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_attr$validators,
        mod_consts[73],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_attr$validators$$$function__22___call__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_attr$validators$$$function__22___call__,
        mod_consts[172],
#if PYTHON_VERSION >= 0x300
        mod_consts[199],
#endif
        codeobj_405035a4c203576113a6d3086c4d0b6d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_attr$validators,
        mod_consts[12],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_attr$validators$$$function__23___repr__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_attr$validators$$$function__23___repr__,
        mod_consts[174],
#if PYTHON_VERSION >= 0x300
        mod_consts[200],
#endif
        codeobj_72bfd1af4ec0868cca3cea92fdff1391,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_attr$validators,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_attr$validators$$$function__24_deep_iterable(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_attr$validators$$$function__24_deep_iterable,
        mod_consts[202],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_cafeae836fe5b3d7a303f978e377b5af,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_attr$validators,
        mod_consts[86],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_attr$validators$$$function__25___call__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_attr$validators$$$function__25___call__,
        mod_consts[172],
#if PYTHON_VERSION >= 0x300
        mod_consts[203],
#endif
        codeobj_ceed3b8c0904e85e69066524d473c134,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_attr$validators,
        mod_consts[12],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_attr$validators$$$function__26___repr__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_attr$validators$$$function__26___repr__,
        mod_consts[174],
#if PYTHON_VERSION >= 0x300
        mod_consts[204],
#endif
        codeobj_54d72b3d67e21c0e1f04de166ade5a20,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_attr$validators,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_attr$validators$$$function__27_deep_mapping(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_attr$validators$$$function__27_deep_mapping,
        mod_consts[205],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_29eaa102e8ae6445d5e24adf330f979e,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_attr$validators,
        mod_consts[93],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_attr$validators$$$function__28___call__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_attr$validators$$$function__28___call__,
        mod_consts[172],
#if PYTHON_VERSION >= 0x300
        mod_consts[206],
#endif
        codeobj_4eab6374cf9d075bcbc4d7063f54e2f9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_attr$validators,
        mod_consts[12],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_attr$validators$$$function__29___repr__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_attr$validators$$$function__29___repr__,
        mod_consts[174],
#if PYTHON_VERSION >= 0x300
        mod_consts[207],
#endif
        codeobj_98471cd8d3e98b993e47830ee662ef30,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_attr$validators,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_attr$validators$$$function__2_get_disabled() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_attr$validators$$$function__2_get_disabled,
        mod_consts[166],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_0c171d1716088877bb7331d474cd9df7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_attr$validators,
        mod_consts[3],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_attr$validators$$$function__30_lt() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_attr$validators$$$function__30_lt,
        mod_consts[104],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_0357d6cd1f556e00a28d71590e5c6f5c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_attr$validators,
        mod_consts[105],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_attr$validators$$$function__31_le() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_attr$validators$$$function__31_le,
        mod_consts[107],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_430a57b8f0a58523b830d32518f43620,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_attr$validators,
        mod_consts[108],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_attr$validators$$$function__32_ge() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_attr$validators$$$function__32_ge,
        mod_consts[110],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_81128da0653898e6ace28dfc76cdd66b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_attr$validators,
        mod_consts[111],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_attr$validators$$$function__33_gt() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_attr$validators$$$function__33_gt,
        mod_consts[113],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_4f5fd3a67f7d7044fe627ed9d3b04aa0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_attr$validators,
        mod_consts[114],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_attr$validators$$$function__34___call__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_attr$validators$$$function__34___call__,
        mod_consts[172],
#if PYTHON_VERSION >= 0x300
        mod_consts[208],
#endif
        codeobj_10735ebeb38bc196b0bb17585db9c33c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_attr$validators,
        mod_consts[12],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_attr$validators$$$function__35___repr__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_attr$validators$$$function__35___repr__,
        mod_consts[174],
#if PYTHON_VERSION >= 0x300
        mod_consts[209],
#endif
        codeobj_b72670c7af8872b75391a36bbdb1cab0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_attr$validators,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_attr$validators$$$function__36_max_len() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_attr$validators$$$function__36_max_len,
        mod_consts[210],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1b1f75ce236e73e2e9374cd5d9e3ccc0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_attr$validators,
        mod_consts[120],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_attr$validators$$$function__37___call__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_attr$validators$$$function__37___call__,
        mod_consts[172],
#if PYTHON_VERSION >= 0x300
        mod_consts[211],
#endif
        codeobj_63ace2698c66b7e3bed989917a9c7b6f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_attr$validators,
        mod_consts[12],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_attr$validators$$$function__38___repr__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_attr$validators$$$function__38___repr__,
        mod_consts[174],
#if PYTHON_VERSION >= 0x300
        mod_consts[212],
#endif
        codeobj_74a908f0b575950cbc78e560ccca653e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_attr$validators,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_attr$validators$$$function__39_min_len() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_attr$validators$$$function__39_min_len,
        mod_consts[213],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f4c97841ad82abddd45a9d89a1c85045,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_attr$validators,
        mod_consts[126],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_attr$validators$$$function__3_disabled() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_attr$validators$$$function__3_disabled,
        mod_consts[7],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_88dd6c1d8621e7b00a249fff4fe36b10,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_attr$validators,
        mod_consts[4],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_attr$validators$$$function__40___call__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_attr$validators$$$function__40___call__,
        mod_consts[172],
#if PYTHON_VERSION >= 0x300
        mod_consts[214],
#endif
        codeobj_5e3484542a566bdee3917cbd135450cf,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_attr$validators,
        mod_consts[12],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_attr$validators$$$function__41___repr__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_attr$validators$$$function__41___repr__,
        mod_consts[174],
#if PYTHON_VERSION >= 0x300
        mod_consts[215],
#endif
        codeobj_e23a9646c52656abe4c54c89795e762f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_attr$validators,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_attr$validators$$$function__42__subclass_of() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_attr$validators$$$function__42__subclass_of,
        mod_consts[216],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1afbab5d8f6c5bcd330a759fe55d6904,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_attr$validators,
        mod_consts[131],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_attr$validators$$$function__43___call__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_attr$validators$$$function__43___call__,
        mod_consts[172],
#if PYTHON_VERSION >= 0x300
        mod_consts[222],
#endif
        codeobj_861b51623cd62076b3ea8a7f72cc173a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_attr$validators,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_attr$validators$$$function__44___repr__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_attr$validators$$$function__44___repr__,
        mod_consts[174],
#if PYTHON_VERSION >= 0x300
        mod_consts[223],
#endif
        codeobj_12573e910eab43e3f5baadb25e52bd0f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_attr$validators,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_attr$validators$$$function__45_not_(PyObject *kw_defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_attr$validators$$$function__45_not_,
        mod_consts[225],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f076ce2421f7b03a97a72080814daeda,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        NULL,
#endif
        module_attr$validators,
        mod_consts[139],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_attr$validators$$$function__4___call__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_attr$validators$$$function__4___call__,
        mod_consts[172],
#if PYTHON_VERSION >= 0x300
        mod_consts[173],
#endif
        codeobj_988862692cdc9850a09610961ea820b2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_attr$validators,
        mod_consts[12],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_attr$validators$$$function__5___repr__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_attr$validators$$$function__5___repr__,
        mod_consts[174],
#if PYTHON_VERSION >= 0x300
        mod_consts[175],
#endif
        codeobj_aa8c8eb3239fb45f4eb742e1a67a6b8a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_attr$validators,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_attr$validators$$$function__6_instance_of() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_attr$validators$$$function__6_instance_of,
        mod_consts[177],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_fc048ae62e98d67b43f949c41d7ea7d4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_attr$validators,
        mod_consts[16],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_attr$validators$$$function__7___call__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_attr$validators$$$function__7___call__,
        mod_consts[172],
#if PYTHON_VERSION >= 0x300
        mod_consts[179],
#endif
        codeobj_b2f764ab5e0250250229c187d9299450,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_attr$validators,
        mod_consts[12],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_attr$validators$$$function__8___repr__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_attr$validators$$$function__8___repr__,
        mod_consts[174],
#if PYTHON_VERSION >= 0x300
        mod_consts[180],
#endif
        codeobj_320b7d0d2b552c4d9e727089e8234ea3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_attr$validators,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_attr$validators$$$function__9_matches_re(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_attr$validators$$$function__9_matches_re,
        mod_consts[182],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7d018cf8b9bc1437fb99fb5a1845bdbd,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_attr$validators,
        mod_consts[34],
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

function_impl_code functable_attr$validators[] = {
    impl_attr$validators$$$function__1_set_disabled,
    impl_attr$validators$$$function__2_get_disabled,
    impl_attr$validators$$$function__3_disabled,
    impl_attr$validators$$$function__4___call__,
    impl_attr$validators$$$function__5___repr__,
    impl_attr$validators$$$function__6_instance_of,
    impl_attr$validators$$$function__7___call__,
    impl_attr$validators$$$function__8___repr__,
    impl_attr$validators$$$function__9_matches_re,
    impl_attr$validators$$$function__10___call__,
    impl_attr$validators$$$function__11___repr__,
    impl_attr$validators$$$function__12_provides,
    impl_attr$validators$$$function__13___call__,
    impl_attr$validators$$$function__14___repr__,
    impl_attr$validators$$$function__15_optional,
    impl_attr$validators$$$function__16___call__,
    impl_attr$validators$$$function__17___repr__,
    impl_attr$validators$$$function__18_in_,
    impl_attr$validators$$$function__19___call__,
    NULL,
    impl_attr$validators$$$function__21_is_callable,
    impl_attr$validators$$$function__22___call__,
    impl_attr$validators$$$function__23___repr__,
    impl_attr$validators$$$function__24_deep_iterable,
    impl_attr$validators$$$function__25___call__,
    impl_attr$validators$$$function__26___repr__,
    impl_attr$validators$$$function__27_deep_mapping,
    impl_attr$validators$$$function__28___call__,
    impl_attr$validators$$$function__29___repr__,
    impl_attr$validators$$$function__30_lt,
    impl_attr$validators$$$function__31_le,
    impl_attr$validators$$$function__32_ge,
    impl_attr$validators$$$function__33_gt,
    impl_attr$validators$$$function__34___call__,
    impl_attr$validators$$$function__35___repr__,
    impl_attr$validators$$$function__36_max_len,
    impl_attr$validators$$$function__37___call__,
    impl_attr$validators$$$function__38___repr__,
    impl_attr$validators$$$function__39_min_len,
    impl_attr$validators$$$function__40___call__,
    impl_attr$validators$$$function__41___repr__,
    impl_attr$validators$$$function__42__subclass_of,
    impl_attr$validators$$$function__43___call__,
    impl_attr$validators$$$function__44___repr__,
    impl_attr$validators$$$function__45_not_,
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

    function_impl_code *current = functable_attr$validators;
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

    if (offset > sizeof(functable_attr$validators) || offset < 0) {
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
        functable_attr$validators[offset],
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
        module_attr$validators,
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
PyObject *modulecode_attr$validators(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("attr.validators");

    // Store the module for future use.
    module_attr$validators = module;

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
        PRINT_STRING("attr.validators: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("attr.validators: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initattr$validators\n");

    moduledict_attr$validators = MODULE_DICT(module_attr$validators);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(tstate, loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_attr$validators,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_attr$validators,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[80]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_attr$validators, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_attr$validators,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_attr$validators, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_attr$validators,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_attr$validators, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_attr$validators,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_attr$validators);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_attr$validators, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_attr$validators, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_attr$validators, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_attr$validators, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_attr$validators);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_attr$validators, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
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
    PyObject *outline_6_var___class__ = NULL;
    PyObject *outline_7_var___class__ = NULL;
    PyObject *outline_8_var___class__ = NULL;
    PyObject *outline_9_var___class__ = NULL;
    PyObject *outline_10_var___class__ = NULL;
    PyObject *outline_11_var___class__ = NULL;
    PyObject *outline_12_var___class__ = NULL;
    PyObject *tmp_class_creation_10__class_decl_dict = NULL;
    PyObject *tmp_class_creation_10__prepared = NULL;
    PyObject *tmp_class_creation_11__class_decl_dict = NULL;
    PyObject *tmp_class_creation_11__prepared = NULL;
    PyObject *tmp_class_creation_12__class_decl_dict = NULL;
    PyObject *tmp_class_creation_12__prepared = NULL;
    PyObject *tmp_class_creation_13__class_decl_dict = NULL;
    PyObject *tmp_class_creation_13__prepared = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_class_creation_3__prepared = NULL;
    PyObject *tmp_class_creation_4__class_decl_dict = NULL;
    PyObject *tmp_class_creation_4__prepared = NULL;
    PyObject *tmp_class_creation_5__class_decl_dict = NULL;
    PyObject *tmp_class_creation_5__prepared = NULL;
    PyObject *tmp_class_creation_6__class_decl_dict = NULL;
    PyObject *tmp_class_creation_6__prepared = NULL;
    PyObject *tmp_class_creation_7__class_decl_dict = NULL;
    PyObject *tmp_class_creation_7__prepared = NULL;
    PyObject *tmp_class_creation_8__class_decl_dict = NULL;
    PyObject *tmp_class_creation_8__prepared = NULL;
    PyObject *tmp_class_creation_9__class_decl_dict = NULL;
    PyObject *tmp_class_creation_9__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    struct Nuitka_FrameObject *frame_e679cc00fa9bb510390fa6d28c105412;
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
    PyObject *locals_attr$validators$$$class__1__InstanceOfValidator_92 = NULL;
    PyObject *tmp_dictset_value;
    int tmp_res;
    struct Nuitka_FrameObject *frame_ad9f2b63788dbe119b3f45689596ed88_2;
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
    PyObject *locals_attr$validators$$$class__2__MatchesReValidator_136 = NULL;
    struct Nuitka_FrameObject *frame_22d69bee2c770bb2e74c15e940e8cef8_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *locals_attr$validators$$$class__3__ProvidesValidator_210 = NULL;
    struct Nuitka_FrameObject *frame_9e0fe831b8e2a744aa9d3f113b3a39e5_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
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
    PyObject *locals_attr$validators$$$class__4__OptionalValidator_262 = NULL;
    struct Nuitka_FrameObject *frame_0be3a33eda892766855e9e593f430e45_5;
    NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *locals_attr$validators$$$class__5__InValidator_297 = NULL;
    struct Nuitka_FrameObject *frame_dd6da70bf9d976787d76d03b64e1283f_6;
    NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    PyObject *locals_attr$validators$$$class__6__IsCallableValidator_345 = NULL;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
    PyObject *exception_keeper_type_20;
    PyObject *exception_keeper_value_20;
    PyTracebackObject *exception_keeper_tb_20;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
    PyObject *locals_attr$validators$$$class__7__DeepIterable_382 = NULL;
    struct Nuitka_FrameObject *frame_5c984834de402303c340c5ad32bd6871_7;
    NUITKA_MAY_BE_UNUSED char const *type_description_7 = NULL;
    PyObject *exception_keeper_type_21;
    PyObject *exception_keeper_value_21;
    PyTracebackObject *exception_keeper_tb_21;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
    PyObject *exception_keeper_type_22;
    PyObject *exception_keeper_value_22;
    PyTracebackObject *exception_keeper_tb_22;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
    PyObject *exception_keeper_type_23;
    PyObject *exception_keeper_value_23;
    PyTracebackObject *exception_keeper_tb_23;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;
    PyObject *locals_attr$validators$$$class__8__DeepMapping_431 = NULL;
    struct Nuitka_FrameObject *frame_aa4ce93cea2a9280e99feccb3a96c584_8;
    NUITKA_MAY_BE_UNUSED char const *type_description_8 = NULL;
    PyObject *exception_keeper_type_24;
    PyObject *exception_keeper_value_24;
    PyTracebackObject *exception_keeper_tb_24;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_24;
    PyObject *exception_keeper_type_25;
    PyObject *exception_keeper_value_25;
    PyTracebackObject *exception_keeper_tb_25;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_25;
    PyObject *exception_keeper_type_26;
    PyObject *exception_keeper_value_26;
    PyTracebackObject *exception_keeper_tb_26;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_26;
    PyObject *locals_attr$validators$$$class__9__NumberValidator_470 = NULL;
    struct Nuitka_FrameObject *frame_bb9f9367a8cef951b24934dc455ced47_9;
    NUITKA_MAY_BE_UNUSED char const *type_description_9 = NULL;
    PyObject *exception_keeper_type_27;
    PyObject *exception_keeper_value_27;
    PyTracebackObject *exception_keeper_tb_27;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_27;
    PyObject *exception_keeper_type_28;
    PyObject *exception_keeper_value_28;
    PyTracebackObject *exception_keeper_tb_28;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_28;
    PyObject *exception_keeper_type_29;
    PyObject *exception_keeper_value_29;
    PyTracebackObject *exception_keeper_tb_29;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_29;
    PyObject *locals_attr$validators$$$class__10__MaxLengthValidator_544 = NULL;
    struct Nuitka_FrameObject *frame_76f04fd65912700408b83c6dac385e3d_10;
    NUITKA_MAY_BE_UNUSED char const *type_description_10 = NULL;
    PyObject *exception_keeper_type_30;
    PyObject *exception_keeper_value_30;
    PyTracebackObject *exception_keeper_tb_30;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_30;
    PyObject *exception_keeper_type_31;
    PyObject *exception_keeper_value_31;
    PyTracebackObject *exception_keeper_tb_31;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_31;
    PyObject *exception_keeper_type_32;
    PyObject *exception_keeper_value_32;
    PyTracebackObject *exception_keeper_tb_32;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_32;
    PyObject *locals_attr$validators$$$class__11__MinLengthValidator_575 = NULL;
    struct Nuitka_FrameObject *frame_5085d7a89ed12af3d42281efca988a00_11;
    NUITKA_MAY_BE_UNUSED char const *type_description_11 = NULL;
    PyObject *exception_keeper_type_33;
    PyObject *exception_keeper_value_33;
    PyTracebackObject *exception_keeper_tb_33;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_33;
    PyObject *exception_keeper_type_34;
    PyObject *exception_keeper_value_34;
    PyTracebackObject *exception_keeper_tb_34;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_34;
    PyObject *exception_keeper_type_35;
    PyObject *exception_keeper_value_35;
    PyTracebackObject *exception_keeper_tb_35;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_35;
    PyObject *locals_attr$validators$$$class__12__SubclassOfValidator_606 = NULL;
    struct Nuitka_FrameObject *frame_345c2917192e8f850d3dd6ab7827c01e_12;
    NUITKA_MAY_BE_UNUSED char const *type_description_12 = NULL;
    PyObject *exception_keeper_type_36;
    PyObject *exception_keeper_value_36;
    PyTracebackObject *exception_keeper_tb_36;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_36;
    PyObject *exception_keeper_type_37;
    PyObject *exception_keeper_value_37;
    PyTracebackObject *exception_keeper_tb_37;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_37;
    PyObject *exception_keeper_type_38;
    PyObject *exception_keeper_value_38;
    PyTracebackObject *exception_keeper_tb_38;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_38;
    PyObject *locals_attr$validators$$$class__13__NotValidator_649 = NULL;
    struct Nuitka_FrameObject *frame_eead991384a97d1ad3ea891a9bffd4be_13;
    NUITKA_MAY_BE_UNUSED char const *type_description_13 = NULL;
    PyObject *exception_keeper_type_39;
    PyObject *exception_keeper_value_39;
    PyTracebackObject *exception_keeper_tb_39;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_39;
    PyObject *exception_keeper_type_40;
    PyObject *exception_keeper_value_40;
    PyTracebackObject *exception_keeper_tb_40;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_40;
    PyObject *exception_keeper_type_41;
    PyObject *exception_keeper_value_41;
    PyTracebackObject *exception_keeper_tb_41;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_41;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[140];
        UPDATE_STRING_DICT0(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[141], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[142], tmp_assign_source_2);
    }
    frame_e679cc00fa9bb510390fa6d28c105412 = MAKE_MODULE_FRAME(codeobj_e679cc00fa9bb510390fa6d28c105412, module_attr$validators);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_e679cc00fa9bb510390fa6d28c105412);
    assert(Py_REFCNT(frame_e679cc00fa9bb510390fa6d28c105412) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[143]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[143]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[144], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[143]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[143]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[145], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[146], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[103];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_attr$validators;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[46];
        frame_e679cc00fa9bb510390fa6d28c105412->m_frame.f_lineno = 8;
        tmp_assign_source_4 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[103], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[23];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_attr$validators;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[46];
        frame_e679cc00fa9bb510390fa6d28c105412->m_frame.f_lineno = 9;
        tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[147];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_attr$validators;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[148];
        tmp_level_value_3 = mod_consts[46];
        frame_e679cc00fa9bb510390fa6d28c105412->m_frame.f_lineno = 11;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_attr$validators,
                mod_consts[149],
                mod_consts[46]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[149]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[149], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[23];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_attr$validators;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[150];
        tmp_level_value_4 = mod_consts[46];
        frame_e679cc00fa9bb510390fa6d28c105412->m_frame.f_lineno = 12;
        tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_2,
                (PyObject *)moduledict_attr$validators,
                mod_consts[30],
                mod_consts[46]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[30]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[30], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[151];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_attr$validators;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[152];
        tmp_level_value_5 = mod_consts[153];
        frame_e679cc00fa9bb510390fa6d28c105412->m_frame.f_lineno = 14;
        tmp_assign_source_8 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_8;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_3,
                (PyObject *)moduledict_attr$validators,
                mod_consts[2],
                mod_consts[46]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts[2]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_4,
                (PyObject *)moduledict_attr$validators,
                mod_consts[0],
                mod_consts[46]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts[0]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_10);
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
        PyObject *tmp_assign_source_11;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[154];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_attr$validators;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[155];
        tmp_level_value_6 = mod_consts[153];
        frame_e679cc00fa9bb510390fa6d28c105412->m_frame.f_lineno = 15;
        tmp_assign_source_11 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_11;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_5 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_5,
                (PyObject *)moduledict_attr$validators,
                mod_consts[58],
                mod_consts[46]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts[58]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[58], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_6 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_6,
                (PyObject *)moduledict_attr$validators,
                mod_consts[84],
                mod_consts[46]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts[84]);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[84], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_7 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_7,
                (PyObject *)moduledict_attr$validators,
                mod_consts[156],
                mod_consts[46]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts[156]);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[156], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_8 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_8,
                (PyObject *)moduledict_attr$validators,
                mod_consts[157],
                mod_consts[46]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts[157]);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[157], tmp_assign_source_15);
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
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_9;
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[158];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_attr$validators;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = mod_consts[159];
        tmp_level_value_7 = mod_consts[153];
        frame_e679cc00fa9bb510390fa6d28c105412->m_frame.f_lineno = 16;
        tmp_import_name_from_9 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
        if (tmp_import_name_from_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_9,
                (PyObject *)moduledict_attr$validators,
                mod_consts[160],
                mod_consts[46]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts[160]);
        }

        Py_DECREF(tmp_import_name_from_9);
        if (tmp_assign_source_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[160], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_10;
        PyObject *tmp_name_value_8;
        PyObject *tmp_globals_arg_value_8;
        PyObject *tmp_locals_arg_value_8;
        PyObject *tmp_fromlist_value_8;
        PyObject *tmp_level_value_8;
        tmp_name_value_8 = mod_consts[161];
        tmp_globals_arg_value_8 = (PyObject *)moduledict_attr$validators;
        tmp_locals_arg_value_8 = Py_None;
        tmp_fromlist_value_8 = mod_consts[162];
        tmp_level_value_8 = mod_consts[153];
        frame_e679cc00fa9bb510390fa6d28c105412->m_frame.f_lineno = 17;
        tmp_import_name_from_10 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
        if (tmp_import_name_from_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_10,
                (PyObject *)moduledict_attr$validators,
                mod_consts[68],
                mod_consts[46]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts[68]);
        }

        Py_DECREF(tmp_import_name_from_10);
        if (tmp_assign_source_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[68], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = LIST_COPY(mod_consts[163]);
        UPDATE_STRING_DICT1(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[164], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;


        tmp_assign_source_19 = MAKE_FUNCTION_attr$validators$$$function__1_set_disabled();

        UPDATE_STRING_DICT1(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[165], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;


        tmp_assign_source_20 = MAKE_FUNCTION_attr$validators$$$function__2_get_disabled();

        UPDATE_STRING_DICT1(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[166], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[149]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[149]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_1 = MAKE_FUNCTION_attr$validators$$$function__3_disabled();

        frame_e679cc00fa9bb510390fa6d28c105412->m_frame.f_lineno = 73;
        tmp_assign_source_21 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[7], tmp_assign_source_21);
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
        PyObject *tmp_called_value_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[157]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[157]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto try_except_handler_3;
        }
        frame_e679cc00fa9bb510390fa6d28c105412->m_frame.f_lineno = 91;
        tmp_called_value_2 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_3, &PyTuple_GET_ITEM(mod_consts[167], 0), mod_consts[168]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto try_except_handler_3;
        }
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_attr$validators$$$class__1__InstanceOfValidator_92 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        tmp_dictset_value = mod_consts[169];
        tmp_res = PyDict_SetItem(locals_attr$validators$$$class__1__InstanceOfValidator_92, mod_consts[170], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[15];
        tmp_res = PyDict_SetItem(locals_attr$validators$$$class__1__InstanceOfValidator_92, mod_consts[171], tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        frame_ad9f2b63788dbe119b3f45689596ed88_2 = MAKE_CLASS_FRAME(tstate, codeobj_ad9f2b63788dbe119b3f45689596ed88, module_attr$validators, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_ad9f2b63788dbe119b3f45689596ed88_2);
        assert(Py_REFCNT(frame_ad9f2b63788dbe119b3f45689596ed88_2) == 2);

        // Framed code:
        {
            PyObject *tmp_called_value_4;
            tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[156]);

            if (unlikely(tmp_called_value_4 == NULL)) {
                tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[156]);
            }

            if (tmp_called_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 93;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_ad9f2b63788dbe119b3f45689596ed88_2->m_frame.f_lineno = 93;
            tmp_dictset_value = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_4);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 93;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_attr$validators$$$class__1__InstanceOfValidator_92, mod_consts[8], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 93;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_ad9f2b63788dbe119b3f45689596ed88_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_ad9f2b63788dbe119b3f45689596ed88_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_ad9f2b63788dbe119b3f45689596ed88_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_ad9f2b63788dbe119b3f45689596ed88_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_ad9f2b63788dbe119b3f45689596ed88_2);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_5;
        skip_nested_handling_1:;


        tmp_dictset_value = MAKE_FUNCTION_attr$validators$$$function__4___call__();

        tmp_res = PyDict_SetItem(locals_attr$validators$$$class__1__InstanceOfValidator_92, mod_consts[172], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_attr$validators$$$function__5___repr__();

        tmp_res = PyDict_SetItem(locals_attr$validators$$$class__1__InstanceOfValidator_92, mod_consts[174], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_assign_source_25;
            PyObject *tmp_called_value_5;
            PyObject *tmp_args_value_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kwargs_value_1;
            tmp_called_value_5 = (PyObject *)&PyType_Type;
            tmp_tuple_element_1 = mod_consts[15];
            tmp_args_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[176];
            PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = locals_attr$validators$$$class__1__InstanceOfValidator_92;
            PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
            frame_e679cc00fa9bb510390fa6d28c105412->m_frame.f_lineno = 92;
            tmp_assign_source_25 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_1, tmp_kwargs_value_1);
            Py_DECREF(tmp_args_value_1);
            if (tmp_assign_source_25 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 92;

                goto try_except_handler_5;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_25;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_args_element_value_2 = outline_0_var___class__;
        Py_INCREF(tmp_args_element_value_2);
        goto try_return_handler_5;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        Py_DECREF(locals_attr$validators$$$class__1__InstanceOfValidator_92);
        locals_attr$validators$$$class__1__InstanceOfValidator_92 = NULL;
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

        Py_DECREF(locals_attr$validators$$$class__1__InstanceOfValidator_92);
        locals_attr$validators$$$class__1__InstanceOfValidator_92 = NULL;
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
        exception_lineno = 92;
        goto try_except_handler_3;
        outline_result_1:;
        frame_e679cc00fa9bb510390fa6d28c105412->m_frame.f_lineno = 91;
        tmp_assign_source_24 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_24);
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


        tmp_assign_source_26 = MAKE_FUNCTION_attr$validators$$$function__6_instance_of();

        UPDATE_STRING_DICT1(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[177], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_27;
    }
    {
        PyObject *tmp_assign_source_28;
        tmp_assign_source_28 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_28;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_called_value_6;
        PyObject *tmp_called_value_7;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[157]);

        if (unlikely(tmp_called_value_7 == NULL)) {
            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[157]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto try_except_handler_6;
        }
        frame_e679cc00fa9bb510390fa6d28c105412->m_frame.f_lineno = 135;
        tmp_called_value_6 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_7, &PyTuple_GET_ITEM(mod_consts[167], 0), mod_consts[178]);
        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto try_except_handler_6;
        }
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_attr$validators$$$class__2__MatchesReValidator_136 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        tmp_dictset_value = mod_consts[169];
        tmp_res = PyDict_SetItem(locals_attr$validators$$$class__2__MatchesReValidator_136, mod_consts[170], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[33];
        tmp_res = PyDict_SetItem(locals_attr$validators$$$class__2__MatchesReValidator_136, mod_consts[171], tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        frame_22d69bee2c770bb2e74c15e940e8cef8_3 = MAKE_CLASS_FRAME(tstate, codeobj_22d69bee2c770bb2e74c15e940e8cef8, module_attr$validators, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_22d69bee2c770bb2e74c15e940e8cef8_3);
        assert(Py_REFCNT(frame_22d69bee2c770bb2e74c15e940e8cef8_3) == 2);

        // Framed code:
        {
            PyObject *tmp_called_value_8;
            tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[156]);

            if (unlikely(tmp_called_value_8 == NULL)) {
                tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[156]);
            }

            if (tmp_called_value_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 137;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            frame_22d69bee2c770bb2e74c15e940e8cef8_3->m_frame.f_lineno = 137;
            tmp_dictset_value = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_8);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 137;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyDict_SetItem(locals_attr$validators$$$class__2__MatchesReValidator_136, mod_consts[19], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 137;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_value_9;
            tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[156]);

            if (unlikely(tmp_called_value_9 == NULL)) {
                tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[156]);
            }

            if (tmp_called_value_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            frame_22d69bee2c770bb2e74c15e940e8cef8_3->m_frame.f_lineno = 138;
            tmp_dictset_value = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_9);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyDict_SetItem(locals_attr$validators$$$class__2__MatchesReValidator_136, mod_consts[17], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_22d69bee2c770bb2e74c15e940e8cef8_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_22d69bee2c770bb2e74c15e940e8cef8_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_22d69bee2c770bb2e74c15e940e8cef8_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_22d69bee2c770bb2e74c15e940e8cef8_3,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_22d69bee2c770bb2e74c15e940e8cef8_3);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_8;
        skip_nested_handling_2:;


        tmp_dictset_value = MAKE_FUNCTION_attr$validators$$$function__7___call__();

        tmp_res = PyDict_SetItem(locals_attr$validators$$$class__2__MatchesReValidator_136, mod_consts[172], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_attr$validators$$$function__8___repr__();

        tmp_res = PyDict_SetItem(locals_attr$validators$$$class__2__MatchesReValidator_136, mod_consts[174], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_assign_source_30;
            PyObject *tmp_called_value_10;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_kwargs_value_2;
            tmp_called_value_10 = (PyObject *)&PyType_Type;
            tmp_tuple_element_2 = mod_consts[33];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[176];
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_2);
            tmp_tuple_element_2 = locals_attr$validators$$$class__2__MatchesReValidator_136;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_2);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_2__class_decl_dict;
            frame_e679cc00fa9bb510390fa6d28c105412->m_frame.f_lineno = 136;
            tmp_assign_source_30 = CALL_FUNCTION(tstate, tmp_called_value_10, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_30 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 136;

                goto try_except_handler_8;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_30;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_args_element_value_3 = outline_1_var___class__;
        Py_INCREF(tmp_args_element_value_3);
        goto try_return_handler_8;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        Py_DECREF(locals_attr$validators$$$class__2__MatchesReValidator_136);
        locals_attr$validators$$$class__2__MatchesReValidator_136 = NULL;
        goto try_return_handler_7;
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

        Py_DECREF(locals_attr$validators$$$class__2__MatchesReValidator_136);
        locals_attr$validators$$$class__2__MatchesReValidator_136 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto try_except_handler_7;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        CHECK_OBJECT(outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;
        goto outline_result_2;
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

        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 136;
        goto try_except_handler_6;
        outline_result_2:;
        frame_e679cc00fa9bb510390fa6d28c105412->m_frame.f_lineno = 135;
        tmp_assign_source_29 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assign_source_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_29);
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
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
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    Py_DECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_2__prepared);
    Py_DECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = mod_consts[181];
        Py_INCREF(tmp_defaults_1);


        tmp_assign_source_31 = MAKE_FUNCTION_attr$validators$$$function__9_matches_re(tmp_defaults_1);

        UPDATE_STRING_DICT1(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[182], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        tmp_assign_source_32 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_32;
    }
    {
        PyObject *tmp_assign_source_33;
        tmp_assign_source_33 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_33;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_called_value_11;
        PyObject *tmp_called_value_12;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_12 = GET_STRING_DICT_VALUE(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[157]);

        if (unlikely(tmp_called_value_12 == NULL)) {
            tmp_called_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[157]);
        }

        if (tmp_called_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;

            goto try_except_handler_9;
        }
        frame_e679cc00fa9bb510390fa6d28c105412->m_frame.f_lineno = 209;
        tmp_called_value_11 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_12, &PyTuple_GET_ITEM(mod_consts[167], 0), mod_consts[168]);
        if (tmp_called_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;

            goto try_except_handler_9;
        }
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_attr$validators$$$class__3__ProvidesValidator_210 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        tmp_dictset_value = mod_consts[169];
        tmp_res = PyDict_SetItem(locals_attr$validators$$$class__3__ProvidesValidator_210, mod_consts[170], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[51];
        tmp_res = PyDict_SetItem(locals_attr$validators$$$class__3__ProvidesValidator_210, mod_consts[171], tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        frame_9e0fe831b8e2a744aa9d3f113b3a39e5_4 = MAKE_CLASS_FRAME(tstate, codeobj_9e0fe831b8e2a744aa9d3f113b3a39e5, module_attr$validators, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_9e0fe831b8e2a744aa9d3f113b3a39e5_4);
        assert(Py_REFCNT(frame_9e0fe831b8e2a744aa9d3f113b3a39e5_4) == 2);

        // Framed code:
        {
            PyObject *tmp_called_value_13;
            tmp_called_value_13 = GET_STRING_DICT_VALUE(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[156]);

            if (unlikely(tmp_called_value_13 == NULL)) {
                tmp_called_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[156]);
            }

            if (tmp_called_value_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 211;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            frame_9e0fe831b8e2a744aa9d3f113b3a39e5_4->m_frame.f_lineno = 211;
            tmp_dictset_value = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_13);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 211;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyDict_SetItem(locals_attr$validators$$$class__3__ProvidesValidator_210, mod_consts[39], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 211;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_3;
        frame_exception_exit_4:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_9e0fe831b8e2a744aa9d3f113b3a39e5_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_9e0fe831b8e2a744aa9d3f113b3a39e5_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_9e0fe831b8e2a744aa9d3f113b3a39e5_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_9e0fe831b8e2a744aa9d3f113b3a39e5_4,
            type_description_2,
            outline_2_var___class__
        );



        assertFrameObject(frame_9e0fe831b8e2a744aa9d3f113b3a39e5_4);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_3;
        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;

        goto try_except_handler_11;
        skip_nested_handling_3:;


        tmp_dictset_value = MAKE_FUNCTION_attr$validators$$$function__10___call__();

        tmp_res = PyDict_SetItem(locals_attr$validators$$$class__3__ProvidesValidator_210, mod_consts[172], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_attr$validators$$$function__11___repr__();

        tmp_res = PyDict_SetItem(locals_attr$validators$$$class__3__ProvidesValidator_210, mod_consts[174], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_assign_source_35;
            PyObject *tmp_called_value_14;
            PyObject *tmp_args_value_3;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_kwargs_value_3;
            tmp_called_value_14 = (PyObject *)&PyType_Type;
            tmp_tuple_element_3 = mod_consts[51];
            tmp_args_value_3 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_3);
            tmp_tuple_element_3 = mod_consts[176];
            PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_3);
            tmp_tuple_element_3 = locals_attr$validators$$$class__3__ProvidesValidator_210;
            PyTuple_SET_ITEM0(tmp_args_value_3, 2, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_value_3 = tmp_class_creation_3__class_decl_dict;
            frame_e679cc00fa9bb510390fa6d28c105412->m_frame.f_lineno = 210;
            tmp_assign_source_35 = CALL_FUNCTION(tstate, tmp_called_value_14, tmp_args_value_3, tmp_kwargs_value_3);
            Py_DECREF(tmp_args_value_3);
            if (tmp_assign_source_35 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 210;

                goto try_except_handler_11;
            }
            assert(outline_2_var___class__ == NULL);
            outline_2_var___class__ = tmp_assign_source_35;
        }
        CHECK_OBJECT(outline_2_var___class__);
        tmp_args_element_value_4 = outline_2_var___class__;
        Py_INCREF(tmp_args_element_value_4);
        goto try_return_handler_11;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_11:;
        Py_DECREF(locals_attr$validators$$$class__3__ProvidesValidator_210);
        locals_attr$validators$$$class__3__ProvidesValidator_210 = NULL;
        goto try_return_handler_10;
        // Exception handler code:
        try_except_handler_11:;
        exception_keeper_type_9 = exception_type;
        exception_keeper_value_9 = exception_value;
        exception_keeper_tb_9 = exception_tb;
        exception_keeper_lineno_9 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_attr$validators$$$class__3__ProvidesValidator_210);
        locals_attr$validators$$$class__3__ProvidesValidator_210 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;
        exception_lineno = exception_keeper_lineno_9;

        goto try_except_handler_10;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_10:;
        CHECK_OBJECT(outline_2_var___class__);
        Py_DECREF(outline_2_var___class__);
        outline_2_var___class__ = NULL;
        goto outline_result_3;
        // Exception handler code:
        try_except_handler_10:;
        exception_keeper_type_10 = exception_type;
        exception_keeper_value_10 = exception_value;
        exception_keeper_tb_10 = exception_tb;
        exception_keeper_lineno_10 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;
        exception_lineno = exception_keeper_lineno_10;

        goto outline_exception_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_3:;
        exception_lineno = 210;
        goto try_except_handler_9;
        outline_result_3:;
        frame_e679cc00fa9bb510390fa6d28c105412->m_frame.f_lineno = 209;
        tmp_assign_source_34 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_11);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assign_source_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;

            goto try_except_handler_9;
        }
        UPDATE_STRING_DICT1(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[51], tmp_assign_source_34);
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
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
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
    Py_DECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_3__prepared);
    Py_DECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    {
        PyObject *tmp_assign_source_36;


        tmp_assign_source_36 = MAKE_FUNCTION_attr$validators$$$function__12_provides();

        UPDATE_STRING_DICT1(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[185], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;
        tmp_assign_source_37 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__class_decl_dict == NULL);
        tmp_class_creation_4__class_decl_dict = tmp_assign_source_37;
    }
    {
        PyObject *tmp_assign_source_38;
        tmp_assign_source_38 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_38;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_called_value_15;
        PyObject *tmp_called_value_16;
        PyObject *tmp_args_element_value_5;
        tmp_called_value_16 = GET_STRING_DICT_VALUE(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[157]);

        if (unlikely(tmp_called_value_16 == NULL)) {
            tmp_called_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[157]);
        }

        if (tmp_called_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;

            goto try_except_handler_12;
        }
        frame_e679cc00fa9bb510390fa6d28c105412->m_frame.f_lineno = 261;
        tmp_called_value_15 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_16, &PyTuple_GET_ITEM(mod_consts[167], 0), mod_consts[168]);
        if (tmp_called_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;

            goto try_except_handler_12;
        }
        {
            PyObject *tmp_set_locals_4;
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_set_locals_4 = tmp_class_creation_4__prepared;
            locals_attr$validators$$$class__4__OptionalValidator_262 = tmp_set_locals_4;
            Py_INCREF(tmp_set_locals_4);
        }
        tmp_dictset_value = mod_consts[169];
        tmp_res = PyDict_SetItem(locals_attr$validators$$$class__4__OptionalValidator_262, mod_consts[170], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[57];
        tmp_res = PyDict_SetItem(locals_attr$validators$$$class__4__OptionalValidator_262, mod_consts[171], tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        frame_0be3a33eda892766855e9e593f430e45_5 = MAKE_CLASS_FRAME(tstate, codeobj_0be3a33eda892766855e9e593f430e45, module_attr$validators, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_0be3a33eda892766855e9e593f430e45_5);
        assert(Py_REFCNT(frame_0be3a33eda892766855e9e593f430e45_5) == 2);

        // Framed code:
        {
            PyObject *tmp_called_value_17;
            tmp_called_value_17 = GET_STRING_DICT_VALUE(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[156]);

            if (unlikely(tmp_called_value_17 == NULL)) {
                tmp_called_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[156]);
            }

            if (tmp_called_value_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 263;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            frame_0be3a33eda892766855e9e593f430e45_5->m_frame.f_lineno = 263;
            tmp_dictset_value = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_17);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 263;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyDict_SetItem(locals_attr$validators$$$class__4__OptionalValidator_262, mod_consts[53], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 263;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_4;
        frame_exception_exit_5:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_0be3a33eda892766855e9e593f430e45_5, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_0be3a33eda892766855e9e593f430e45_5->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_0be3a33eda892766855e9e593f430e45_5, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_0be3a33eda892766855e9e593f430e45_5,
            type_description_2,
            outline_3_var___class__
        );



        assertFrameObject(frame_0be3a33eda892766855e9e593f430e45_5);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_4;
        frame_no_exception_4:;
        goto skip_nested_handling_4;
        nested_frame_exit_4:;

        goto try_except_handler_14;
        skip_nested_handling_4:;


        tmp_dictset_value = MAKE_FUNCTION_attr$validators$$$function__13___call__();

        tmp_res = PyDict_SetItem(locals_attr$validators$$$class__4__OptionalValidator_262, mod_consts[172], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_attr$validators$$$function__14___repr__();

        tmp_res = PyDict_SetItem(locals_attr$validators$$$class__4__OptionalValidator_262, mod_consts[174], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_assign_source_40;
            PyObject *tmp_called_value_18;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kwargs_value_4;
            tmp_called_value_18 = (PyObject *)&PyType_Type;
            tmp_tuple_element_4 = mod_consts[57];
            tmp_args_value_4 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_4);
            tmp_tuple_element_4 = mod_consts[176];
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = locals_attr$validators$$$class__4__OptionalValidator_262;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_4__class_decl_dict;
            frame_e679cc00fa9bb510390fa6d28c105412->m_frame.f_lineno = 262;
            tmp_assign_source_40 = CALL_FUNCTION(tstate, tmp_called_value_18, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_40 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 262;

                goto try_except_handler_14;
            }
            assert(outline_3_var___class__ == NULL);
            outline_3_var___class__ = tmp_assign_source_40;
        }
        CHECK_OBJECT(outline_3_var___class__);
        tmp_args_element_value_5 = outline_3_var___class__;
        Py_INCREF(tmp_args_element_value_5);
        goto try_return_handler_14;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_14:;
        Py_DECREF(locals_attr$validators$$$class__4__OptionalValidator_262);
        locals_attr$validators$$$class__4__OptionalValidator_262 = NULL;
        goto try_return_handler_13;
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

        Py_DECREF(locals_attr$validators$$$class__4__OptionalValidator_262);
        locals_attr$validators$$$class__4__OptionalValidator_262 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_12;
        exception_value = exception_keeper_value_12;
        exception_tb = exception_keeper_tb_12;
        exception_lineno = exception_keeper_lineno_12;

        goto try_except_handler_13;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_13:;
        CHECK_OBJECT(outline_3_var___class__);
        Py_DECREF(outline_3_var___class__);
        outline_3_var___class__ = NULL;
        goto outline_result_4;
        // Exception handler code:
        try_except_handler_13:;
        exception_keeper_type_13 = exception_type;
        exception_keeper_value_13 = exception_value;
        exception_keeper_tb_13 = exception_tb;
        exception_keeper_lineno_13 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_13;
        exception_value = exception_keeper_value_13;
        exception_tb = exception_keeper_tb_13;
        exception_lineno = exception_keeper_lineno_13;

        goto outline_exception_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_4:;
        exception_lineno = 262;
        goto try_except_handler_12;
        outline_result_4:;
        frame_e679cc00fa9bb510390fa6d28c105412->m_frame.f_lineno = 261;
        tmp_assign_source_39 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_15, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_15);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_assign_source_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;

            goto try_except_handler_12;
        }
        UPDATE_STRING_DICT1(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[57], tmp_assign_source_39);
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_12:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_keeper_lineno_14 = exception_lineno;
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
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
    Py_DECREF(tmp_class_creation_4__class_decl_dict);
    tmp_class_creation_4__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_4__prepared);
    Py_DECREF(tmp_class_creation_4__prepared);
    tmp_class_creation_4__prepared = NULL;
    {
        PyObject *tmp_assign_source_41;


        tmp_assign_source_41 = MAKE_FUNCTION_attr$validators$$$function__15_optional();

        UPDATE_STRING_DICT1(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[188], tmp_assign_source_41);
    }
    {
        PyObject *tmp_assign_source_42;
        tmp_assign_source_42 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_5__class_decl_dict == NULL);
        tmp_class_creation_5__class_decl_dict = tmp_assign_source_42;
    }
    {
        PyObject *tmp_assign_source_43;
        tmp_assign_source_43 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_43;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_called_value_19;
        PyObject *tmp_called_value_20;
        PyObject *tmp_args_element_value_6;
        tmp_called_value_20 = GET_STRING_DICT_VALUE(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[157]);

        if (unlikely(tmp_called_value_20 == NULL)) {
            tmp_called_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[157]);
        }

        if (tmp_called_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;

            goto try_except_handler_15;
        }
        frame_e679cc00fa9bb510390fa6d28c105412->m_frame.f_lineno = 296;
        tmp_called_value_19 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_20, &PyTuple_GET_ITEM(mod_consts[167], 0), mod_consts[168]);
        if (tmp_called_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;

            goto try_except_handler_15;
        }
        {
            PyObject *tmp_set_locals_5;
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_set_locals_5 = tmp_class_creation_5__prepared;
            locals_attr$validators$$$class__5__InValidator_297 = tmp_set_locals_5;
            Py_INCREF(tmp_set_locals_5);
        }
        tmp_dictset_value = mod_consts[169];
        tmp_res = PyDict_SetItem(locals_attr$validators$$$class__5__InValidator_297, mod_consts[170], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[65];
        tmp_res = PyDict_SetItem(locals_attr$validators$$$class__5__InValidator_297, mod_consts[171], tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        frame_dd6da70bf9d976787d76d03b64e1283f_6 = MAKE_CLASS_FRAME(tstate, codeobj_dd6da70bf9d976787d76d03b64e1283f, module_attr$validators, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_dd6da70bf9d976787d76d03b64e1283f_6);
        assert(Py_REFCNT(frame_dd6da70bf9d976787d76d03b64e1283f_6) == 2);

        // Framed code:
        {
            PyObject *tmp_called_value_21;
            tmp_called_value_21 = GET_STRING_DICT_VALUE(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[156]);

            if (unlikely(tmp_called_value_21 == NULL)) {
                tmp_called_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[156]);
            }

            if (tmp_called_value_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 298;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            frame_dd6da70bf9d976787d76d03b64e1283f_6->m_frame.f_lineno = 298;
            tmp_dictset_value = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_21);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 298;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_res = PyDict_SetItem(locals_attr$validators$$$class__5__InValidator_297, mod_consts[60], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 298;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_5;
        frame_exception_exit_6:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_dd6da70bf9d976787d76d03b64e1283f_6, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_dd6da70bf9d976787d76d03b64e1283f_6->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_dd6da70bf9d976787d76d03b64e1283f_6, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_dd6da70bf9d976787d76d03b64e1283f_6,
            type_description_2,
            outline_4_var___class__
        );



        assertFrameObject(frame_dd6da70bf9d976787d76d03b64e1283f_6);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_5;
        frame_no_exception_5:;
        goto skip_nested_handling_5;
        nested_frame_exit_5:;

        goto try_except_handler_17;
        skip_nested_handling_5:;


        tmp_dictset_value = MAKE_FUNCTION_attr$validators$$$function__16___call__();

        tmp_res = PyDict_SetItem(locals_attr$validators$$$class__5__InValidator_297, mod_consts[172], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_attr$validators$$$function__17___repr__();

        tmp_res = PyDict_SetItem(locals_attr$validators$$$class__5__InValidator_297, mod_consts[174], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_assign_source_45;
            PyObject *tmp_called_value_22;
            PyObject *tmp_args_value_5;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_kwargs_value_5;
            tmp_called_value_22 = (PyObject *)&PyType_Type;
            tmp_tuple_element_5 = mod_consts[65];
            tmp_args_value_5 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_5);
            tmp_tuple_element_5 = mod_consts[176];
            PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_5);
            tmp_tuple_element_5 = locals_attr$validators$$$class__5__InValidator_297;
            PyTuple_SET_ITEM0(tmp_args_value_5, 2, tmp_tuple_element_5);
            CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
            tmp_kwargs_value_5 = tmp_class_creation_5__class_decl_dict;
            frame_e679cc00fa9bb510390fa6d28c105412->m_frame.f_lineno = 297;
            tmp_assign_source_45 = CALL_FUNCTION(tstate, tmp_called_value_22, tmp_args_value_5, tmp_kwargs_value_5);
            Py_DECREF(tmp_args_value_5);
            if (tmp_assign_source_45 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 297;

                goto try_except_handler_17;
            }
            assert(outline_4_var___class__ == NULL);
            outline_4_var___class__ = tmp_assign_source_45;
        }
        CHECK_OBJECT(outline_4_var___class__);
        tmp_args_element_value_6 = outline_4_var___class__;
        Py_INCREF(tmp_args_element_value_6);
        goto try_return_handler_17;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_17:;
        Py_DECREF(locals_attr$validators$$$class__5__InValidator_297);
        locals_attr$validators$$$class__5__InValidator_297 = NULL;
        goto try_return_handler_16;
        // Exception handler code:
        try_except_handler_17:;
        exception_keeper_type_15 = exception_type;
        exception_keeper_value_15 = exception_value;
        exception_keeper_tb_15 = exception_tb;
        exception_keeper_lineno_15 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_attr$validators$$$class__5__InValidator_297);
        locals_attr$validators$$$class__5__InValidator_297 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_15;
        exception_value = exception_keeper_value_15;
        exception_tb = exception_keeper_tb_15;
        exception_lineno = exception_keeper_lineno_15;

        goto try_except_handler_16;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_16:;
        CHECK_OBJECT(outline_4_var___class__);
        Py_DECREF(outline_4_var___class__);
        outline_4_var___class__ = NULL;
        goto outline_result_5;
        // Exception handler code:
        try_except_handler_16:;
        exception_keeper_type_16 = exception_type;
        exception_keeper_value_16 = exception_value;
        exception_keeper_tb_16 = exception_tb;
        exception_keeper_lineno_16 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_16;
        exception_value = exception_keeper_value_16;
        exception_tb = exception_keeper_tb_16;
        exception_lineno = exception_keeper_lineno_16;

        goto outline_exception_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_5:;
        exception_lineno = 297;
        goto try_except_handler_15;
        outline_result_5:;
        frame_e679cc00fa9bb510390fa6d28c105412->m_frame.f_lineno = 296;
        tmp_assign_source_44 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_19, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_19);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_assign_source_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;

            goto try_except_handler_15;
        }
        UPDATE_STRING_DICT1(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[65], tmp_assign_source_44);
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_15:;
    exception_keeper_type_17 = exception_type;
    exception_keeper_value_17 = exception_value;
    exception_keeper_tb_17 = exception_tb;
    exception_keeper_lineno_17 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
    Py_DECREF(tmp_class_creation_5__class_decl_dict);
    tmp_class_creation_5__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_5__prepared);
    Py_DECREF(tmp_class_creation_5__prepared);
    tmp_class_creation_5__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_17;
    exception_value = exception_keeper_value_17;
    exception_tb = exception_keeper_tb_17;
    exception_lineno = exception_keeper_lineno_17;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
    Py_DECREF(tmp_class_creation_5__class_decl_dict);
    tmp_class_creation_5__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_5__prepared);
    Py_DECREF(tmp_class_creation_5__prepared);
    tmp_class_creation_5__prepared = NULL;
    {
        PyObject *tmp_assign_source_46;


        tmp_assign_source_46 = MAKE_FUNCTION_attr$validators$$$function__18_in_();

        UPDATE_STRING_DICT1(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[191], tmp_assign_source_46);
    }
    {
        PyObject *tmp_assign_source_47;
        tmp_assign_source_47 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_6__class_decl_dict == NULL);
        tmp_class_creation_6__class_decl_dict = tmp_assign_source_47;
    }
    {
        PyObject *tmp_assign_source_48;
        tmp_assign_source_48 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_6__prepared == NULL);
        tmp_class_creation_6__prepared = tmp_assign_source_48;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_called_value_23;
        PyObject *tmp_called_value_24;
        PyObject *tmp_args_element_value_7;
        tmp_called_value_24 = GET_STRING_DICT_VALUE(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[157]);

        if (unlikely(tmp_called_value_24 == NULL)) {
            tmp_called_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[157]);
        }

        if (tmp_called_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 344;

            goto try_except_handler_18;
        }
        frame_e679cc00fa9bb510390fa6d28c105412->m_frame.f_lineno = 344;
        tmp_called_value_23 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_24, &PyTuple_GET_ITEM(mod_consts[192], 0), mod_consts[168]);
        if (tmp_called_value_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 344;

            goto try_except_handler_18;
        }
        {
            PyObject *tmp_set_locals_6;
            CHECK_OBJECT(tmp_class_creation_6__prepared);
            tmp_set_locals_6 = tmp_class_creation_6__prepared;
            locals_attr$validators$$$class__6__IsCallableValidator_345 = tmp_set_locals_6;
            Py_INCREF(tmp_set_locals_6);
        }
        tmp_dictset_value = mod_consts[169];
        tmp_res = PyDict_SetItem(locals_attr$validators$$$class__6__IsCallableValidator_345, mod_consts[170], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[72];
        tmp_res = PyDict_SetItem(locals_attr$validators$$$class__6__IsCallableValidator_345, mod_consts[171], tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_attr$validators$$$function__19___call__();

        tmp_res = PyDict_SetItem(locals_attr$validators$$$class__6__IsCallableValidator_345, mod_consts[172], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_attr$validators$$$function__20___repr__();

        tmp_res = PyDict_SetItem(locals_attr$validators$$$class__6__IsCallableValidator_345, mod_consts[174], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_assign_source_50;
            PyObject *tmp_called_value_25;
            PyObject *tmp_args_value_6;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_kwargs_value_6;
            tmp_called_value_25 = (PyObject *)&PyType_Type;
            tmp_tuple_element_6 = mod_consts[72];
            tmp_args_value_6 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_6);
            tmp_tuple_element_6 = mod_consts[176];
            PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_6);
            tmp_tuple_element_6 = locals_attr$validators$$$class__6__IsCallableValidator_345;
            PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_6);
            CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
            tmp_kwargs_value_6 = tmp_class_creation_6__class_decl_dict;
            frame_e679cc00fa9bb510390fa6d28c105412->m_frame.f_lineno = 345;
            tmp_assign_source_50 = CALL_FUNCTION(tstate, tmp_called_value_25, tmp_args_value_6, tmp_kwargs_value_6);
            Py_DECREF(tmp_args_value_6);
            if (tmp_assign_source_50 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 345;

                goto try_except_handler_20;
            }
            assert(outline_5_var___class__ == NULL);
            outline_5_var___class__ = tmp_assign_source_50;
        }
        CHECK_OBJECT(outline_5_var___class__);
        tmp_args_element_value_7 = outline_5_var___class__;
        Py_INCREF(tmp_args_element_value_7);
        goto try_return_handler_20;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_20:;
        Py_DECREF(locals_attr$validators$$$class__6__IsCallableValidator_345);
        locals_attr$validators$$$class__6__IsCallableValidator_345 = NULL;
        goto try_return_handler_19;
        // Exception handler code:
        try_except_handler_20:;
        exception_keeper_type_18 = exception_type;
        exception_keeper_value_18 = exception_value;
        exception_keeper_tb_18 = exception_tb;
        exception_keeper_lineno_18 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_attr$validators$$$class__6__IsCallableValidator_345);
        locals_attr$validators$$$class__6__IsCallableValidator_345 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_18;
        exception_value = exception_keeper_value_18;
        exception_tb = exception_keeper_tb_18;
        exception_lineno = exception_keeper_lineno_18;

        goto try_except_handler_19;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_19:;
        CHECK_OBJECT(outline_5_var___class__);
        Py_DECREF(outline_5_var___class__);
        outline_5_var___class__ = NULL;
        goto outline_result_6;
        // Exception handler code:
        try_except_handler_19:;
        exception_keeper_type_19 = exception_type;
        exception_keeper_value_19 = exception_value;
        exception_keeper_tb_19 = exception_tb;
        exception_keeper_lineno_19 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_19;
        exception_value = exception_keeper_value_19;
        exception_tb = exception_keeper_tb_19;
        exception_lineno = exception_keeper_lineno_19;

        goto outline_exception_6;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_6:;
        exception_lineno = 345;
        goto try_except_handler_18;
        outline_result_6:;
        frame_e679cc00fa9bb510390fa6d28c105412->m_frame.f_lineno = 344;
        tmp_assign_source_49 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_23, tmp_args_element_value_7);
        Py_DECREF(tmp_called_value_23);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_assign_source_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 344;

            goto try_except_handler_18;
        }
        UPDATE_STRING_DICT1(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[72], tmp_assign_source_49);
    }
    goto try_end_8;
    // Exception handler code:
    try_except_handler_18:;
    exception_keeper_type_20 = exception_type;
    exception_keeper_value_20 = exception_value;
    exception_keeper_tb_20 = exception_tb;
    exception_keeper_lineno_20 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
    Py_DECREF(tmp_class_creation_6__class_decl_dict);
    tmp_class_creation_6__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_6__prepared);
    Py_DECREF(tmp_class_creation_6__prepared);
    tmp_class_creation_6__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_20;
    exception_value = exception_keeper_value_20;
    exception_tb = exception_keeper_tb_20;
    exception_lineno = exception_keeper_lineno_20;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
    Py_DECREF(tmp_class_creation_6__class_decl_dict);
    tmp_class_creation_6__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_6__prepared);
    Py_DECREF(tmp_class_creation_6__prepared);
    tmp_class_creation_6__prepared = NULL;
    {
        PyObject *tmp_assign_source_51;


        tmp_assign_source_51 = MAKE_FUNCTION_attr$validators$$$function__21_is_callable();

        UPDATE_STRING_DICT1(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[196], tmp_assign_source_51);
    }
    {
        PyObject *tmp_assign_source_52;
        tmp_assign_source_52 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_7__class_decl_dict == NULL);
        tmp_class_creation_7__class_decl_dict = tmp_assign_source_52;
    }
    {
        PyObject *tmp_assign_source_53;
        tmp_assign_source_53 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_7__prepared == NULL);
        tmp_class_creation_7__prepared = tmp_assign_source_53;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_called_value_26;
        PyObject *tmp_called_value_27;
        PyObject *tmp_args_element_value_8;
        tmp_called_value_27 = GET_STRING_DICT_VALUE(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[157]);

        if (unlikely(tmp_called_value_27 == NULL)) {
            tmp_called_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[157]);
        }

        if (tmp_called_value_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 381;

            goto try_except_handler_21;
        }
        frame_e679cc00fa9bb510390fa6d28c105412->m_frame.f_lineno = 381;
        tmp_called_value_26 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_27, &PyTuple_GET_ITEM(mod_consts[167], 0), mod_consts[168]);
        if (tmp_called_value_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 381;

            goto try_except_handler_21;
        }
        {
            PyObject *tmp_set_locals_7;
            CHECK_OBJECT(tmp_class_creation_7__prepared);
            tmp_set_locals_7 = tmp_class_creation_7__prepared;
            locals_attr$validators$$$class__7__DeepIterable_382 = tmp_set_locals_7;
            Py_INCREF(tmp_set_locals_7);
        }
        tmp_dictset_value = mod_consts[169];
        tmp_res = PyDict_SetItem(locals_attr$validators$$$class__7__DeepIterable_382, mod_consts[170], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[85];
        tmp_res = PyDict_SetItem(locals_attr$validators$$$class__7__DeepIterable_382, mod_consts[171], tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        frame_5c984834de402303c340c5ad32bd6871_7 = MAKE_CLASS_FRAME(tstate, codeobj_5c984834de402303c340c5ad32bd6871, module_attr$validators, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_5c984834de402303c340c5ad32bd6871_7);
        assert(Py_REFCNT(frame_5c984834de402303c340c5ad32bd6871_7) == 2);

        // Framed code:
        {
            PyObject *tmp_called_value_28;
            PyObject *tmp_kw_call_value_0_1;
            PyObject *tmp_called_value_29;
            tmp_called_value_28 = GET_STRING_DICT_VALUE(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[156]);

            if (unlikely(tmp_called_value_28 == NULL)) {
                tmp_called_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[156]);
            }

            if (tmp_called_value_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 383;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_called_value_29 = GET_STRING_DICT_VALUE(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[196]);

            if (unlikely(tmp_called_value_29 == NULL)) {
                tmp_called_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[196]);
            }

            if (tmp_called_value_29 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 383;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            frame_5c984834de402303c340c5ad32bd6871_7->m_frame.f_lineno = 383;
            tmp_kw_call_value_0_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_29);
            if (tmp_kw_call_value_0_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 383;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            frame_5c984834de402303c340c5ad32bd6871_7->m_frame.f_lineno = 383;
            {
                PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_28, kw_values, mod_consts[197]);
            }

            Py_DECREF(tmp_kw_call_value_0_1);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 383;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_res = PyDict_SetItem(locals_attr$validators$$$class__7__DeepIterable_382, mod_consts[77], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 383;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
        }
        {
            PyObject *tmp_called_value_30;
            PyObject *tmp_kw_call_value_0_2;
            PyObject *tmp_kw_call_value_1_1;
            PyObject *tmp_called_value_31;
            PyObject *tmp_args_element_value_9;
            PyObject *tmp_called_value_32;
            tmp_called_value_30 = GET_STRING_DICT_VALUE(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[156]);

            if (unlikely(tmp_called_value_30 == NULL)) {
                tmp_called_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[156]);
            }

            if (tmp_called_value_30 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 384;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_kw_call_value_0_2 = Py_None;
            tmp_called_value_31 = GET_STRING_DICT_VALUE(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[188]);

            if (unlikely(tmp_called_value_31 == NULL)) {
                tmp_called_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[188]);
            }

            if (tmp_called_value_31 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 385;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_called_value_32 = GET_STRING_DICT_VALUE(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[196]);

            if (unlikely(tmp_called_value_32 == NULL)) {
                tmp_called_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[196]);
            }

            if (tmp_called_value_32 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 385;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            frame_5c984834de402303c340c5ad32bd6871_7->m_frame.f_lineno = 385;
            tmp_args_element_value_9 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_32);
            if (tmp_args_element_value_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 385;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            frame_5c984834de402303c340c5ad32bd6871_7->m_frame.f_lineno = 385;
            tmp_kw_call_value_1_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_31, tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_9);
            if (tmp_kw_call_value_1_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 385;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            frame_5c984834de402303c340c5ad32bd6871_7->m_frame.f_lineno = 384;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_1};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_30, kw_values, mod_consts[198]);
            }

            Py_DECREF(tmp_kw_call_value_1_1);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 384;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
            tmp_res = PyDict_SetItem(locals_attr$validators$$$class__7__DeepIterable_382, mod_consts[74], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 384;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_6;
        frame_exception_exit_7:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_5c984834de402303c340c5ad32bd6871_7, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_5c984834de402303c340c5ad32bd6871_7->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_5c984834de402303c340c5ad32bd6871_7, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_5c984834de402303c340c5ad32bd6871_7,
            type_description_2,
            outline_6_var___class__
        );



        assertFrameObject(frame_5c984834de402303c340c5ad32bd6871_7);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_6;
        frame_no_exception_6:;
        goto skip_nested_handling_6;
        nested_frame_exit_6:;

        goto try_except_handler_23;
        skip_nested_handling_6:;


        tmp_dictset_value = MAKE_FUNCTION_attr$validators$$$function__22___call__();

        tmp_res = PyDict_SetItem(locals_attr$validators$$$class__7__DeepIterable_382, mod_consts[172], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_attr$validators$$$function__23___repr__();

        tmp_res = PyDict_SetItem(locals_attr$validators$$$class__7__DeepIterable_382, mod_consts[174], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_assign_source_55;
            PyObject *tmp_called_value_33;
            PyObject *tmp_args_value_7;
            PyObject *tmp_tuple_element_7;
            PyObject *tmp_kwargs_value_7;
            tmp_called_value_33 = (PyObject *)&PyType_Type;
            tmp_tuple_element_7 = mod_consts[85];
            tmp_args_value_7 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_7);
            tmp_tuple_element_7 = mod_consts[176];
            PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_7);
            tmp_tuple_element_7 = locals_attr$validators$$$class__7__DeepIterable_382;
            PyTuple_SET_ITEM0(tmp_args_value_7, 2, tmp_tuple_element_7);
            CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
            tmp_kwargs_value_7 = tmp_class_creation_7__class_decl_dict;
            frame_e679cc00fa9bb510390fa6d28c105412->m_frame.f_lineno = 382;
            tmp_assign_source_55 = CALL_FUNCTION(tstate, tmp_called_value_33, tmp_args_value_7, tmp_kwargs_value_7);
            Py_DECREF(tmp_args_value_7);
            if (tmp_assign_source_55 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 382;

                goto try_except_handler_23;
            }
            assert(outline_6_var___class__ == NULL);
            outline_6_var___class__ = tmp_assign_source_55;
        }
        CHECK_OBJECT(outline_6_var___class__);
        tmp_args_element_value_8 = outline_6_var___class__;
        Py_INCREF(tmp_args_element_value_8);
        goto try_return_handler_23;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_23:;
        Py_DECREF(locals_attr$validators$$$class__7__DeepIterable_382);
        locals_attr$validators$$$class__7__DeepIterable_382 = NULL;
        goto try_return_handler_22;
        // Exception handler code:
        try_except_handler_23:;
        exception_keeper_type_21 = exception_type;
        exception_keeper_value_21 = exception_value;
        exception_keeper_tb_21 = exception_tb;
        exception_keeper_lineno_21 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_attr$validators$$$class__7__DeepIterable_382);
        locals_attr$validators$$$class__7__DeepIterable_382 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_21;
        exception_value = exception_keeper_value_21;
        exception_tb = exception_keeper_tb_21;
        exception_lineno = exception_keeper_lineno_21;

        goto try_except_handler_22;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_22:;
        CHECK_OBJECT(outline_6_var___class__);
        Py_DECREF(outline_6_var___class__);
        outline_6_var___class__ = NULL;
        goto outline_result_7;
        // Exception handler code:
        try_except_handler_22:;
        exception_keeper_type_22 = exception_type;
        exception_keeper_value_22 = exception_value;
        exception_keeper_tb_22 = exception_tb;
        exception_keeper_lineno_22 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_22;
        exception_value = exception_keeper_value_22;
        exception_tb = exception_keeper_tb_22;
        exception_lineno = exception_keeper_lineno_22;

        goto outline_exception_7;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_7:;
        exception_lineno = 382;
        goto try_except_handler_21;
        outline_result_7:;
        frame_e679cc00fa9bb510390fa6d28c105412->m_frame.f_lineno = 381;
        tmp_assign_source_54 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_26, tmp_args_element_value_8);
        Py_DECREF(tmp_called_value_26);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_assign_source_54 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 381;

            goto try_except_handler_21;
        }
        UPDATE_STRING_DICT1(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[85], tmp_assign_source_54);
    }
    goto try_end_9;
    // Exception handler code:
    try_except_handler_21:;
    exception_keeper_type_23 = exception_type;
    exception_keeper_value_23 = exception_value;
    exception_keeper_tb_23 = exception_tb;
    exception_keeper_lineno_23 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
    Py_DECREF(tmp_class_creation_7__class_decl_dict);
    tmp_class_creation_7__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_7__prepared);
    Py_DECREF(tmp_class_creation_7__prepared);
    tmp_class_creation_7__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_23;
    exception_value = exception_keeper_value_23;
    exception_tb = exception_keeper_tb_23;
    exception_lineno = exception_keeper_lineno_23;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
    Py_DECREF(tmp_class_creation_7__class_decl_dict);
    tmp_class_creation_7__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_7__prepared);
    Py_DECREF(tmp_class_creation_7__prepared);
    tmp_class_creation_7__prepared = NULL;
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_defaults_2;
        tmp_defaults_2 = mod_consts[201];
        Py_INCREF(tmp_defaults_2);


        tmp_assign_source_56 = MAKE_FUNCTION_attr$validators$$$function__24_deep_iterable(tmp_defaults_2);

        UPDATE_STRING_DICT1(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[202], tmp_assign_source_56);
    }
    {
        PyObject *tmp_assign_source_57;
        tmp_assign_source_57 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_8__class_decl_dict == NULL);
        tmp_class_creation_8__class_decl_dict = tmp_assign_source_57;
    }
    {
        PyObject *tmp_assign_source_58;
        tmp_assign_source_58 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_8__prepared == NULL);
        tmp_class_creation_8__prepared = tmp_assign_source_58;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_59;
        PyObject *tmp_called_value_34;
        PyObject *tmp_called_value_35;
        PyObject *tmp_args_element_value_10;
        tmp_called_value_35 = GET_STRING_DICT_VALUE(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[157]);

        if (unlikely(tmp_called_value_35 == NULL)) {
            tmp_called_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[157]);
        }

        if (tmp_called_value_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 430;

            goto try_except_handler_24;
        }
        frame_e679cc00fa9bb510390fa6d28c105412->m_frame.f_lineno = 430;
        tmp_called_value_34 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_35, &PyTuple_GET_ITEM(mod_consts[167], 0), mod_consts[168]);
        if (tmp_called_value_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 430;

            goto try_except_handler_24;
        }
        {
            PyObject *tmp_set_locals_8;
            CHECK_OBJECT(tmp_class_creation_8__prepared);
            tmp_set_locals_8 = tmp_class_creation_8__prepared;
            locals_attr$validators$$$class__8__DeepMapping_431 = tmp_set_locals_8;
            Py_INCREF(tmp_set_locals_8);
        }
        tmp_dictset_value = mod_consts[169];
        tmp_res = PyDict_SetItem(locals_attr$validators$$$class__8__DeepMapping_431, mod_consts[170], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[92];
        tmp_res = PyDict_SetItem(locals_attr$validators$$$class__8__DeepMapping_431, mod_consts[171], tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        frame_aa4ce93cea2a9280e99feccb3a96c584_8 = MAKE_CLASS_FRAME(tstate, codeobj_aa4ce93cea2a9280e99feccb3a96c584, module_attr$validators, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_aa4ce93cea2a9280e99feccb3a96c584_8);
        assert(Py_REFCNT(frame_aa4ce93cea2a9280e99feccb3a96c584_8) == 2);

        // Framed code:
        {
            PyObject *tmp_called_value_36;
            PyObject *tmp_kw_call_value_0_3;
            PyObject *tmp_called_value_37;
            tmp_called_value_36 = GET_STRING_DICT_VALUE(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[156]);

            if (unlikely(tmp_called_value_36 == NULL)) {
                tmp_called_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[156]);
            }

            if (tmp_called_value_36 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 432;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_called_value_37 = GET_STRING_DICT_VALUE(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[196]);

            if (unlikely(tmp_called_value_37 == NULL)) {
                tmp_called_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[196]);
            }

            if (tmp_called_value_37 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 432;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            frame_aa4ce93cea2a9280e99feccb3a96c584_8->m_frame.f_lineno = 432;
            tmp_kw_call_value_0_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_37);
            if (tmp_kw_call_value_0_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 432;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            frame_aa4ce93cea2a9280e99feccb3a96c584_8->m_frame.f_lineno = 432;
            {
                PyObject *kw_values[1] = {tmp_kw_call_value_0_3};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_36, kw_values, mod_consts[197]);
            }

            Py_DECREF(tmp_kw_call_value_0_3);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 432;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_res = PyDict_SetItem(locals_attr$validators$$$class__8__DeepMapping_431, mod_consts[88], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 432;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
        }
        {
            PyObject *tmp_called_value_38;
            PyObject *tmp_kw_call_value_0_4;
            PyObject *tmp_called_value_39;
            tmp_called_value_38 = GET_STRING_DICT_VALUE(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[156]);

            if (unlikely(tmp_called_value_38 == NULL)) {
                tmp_called_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[156]);
            }

            if (tmp_called_value_38 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 433;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_called_value_39 = GET_STRING_DICT_VALUE(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[196]);

            if (unlikely(tmp_called_value_39 == NULL)) {
                tmp_called_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[196]);
            }

            if (tmp_called_value_39 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 433;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            frame_aa4ce93cea2a9280e99feccb3a96c584_8->m_frame.f_lineno = 433;
            tmp_kw_call_value_0_4 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_39);
            if (tmp_kw_call_value_0_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 433;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            frame_aa4ce93cea2a9280e99feccb3a96c584_8->m_frame.f_lineno = 433;
            {
                PyObject *kw_values[1] = {tmp_kw_call_value_0_4};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_38, kw_values, mod_consts[197]);
            }

            Py_DECREF(tmp_kw_call_value_0_4);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 433;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_res = PyDict_SetItem(locals_attr$validators$$$class__8__DeepMapping_431, mod_consts[89], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 433;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
        }
        {
            PyObject *tmp_called_value_40;
            PyObject *tmp_kw_call_value_0_5;
            PyObject *tmp_kw_call_value_1_2;
            PyObject *tmp_called_value_41;
            PyObject *tmp_args_element_value_11;
            PyObject *tmp_called_value_42;
            tmp_called_value_40 = GET_STRING_DICT_VALUE(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[156]);

            if (unlikely(tmp_called_value_40 == NULL)) {
                tmp_called_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[156]);
            }

            if (tmp_called_value_40 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 434;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_kw_call_value_0_5 = Py_None;
            tmp_called_value_41 = GET_STRING_DICT_VALUE(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[188]);

            if (unlikely(tmp_called_value_41 == NULL)) {
                tmp_called_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[188]);
            }

            if (tmp_called_value_41 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 434;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_called_value_42 = GET_STRING_DICT_VALUE(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[196]);

            if (unlikely(tmp_called_value_42 == NULL)) {
                tmp_called_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[196]);
            }

            if (tmp_called_value_42 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 434;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            frame_aa4ce93cea2a9280e99feccb3a96c584_8->m_frame.f_lineno = 434;
            tmp_args_element_value_11 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_42);
            if (tmp_args_element_value_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 434;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            frame_aa4ce93cea2a9280e99feccb3a96c584_8->m_frame.f_lineno = 434;
            tmp_kw_call_value_1_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_41, tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_11);
            if (tmp_kw_call_value_1_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 434;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            frame_aa4ce93cea2a9280e99feccb3a96c584_8->m_frame.f_lineno = 434;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_5, tmp_kw_call_value_1_2};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_40, kw_values, mod_consts[198]);
            }

            Py_DECREF(tmp_kw_call_value_1_2);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 434;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
            tmp_res = PyDict_SetItem(locals_attr$validators$$$class__8__DeepMapping_431, mod_consts[87], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 434;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_7;
        frame_exception_exit_8:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_aa4ce93cea2a9280e99feccb3a96c584_8, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_aa4ce93cea2a9280e99feccb3a96c584_8->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_aa4ce93cea2a9280e99feccb3a96c584_8, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_aa4ce93cea2a9280e99feccb3a96c584_8,
            type_description_2,
            outline_7_var___class__
        );



        assertFrameObject(frame_aa4ce93cea2a9280e99feccb3a96c584_8);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_7;
        frame_no_exception_7:;
        goto skip_nested_handling_7;
        nested_frame_exit_7:;

        goto try_except_handler_26;
        skip_nested_handling_7:;


        tmp_dictset_value = MAKE_FUNCTION_attr$validators$$$function__25___call__();

        tmp_res = PyDict_SetItem(locals_attr$validators$$$class__8__DeepMapping_431, mod_consts[172], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_attr$validators$$$function__26___repr__();

        tmp_res = PyDict_SetItem(locals_attr$validators$$$class__8__DeepMapping_431, mod_consts[174], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_assign_source_60;
            PyObject *tmp_called_value_43;
            PyObject *tmp_args_value_8;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_kwargs_value_8;
            tmp_called_value_43 = (PyObject *)&PyType_Type;
            tmp_tuple_element_8 = mod_consts[92];
            tmp_args_value_8 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_8);
            tmp_tuple_element_8 = mod_consts[176];
            PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_8);
            tmp_tuple_element_8 = locals_attr$validators$$$class__8__DeepMapping_431;
            PyTuple_SET_ITEM0(tmp_args_value_8, 2, tmp_tuple_element_8);
            CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
            tmp_kwargs_value_8 = tmp_class_creation_8__class_decl_dict;
            frame_e679cc00fa9bb510390fa6d28c105412->m_frame.f_lineno = 431;
            tmp_assign_source_60 = CALL_FUNCTION(tstate, tmp_called_value_43, tmp_args_value_8, tmp_kwargs_value_8);
            Py_DECREF(tmp_args_value_8);
            if (tmp_assign_source_60 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 431;

                goto try_except_handler_26;
            }
            assert(outline_7_var___class__ == NULL);
            outline_7_var___class__ = tmp_assign_source_60;
        }
        CHECK_OBJECT(outline_7_var___class__);
        tmp_args_element_value_10 = outline_7_var___class__;
        Py_INCREF(tmp_args_element_value_10);
        goto try_return_handler_26;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_26:;
        Py_DECREF(locals_attr$validators$$$class__8__DeepMapping_431);
        locals_attr$validators$$$class__8__DeepMapping_431 = NULL;
        goto try_return_handler_25;
        // Exception handler code:
        try_except_handler_26:;
        exception_keeper_type_24 = exception_type;
        exception_keeper_value_24 = exception_value;
        exception_keeper_tb_24 = exception_tb;
        exception_keeper_lineno_24 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_attr$validators$$$class__8__DeepMapping_431);
        locals_attr$validators$$$class__8__DeepMapping_431 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_24;
        exception_value = exception_keeper_value_24;
        exception_tb = exception_keeper_tb_24;
        exception_lineno = exception_keeper_lineno_24;

        goto try_except_handler_25;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_25:;
        CHECK_OBJECT(outline_7_var___class__);
        Py_DECREF(outline_7_var___class__);
        outline_7_var___class__ = NULL;
        goto outline_result_8;
        // Exception handler code:
        try_except_handler_25:;
        exception_keeper_type_25 = exception_type;
        exception_keeper_value_25 = exception_value;
        exception_keeper_tb_25 = exception_tb;
        exception_keeper_lineno_25 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_25;
        exception_value = exception_keeper_value_25;
        exception_tb = exception_keeper_tb_25;
        exception_lineno = exception_keeper_lineno_25;

        goto outline_exception_8;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_8:;
        exception_lineno = 431;
        goto try_except_handler_24;
        outline_result_8:;
        frame_e679cc00fa9bb510390fa6d28c105412->m_frame.f_lineno = 430;
        tmp_assign_source_59 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_34, tmp_args_element_value_10);
        Py_DECREF(tmp_called_value_34);
        Py_DECREF(tmp_args_element_value_10);
        if (tmp_assign_source_59 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 430;

            goto try_except_handler_24;
        }
        UPDATE_STRING_DICT1(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[92], tmp_assign_source_59);
    }
    goto try_end_10;
    // Exception handler code:
    try_except_handler_24:;
    exception_keeper_type_26 = exception_type;
    exception_keeper_value_26 = exception_value;
    exception_keeper_tb_26 = exception_tb;
    exception_keeper_lineno_26 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
    Py_DECREF(tmp_class_creation_8__class_decl_dict);
    tmp_class_creation_8__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_8__prepared);
    Py_DECREF(tmp_class_creation_8__prepared);
    tmp_class_creation_8__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_26;
    exception_value = exception_keeper_value_26;
    exception_tb = exception_keeper_tb_26;
    exception_lineno = exception_keeper_lineno_26;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
    CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
    Py_DECREF(tmp_class_creation_8__class_decl_dict);
    tmp_class_creation_8__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_8__prepared);
    Py_DECREF(tmp_class_creation_8__prepared);
    tmp_class_creation_8__prepared = NULL;
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_defaults_3;
        tmp_defaults_3 = mod_consts[201];
        Py_INCREF(tmp_defaults_3);


        tmp_assign_source_61 = MAKE_FUNCTION_attr$validators$$$function__27_deep_mapping(tmp_defaults_3);

        UPDATE_STRING_DICT1(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[205], tmp_assign_source_61);
    }
    {
        PyObject *tmp_assign_source_62;
        tmp_assign_source_62 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_9__class_decl_dict == NULL);
        tmp_class_creation_9__class_decl_dict = tmp_assign_source_62;
    }
    {
        PyObject *tmp_assign_source_63;
        tmp_assign_source_63 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_9__prepared == NULL);
        tmp_class_creation_9__prepared = tmp_assign_source_63;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_64;
        PyObject *tmp_called_value_44;
        PyObject *tmp_called_value_45;
        PyObject *tmp_args_element_value_12;
        tmp_called_value_45 = GET_STRING_DICT_VALUE(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[157]);

        if (unlikely(tmp_called_value_45 == NULL)) {
            tmp_called_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[157]);
        }

        if (tmp_called_value_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 469;

            goto try_except_handler_27;
        }
        frame_e679cc00fa9bb510390fa6d28c105412->m_frame.f_lineno = 469;
        tmp_called_value_44 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_45, &PyTuple_GET_ITEM(mod_consts[167], 0), mod_consts[178]);
        if (tmp_called_value_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 469;

            goto try_except_handler_27;
        }
        {
            PyObject *tmp_set_locals_9;
            CHECK_OBJECT(tmp_class_creation_9__prepared);
            tmp_set_locals_9 = tmp_class_creation_9__prepared;
            locals_attr$validators$$$class__9__NumberValidator_470 = tmp_set_locals_9;
            Py_INCREF(tmp_set_locals_9);
        }
        tmp_dictset_value = mod_consts[169];
        tmp_res = PyDict_SetItem(locals_attr$validators$$$class__9__NumberValidator_470, mod_consts[170], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[101];
        tmp_res = PyDict_SetItem(locals_attr$validators$$$class__9__NumberValidator_470, mod_consts[171], tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        frame_bb9f9367a8cef951b24934dc455ced47_9 = MAKE_CLASS_FRAME(tstate, codeobj_bb9f9367a8cef951b24934dc455ced47, module_attr$validators, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_bb9f9367a8cef951b24934dc455ced47_9);
        assert(Py_REFCNT(frame_bb9f9367a8cef951b24934dc455ced47_9) == 2);

        // Framed code:
        {
            PyObject *tmp_called_value_46;
            tmp_called_value_46 = GET_STRING_DICT_VALUE(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[156]);

            if (unlikely(tmp_called_value_46 == NULL)) {
                tmp_called_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[156]);
            }

            if (tmp_called_value_46 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 471;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            frame_bb9f9367a8cef951b24934dc455ced47_9->m_frame.f_lineno = 471;
            tmp_dictset_value = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_46);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 471;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            tmp_res = PyDict_SetItem(locals_attr$validators$$$class__9__NumberValidator_470, mod_consts[95], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 471;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
        }
        {
            PyObject *tmp_called_value_47;
            tmp_called_value_47 = GET_STRING_DICT_VALUE(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[156]);

            if (unlikely(tmp_called_value_47 == NULL)) {
                tmp_called_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[156]);
            }

            if (tmp_called_value_47 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 472;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            frame_bb9f9367a8cef951b24934dc455ced47_9->m_frame.f_lineno = 472;
            tmp_dictset_value = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_47);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 472;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            tmp_res = PyDict_SetItem(locals_attr$validators$$$class__9__NumberValidator_470, mod_consts[97], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 472;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
        }
        {
            PyObject *tmp_called_value_48;
            tmp_called_value_48 = GET_STRING_DICT_VALUE(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[156]);

            if (unlikely(tmp_called_value_48 == NULL)) {
                tmp_called_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[156]);
            }

            if (tmp_called_value_48 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 473;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            frame_bb9f9367a8cef951b24934dc455ced47_9->m_frame.f_lineno = 473;
            tmp_dictset_value = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_48);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 473;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
            tmp_res = PyDict_SetItem(locals_attr$validators$$$class__9__NumberValidator_470, mod_consts[94], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 473;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_8;
        frame_exception_exit_9:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_bb9f9367a8cef951b24934dc455ced47_9, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_bb9f9367a8cef951b24934dc455ced47_9->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_bb9f9367a8cef951b24934dc455ced47_9, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_bb9f9367a8cef951b24934dc455ced47_9,
            type_description_2,
            outline_8_var___class__
        );



        assertFrameObject(frame_bb9f9367a8cef951b24934dc455ced47_9);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_8;
        frame_no_exception_8:;
        goto skip_nested_handling_8;
        nested_frame_exit_8:;

        goto try_except_handler_29;
        skip_nested_handling_8:;


        tmp_dictset_value = MAKE_FUNCTION_attr$validators$$$function__28___call__();

        tmp_res = PyDict_SetItem(locals_attr$validators$$$class__9__NumberValidator_470, mod_consts[172], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_attr$validators$$$function__29___repr__();

        tmp_res = PyDict_SetItem(locals_attr$validators$$$class__9__NumberValidator_470, mod_consts[174], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_assign_source_65;
            PyObject *tmp_called_value_49;
            PyObject *tmp_args_value_9;
            PyObject *tmp_tuple_element_9;
            PyObject *tmp_kwargs_value_9;
            tmp_called_value_49 = (PyObject *)&PyType_Type;
            tmp_tuple_element_9 = mod_consts[101];
            tmp_args_value_9 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_9, 0, tmp_tuple_element_9);
            tmp_tuple_element_9 = mod_consts[176];
            PyTuple_SET_ITEM0(tmp_args_value_9, 1, tmp_tuple_element_9);
            tmp_tuple_element_9 = locals_attr$validators$$$class__9__NumberValidator_470;
            PyTuple_SET_ITEM0(tmp_args_value_9, 2, tmp_tuple_element_9);
            CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
            tmp_kwargs_value_9 = tmp_class_creation_9__class_decl_dict;
            frame_e679cc00fa9bb510390fa6d28c105412->m_frame.f_lineno = 470;
            tmp_assign_source_65 = CALL_FUNCTION(tstate, tmp_called_value_49, tmp_args_value_9, tmp_kwargs_value_9);
            Py_DECREF(tmp_args_value_9);
            if (tmp_assign_source_65 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 470;

                goto try_except_handler_29;
            }
            assert(outline_8_var___class__ == NULL);
            outline_8_var___class__ = tmp_assign_source_65;
        }
        CHECK_OBJECT(outline_8_var___class__);
        tmp_args_element_value_12 = outline_8_var___class__;
        Py_INCREF(tmp_args_element_value_12);
        goto try_return_handler_29;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_29:;
        Py_DECREF(locals_attr$validators$$$class__9__NumberValidator_470);
        locals_attr$validators$$$class__9__NumberValidator_470 = NULL;
        goto try_return_handler_28;
        // Exception handler code:
        try_except_handler_29:;
        exception_keeper_type_27 = exception_type;
        exception_keeper_value_27 = exception_value;
        exception_keeper_tb_27 = exception_tb;
        exception_keeper_lineno_27 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_attr$validators$$$class__9__NumberValidator_470);
        locals_attr$validators$$$class__9__NumberValidator_470 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_27;
        exception_value = exception_keeper_value_27;
        exception_tb = exception_keeper_tb_27;
        exception_lineno = exception_keeper_lineno_27;

        goto try_except_handler_28;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_28:;
        CHECK_OBJECT(outline_8_var___class__);
        Py_DECREF(outline_8_var___class__);
        outline_8_var___class__ = NULL;
        goto outline_result_9;
        // Exception handler code:
        try_except_handler_28:;
        exception_keeper_type_28 = exception_type;
        exception_keeper_value_28 = exception_value;
        exception_keeper_tb_28 = exception_tb;
        exception_keeper_lineno_28 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_28;
        exception_value = exception_keeper_value_28;
        exception_tb = exception_keeper_tb_28;
        exception_lineno = exception_keeper_lineno_28;

        goto outline_exception_9;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_9:;
        exception_lineno = 470;
        goto try_except_handler_27;
        outline_result_9:;
        frame_e679cc00fa9bb510390fa6d28c105412->m_frame.f_lineno = 469;
        tmp_assign_source_64 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_44, tmp_args_element_value_12);
        Py_DECREF(tmp_called_value_44);
        Py_DECREF(tmp_args_element_value_12);
        if (tmp_assign_source_64 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 469;

            goto try_except_handler_27;
        }
        UPDATE_STRING_DICT1(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[101], tmp_assign_source_64);
    }
    goto try_end_11;
    // Exception handler code:
    try_except_handler_27:;
    exception_keeper_type_29 = exception_type;
    exception_keeper_value_29 = exception_value;
    exception_keeper_tb_29 = exception_tb;
    exception_keeper_lineno_29 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
    Py_DECREF(tmp_class_creation_9__class_decl_dict);
    tmp_class_creation_9__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_9__prepared);
    Py_DECREF(tmp_class_creation_9__prepared);
    tmp_class_creation_9__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_29;
    exception_value = exception_keeper_value_29;
    exception_tb = exception_keeper_tb_29;
    exception_lineno = exception_keeper_lineno_29;

    goto frame_exception_exit_1;
    // End of try:
    try_end_11:;
    CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
    Py_DECREF(tmp_class_creation_9__class_decl_dict);
    tmp_class_creation_9__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_9__prepared);
    Py_DECREF(tmp_class_creation_9__prepared);
    tmp_class_creation_9__prepared = NULL;
    {
        PyObject *tmp_assign_source_66;


        tmp_assign_source_66 = MAKE_FUNCTION_attr$validators$$$function__30_lt();

        UPDATE_STRING_DICT1(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[104], tmp_assign_source_66);
    }
    {
        PyObject *tmp_assign_source_67;


        tmp_assign_source_67 = MAKE_FUNCTION_attr$validators$$$function__31_le();

        UPDATE_STRING_DICT1(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[107], tmp_assign_source_67);
    }
    {
        PyObject *tmp_assign_source_68;


        tmp_assign_source_68 = MAKE_FUNCTION_attr$validators$$$function__32_ge();

        UPDATE_STRING_DICT1(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[110], tmp_assign_source_68);
    }
    {
        PyObject *tmp_assign_source_69;


        tmp_assign_source_69 = MAKE_FUNCTION_attr$validators$$$function__33_gt();

        UPDATE_STRING_DICT1(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[113], tmp_assign_source_69);
    }
    {
        PyObject *tmp_assign_source_70;
        tmp_assign_source_70 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_10__class_decl_dict == NULL);
        tmp_class_creation_10__class_decl_dict = tmp_assign_source_70;
    }
    {
        PyObject *tmp_assign_source_71;
        tmp_assign_source_71 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_10__prepared == NULL);
        tmp_class_creation_10__prepared = tmp_assign_source_71;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_72;
        PyObject *tmp_called_value_50;
        PyObject *tmp_called_value_51;
        PyObject *tmp_args_element_value_13;
        tmp_called_value_51 = GET_STRING_DICT_VALUE(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[157]);

        if (unlikely(tmp_called_value_51 == NULL)) {
            tmp_called_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[157]);
        }

        if (tmp_called_value_51 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 543;

            goto try_except_handler_30;
        }
        frame_e679cc00fa9bb510390fa6d28c105412->m_frame.f_lineno = 543;
        tmp_called_value_50 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_51, &PyTuple_GET_ITEM(mod_consts[167], 0), mod_consts[178]);
        if (tmp_called_value_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 543;

            goto try_except_handler_30;
        }
        {
            PyObject *tmp_set_locals_10;
            CHECK_OBJECT(tmp_class_creation_10__prepared);
            tmp_set_locals_10 = tmp_class_creation_10__prepared;
            locals_attr$validators$$$class__10__MaxLengthValidator_544 = tmp_set_locals_10;
            Py_INCREF(tmp_set_locals_10);
        }
        tmp_dictset_value = mod_consts[169];
        tmp_res = PyDict_SetItem(locals_attr$validators$$$class__10__MaxLengthValidator_544, mod_consts[170], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[119];
        tmp_res = PyDict_SetItem(locals_attr$validators$$$class__10__MaxLengthValidator_544, mod_consts[171], tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        frame_76f04fd65912700408b83c6dac385e3d_10 = MAKE_CLASS_FRAME(tstate, codeobj_76f04fd65912700408b83c6dac385e3d, module_attr$validators, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_76f04fd65912700408b83c6dac385e3d_10);
        assert(Py_REFCNT(frame_76f04fd65912700408b83c6dac385e3d_10) == 2);

        // Framed code:
        {
            PyObject *tmp_called_value_52;
            tmp_called_value_52 = GET_STRING_DICT_VALUE(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[156]);

            if (unlikely(tmp_called_value_52 == NULL)) {
                tmp_called_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[156]);
            }

            if (tmp_called_value_52 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 545;
                type_description_2 = "o";
                goto frame_exception_exit_10;
            }
            frame_76f04fd65912700408b83c6dac385e3d_10->m_frame.f_lineno = 545;
            tmp_dictset_value = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_52);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 545;
                type_description_2 = "o";
                goto frame_exception_exit_10;
            }
            tmp_res = PyDict_SetItem(locals_attr$validators$$$class__10__MaxLengthValidator_544, mod_consts[115], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 545;
                type_description_2 = "o";
                goto frame_exception_exit_10;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_9;
        frame_exception_exit_10:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_76f04fd65912700408b83c6dac385e3d_10, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_76f04fd65912700408b83c6dac385e3d_10->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_76f04fd65912700408b83c6dac385e3d_10, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_76f04fd65912700408b83c6dac385e3d_10,
            type_description_2,
            outline_9_var___class__
        );



        assertFrameObject(frame_76f04fd65912700408b83c6dac385e3d_10);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_9;
        frame_no_exception_9:;
        goto skip_nested_handling_9;
        nested_frame_exit_9:;

        goto try_except_handler_32;
        skip_nested_handling_9:;


        tmp_dictset_value = MAKE_FUNCTION_attr$validators$$$function__34___call__();

        tmp_res = PyDict_SetItem(locals_attr$validators$$$class__10__MaxLengthValidator_544, mod_consts[172], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_attr$validators$$$function__35___repr__();

        tmp_res = PyDict_SetItem(locals_attr$validators$$$class__10__MaxLengthValidator_544, mod_consts[174], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_assign_source_73;
            PyObject *tmp_called_value_53;
            PyObject *tmp_args_value_10;
            PyObject *tmp_tuple_element_10;
            PyObject *tmp_kwargs_value_10;
            tmp_called_value_53 = (PyObject *)&PyType_Type;
            tmp_tuple_element_10 = mod_consts[119];
            tmp_args_value_10 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_10, 0, tmp_tuple_element_10);
            tmp_tuple_element_10 = mod_consts[176];
            PyTuple_SET_ITEM0(tmp_args_value_10, 1, tmp_tuple_element_10);
            tmp_tuple_element_10 = locals_attr$validators$$$class__10__MaxLengthValidator_544;
            PyTuple_SET_ITEM0(tmp_args_value_10, 2, tmp_tuple_element_10);
            CHECK_OBJECT(tmp_class_creation_10__class_decl_dict);
            tmp_kwargs_value_10 = tmp_class_creation_10__class_decl_dict;
            frame_e679cc00fa9bb510390fa6d28c105412->m_frame.f_lineno = 544;
            tmp_assign_source_73 = CALL_FUNCTION(tstate, tmp_called_value_53, tmp_args_value_10, tmp_kwargs_value_10);
            Py_DECREF(tmp_args_value_10);
            if (tmp_assign_source_73 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 544;

                goto try_except_handler_32;
            }
            assert(outline_9_var___class__ == NULL);
            outline_9_var___class__ = tmp_assign_source_73;
        }
        CHECK_OBJECT(outline_9_var___class__);
        tmp_args_element_value_13 = outline_9_var___class__;
        Py_INCREF(tmp_args_element_value_13);
        goto try_return_handler_32;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_32:;
        Py_DECREF(locals_attr$validators$$$class__10__MaxLengthValidator_544);
        locals_attr$validators$$$class__10__MaxLengthValidator_544 = NULL;
        goto try_return_handler_31;
        // Exception handler code:
        try_except_handler_32:;
        exception_keeper_type_30 = exception_type;
        exception_keeper_value_30 = exception_value;
        exception_keeper_tb_30 = exception_tb;
        exception_keeper_lineno_30 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_attr$validators$$$class__10__MaxLengthValidator_544);
        locals_attr$validators$$$class__10__MaxLengthValidator_544 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_30;
        exception_value = exception_keeper_value_30;
        exception_tb = exception_keeper_tb_30;
        exception_lineno = exception_keeper_lineno_30;

        goto try_except_handler_31;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_31:;
        CHECK_OBJECT(outline_9_var___class__);
        Py_DECREF(outline_9_var___class__);
        outline_9_var___class__ = NULL;
        goto outline_result_10;
        // Exception handler code:
        try_except_handler_31:;
        exception_keeper_type_31 = exception_type;
        exception_keeper_value_31 = exception_value;
        exception_keeper_tb_31 = exception_tb;
        exception_keeper_lineno_31 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_31;
        exception_value = exception_keeper_value_31;
        exception_tb = exception_keeper_tb_31;
        exception_lineno = exception_keeper_lineno_31;

        goto outline_exception_10;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_10:;
        exception_lineno = 544;
        goto try_except_handler_30;
        outline_result_10:;
        frame_e679cc00fa9bb510390fa6d28c105412->m_frame.f_lineno = 543;
        tmp_assign_source_72 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_50, tmp_args_element_value_13);
        Py_DECREF(tmp_called_value_50);
        Py_DECREF(tmp_args_element_value_13);
        if (tmp_assign_source_72 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 543;

            goto try_except_handler_30;
        }
        UPDATE_STRING_DICT1(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[119], tmp_assign_source_72);
    }
    goto try_end_12;
    // Exception handler code:
    try_except_handler_30:;
    exception_keeper_type_32 = exception_type;
    exception_keeper_value_32 = exception_value;
    exception_keeper_tb_32 = exception_tb;
    exception_keeper_lineno_32 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_class_creation_10__class_decl_dict);
    Py_DECREF(tmp_class_creation_10__class_decl_dict);
    tmp_class_creation_10__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_10__prepared);
    Py_DECREF(tmp_class_creation_10__prepared);
    tmp_class_creation_10__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_32;
    exception_value = exception_keeper_value_32;
    exception_tb = exception_keeper_tb_32;
    exception_lineno = exception_keeper_lineno_32;

    goto frame_exception_exit_1;
    // End of try:
    try_end_12:;
    CHECK_OBJECT(tmp_class_creation_10__class_decl_dict);
    Py_DECREF(tmp_class_creation_10__class_decl_dict);
    tmp_class_creation_10__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_10__prepared);
    Py_DECREF(tmp_class_creation_10__prepared);
    tmp_class_creation_10__prepared = NULL;
    {
        PyObject *tmp_assign_source_74;


        tmp_assign_source_74 = MAKE_FUNCTION_attr$validators$$$function__36_max_len();

        UPDATE_STRING_DICT1(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[210], tmp_assign_source_74);
    }
    {
        PyObject *tmp_assign_source_75;
        tmp_assign_source_75 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_11__class_decl_dict == NULL);
        tmp_class_creation_11__class_decl_dict = tmp_assign_source_75;
    }
    {
        PyObject *tmp_assign_source_76;
        tmp_assign_source_76 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_11__prepared == NULL);
        tmp_class_creation_11__prepared = tmp_assign_source_76;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_77;
        PyObject *tmp_called_value_54;
        PyObject *tmp_called_value_55;
        PyObject *tmp_args_element_value_14;
        tmp_called_value_55 = GET_STRING_DICT_VALUE(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[157]);

        if (unlikely(tmp_called_value_55 == NULL)) {
            tmp_called_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[157]);
        }

        if (tmp_called_value_55 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 574;

            goto try_except_handler_33;
        }
        frame_e679cc00fa9bb510390fa6d28c105412->m_frame.f_lineno = 574;
        tmp_called_value_54 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_55, &PyTuple_GET_ITEM(mod_consts[167], 0), mod_consts[178]);
        if (tmp_called_value_54 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 574;

            goto try_except_handler_33;
        }
        {
            PyObject *tmp_set_locals_11;
            CHECK_OBJECT(tmp_class_creation_11__prepared);
            tmp_set_locals_11 = tmp_class_creation_11__prepared;
            locals_attr$validators$$$class__11__MinLengthValidator_575 = tmp_set_locals_11;
            Py_INCREF(tmp_set_locals_11);
        }
        tmp_dictset_value = mod_consts[169];
        tmp_res = PyDict_SetItem(locals_attr$validators$$$class__11__MinLengthValidator_575, mod_consts[170], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[125];
        tmp_res = PyDict_SetItem(locals_attr$validators$$$class__11__MinLengthValidator_575, mod_consts[171], tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        frame_5085d7a89ed12af3d42281efca988a00_11 = MAKE_CLASS_FRAME(tstate, codeobj_5085d7a89ed12af3d42281efca988a00, module_attr$validators, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_5085d7a89ed12af3d42281efca988a00_11);
        assert(Py_REFCNT(frame_5085d7a89ed12af3d42281efca988a00_11) == 2);

        // Framed code:
        {
            PyObject *tmp_called_value_56;
            tmp_called_value_56 = GET_STRING_DICT_VALUE(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[156]);

            if (unlikely(tmp_called_value_56 == NULL)) {
                tmp_called_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[156]);
            }

            if (tmp_called_value_56 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 576;
                type_description_2 = "o";
                goto frame_exception_exit_11;
            }
            frame_5085d7a89ed12af3d42281efca988a00_11->m_frame.f_lineno = 576;
            tmp_dictset_value = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_56);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 576;
                type_description_2 = "o";
                goto frame_exception_exit_11;
            }
            tmp_res = PyDict_SetItem(locals_attr$validators$$$class__11__MinLengthValidator_575, mod_consts[121], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 576;
                type_description_2 = "o";
                goto frame_exception_exit_11;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_10;
        frame_exception_exit_11:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_5085d7a89ed12af3d42281efca988a00_11, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_5085d7a89ed12af3d42281efca988a00_11->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_5085d7a89ed12af3d42281efca988a00_11, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_5085d7a89ed12af3d42281efca988a00_11,
            type_description_2,
            outline_10_var___class__
        );



        assertFrameObject(frame_5085d7a89ed12af3d42281efca988a00_11);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_10;
        frame_no_exception_10:;
        goto skip_nested_handling_10;
        nested_frame_exit_10:;

        goto try_except_handler_35;
        skip_nested_handling_10:;


        tmp_dictset_value = MAKE_FUNCTION_attr$validators$$$function__37___call__();

        tmp_res = PyDict_SetItem(locals_attr$validators$$$class__11__MinLengthValidator_575, mod_consts[172], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_attr$validators$$$function__38___repr__();

        tmp_res = PyDict_SetItem(locals_attr$validators$$$class__11__MinLengthValidator_575, mod_consts[174], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_assign_source_78;
            PyObject *tmp_called_value_57;
            PyObject *tmp_args_value_11;
            PyObject *tmp_tuple_element_11;
            PyObject *tmp_kwargs_value_11;
            tmp_called_value_57 = (PyObject *)&PyType_Type;
            tmp_tuple_element_11 = mod_consts[125];
            tmp_args_value_11 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_11, 0, tmp_tuple_element_11);
            tmp_tuple_element_11 = mod_consts[176];
            PyTuple_SET_ITEM0(tmp_args_value_11, 1, tmp_tuple_element_11);
            tmp_tuple_element_11 = locals_attr$validators$$$class__11__MinLengthValidator_575;
            PyTuple_SET_ITEM0(tmp_args_value_11, 2, tmp_tuple_element_11);
            CHECK_OBJECT(tmp_class_creation_11__class_decl_dict);
            tmp_kwargs_value_11 = tmp_class_creation_11__class_decl_dict;
            frame_e679cc00fa9bb510390fa6d28c105412->m_frame.f_lineno = 575;
            tmp_assign_source_78 = CALL_FUNCTION(tstate, tmp_called_value_57, tmp_args_value_11, tmp_kwargs_value_11);
            Py_DECREF(tmp_args_value_11);
            if (tmp_assign_source_78 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 575;

                goto try_except_handler_35;
            }
            assert(outline_10_var___class__ == NULL);
            outline_10_var___class__ = tmp_assign_source_78;
        }
        CHECK_OBJECT(outline_10_var___class__);
        tmp_args_element_value_14 = outline_10_var___class__;
        Py_INCREF(tmp_args_element_value_14);
        goto try_return_handler_35;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_35:;
        Py_DECREF(locals_attr$validators$$$class__11__MinLengthValidator_575);
        locals_attr$validators$$$class__11__MinLengthValidator_575 = NULL;
        goto try_return_handler_34;
        // Exception handler code:
        try_except_handler_35:;
        exception_keeper_type_33 = exception_type;
        exception_keeper_value_33 = exception_value;
        exception_keeper_tb_33 = exception_tb;
        exception_keeper_lineno_33 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_attr$validators$$$class__11__MinLengthValidator_575);
        locals_attr$validators$$$class__11__MinLengthValidator_575 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_33;
        exception_value = exception_keeper_value_33;
        exception_tb = exception_keeper_tb_33;
        exception_lineno = exception_keeper_lineno_33;

        goto try_except_handler_34;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_34:;
        CHECK_OBJECT(outline_10_var___class__);
        Py_DECREF(outline_10_var___class__);
        outline_10_var___class__ = NULL;
        goto outline_result_11;
        // Exception handler code:
        try_except_handler_34:;
        exception_keeper_type_34 = exception_type;
        exception_keeper_value_34 = exception_value;
        exception_keeper_tb_34 = exception_tb;
        exception_keeper_lineno_34 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_34;
        exception_value = exception_keeper_value_34;
        exception_tb = exception_keeper_tb_34;
        exception_lineno = exception_keeper_lineno_34;

        goto outline_exception_11;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_11:;
        exception_lineno = 575;
        goto try_except_handler_33;
        outline_result_11:;
        frame_e679cc00fa9bb510390fa6d28c105412->m_frame.f_lineno = 574;
        tmp_assign_source_77 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_54, tmp_args_element_value_14);
        Py_DECREF(tmp_called_value_54);
        Py_DECREF(tmp_args_element_value_14);
        if (tmp_assign_source_77 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 574;

            goto try_except_handler_33;
        }
        UPDATE_STRING_DICT1(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[125], tmp_assign_source_77);
    }
    goto try_end_13;
    // Exception handler code:
    try_except_handler_33:;
    exception_keeper_type_35 = exception_type;
    exception_keeper_value_35 = exception_value;
    exception_keeper_tb_35 = exception_tb;
    exception_keeper_lineno_35 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_class_creation_11__class_decl_dict);
    Py_DECREF(tmp_class_creation_11__class_decl_dict);
    tmp_class_creation_11__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_11__prepared);
    Py_DECREF(tmp_class_creation_11__prepared);
    tmp_class_creation_11__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_35;
    exception_value = exception_keeper_value_35;
    exception_tb = exception_keeper_tb_35;
    exception_lineno = exception_keeper_lineno_35;

    goto frame_exception_exit_1;
    // End of try:
    try_end_13:;
    CHECK_OBJECT(tmp_class_creation_11__class_decl_dict);
    Py_DECREF(tmp_class_creation_11__class_decl_dict);
    tmp_class_creation_11__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_11__prepared);
    Py_DECREF(tmp_class_creation_11__prepared);
    tmp_class_creation_11__prepared = NULL;
    {
        PyObject *tmp_assign_source_79;


        tmp_assign_source_79 = MAKE_FUNCTION_attr$validators$$$function__39_min_len();

        UPDATE_STRING_DICT1(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[213], tmp_assign_source_79);
    }
    {
        PyObject *tmp_assign_source_80;
        tmp_assign_source_80 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_12__class_decl_dict == NULL);
        tmp_class_creation_12__class_decl_dict = tmp_assign_source_80;
    }
    {
        PyObject *tmp_assign_source_81;
        tmp_assign_source_81 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_12__prepared == NULL);
        tmp_class_creation_12__prepared = tmp_assign_source_81;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_82;
        PyObject *tmp_called_value_58;
        PyObject *tmp_called_value_59;
        PyObject *tmp_args_element_value_15;
        tmp_called_value_59 = GET_STRING_DICT_VALUE(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[157]);

        if (unlikely(tmp_called_value_59 == NULL)) {
            tmp_called_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[157]);
        }

        if (tmp_called_value_59 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 605;

            goto try_except_handler_36;
        }
        frame_e679cc00fa9bb510390fa6d28c105412->m_frame.f_lineno = 605;
        tmp_called_value_58 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_59, &PyTuple_GET_ITEM(mod_consts[167], 0), mod_consts[168]);
        if (tmp_called_value_58 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 605;

            goto try_except_handler_36;
        }
        {
            PyObject *tmp_set_locals_12;
            CHECK_OBJECT(tmp_class_creation_12__prepared);
            tmp_set_locals_12 = tmp_class_creation_12__prepared;
            locals_attr$validators$$$class__12__SubclassOfValidator_606 = tmp_set_locals_12;
            Py_INCREF(tmp_set_locals_12);
        }
        tmp_dictset_value = mod_consts[169];
        tmp_res = PyDict_SetItem(locals_attr$validators$$$class__12__SubclassOfValidator_606, mod_consts[170], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[130];
        tmp_res = PyDict_SetItem(locals_attr$validators$$$class__12__SubclassOfValidator_606, mod_consts[171], tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        frame_345c2917192e8f850d3dd6ab7827c01e_12 = MAKE_CLASS_FRAME(tstate, codeobj_345c2917192e8f850d3dd6ab7827c01e, module_attr$validators, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_345c2917192e8f850d3dd6ab7827c01e_12);
        assert(Py_REFCNT(frame_345c2917192e8f850d3dd6ab7827c01e_12) == 2);

        // Framed code:
        {
            PyObject *tmp_called_value_60;
            tmp_called_value_60 = GET_STRING_DICT_VALUE(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[156]);

            if (unlikely(tmp_called_value_60 == NULL)) {
                tmp_called_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[156]);
            }

            if (tmp_called_value_60 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 607;
                type_description_2 = "o";
                goto frame_exception_exit_12;
            }
            frame_345c2917192e8f850d3dd6ab7827c01e_12->m_frame.f_lineno = 607;
            tmp_dictset_value = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_60);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 607;
                type_description_2 = "o";
                goto frame_exception_exit_12;
            }
            tmp_res = PyDict_SetItem(locals_attr$validators$$$class__12__SubclassOfValidator_606, mod_consts[8], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 607;
                type_description_2 = "o";
                goto frame_exception_exit_12;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_11;
        frame_exception_exit_12:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_345c2917192e8f850d3dd6ab7827c01e_12, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_345c2917192e8f850d3dd6ab7827c01e_12->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_345c2917192e8f850d3dd6ab7827c01e_12, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_345c2917192e8f850d3dd6ab7827c01e_12,
            type_description_2,
            outline_11_var___class__
        );



        assertFrameObject(frame_345c2917192e8f850d3dd6ab7827c01e_12);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_11;
        frame_no_exception_11:;
        goto skip_nested_handling_11;
        nested_frame_exit_11:;

        goto try_except_handler_38;
        skip_nested_handling_11:;


        tmp_dictset_value = MAKE_FUNCTION_attr$validators$$$function__40___call__();

        tmp_res = PyDict_SetItem(locals_attr$validators$$$class__12__SubclassOfValidator_606, mod_consts[172], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_attr$validators$$$function__41___repr__();

        tmp_res = PyDict_SetItem(locals_attr$validators$$$class__12__SubclassOfValidator_606, mod_consts[174], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_assign_source_83;
            PyObject *tmp_called_value_61;
            PyObject *tmp_args_value_12;
            PyObject *tmp_tuple_element_12;
            PyObject *tmp_kwargs_value_12;
            tmp_called_value_61 = (PyObject *)&PyType_Type;
            tmp_tuple_element_12 = mod_consts[130];
            tmp_args_value_12 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_12, 0, tmp_tuple_element_12);
            tmp_tuple_element_12 = mod_consts[176];
            PyTuple_SET_ITEM0(tmp_args_value_12, 1, tmp_tuple_element_12);
            tmp_tuple_element_12 = locals_attr$validators$$$class__12__SubclassOfValidator_606;
            PyTuple_SET_ITEM0(tmp_args_value_12, 2, tmp_tuple_element_12);
            CHECK_OBJECT(tmp_class_creation_12__class_decl_dict);
            tmp_kwargs_value_12 = tmp_class_creation_12__class_decl_dict;
            frame_e679cc00fa9bb510390fa6d28c105412->m_frame.f_lineno = 606;
            tmp_assign_source_83 = CALL_FUNCTION(tstate, tmp_called_value_61, tmp_args_value_12, tmp_kwargs_value_12);
            Py_DECREF(tmp_args_value_12);
            if (tmp_assign_source_83 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 606;

                goto try_except_handler_38;
            }
            assert(outline_11_var___class__ == NULL);
            outline_11_var___class__ = tmp_assign_source_83;
        }
        CHECK_OBJECT(outline_11_var___class__);
        tmp_args_element_value_15 = outline_11_var___class__;
        Py_INCREF(tmp_args_element_value_15);
        goto try_return_handler_38;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_38:;
        Py_DECREF(locals_attr$validators$$$class__12__SubclassOfValidator_606);
        locals_attr$validators$$$class__12__SubclassOfValidator_606 = NULL;
        goto try_return_handler_37;
        // Exception handler code:
        try_except_handler_38:;
        exception_keeper_type_36 = exception_type;
        exception_keeper_value_36 = exception_value;
        exception_keeper_tb_36 = exception_tb;
        exception_keeper_lineno_36 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_attr$validators$$$class__12__SubclassOfValidator_606);
        locals_attr$validators$$$class__12__SubclassOfValidator_606 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_36;
        exception_value = exception_keeper_value_36;
        exception_tb = exception_keeper_tb_36;
        exception_lineno = exception_keeper_lineno_36;

        goto try_except_handler_37;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_37:;
        CHECK_OBJECT(outline_11_var___class__);
        Py_DECREF(outline_11_var___class__);
        outline_11_var___class__ = NULL;
        goto outline_result_12;
        // Exception handler code:
        try_except_handler_37:;
        exception_keeper_type_37 = exception_type;
        exception_keeper_value_37 = exception_value;
        exception_keeper_tb_37 = exception_tb;
        exception_keeper_lineno_37 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_37;
        exception_value = exception_keeper_value_37;
        exception_tb = exception_keeper_tb_37;
        exception_lineno = exception_keeper_lineno_37;

        goto outline_exception_12;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_12:;
        exception_lineno = 606;
        goto try_except_handler_36;
        outline_result_12:;
        frame_e679cc00fa9bb510390fa6d28c105412->m_frame.f_lineno = 605;
        tmp_assign_source_82 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_58, tmp_args_element_value_15);
        Py_DECREF(tmp_called_value_58);
        Py_DECREF(tmp_args_element_value_15);
        if (tmp_assign_source_82 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 605;

            goto try_except_handler_36;
        }
        UPDATE_STRING_DICT1(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[130], tmp_assign_source_82);
    }
    goto try_end_14;
    // Exception handler code:
    try_except_handler_36:;
    exception_keeper_type_38 = exception_type;
    exception_keeper_value_38 = exception_value;
    exception_keeper_tb_38 = exception_tb;
    exception_keeper_lineno_38 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_class_creation_12__class_decl_dict);
    Py_DECREF(tmp_class_creation_12__class_decl_dict);
    tmp_class_creation_12__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_12__prepared);
    Py_DECREF(tmp_class_creation_12__prepared);
    tmp_class_creation_12__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_38;
    exception_value = exception_keeper_value_38;
    exception_tb = exception_keeper_tb_38;
    exception_lineno = exception_keeper_lineno_38;

    goto frame_exception_exit_1;
    // End of try:
    try_end_14:;
    CHECK_OBJECT(tmp_class_creation_12__class_decl_dict);
    Py_DECREF(tmp_class_creation_12__class_decl_dict);
    tmp_class_creation_12__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_12__prepared);
    Py_DECREF(tmp_class_creation_12__prepared);
    tmp_class_creation_12__prepared = NULL;
    {
        PyObject *tmp_assign_source_84;


        tmp_assign_source_84 = MAKE_FUNCTION_attr$validators$$$function__42__subclass_of();

        UPDATE_STRING_DICT1(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[216], tmp_assign_source_84);
    }
    {
        PyObject *tmp_assign_source_85;
        tmp_assign_source_85 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_13__class_decl_dict == NULL);
        tmp_class_creation_13__class_decl_dict = tmp_assign_source_85;
    }
    {
        PyObject *tmp_assign_source_86;
        tmp_assign_source_86 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_13__prepared == NULL);
        tmp_class_creation_13__prepared = tmp_assign_source_86;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_87;
        PyObject *tmp_called_value_62;
        PyObject *tmp_called_value_63;
        PyObject *tmp_args_element_value_16;
        tmp_called_value_63 = GET_STRING_DICT_VALUE(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[157]);

        if (unlikely(tmp_called_value_63 == NULL)) {
            tmp_called_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[157]);
        }

        if (tmp_called_value_63 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 648;

            goto try_except_handler_39;
        }
        frame_e679cc00fa9bb510390fa6d28c105412->m_frame.f_lineno = 648;
        tmp_called_value_62 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_63, &PyTuple_GET_ITEM(mod_consts[167], 0), mod_consts[168]);
        if (tmp_called_value_62 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 648;

            goto try_except_handler_39;
        }
        {
            PyObject *tmp_set_locals_13;
            CHECK_OBJECT(tmp_class_creation_13__prepared);
            tmp_set_locals_13 = tmp_class_creation_13__prepared;
            locals_attr$validators$$$class__13__NotValidator_649 = tmp_set_locals_13;
            Py_INCREF(tmp_set_locals_13);
        }
        tmp_dictset_value = mod_consts[169];
        tmp_res = PyDict_SetItem(locals_attr$validators$$$class__13__NotValidator_649, mod_consts[170], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[138];
        tmp_res = PyDict_SetItem(locals_attr$validators$$$class__13__NotValidator_649, mod_consts[171], tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        frame_eead991384a97d1ad3ea891a9bffd4be_13 = MAKE_CLASS_FRAME(tstate, codeobj_eead991384a97d1ad3ea891a9bffd4be, module_attr$validators, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_eead991384a97d1ad3ea891a9bffd4be_13);
        assert(Py_REFCNT(frame_eead991384a97d1ad3ea891a9bffd4be_13) == 2);

        // Framed code:
        {
            PyObject *tmp_called_value_64;
            tmp_called_value_64 = GET_STRING_DICT_VALUE(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[156]);

            if (unlikely(tmp_called_value_64 == NULL)) {
                tmp_called_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[156]);
            }

            if (tmp_called_value_64 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 650;
                type_description_2 = "o";
                goto frame_exception_exit_13;
            }
            frame_eead991384a97d1ad3ea891a9bffd4be_13->m_frame.f_lineno = 650;
            tmp_dictset_value = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_64);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 650;
                type_description_2 = "o";
                goto frame_exception_exit_13;
            }
            tmp_res = PyDict_SetItem(locals_attr$validators$$$class__13__NotValidator_649, mod_consts[53], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 650;
                type_description_2 = "o";
                goto frame_exception_exit_13;
            }
        }
        {
            PyObject *tmp_called_value_65;
            PyObject *tmp_kw_call_value_0_6;
            PyObject *tmp_called_value_66;
            tmp_called_value_65 = GET_STRING_DICT_VALUE(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[156]);

            if (unlikely(tmp_called_value_65 == NULL)) {
                tmp_called_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[156]);
            }

            if (tmp_called_value_65 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 651;
                type_description_2 = "o";
                goto frame_exception_exit_13;
            }
            tmp_called_value_66 = GET_STRING_DICT_VALUE(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[160]);

            if (unlikely(tmp_called_value_66 == NULL)) {
                tmp_called_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[160]);
            }

            if (tmp_called_value_66 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 652;
                type_description_2 = "o";
                goto frame_exception_exit_13;
            }
            frame_eead991384a97d1ad3ea891a9bffd4be_13->m_frame.f_lineno = 652;
            tmp_kw_call_value_0_6 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_66, mod_consts[217]);

            if (tmp_kw_call_value_0_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 652;
                type_description_2 = "o";
                goto frame_exception_exit_13;
            }
            frame_eead991384a97d1ad3ea891a9bffd4be_13->m_frame.f_lineno = 651;
            {
                PyObject *kw_values[1] = {tmp_kw_call_value_0_6};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_65, kw_values, mod_consts[218]);
            }

            Py_DECREF(tmp_kw_call_value_0_6);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 651;
                type_description_2 = "o";
                goto frame_exception_exit_13;
            }
            tmp_res = PyDict_SetItem(locals_attr$validators$$$class__13__NotValidator_649, mod_consts[133], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 651;
                type_description_2 = "o";
                goto frame_exception_exit_13;
            }
        }
        {
            PyObject *tmp_called_value_67;
            PyObject *tmp_kw_call_value_0_7;
            PyObject *tmp_called_value_68;
            PyObject *tmp_kw_call_value_0_8;
            PyObject *tmp_called_value_69;
            PyObject *tmp_kw_call_value_1_3;
            PyObject *tmp_called_value_70;
            tmp_called_value_67 = GET_STRING_DICT_VALUE(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[156]);

            if (unlikely(tmp_called_value_67 == NULL)) {
                tmp_called_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[156]);
            }

            if (tmp_called_value_67 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 657;
                type_description_2 = "o";
                goto frame_exception_exit_13;
            }
            tmp_called_value_68 = GET_STRING_DICT_VALUE(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[202]);

            if (unlikely(tmp_called_value_68 == NULL)) {
                tmp_called_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[202]);
            }

            if (tmp_called_value_68 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 658;
                type_description_2 = "o";
                goto frame_exception_exit_13;
            }
            tmp_called_value_69 = GET_STRING_DICT_VALUE(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[216]);

            if (unlikely(tmp_called_value_69 == NULL)) {
                tmp_called_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[216]);
            }

            if (tmp_called_value_69 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 659;
                type_description_2 = "o";
                goto frame_exception_exit_13;
            }
            frame_eead991384a97d1ad3ea891a9bffd4be_13->m_frame.f_lineno = 659;
            tmp_kw_call_value_0_8 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_69, mod_consts[219]);

            if (tmp_kw_call_value_0_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 659;
                type_description_2 = "o";
                goto frame_exception_exit_13;
            }
            tmp_called_value_70 = GET_STRING_DICT_VALUE(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[177]);

            if (unlikely(tmp_called_value_70 == NULL)) {
                tmp_called_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[177]);
            }

            if (tmp_called_value_70 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_8);

                exception_lineno = 660;
                type_description_2 = "o";
                goto frame_exception_exit_13;
            }
            frame_eead991384a97d1ad3ea891a9bffd4be_13->m_frame.f_lineno = 660;
            tmp_kw_call_value_1_3 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_70, mod_consts[220]);

            if (tmp_kw_call_value_1_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_value_0_8);

                exception_lineno = 660;
                type_description_2 = "o";
                goto frame_exception_exit_13;
            }
            frame_eead991384a97d1ad3ea891a9bffd4be_13->m_frame.f_lineno = 658;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_8, tmp_kw_call_value_1_3};

                tmp_kw_call_value_0_7 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_68, kw_values, mod_consts[221]);
            }

            Py_DECREF(tmp_kw_call_value_0_8);
            Py_DECREF(tmp_kw_call_value_1_3);
            if (tmp_kw_call_value_0_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 658;
                type_description_2 = "o";
                goto frame_exception_exit_13;
            }
            frame_eead991384a97d1ad3ea891a9bffd4be_13->m_frame.f_lineno = 657;
            {
                PyObject *kw_values[1] = {tmp_kw_call_value_0_7};

                tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_67, kw_values, mod_consts[197]);
            }

            Py_DECREF(tmp_kw_call_value_0_7);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 657;
                type_description_2 = "o";
                goto frame_exception_exit_13;
            }
            tmp_res = PyDict_SetItem(locals_attr$validators$$$class__13__NotValidator_649, mod_consts[132], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 657;
                type_description_2 = "o";
                goto frame_exception_exit_13;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_12;
        frame_exception_exit_13:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_eead991384a97d1ad3ea891a9bffd4be_13, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_eead991384a97d1ad3ea891a9bffd4be_13->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_eead991384a97d1ad3ea891a9bffd4be_13, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_eead991384a97d1ad3ea891a9bffd4be_13,
            type_description_2,
            outline_12_var___class__
        );



        assertFrameObject(frame_eead991384a97d1ad3ea891a9bffd4be_13);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_12;
        frame_no_exception_12:;
        goto skip_nested_handling_12;
        nested_frame_exit_12:;

        goto try_except_handler_41;
        skip_nested_handling_12:;


        tmp_dictset_value = MAKE_FUNCTION_attr$validators$$$function__43___call__();

        tmp_res = PyDict_SetItem(locals_attr$validators$$$class__13__NotValidator_649, mod_consts[172], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_attr$validators$$$function__44___repr__();

        tmp_res = PyDict_SetItem(locals_attr$validators$$$class__13__NotValidator_649, mod_consts[174], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_assign_source_88;
            PyObject *tmp_called_value_71;
            PyObject *tmp_args_value_13;
            PyObject *tmp_tuple_element_13;
            PyObject *tmp_kwargs_value_13;
            tmp_called_value_71 = (PyObject *)&PyType_Type;
            tmp_tuple_element_13 = mod_consts[138];
            tmp_args_value_13 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_13, 0, tmp_tuple_element_13);
            tmp_tuple_element_13 = mod_consts[176];
            PyTuple_SET_ITEM0(tmp_args_value_13, 1, tmp_tuple_element_13);
            tmp_tuple_element_13 = locals_attr$validators$$$class__13__NotValidator_649;
            PyTuple_SET_ITEM0(tmp_args_value_13, 2, tmp_tuple_element_13);
            CHECK_OBJECT(tmp_class_creation_13__class_decl_dict);
            tmp_kwargs_value_13 = tmp_class_creation_13__class_decl_dict;
            frame_e679cc00fa9bb510390fa6d28c105412->m_frame.f_lineno = 649;
            tmp_assign_source_88 = CALL_FUNCTION(tstate, tmp_called_value_71, tmp_args_value_13, tmp_kwargs_value_13);
            Py_DECREF(tmp_args_value_13);
            if (tmp_assign_source_88 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 649;

                goto try_except_handler_41;
            }
            assert(outline_12_var___class__ == NULL);
            outline_12_var___class__ = tmp_assign_source_88;
        }
        CHECK_OBJECT(outline_12_var___class__);
        tmp_args_element_value_16 = outline_12_var___class__;
        Py_INCREF(tmp_args_element_value_16);
        goto try_return_handler_41;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_41:;
        Py_DECREF(locals_attr$validators$$$class__13__NotValidator_649);
        locals_attr$validators$$$class__13__NotValidator_649 = NULL;
        goto try_return_handler_40;
        // Exception handler code:
        try_except_handler_41:;
        exception_keeper_type_39 = exception_type;
        exception_keeper_value_39 = exception_value;
        exception_keeper_tb_39 = exception_tb;
        exception_keeper_lineno_39 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_attr$validators$$$class__13__NotValidator_649);
        locals_attr$validators$$$class__13__NotValidator_649 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_39;
        exception_value = exception_keeper_value_39;
        exception_tb = exception_keeper_tb_39;
        exception_lineno = exception_keeper_lineno_39;

        goto try_except_handler_40;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_40:;
        CHECK_OBJECT(outline_12_var___class__);
        Py_DECREF(outline_12_var___class__);
        outline_12_var___class__ = NULL;
        goto outline_result_13;
        // Exception handler code:
        try_except_handler_40:;
        exception_keeper_type_40 = exception_type;
        exception_keeper_value_40 = exception_value;
        exception_keeper_tb_40 = exception_tb;
        exception_keeper_lineno_40 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_40;
        exception_value = exception_keeper_value_40;
        exception_tb = exception_keeper_tb_40;
        exception_lineno = exception_keeper_lineno_40;

        goto outline_exception_13;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_13:;
        exception_lineno = 649;
        goto try_except_handler_39;
        outline_result_13:;
        frame_e679cc00fa9bb510390fa6d28c105412->m_frame.f_lineno = 648;
        tmp_assign_source_87 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_62, tmp_args_element_value_16);
        Py_DECREF(tmp_called_value_62);
        Py_DECREF(tmp_args_element_value_16);
        if (tmp_assign_source_87 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 648;

            goto try_except_handler_39;
        }
        UPDATE_STRING_DICT1(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[138], tmp_assign_source_87);
    }
    goto try_end_15;
    // Exception handler code:
    try_except_handler_39:;
    exception_keeper_type_41 = exception_type;
    exception_keeper_value_41 = exception_value;
    exception_keeper_tb_41 = exception_tb;
    exception_keeper_lineno_41 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_class_creation_13__class_decl_dict);
    Py_DECREF(tmp_class_creation_13__class_decl_dict);
    tmp_class_creation_13__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_13__prepared);
    Py_DECREF(tmp_class_creation_13__prepared);
    tmp_class_creation_13__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_41;
    exception_value = exception_keeper_value_41;
    exception_tb = exception_keeper_tb_41;
    exception_lineno = exception_keeper_lineno_41;

    goto frame_exception_exit_1;
    // End of try:
    try_end_15:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_13;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e679cc00fa9bb510390fa6d28c105412, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e679cc00fa9bb510390fa6d28c105412->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e679cc00fa9bb510390fa6d28c105412, exception_lineno);
    }



    assertFrameObject(frame_e679cc00fa9bb510390fa6d28c105412);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_13:;
    CHECK_OBJECT(tmp_class_creation_13__class_decl_dict);
    Py_DECREF(tmp_class_creation_13__class_decl_dict);
    tmp_class_creation_13__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_13__prepared);
    Py_DECREF(tmp_class_creation_13__prepared);
    tmp_class_creation_13__prepared = NULL;
    {
        PyObject *tmp_assign_source_89;
        PyObject *tmp_kw_defaults_1;
        tmp_kw_defaults_1 = DICT_COPY(mod_consts[224]);


        tmp_assign_source_89 = MAKE_FUNCTION_attr$validators$$$function__45_not_(tmp_kw_defaults_1);

        UPDATE_STRING_DICT1(moduledict_attr$validators, (Nuitka_StringObject *)mod_consts[225], tmp_assign_source_89);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("attr.validators", false);

    Py_INCREF(module_attr$validators);
    return module_attr$validators;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_attr$validators, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("attr$validators", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
