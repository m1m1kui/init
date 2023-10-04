/* Generated code for Python module 'pytiled_parser.tileset'
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

/* The "module_pytiled_parser$tileset" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pytiled_parser$tileset;
PyDictObject *moduledict_pytiled_parser$tileset;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[109];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[109];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("pytiled_parser.tileset"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 109; i++) {
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
void checkModuleConstants_pytiled_parser$tileset(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 109; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_07faf9c966de872b429b78a374b78758;
static PyCodeObject *codeobj_3113acb876ae91a4e17508c1881eba17;
static PyCodeObject *codeobj_23973e21f7e150732309ebdd2fe143cb;
static PyCodeObject *codeobj_72afbe295dfc848f3bf39f7e7c324da7;
static PyCodeObject *codeobj_6598e513f0bb22de2015eae415ba1b65;
static PyCodeObject *codeobj_4678728fe0a20e92011e2070d3de824d;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[106]); CHECK_OBJECT(module_filename_obj);
    codeobj_07faf9c966de872b429b78a374b78758 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[107], mod_consts[107], NULL, NULL, 0, 0, 0);
    codeobj_3113acb876ae91a4e17508c1881eba17 = MAKE_CODE_OBJECT(module_filename_obj, 41, CO_NOFREE, mod_consts[47], mod_consts[47], mod_consts[108], NULL, 0, 0, 0);
    codeobj_23973e21f7e150732309ebdd2fe143cb = MAKE_CODE_OBJECT(module_filename_obj, 19, CO_NOFREE, mod_consts[31], mod_consts[31], mod_consts[108], NULL, 0, 0, 0);
    codeobj_72afbe295dfc848f3bf39f7e7c324da7 = MAKE_CODE_OBJECT(module_filename_obj, 89, CO_NOFREE, mod_consts[62], mod_consts[62], mod_consts[108], NULL, 0, 0, 0);
    codeobj_6598e513f0bb22de2015eae415ba1b65 = MAKE_CODE_OBJECT(module_filename_obj, 140, CO_NOFREE, mod_consts[76], mod_consts[76], mod_consts[108], NULL, 0, 0, 0);
    codeobj_4678728fe0a20e92011e2070d3de824d = MAKE_CODE_OBJECT(module_filename_obj, 63, CO_NOFREE, mod_consts[55], mod_consts[55], mod_consts[108], NULL, 0, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__1__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


// The module function definitions.


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

function_impl_code functable_pytiled_parser$tileset[] = {

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

    function_impl_code *current = functable_pytiled_parser$tileset;
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

    if (offset > sizeof(functable_pytiled_parser$tileset) || offset < 0) {
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
        functable_pytiled_parser$tileset[offset],
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
        module_pytiled_parser$tileset,
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
PyObject *modulecode_pytiled_parser$tileset(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("pytiled_parser.tileset");

    // Store the module for future use.
    module_pytiled_parser$tileset = module;

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
        PRINT_STRING("pytiled_parser.tileset: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("pytiled_parser.tileset: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initpytiled_parser$tileset\n");

    moduledict_pytiled_parser$tileset = MODULE_DICT(module_pytiled_parser$tileset);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(tstate, loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_pytiled_parser$tileset,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_pytiled_parser$tileset,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[16]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$tileset, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_pytiled_parser$tileset,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$tileset, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_pytiled_parser$tileset,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$tileset, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_pytiled_parser$tileset,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_pytiled_parser$tileset);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_pytiled_parser$tileset, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_pytiled_parser$tileset, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_pytiled_parser$tileset, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_pytiled_parser$tileset, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_pytiled_parser$tileset);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_pytiled_parser$tileset, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *outline_3_var___class__ = NULL;
    PyObject *outline_4_var___class__ = NULL;
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
    PyObject *tmp_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_class_creation_3__prepared = NULL;
    PyObject *tmp_class_creation_4__class_decl_dict = NULL;
    PyObject *tmp_class_creation_4__prepared = NULL;
    PyObject *tmp_class_creation_5__class_decl_dict = NULL;
    PyObject *tmp_class_creation_5__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    struct Nuitka_FrameObject *frame_07faf9c966de872b429b78a374b78758;
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
    PyObject *locals_pytiled_parser$tileset$$$class__1_Grid_19 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_23973e21f7e150732309ebdd2fe143cb_2;
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
    PyObject *locals_pytiled_parser$tileset$$$class__2_Frame_41 = NULL;
    struct Nuitka_FrameObject *frame_3113acb876ae91a4e17508c1881eba17_3;
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
    PyObject *locals_pytiled_parser$tileset$$$class__3_Transformations_63 = NULL;
    struct Nuitka_FrameObject *frame_4678728fe0a20e92011e2070d3de824d_4;
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
    PyObject *locals_pytiled_parser$tileset$$$class__4_Tile_89 = NULL;
    struct Nuitka_FrameObject *frame_72afbe295dfc848f3bf39f7e7c324da7_5;
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
    PyObject *locals_pytiled_parser$tileset$$$class__5_Tileset_140 = NULL;
    struct Nuitka_FrameObject *frame_6598e513f0bb22de2015eae415ba1b65_6;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[0];
        UPDATE_STRING_DICT0(moduledict_pytiled_parser$tileset, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_pytiled_parser$tileset, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_2);
    }
    frame_07faf9c966de872b429b78a374b78758 = MAKE_MODULE_FRAME(codeobj_07faf9c966de872b429b78a374b78758, module_pytiled_parser$tileset);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_07faf9c966de872b429b78a374b78758);
    assert(Py_REFCNT(frame_07faf9c966de872b429b78a374b78758) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$tileset, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[4], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$tileset, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[5], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_pytiled_parser$tileset, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[7];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_pytiled_parser$tileset;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[8];
        tmp_level_value_1 = mod_consts[9];
        frame_07faf9c966de872b429b78a374b78758->m_frame.f_lineno = 8;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_pytiled_parser$tileset,
                mod_consts[10],
                mod_consts[9]
            );
        } else {
            tmp_assign_source_4 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[10]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pytiled_parser$tileset, (Nuitka_StringObject *)mod_consts[10], tmp_assign_source_4);
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
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_2,
                (PyObject *)moduledict_pytiled_parser$tileset,
                mod_consts[11],
                mod_consts[9]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[11]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pytiled_parser$tileset, (Nuitka_StringObject *)mod_consts[11], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_3,
                (PyObject *)moduledict_pytiled_parser$tileset,
                mod_consts[12],
                mod_consts[9]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts[12]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pytiled_parser$tileset, (Nuitka_StringObject *)mod_consts[12], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_4,
                (PyObject *)moduledict_pytiled_parser$tileset,
                mod_consts[13],
                mod_consts[9]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts[13]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pytiled_parser$tileset, (Nuitka_StringObject *)mod_consts[13], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_5,
                (PyObject *)moduledict_pytiled_parser$tileset,
                mod_consts[14],
                mod_consts[9]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts[14]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pytiled_parser$tileset, (Nuitka_StringObject *)mod_consts[14], tmp_assign_source_9);
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
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[15];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_pytiled_parser$tileset;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[9];
        frame_07faf9c966de872b429b78a374b78758->m_frame.f_lineno = 11;
        tmp_assign_source_10 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pytiled_parser$tileset, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_6;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[16];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_pytiled_parser$tileset;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[17];
        tmp_level_value_3 = mod_consts[18];
        frame_07faf9c966de872b429b78a374b78758->m_frame.f_lineno = 13;
        tmp_import_name_from_6 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_6,
                (PyObject *)moduledict_pytiled_parser$tileset,
                mod_consts[19],
                mod_consts[9]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts[19]);
        }

        Py_DECREF(tmp_import_name_from_6);
        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pytiled_parser$tileset, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_7;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[16];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_pytiled_parser$tileset;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[20];
        tmp_level_value_4 = mod_consts[18];
        frame_07faf9c966de872b429b78a374b78758->m_frame.f_lineno = 14;
        tmp_import_name_from_7 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_7,
                (PyObject *)moduledict_pytiled_parser$tileset,
                mod_consts[21],
                mod_consts[9]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts[21]);
        }

        Py_DECREF(tmp_import_name_from_7);
        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pytiled_parser$tileset, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[23];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_pytiled_parser$tileset;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[24];
        tmp_level_value_5 = mod_consts[18];
        frame_07faf9c966de872b429b78a374b78758->m_frame.f_lineno = 15;
        tmp_assign_source_13 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_13;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_8 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_8,
                (PyObject *)moduledict_pytiled_parser$tileset,
                mod_consts[25],
                mod_consts[9]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts[25]);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_pytiled_parser$tileset, (Nuitka_StringObject *)mod_consts[25], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_9 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_9,
                (PyObject *)moduledict_pytiled_parser$tileset,
                mod_consts[26],
                mod_consts[9]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts[26]);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_pytiled_parser$tileset, (Nuitka_StringObject *)mod_consts[26], tmp_assign_source_15);
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
        PyObject *tmp_import_name_from_10;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[27];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_pytiled_parser$tileset;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[28];
        tmp_level_value_6 = mod_consts[18];
        frame_07faf9c966de872b429b78a374b78758->m_frame.f_lineno = 16;
        tmp_import_name_from_10 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_import_name_from_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_10,
                (PyObject *)moduledict_pytiled_parser$tileset,
                mod_consts[29],
                mod_consts[9]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts[29]);
        }

        Py_DECREF(tmp_import_name_from_10);
        if (tmp_assign_source_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pytiled_parser$tileset, (Nuitka_StringObject *)mod_consts[29], tmp_assign_source_16);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$tileset, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto try_except_handler_3;
        }
        tmp_assign_source_17 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_17, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_18 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto try_except_handler_3;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_metaclass_value_1;
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_bases_value_1;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto try_except_handler_3;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_expression_value_1 = tmp_class_creation_1__bases;
        tmp_subscript_value_1 = mod_consts[9];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto try_except_handler_3;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto try_except_handler_3;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_20 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto try_except_handler_3;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_20;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_2 = tmp_class_creation_1__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_2, mod_consts[30]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto try_except_handler_3;
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
        PyObject *tmp_assign_source_21;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_3 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[30]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto try_except_handler_3;
        }
        tmp_tuple_element_2 = mod_consts[31];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_07faf9c966de872b429b78a374b78758->m_frame.f_lineno = 19;
        tmp_assign_source_21 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto try_except_handler_3;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_21;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_4 = tmp_class_creation_1__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_4, mod_consts[32]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto try_except_handler_3;
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
        PyObject *tmp_expression_value_5;
        PyObject *tmp_name_value_7;
        PyObject *tmp_default_value_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[33];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_5 = tmp_class_creation_1__metaclass;
        tmp_name_value_7 = mod_consts[34];
        tmp_default_value_1 = mod_consts[35];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_5, tmp_name_value_7, tmp_default_value_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto try_except_handler_3;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_6;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_value_6 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_6 == NULL));
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[34]);
            Py_DECREF(tmp_expression_value_6);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 19;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_3;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_raise_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto try_except_handler_3;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 19;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_3;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_22;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_23;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_pytiled_parser$tileset$$$class__1_Grid_19 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[36];
        tmp_res = PyObject_SetItem(locals_pytiled_parser$tileset$$$class__1_Grid_19, mod_consts[37], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto try_except_handler_5;
        }
        tmp_dictset_value = mod_consts[38];
        tmp_res = PyObject_SetItem(locals_pytiled_parser$tileset$$$class__1_Grid_19, mod_consts[1], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto try_except_handler_5;
        }
        tmp_dictset_value = mod_consts[31];
        tmp_res = PyObject_SetItem(locals_pytiled_parser$tileset$$$class__1_Grid_19, mod_consts[39], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto try_except_handler_5;
        }
        tmp_dictset_value = MAKE_DICT_EMPTY();
        tmp_res = PyObject_SetItem(locals_pytiled_parser$tileset$$$class__1_Grid_19, mod_consts[40], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto try_except_handler_5;
        }
        frame_23973e21f7e150732309ebdd2fe143cb_2 = MAKE_CLASS_FRAME(tstate, codeobj_23973e21f7e150732309ebdd2fe143cb, module_pytiled_parser$tileset, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_23973e21f7e150732309ebdd2fe143cb_2);
        assert(Py_REFCNT(frame_23973e21f7e150732309ebdd2fe143cb_2) == 2);

        // Framed code:
        {
            PyObject *tmp_ass_subvalue_1;
            PyObject *tmp_ass_subscribed_1;
            PyObject *tmp_ass_subscript_1;
            tmp_ass_subvalue_1 = PyObject_GetItem(locals_pytiled_parser$tileset$$$class__1_Grid_19, mod_consts[41]);

            if (tmp_ass_subvalue_1 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_ass_subvalue_1 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_ass_subvalue_1);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_ass_subscribed_1 = PyObject_GetItem(locals_pytiled_parser$tileset$$$class__1_Grid_19, mod_consts[40]);

            if (unlikely(tmp_ass_subscribed_1 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
                Py_DECREF(tmp_ass_subvalue_1);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[40]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 36;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_1);

                exception_lineno = 36;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_1 = mod_consts[42];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
            Py_DECREF(tmp_ass_subscribed_1);
            Py_DECREF(tmp_ass_subvalue_1);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 36;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_2;
            PyObject *tmp_ass_subscribed_2;
            PyObject *tmp_ass_subscript_2;
            tmp_ass_subvalue_2 = PyObject_GetItem(locals_pytiled_parser$tileset$$$class__1_Grid_19, mod_consts[43]);

            if (tmp_ass_subvalue_2 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_ass_subvalue_2 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_ass_subvalue_2);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_ass_subscribed_2 = PyObject_GetItem(locals_pytiled_parser$tileset$$$class__1_Grid_19, mod_consts[40]);

            if (unlikely(tmp_ass_subscribed_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
                Py_DECREF(tmp_ass_subvalue_2);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[40]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 37;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_2);

                exception_lineno = 37;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_2 = mod_consts[44];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
            Py_DECREF(tmp_ass_subscribed_2);
            Py_DECREF(tmp_ass_subvalue_2);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 37;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_3;
            PyObject *tmp_ass_subscribed_3;
            PyObject *tmp_ass_subscript_3;
            tmp_ass_subvalue_3 = PyObject_GetItem(locals_pytiled_parser$tileset$$$class__1_Grid_19, mod_consts[43]);

            if (tmp_ass_subvalue_3 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_ass_subvalue_3 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_ass_subvalue_3);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_ass_subscribed_3 = PyObject_GetItem(locals_pytiled_parser$tileset$$$class__1_Grid_19, mod_consts[40]);

            if (unlikely(tmp_ass_subscribed_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
                Py_DECREF(tmp_ass_subvalue_3);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[40]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 38;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_3);

                exception_lineno = 38;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_3 = mod_consts[45];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
            Py_DECREF(tmp_ass_subscribed_3);
            Py_DECREF(tmp_ass_subvalue_3);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_23973e21f7e150732309ebdd2fe143cb_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_23973e21f7e150732309ebdd2fe143cb_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_23973e21f7e150732309ebdd2fe143cb_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_23973e21f7e150732309ebdd2fe143cb_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_23973e21f7e150732309ebdd2fe143cb_2);

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


                exception_lineno = 19;

                goto try_except_handler_5;
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
        tmp_res = PyObject_SetItem(locals_pytiled_parser$tileset$$$class__1_Grid_19, mod_consts[46], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto try_except_handler_5;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_24;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_4 = mod_consts[31];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_4 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = locals_pytiled_parser$tileset$$$class__1_Grid_19;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_07faf9c966de872b429b78a374b78758->m_frame.f_lineno = 19;
            tmp_assign_source_24 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_24 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 19;

                goto try_except_handler_5;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_24;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_23 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_23);
        goto try_return_handler_5;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        Py_DECREF(locals_pytiled_parser$tileset$$$class__1_Grid_19);
        locals_pytiled_parser$tileset$$$class__1_Grid_19 = NULL;
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

        Py_DECREF(locals_pytiled_parser$tileset$$$class__1_Grid_19);
        locals_pytiled_parser$tileset$$$class__1_Grid_19 = NULL;
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
        exception_lineno = 19;
        goto try_except_handler_3;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_pytiled_parser$tileset, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_23);
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
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
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
        PyObject *tmp_assign_source_25;
        PyObject *tmp_tuple_element_5;
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$tileset, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_tuple_element_5 == NULL)) {
            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_tuple_element_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto try_except_handler_6;
        }
        tmp_assign_source_25 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_25, 0, tmp_tuple_element_5);
        assert(tmp_class_creation_2__bases_orig == NULL);
        tmp_class_creation_2__bases_orig = tmp_assign_source_25;
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dircall_arg1_2 = tmp_class_creation_2__bases_orig;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_26 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto try_except_handler_6;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_26;
    }
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_27;
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_metaclass_value_2;
        nuitka_bool tmp_condition_result_5;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_bases_value_2;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
        if (tmp_truth_name_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto try_except_handler_6;
        }
        tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_expression_value_7 = tmp_class_creation_2__bases;
        tmp_subscript_value_2 = mod_consts[9];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_7, tmp_subscript_value_2, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto try_except_handler_6;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto try_except_handler_6;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_2);
        condexpr_end_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_value_2 = tmp_class_creation_2__bases;
        tmp_assign_source_28 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
        Py_DECREF(tmp_metaclass_value_2);
        if (tmp_assign_source_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto try_except_handler_6;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_28;
    }
    {
        bool tmp_condition_result_6;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_8 = tmp_class_creation_2__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_8, mod_consts[30]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto try_except_handler_6;
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
        PyObject *tmp_assign_source_29;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_9 = tmp_class_creation_2__metaclass;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[30]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto try_except_handler_6;
        }
        tmp_tuple_element_6 = mod_consts[47];
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_6);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_6 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_6);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
        frame_07faf9c966de872b429b78a374b78758->m_frame.f_lineno = 41;
        tmp_assign_source_29 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_value_3);
        if (tmp_assign_source_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto try_except_handler_6;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_29;
    }
    {
        bool tmp_condition_result_7;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_10;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_10 = tmp_class_creation_2__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_10, mod_consts[32]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto try_except_handler_6;
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
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_name_value_8;
        PyObject *tmp_default_value_2;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_mod_expr_left_2 = mod_consts[33];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_11 = tmp_class_creation_2__metaclass;
        tmp_name_value_8 = mod_consts[34];
        tmp_default_value_2 = mod_consts[35];
        tmp_tuple_element_7 = BUILTIN_GETATTR(tstate, tmp_expression_value_11, tmp_name_value_8, tmp_default_value_2);
        if (tmp_tuple_element_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto try_except_handler_6;
        }
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_12;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_7);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_4 = tmp_class_creation_2__prepared;
            tmp_expression_value_12 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_value_12 == NULL));
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[34]);
            Py_DECREF(tmp_expression_value_12);
            if (tmp_tuple_element_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 41;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_7);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_mod_expr_right_2);
        goto try_except_handler_6;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_raise_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto try_except_handler_6;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 41;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_6;
    }
    branch_no_5:;
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_30;
    }
    branch_end_4:;
    {
        PyObject *tmp_assign_source_31;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_pytiled_parser$tileset$$$class__2_Frame_41 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[36];
        tmp_res = PyObject_SetItem(locals_pytiled_parser$tileset$$$class__2_Frame_41, mod_consts[37], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto try_except_handler_8;
        }
        tmp_dictset_value = mod_consts[48];
        tmp_res = PyObject_SetItem(locals_pytiled_parser$tileset$$$class__2_Frame_41, mod_consts[1], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto try_except_handler_8;
        }
        tmp_dictset_value = mod_consts[47];
        tmp_res = PyObject_SetItem(locals_pytiled_parser$tileset$$$class__2_Frame_41, mod_consts[39], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto try_except_handler_8;
        }
        tmp_dictset_value = MAKE_DICT_EMPTY();
        tmp_res = PyObject_SetItem(locals_pytiled_parser$tileset$$$class__2_Frame_41, mod_consts[40], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto try_except_handler_8;
        }
        frame_3113acb876ae91a4e17508c1881eba17_3 = MAKE_CLASS_FRAME(tstate, codeobj_3113acb876ae91a4e17508c1881eba17, module_pytiled_parser$tileset, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_3113acb876ae91a4e17508c1881eba17_3);
        assert(Py_REFCNT(frame_3113acb876ae91a4e17508c1881eba17_3) == 2);

        // Framed code:
        {
            PyObject *tmp_ass_subvalue_4;
            PyObject *tmp_ass_subscribed_4;
            PyObject *tmp_ass_subscript_4;
            tmp_ass_subvalue_4 = PyObject_GetItem(locals_pytiled_parser$tileset$$$class__2_Frame_41, mod_consts[43]);

            if (tmp_ass_subvalue_4 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_ass_subvalue_4 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_ass_subvalue_4);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_ass_subscribed_4 = PyObject_GetItem(locals_pytiled_parser$tileset$$$class__2_Frame_41, mod_consts[40]);

            if (unlikely(tmp_ass_subscribed_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
                Py_DECREF(tmp_ass_subvalue_4);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[40]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 58;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_ass_subscribed_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_4);

                exception_lineno = 58;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_ass_subscript_4 = mod_consts[49];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
            Py_DECREF(tmp_ass_subscribed_4);
            Py_DECREF(tmp_ass_subvalue_4);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 58;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_ass_subvalue_5;
            PyObject *tmp_ass_subscribed_5;
            PyObject *tmp_ass_subscript_5;
            tmp_ass_subvalue_5 = PyObject_GetItem(locals_pytiled_parser$tileset$$$class__2_Frame_41, mod_consts[43]);

            if (tmp_ass_subvalue_5 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_ass_subvalue_5 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_ass_subvalue_5);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_ass_subscribed_5 = PyObject_GetItem(locals_pytiled_parser$tileset$$$class__2_Frame_41, mod_consts[40]);

            if (unlikely(tmp_ass_subscribed_5 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
                Py_DECREF(tmp_ass_subvalue_5);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[40]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 59;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_ass_subscribed_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_5);

                exception_lineno = 59;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_ass_subscript_5 = mod_consts[50];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5);
            Py_DECREF(tmp_ass_subscribed_5);
            Py_DECREF(tmp_ass_subvalue_5);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 59;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_3113acb876ae91a4e17508c1881eba17_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_3113acb876ae91a4e17508c1881eba17_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_3113acb876ae91a4e17508c1881eba17_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_3113acb876ae91a4e17508c1881eba17_3,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_3113acb876ae91a4e17508c1881eba17_3);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_8;
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


                exception_lineno = 41;

                goto try_except_handler_8;
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
        tmp_res = PyObject_SetItem(locals_pytiled_parser$tileset$$$class__2_Frame_41, mod_consts[46], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto try_except_handler_8;
        }
        branch_no_6:;
        {
            PyObject *tmp_assign_source_32;
            PyObject *tmp_called_value_4;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_kwargs_value_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_4 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_8 = mod_consts[47];
            tmp_args_value_4 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_8);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_8 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_8);
            tmp_tuple_element_8 = locals_pytiled_parser$tileset$$$class__2_Frame_41;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_8);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_2__class_decl_dict;
            frame_07faf9c966de872b429b78a374b78758->m_frame.f_lineno = 41;
            tmp_assign_source_32 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_32 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 41;

                goto try_except_handler_8;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_32;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_31 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_31);
        goto try_return_handler_8;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        Py_DECREF(locals_pytiled_parser$tileset$$$class__2_Frame_41);
        locals_pytiled_parser$tileset$$$class__2_Frame_41 = NULL;
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

        Py_DECREF(locals_pytiled_parser$tileset$$$class__2_Frame_41);
        locals_pytiled_parser$tileset$$$class__2_Frame_41 = NULL;
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
        exception_lineno = 41;
        goto try_except_handler_6;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_pytiled_parser$tileset, (Nuitka_StringObject *)mod_consts[47], tmp_assign_source_31);
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
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
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
    {
        PyObject *tmp_assign_source_33;
        tmp_assign_source_33 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_33;
    }
    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_34;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_called_value_5;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_args_element_value_1;
        tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$tileset, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_13 == NULL)) {
            tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto try_except_handler_9;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[51]);
        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto try_except_handler_9;
        }
        frame_07faf9c966de872b429b78a374b78758->m_frame.f_lineno = 62;
        tmp_called_value_5 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_6, &PyTuple_GET_ITEM(mod_consts[52], 0), mod_consts[53]);
        Py_DECREF(tmp_called_value_6);
        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto try_except_handler_9;
        }
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_pytiled_parser$tileset$$$class__3_Transformations_63 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        tmp_dictset_value = mod_consts[36];
        tmp_res = PyDict_SetItem(locals_pytiled_parser$tileset$$$class__3_Transformations_63, mod_consts[37], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[54];
        tmp_res = PyDict_SetItem(locals_pytiled_parser$tileset$$$class__3_Transformations_63, mod_consts[1], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[55];
        tmp_res = PyDict_SetItem(locals_pytiled_parser$tileset$$$class__3_Transformations_63, mod_consts[39], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = MAKE_DICT_EMPTY();
        tmp_res = PyDict_SetItem(locals_pytiled_parser$tileset$$$class__3_Transformations_63, mod_consts[40], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = Py_False;
        tmp_res = PyDict_SetItem(locals_pytiled_parser$tileset$$$class__3_Transformations_63, mod_consts[56], tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        frame_4678728fe0a20e92011e2070d3de824d_4 = MAKE_CLASS_FRAME(tstate, codeobj_4678728fe0a20e92011e2070d3de824d, module_pytiled_parser$tileset, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_4678728fe0a20e92011e2070d3de824d_4);
        assert(Py_REFCNT(frame_4678728fe0a20e92011e2070d3de824d_4) == 2);

        // Framed code:
        {
            PyObject *tmp_ass_subvalue_6;
            PyObject *tmp_ass_subscribed_6;
            PyObject *tmp_ass_subscript_6;
            tmp_ass_subvalue_6 = (PyObject *)&PyBool_Type;
            tmp_ass_subscribed_6 = DICT_GET_ITEM0(tstate, locals_pytiled_parser$tileset$$$class__3_Transformations_63, mod_consts[40]);

            if (unlikely(tmp_ass_subscribed_6 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[40]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 82;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if (tmp_ass_subscribed_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 82;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_ass_subscript_6 = mod_consts[56];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 82;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        tmp_dictset_value = Py_False;
        tmp_res = PyDict_SetItem(locals_pytiled_parser$tileset$$$class__3_Transformations_63, mod_consts[57], tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_ass_subvalue_7;
            PyObject *tmp_ass_subscribed_7;
            PyObject *tmp_ass_subscript_7;
            tmp_ass_subvalue_7 = (PyObject *)&PyBool_Type;
            tmp_ass_subscribed_7 = DICT_GET_ITEM0(tstate, locals_pytiled_parser$tileset$$$class__3_Transformations_63, mod_consts[40]);

            if (unlikely(tmp_ass_subscribed_7 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[40]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 83;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if (tmp_ass_subscribed_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 83;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_ass_subscript_7 = mod_consts[57];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_7, tmp_ass_subscript_7, tmp_ass_subvalue_7);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 83;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        tmp_dictset_value = Py_False;
        tmp_res = PyDict_SetItem(locals_pytiled_parser$tileset$$$class__3_Transformations_63, mod_consts[58], tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_ass_subvalue_8;
            PyObject *tmp_ass_subscribed_8;
            PyObject *tmp_ass_subscript_8;
            tmp_ass_subvalue_8 = (PyObject *)&PyBool_Type;
            tmp_ass_subscribed_8 = DICT_GET_ITEM0(tstate, locals_pytiled_parser$tileset$$$class__3_Transformations_63, mod_consts[40]);

            if (unlikely(tmp_ass_subscribed_8 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[40]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 84;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if (tmp_ass_subscribed_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 84;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_ass_subscript_8 = mod_consts[58];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_8, tmp_ass_subscript_8, tmp_ass_subvalue_8);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 84;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        tmp_dictset_value = Py_False;
        tmp_res = PyDict_SetItem(locals_pytiled_parser$tileset$$$class__3_Transformations_63, mod_consts[59], tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_ass_subvalue_9;
            PyObject *tmp_ass_subscribed_9;
            PyObject *tmp_ass_subscript_9;
            tmp_ass_subvalue_9 = (PyObject *)&PyBool_Type;
            tmp_ass_subscribed_9 = DICT_GET_ITEM0(tstate, locals_pytiled_parser$tileset$$$class__3_Transformations_63, mod_consts[40]);

            if (unlikely(tmp_ass_subscribed_9 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[40]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 85;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if (tmp_ass_subscribed_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 85;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_ass_subscript_9 = mod_consts[59];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_9, tmp_ass_subscript_9, tmp_ass_subvalue_9);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 85;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_3;
        frame_exception_exit_4:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_4678728fe0a20e92011e2070d3de824d_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_4678728fe0a20e92011e2070d3de824d_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_4678728fe0a20e92011e2070d3de824d_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_4678728fe0a20e92011e2070d3de824d_4,
            type_description_2,
            outline_2_var___class__
        );



        assertFrameObject(frame_4678728fe0a20e92011e2070d3de824d_4);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_3;
        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;

        goto try_except_handler_11;
        skip_nested_handling_3:;
        {
            PyObject *tmp_assign_source_36;
            PyObject *tmp_called_value_7;
            PyObject *tmp_args_value_5;
            PyObject *tmp_tuple_element_9;
            PyObject *tmp_kwargs_value_5;
            tmp_called_value_7 = (PyObject *)&PyType_Type;
            tmp_tuple_element_9 = mod_consts[55];
            tmp_args_value_5 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_9);
            tmp_tuple_element_9 = mod_consts[60];
            PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_9);
            tmp_tuple_element_9 = locals_pytiled_parser$tileset$$$class__3_Transformations_63;
            PyTuple_SET_ITEM0(tmp_args_value_5, 2, tmp_tuple_element_9);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_value_5 = tmp_class_creation_3__class_decl_dict;
            frame_07faf9c966de872b429b78a374b78758->m_frame.f_lineno = 63;
            tmp_assign_source_36 = CALL_FUNCTION(tstate, tmp_called_value_7, tmp_args_value_5, tmp_kwargs_value_5);
            Py_DECREF(tmp_args_value_5);
            if (tmp_assign_source_36 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;

                goto try_except_handler_11;
            }
            assert(outline_2_var___class__ == NULL);
            outline_2_var___class__ = tmp_assign_source_36;
        }
        CHECK_OBJECT(outline_2_var___class__);
        tmp_args_element_value_1 = outline_2_var___class__;
        Py_INCREF(tmp_args_element_value_1);
        goto try_return_handler_11;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_11:;
        Py_DECREF(locals_pytiled_parser$tileset$$$class__3_Transformations_63);
        locals_pytiled_parser$tileset$$$class__3_Transformations_63 = NULL;
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

        Py_DECREF(locals_pytiled_parser$tileset$$$class__3_Transformations_63);
        locals_pytiled_parser$tileset$$$class__3_Transformations_63 = NULL;
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
        exception_lineno = 63;
        goto try_except_handler_9;
        outline_result_3:;
        frame_07faf9c966de872b429b78a374b78758->m_frame.f_lineno = 62;
        tmp_assign_source_35 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto try_except_handler_9;
        }
        UPDATE_STRING_DICT1(moduledict_pytiled_parser$tileset, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_35);
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
        PyObject *tmp_called_value_8;
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_args_element_value_2;
        tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$tileset, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_14 == NULL)) {
            tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto try_except_handler_12;
        }
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[51]);
        if (tmp_called_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto try_except_handler_12;
        }
        frame_07faf9c966de872b429b78a374b78758->m_frame.f_lineno = 88;
        tmp_called_value_8 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_9, &PyTuple_GET_ITEM(mod_consts[52], 0), mod_consts[53]);
        Py_DECREF(tmp_called_value_9);
        if (tmp_called_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto try_except_handler_12;
        }
        {
            PyObject *tmp_set_locals_4;
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_set_locals_4 = tmp_class_creation_4__prepared;
            locals_pytiled_parser$tileset$$$class__4_Tile_89 = tmp_set_locals_4;
            Py_INCREF(tmp_set_locals_4);
        }
        tmp_dictset_value = mod_consts[36];
        tmp_res = PyDict_SetItem(locals_pytiled_parser$tileset$$$class__4_Tile_89, mod_consts[37], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[61];
        tmp_res = PyDict_SetItem(locals_pytiled_parser$tileset$$$class__4_Tile_89, mod_consts[1], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[62];
        tmp_res = PyDict_SetItem(locals_pytiled_parser$tileset$$$class__4_Tile_89, mod_consts[39], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = MAKE_DICT_EMPTY();
        tmp_res = PyDict_SetItem(locals_pytiled_parser$tileset$$$class__4_Tile_89, mod_consts[40], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        frame_72afbe295dfc848f3bf39f7e7c324da7_5 = MAKE_CLASS_FRAME(tstate, codeobj_72afbe295dfc848f3bf39f7e7c324da7, module_pytiled_parser$tileset, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_72afbe295dfc848f3bf39f7e7c324da7_5);
        assert(Py_REFCNT(frame_72afbe295dfc848f3bf39f7e7c324da7_5) == 2);

        // Framed code:
        {
            PyObject *tmp_ass_subvalue_10;
            PyObject *tmp_ass_subscribed_10;
            PyObject *tmp_ass_subscript_10;
            tmp_ass_subvalue_10 = (PyObject *)&PyLong_Type;
            tmp_ass_subscribed_10 = DICT_GET_ITEM0(tstate, locals_pytiled_parser$tileset$$$class__4_Tile_89, mod_consts[40]);

            if (unlikely(tmp_ass_subscribed_10 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[40]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 120;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }

            if (tmp_ass_subscribed_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 120;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_ass_subscript_10 = mod_consts[63];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_10, tmp_ass_subscript_10, tmp_ass_subvalue_10);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 120;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        tmp_dictset_value = mod_consts[18];
        tmp_res = PyDict_SetItem(locals_pytiled_parser$tileset$$$class__4_Tile_89, mod_consts[64], tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_ass_subvalue_11;
            PyObject *tmp_ass_subscribed_11;
            PyObject *tmp_ass_subscript_11;
            tmp_ass_subvalue_11 = (PyObject *)&PyLong_Type;
            tmp_ass_subscribed_11 = DICT_GET_ITEM0(tstate, locals_pytiled_parser$tileset$$$class__4_Tile_89, mod_consts[40]);

            if (unlikely(tmp_ass_subscribed_11 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[40]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 121;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }

            if (tmp_ass_subscribed_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 121;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_ass_subscript_11 = mod_consts[64];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_11, tmp_ass_subscript_11, tmp_ass_subvalue_11);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 121;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        tmp_dictset_value = mod_consts[9];
        tmp_res = PyDict_SetItem(locals_pytiled_parser$tileset$$$class__4_Tile_89, mod_consts[65], tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_ass_subvalue_12;
            PyObject *tmp_ass_subscribed_12;
            PyObject *tmp_ass_subscript_12;
            tmp_ass_subvalue_12 = (PyObject *)&PyLong_Type;
            tmp_ass_subscribed_12 = DICT_GET_ITEM0(tstate, locals_pytiled_parser$tileset$$$class__4_Tile_89, mod_consts[40]);

            if (unlikely(tmp_ass_subscribed_12 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[40]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 122;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }

            if (tmp_ass_subscribed_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 122;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_ass_subscript_12 = mod_consts[65];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_12, tmp_ass_subscript_12, tmp_ass_subvalue_12);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 122;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        tmp_dictset_value = mod_consts[9];
        tmp_res = PyDict_SetItem(locals_pytiled_parser$tileset$$$class__4_Tile_89, mod_consts[66], tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_ass_subvalue_13;
            PyObject *tmp_ass_subscribed_13;
            PyObject *tmp_ass_subscript_13;
            tmp_ass_subvalue_13 = (PyObject *)&PyLong_Type;
            tmp_ass_subscribed_13 = DICT_GET_ITEM0(tstate, locals_pytiled_parser$tileset$$$class__4_Tile_89, mod_consts[40]);

            if (unlikely(tmp_ass_subscribed_13 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[40]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 123;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }

            if (tmp_ass_subscribed_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 123;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_ass_subscript_13 = mod_consts[66];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_13, tmp_ass_subscript_13, tmp_ass_subvalue_13);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 123;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        tmp_dictset_value = Py_None;
        tmp_res = PyDict_SetItem(locals_pytiled_parser$tileset$$$class__4_Tile_89, mod_consts[44], tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_ass_subvalue_14;
            PyObject *tmp_expression_value_15;
            PyObject *tmp_subscript_value_3;
            PyObject *tmp_ass_subscribed_14;
            PyObject *tmp_ass_subscript_14;
            tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$tileset, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_15 == NULL)) {
                tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 124;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_subscript_value_3 = (PyObject *)&PyLong_Type;
            tmp_ass_subvalue_14 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_15, tmp_subscript_value_3);
            if (tmp_ass_subvalue_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 124;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_ass_subscribed_14 = DICT_GET_ITEM0(tstate, locals_pytiled_parser$tileset$$$class__4_Tile_89, mod_consts[40]);

            if (unlikely(tmp_ass_subscribed_14 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
                Py_DECREF(tmp_ass_subvalue_14);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[40]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 124;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }

            if (tmp_ass_subscribed_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_14);

                exception_lineno = 124;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_ass_subscript_14 = mod_consts[44];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_14, tmp_ass_subscript_14, tmp_ass_subvalue_14);
            Py_DECREF(tmp_ass_subvalue_14);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 124;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        tmp_dictset_value = Py_None;
        tmp_res = PyDict_SetItem(locals_pytiled_parser$tileset$$$class__4_Tile_89, mod_consts[45], tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_ass_subvalue_15;
            PyObject *tmp_expression_value_16;
            PyObject *tmp_subscript_value_4;
            PyObject *tmp_ass_subscribed_15;
            PyObject *tmp_ass_subscript_15;
            tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$tileset, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_16 == NULL)) {
                tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 125;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_subscript_value_4 = (PyObject *)&PyLong_Type;
            tmp_ass_subvalue_15 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_16, tmp_subscript_value_4);
            if (tmp_ass_subvalue_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 125;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_ass_subscribed_15 = DICT_GET_ITEM0(tstate, locals_pytiled_parser$tileset$$$class__4_Tile_89, mod_consts[40]);

            if (unlikely(tmp_ass_subscribed_15 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
                Py_DECREF(tmp_ass_subvalue_15);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[40]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 125;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }

            if (tmp_ass_subscribed_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_15);

                exception_lineno = 125;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_ass_subscript_15 = mod_consts[45];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_15, tmp_ass_subscript_15, tmp_ass_subvalue_15);
            Py_DECREF(tmp_ass_subvalue_15);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 125;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        tmp_dictset_value = Py_None;
        tmp_res = PyDict_SetItem(locals_pytiled_parser$tileset$$$class__4_Tile_89, mod_consts[67], tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_ass_subvalue_16;
            PyObject *tmp_expression_value_17;
            PyObject *tmp_subscript_value_5;
            PyObject *tmp_ass_subscribed_16;
            PyObject *tmp_ass_subscript_16;
            tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$tileset, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_17 == NULL)) {
                tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 126;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_subscript_value_5 = (PyObject *)&PyUnicode_Type;
            tmp_ass_subvalue_16 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_17, tmp_subscript_value_5);
            if (tmp_ass_subvalue_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 126;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_ass_subscribed_16 = DICT_GET_ITEM0(tstate, locals_pytiled_parser$tileset$$$class__4_Tile_89, mod_consts[40]);

            if (unlikely(tmp_ass_subscribed_16 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
                Py_DECREF(tmp_ass_subvalue_16);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[40]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 126;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }

            if (tmp_ass_subscribed_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_16);

                exception_lineno = 126;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_ass_subscript_16 = mod_consts[67];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_16, tmp_ass_subscript_16, tmp_ass_subvalue_16);
            Py_DECREF(tmp_ass_subvalue_16);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 126;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        tmp_dictset_value = Py_None;
        tmp_res = PyDict_SetItem(locals_pytiled_parser$tileset$$$class__4_Tile_89, mod_consts[68], tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_ass_subvalue_17;
            PyObject *tmp_expression_value_18;
            PyObject *tmp_subscript_value_6;
            PyObject *tmp_expression_value_19;
            PyObject *tmp_subscript_value_7;
            PyObject *tmp_ass_subscribed_17;
            PyObject *tmp_ass_subscript_17;
            tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$tileset, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_18 == NULL)) {
                tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 127;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$tileset, (Nuitka_StringObject *)mod_consts[12]);

            if (unlikely(tmp_expression_value_19 == NULL)) {
                tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
            }

            if (tmp_expression_value_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 127;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_subscript_value_7 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$tileset, (Nuitka_StringObject *)mod_consts[47]);

            if (unlikely(tmp_subscript_value_7 == NULL)) {
                tmp_subscript_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[47]);
            }

            if (tmp_subscript_value_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 127;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_subscript_value_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_19, tmp_subscript_value_7);
            if (tmp_subscript_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 127;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_ass_subvalue_17 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_18, tmp_subscript_value_6);
            Py_DECREF(tmp_subscript_value_6);
            if (tmp_ass_subvalue_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 127;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_ass_subscribed_17 = DICT_GET_ITEM0(tstate, locals_pytiled_parser$tileset$$$class__4_Tile_89, mod_consts[40]);

            if (unlikely(tmp_ass_subscribed_17 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
                Py_DECREF(tmp_ass_subvalue_17);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[40]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 127;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }

            if (tmp_ass_subscribed_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_17);

                exception_lineno = 127;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_ass_subscript_17 = mod_consts[68];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_17, tmp_ass_subscript_17, tmp_ass_subvalue_17);
            Py_DECREF(tmp_ass_subvalue_17);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 127;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        tmp_dictset_value = Py_None;
        tmp_res = PyDict_SetItem(locals_pytiled_parser$tileset$$$class__4_Tile_89, mod_consts[69], tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_ass_subvalue_18;
            PyObject *tmp_expression_value_20;
            PyObject *tmp_subscript_value_8;
            PyObject *tmp_expression_value_21;
            PyObject *tmp_ass_subscribed_18;
            PyObject *tmp_ass_subscript_18;
            tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$tileset, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_20 == NULL)) {
                tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_20 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 128;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$tileset, (Nuitka_StringObject *)mod_consts[19]);

            if (unlikely(tmp_expression_value_21 == NULL)) {
                tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
            }

            if (tmp_expression_value_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 128;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_subscript_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts[70]);
            if (tmp_subscript_value_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 128;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_ass_subvalue_18 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_20, tmp_subscript_value_8);
            Py_DECREF(tmp_subscript_value_8);
            if (tmp_ass_subvalue_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 128;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_ass_subscribed_18 = DICT_GET_ITEM0(tstate, locals_pytiled_parser$tileset$$$class__4_Tile_89, mod_consts[40]);

            if (unlikely(tmp_ass_subscribed_18 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
                Py_DECREF(tmp_ass_subvalue_18);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[40]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 128;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }

            if (tmp_ass_subscribed_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_18);

                exception_lineno = 128;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_ass_subscript_18 = mod_consts[69];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_18, tmp_ass_subscript_18, tmp_ass_subvalue_18);
            Py_DECREF(tmp_ass_subvalue_18);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 128;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        tmp_dictset_value = Py_None;
        tmp_res = PyDict_SetItem(locals_pytiled_parser$tileset$$$class__4_Tile_89, mod_consts[71], tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_ass_subvalue_19;
            PyObject *tmp_expression_value_22;
            PyObject *tmp_subscript_value_9;
            PyObject *tmp_ass_subscribed_19;
            PyObject *tmp_ass_subscript_19;
            tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$tileset, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_22 == NULL)) {
                tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_22 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 129;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_subscript_value_9 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$tileset, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_subscript_value_9 == NULL)) {
                tmp_subscript_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
            }

            if (tmp_subscript_value_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 129;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_ass_subvalue_19 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_22, tmp_subscript_value_9);
            if (tmp_ass_subvalue_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 129;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_ass_subscribed_19 = DICT_GET_ITEM0(tstate, locals_pytiled_parser$tileset$$$class__4_Tile_89, mod_consts[40]);

            if (unlikely(tmp_ass_subscribed_19 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
                Py_DECREF(tmp_ass_subvalue_19);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[40]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 129;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }

            if (tmp_ass_subscribed_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_19);

                exception_lineno = 129;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_ass_subscript_19 = mod_consts[71];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_19, tmp_ass_subscript_19, tmp_ass_subvalue_19);
            Py_DECREF(tmp_ass_subvalue_19);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 129;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        tmp_dictset_value = Py_None;
        tmp_res = PyDict_SetItem(locals_pytiled_parser$tileset$$$class__4_Tile_89, mod_consts[72], tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_ass_subvalue_20;
            PyObject *tmp_expression_value_23;
            PyObject *tmp_subscript_value_10;
            PyObject *tmp_ass_subscribed_20;
            PyObject *tmp_ass_subscript_20;
            tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$tileset, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_23 == NULL)) {
                tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_23 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 130;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_subscript_value_10 = (PyObject *)&PyLong_Type;
            tmp_ass_subvalue_20 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_23, tmp_subscript_value_10);
            if (tmp_ass_subvalue_20 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 130;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_ass_subscribed_20 = DICT_GET_ITEM0(tstate, locals_pytiled_parser$tileset$$$class__4_Tile_89, mod_consts[40]);

            if (unlikely(tmp_ass_subscribed_20 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
                Py_DECREF(tmp_ass_subvalue_20);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[40]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 130;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }

            if (tmp_ass_subscribed_20 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_20);

                exception_lineno = 130;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_ass_subscript_20 = mod_consts[72];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_20, tmp_ass_subscript_20, tmp_ass_subvalue_20);
            Py_DECREF(tmp_ass_subvalue_20);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 130;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        tmp_dictset_value = Py_None;
        tmp_res = PyDict_SetItem(locals_pytiled_parser$tileset$$$class__4_Tile_89, mod_consts[73], tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_ass_subvalue_21;
            PyObject *tmp_expression_value_24;
            PyObject *tmp_subscript_value_11;
            PyObject *tmp_ass_subscribed_21;
            PyObject *tmp_ass_subscript_21;
            tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$tileset, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_24 == NULL)) {
                tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_24 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 131;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_subscript_value_11 = (PyObject *)&PyLong_Type;
            tmp_ass_subvalue_21 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_24, tmp_subscript_value_11);
            if (tmp_ass_subvalue_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 131;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_ass_subscribed_21 = DICT_GET_ITEM0(tstate, locals_pytiled_parser$tileset$$$class__4_Tile_89, mod_consts[40]);

            if (unlikely(tmp_ass_subscribed_21 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
                Py_DECREF(tmp_ass_subvalue_21);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[40]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 131;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }

            if (tmp_ass_subscribed_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_21);

                exception_lineno = 131;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_ass_subscript_21 = mod_consts[73];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_21, tmp_ass_subscript_21, tmp_ass_subvalue_21);
            Py_DECREF(tmp_ass_subvalue_21);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 131;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        tmp_dictset_value = Py_None;
        tmp_res = PyDict_SetItem(locals_pytiled_parser$tileset$$$class__4_Tile_89, mod_consts[21], tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_ass_subvalue_22;
            PyObject *tmp_expression_value_25;
            PyObject *tmp_subscript_value_12;
            PyObject *tmp_expression_value_26;
            PyObject *tmp_ass_subscribed_22;
            PyObject *tmp_ass_subscript_22;
            tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$tileset, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_25 == NULL)) {
                tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_25 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 132;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$tileset, (Nuitka_StringObject *)mod_consts[22]);

            if (unlikely(tmp_expression_value_26 == NULL)) {
                tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
            }

            if (tmp_expression_value_26 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 132;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_subscript_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts[74]);
            if (tmp_subscript_value_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 132;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_ass_subvalue_22 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_25, tmp_subscript_value_12);
            Py_DECREF(tmp_subscript_value_12);
            if (tmp_ass_subvalue_22 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 132;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_ass_subscribed_22 = DICT_GET_ITEM0(tstate, locals_pytiled_parser$tileset$$$class__4_Tile_89, mod_consts[40]);

            if (unlikely(tmp_ass_subscribed_22 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
                Py_DECREF(tmp_ass_subvalue_22);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[40]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 132;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }

            if (tmp_ass_subscribed_22 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_22);

                exception_lineno = 132;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_ass_subscript_22 = mod_consts[21];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_22, tmp_ass_subscript_22, tmp_ass_subvalue_22);
            Py_DECREF(tmp_ass_subvalue_22);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 132;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        tmp_dictset_value = Py_None;
        tmp_res = PyDict_SetItem(locals_pytiled_parser$tileset$$$class__4_Tile_89, mod_consts[75], tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_ass_subvalue_23;
            PyObject *tmp_expression_value_27;
            PyObject *tmp_subscript_value_13;
            PyObject *tmp_ass_subscribed_23;
            PyObject *tmp_ass_subscript_23;
            tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$tileset, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_27 == NULL)) {
                tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_27 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 133;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_subscript_value_13 = mod_consts[76];
            tmp_ass_subvalue_23 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_27, tmp_subscript_value_13);
            if (tmp_ass_subvalue_23 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 133;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_ass_subscribed_23 = DICT_GET_ITEM0(tstate, locals_pytiled_parser$tileset$$$class__4_Tile_89, mod_consts[40]);

            if (unlikely(tmp_ass_subscribed_23 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
                Py_DECREF(tmp_ass_subvalue_23);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[40]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 133;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }

            if (tmp_ass_subscribed_23 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_23);

                exception_lineno = 133;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_ass_subscript_23 = mod_consts[75];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_23, tmp_ass_subscript_23, tmp_ass_subvalue_23);
            Py_DECREF(tmp_ass_subvalue_23);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 133;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        tmp_dictset_value = Py_False;
        tmp_res = PyDict_SetItem(locals_pytiled_parser$tileset$$$class__4_Tile_89, mod_consts[77], tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_ass_subvalue_24;
            PyObject *tmp_ass_subscribed_24;
            PyObject *tmp_ass_subscript_24;
            tmp_ass_subvalue_24 = (PyObject *)&PyBool_Type;
            tmp_ass_subscribed_24 = DICT_GET_ITEM0(tstate, locals_pytiled_parser$tileset$$$class__4_Tile_89, mod_consts[40]);

            if (unlikely(tmp_ass_subscribed_24 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[40]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 134;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }

            if (tmp_ass_subscribed_24 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 134;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_ass_subscript_24 = mod_consts[77];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_24, tmp_ass_subscript_24, tmp_ass_subvalue_24);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 134;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        tmp_dictset_value = Py_False;
        tmp_res = PyDict_SetItem(locals_pytiled_parser$tileset$$$class__4_Tile_89, mod_consts[78], tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_ass_subvalue_25;
            PyObject *tmp_ass_subscribed_25;
            PyObject *tmp_ass_subscript_25;
            tmp_ass_subvalue_25 = (PyObject *)&PyBool_Type;
            tmp_ass_subscribed_25 = DICT_GET_ITEM0(tstate, locals_pytiled_parser$tileset$$$class__4_Tile_89, mod_consts[40]);

            if (unlikely(tmp_ass_subscribed_25 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[40]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 135;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }

            if (tmp_ass_subscribed_25 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 135;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_ass_subscript_25 = mod_consts[78];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_25, tmp_ass_subscript_25, tmp_ass_subvalue_25);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 135;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        tmp_dictset_value = Py_False;
        tmp_res = PyDict_SetItem(locals_pytiled_parser$tileset$$$class__4_Tile_89, mod_consts[79], tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_ass_subvalue_26;
            PyObject *tmp_ass_subscribed_26;
            PyObject *tmp_ass_subscript_26;
            tmp_ass_subvalue_26 = (PyObject *)&PyBool_Type;
            tmp_ass_subscribed_26 = DICT_GET_ITEM0(tstate, locals_pytiled_parser$tileset$$$class__4_Tile_89, mod_consts[40]);

            if (unlikely(tmp_ass_subscribed_26 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[40]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 136;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }

            if (tmp_ass_subscribed_26 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 136;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_ass_subscript_26 = mod_consts[79];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_26, tmp_ass_subscript_26, tmp_ass_subvalue_26);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 136;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_4;
        frame_exception_exit_5:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_72afbe295dfc848f3bf39f7e7c324da7_5, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_72afbe295dfc848f3bf39f7e7c324da7_5->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_72afbe295dfc848f3bf39f7e7c324da7_5, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_72afbe295dfc848f3bf39f7e7c324da7_5,
            type_description_2,
            outline_3_var___class__
        );



        assertFrameObject(frame_72afbe295dfc848f3bf39f7e7c324da7_5);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_4;
        frame_no_exception_4:;
        goto skip_nested_handling_4;
        nested_frame_exit_4:;

        goto try_except_handler_14;
        skip_nested_handling_4:;
        {
            PyObject *tmp_assign_source_40;
            PyObject *tmp_called_value_10;
            PyObject *tmp_args_value_6;
            PyObject *tmp_tuple_element_10;
            PyObject *tmp_kwargs_value_6;
            tmp_called_value_10 = (PyObject *)&PyType_Type;
            tmp_tuple_element_10 = mod_consts[62];
            tmp_args_value_6 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_10);
            tmp_tuple_element_10 = mod_consts[60];
            PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_10);
            tmp_tuple_element_10 = locals_pytiled_parser$tileset$$$class__4_Tile_89;
            PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_10);
            CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
            tmp_kwargs_value_6 = tmp_class_creation_4__class_decl_dict;
            frame_07faf9c966de872b429b78a374b78758->m_frame.f_lineno = 89;
            tmp_assign_source_40 = CALL_FUNCTION(tstate, tmp_called_value_10, tmp_args_value_6, tmp_kwargs_value_6);
            Py_DECREF(tmp_args_value_6);
            if (tmp_assign_source_40 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 89;

                goto try_except_handler_14;
            }
            assert(outline_3_var___class__ == NULL);
            outline_3_var___class__ = tmp_assign_source_40;
        }
        CHECK_OBJECT(outline_3_var___class__);
        tmp_args_element_value_2 = outline_3_var___class__;
        Py_INCREF(tmp_args_element_value_2);
        goto try_return_handler_14;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_14:;
        Py_DECREF(locals_pytiled_parser$tileset$$$class__4_Tile_89);
        locals_pytiled_parser$tileset$$$class__4_Tile_89 = NULL;
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

        Py_DECREF(locals_pytiled_parser$tileset$$$class__4_Tile_89);
        locals_pytiled_parser$tileset$$$class__4_Tile_89 = NULL;
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
        exception_lineno = 89;
        goto try_except_handler_12;
        outline_result_4:;
        frame_07faf9c966de872b429b78a374b78758->m_frame.f_lineno = 88;
        tmp_assign_source_39 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto try_except_handler_12;
        }
        UPDATE_STRING_DICT1(moduledict_pytiled_parser$tileset, (Nuitka_StringObject *)mod_consts[62], tmp_assign_source_39);
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
        tmp_assign_source_41 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_5__class_decl_dict == NULL);
        tmp_class_creation_5__class_decl_dict = tmp_assign_source_41;
    }
    {
        PyObject *tmp_assign_source_42;
        tmp_assign_source_42 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_42;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_called_value_11;
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_args_element_value_3;
        tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$tileset, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_28 == NULL)) {
            tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto try_except_handler_15;
        }
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts[51]);
        if (tmp_called_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto try_except_handler_15;
        }
        frame_07faf9c966de872b429b78a374b78758->m_frame.f_lineno = 139;
        tmp_called_value_11 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_12, &PyTuple_GET_ITEM(mod_consts[80], 0), mod_consts[81]);
        Py_DECREF(tmp_called_value_12);
        if (tmp_called_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto try_except_handler_15;
        }
        {
            PyObject *tmp_set_locals_5;
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_set_locals_5 = tmp_class_creation_5__prepared;
            locals_pytiled_parser$tileset$$$class__5_Tileset_140 = tmp_set_locals_5;
            Py_INCREF(tmp_set_locals_5);
        }
        tmp_dictset_value = mod_consts[36];
        tmp_res = PyDict_SetItem(locals_pytiled_parser$tileset$$$class__5_Tileset_140, mod_consts[37], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[82];
        tmp_res = PyDict_SetItem(locals_pytiled_parser$tileset$$$class__5_Tileset_140, mod_consts[1], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[76];
        tmp_res = PyDict_SetItem(locals_pytiled_parser$tileset$$$class__5_Tileset_140, mod_consts[39], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = MAKE_DICT_EMPTY();
        tmp_res = PyDict_SetItem(locals_pytiled_parser$tileset$$$class__5_Tileset_140, mod_consts[40], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        frame_6598e513f0bb22de2015eae415ba1b65_6 = MAKE_CLASS_FRAME(tstate, codeobj_6598e513f0bb22de2015eae415ba1b65, module_pytiled_parser$tileset, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_6598e513f0bb22de2015eae415ba1b65_6);
        assert(Py_REFCNT(frame_6598e513f0bb22de2015eae415ba1b65_6) == 2);

        // Framed code:
        {
            PyObject *tmp_ass_subvalue_27;
            PyObject *tmp_ass_subscribed_27;
            PyObject *tmp_ass_subscript_27;
            tmp_ass_subvalue_27 = (PyObject *)&PyUnicode_Type;
            tmp_ass_subscribed_27 = DICT_GET_ITEM0(tstate, locals_pytiled_parser$tileset$$$class__5_Tileset_140, mod_consts[40]);

            if (unlikely(tmp_ass_subscribed_27 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[40]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 195;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }

            if (tmp_ass_subscribed_27 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 195;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subscript_27 = mod_consts[83];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_27, tmp_ass_subscript_27, tmp_ass_subvalue_27);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 195;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_ass_subvalue_28;
            PyObject *tmp_ass_subscribed_28;
            PyObject *tmp_ass_subscript_28;
            tmp_ass_subvalue_28 = (PyObject *)&PyLong_Type;
            tmp_ass_subscribed_28 = DICT_GET_ITEM0(tstate, locals_pytiled_parser$tileset$$$class__5_Tileset_140, mod_consts[40]);

            if (unlikely(tmp_ass_subscribed_28 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[40]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 196;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }

            if (tmp_ass_subscribed_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 196;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subscript_28 = mod_consts[84];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_28, tmp_ass_subscript_28, tmp_ass_subvalue_28);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 196;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_ass_subvalue_29;
            PyObject *tmp_ass_subscribed_29;
            PyObject *tmp_ass_subscript_29;
            tmp_ass_subvalue_29 = (PyObject *)&PyLong_Type;
            tmp_ass_subscribed_29 = DICT_GET_ITEM0(tstate, locals_pytiled_parser$tileset$$$class__5_Tileset_140, mod_consts[40]);

            if (unlikely(tmp_ass_subscribed_29 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[40]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 197;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }

            if (tmp_ass_subscribed_29 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 197;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subscript_29 = mod_consts[85];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_29, tmp_ass_subscript_29, tmp_ass_subvalue_29);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 197;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_ass_subvalue_30;
            PyObject *tmp_ass_subscribed_30;
            PyObject *tmp_ass_subscript_30;
            tmp_ass_subvalue_30 = (PyObject *)&PyLong_Type;
            tmp_ass_subscribed_30 = DICT_GET_ITEM0(tstate, locals_pytiled_parser$tileset$$$class__5_Tileset_140, mod_consts[40]);

            if (unlikely(tmp_ass_subscribed_30 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[40]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 199;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }

            if (tmp_ass_subscribed_30 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 199;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subscript_30 = mod_consts[86];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_30, tmp_ass_subscript_30, tmp_ass_subvalue_30);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 199;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_ass_subvalue_31;
            PyObject *tmp_ass_subscribed_31;
            PyObject *tmp_ass_subscript_31;
            tmp_ass_subvalue_31 = (PyObject *)&PyLong_Type;
            tmp_ass_subscribed_31 = DICT_GET_ITEM0(tstate, locals_pytiled_parser$tileset$$$class__5_Tileset_140, mod_consts[40]);

            if (unlikely(tmp_ass_subscribed_31 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[40]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 200;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }

            if (tmp_ass_subscribed_31 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 200;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subscript_31 = mod_consts[87];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_31, tmp_ass_subscript_31, tmp_ass_subvalue_31);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 200;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_ass_subvalue_32;
            PyObject *tmp_ass_subscribed_32;
            PyObject *tmp_ass_subscript_32;
            tmp_ass_subvalue_32 = (PyObject *)&PyLong_Type;
            tmp_ass_subscribed_32 = DICT_GET_ITEM0(tstate, locals_pytiled_parser$tileset$$$class__5_Tileset_140, mod_consts[40]);

            if (unlikely(tmp_ass_subscribed_32 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[40]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 202;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }

            if (tmp_ass_subscribed_32 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 202;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subscript_32 = mod_consts[88];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_32, tmp_ass_subscript_32, tmp_ass_subvalue_32);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 202;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        tmp_dictset_value = mod_consts[75];
        tmp_res = PyDict_SetItem(locals_pytiled_parser$tileset$$$class__5_Tileset_140, mod_consts[89], tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_ass_subvalue_33;
            PyObject *tmp_ass_subscribed_33;
            PyObject *tmp_ass_subscript_33;
            tmp_ass_subvalue_33 = (PyObject *)&PyUnicode_Type;
            tmp_ass_subscribed_33 = DICT_GET_ITEM0(tstate, locals_pytiled_parser$tileset$$$class__5_Tileset_140, mod_consts[40]);

            if (unlikely(tmp_ass_subscribed_33 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[40]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 204;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }

            if (tmp_ass_subscribed_33 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 204;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subscript_33 = mod_consts[89];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_33, tmp_ass_subscript_33, tmp_ass_subvalue_33);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 204;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        tmp_dictset_value = mod_consts[90];
        tmp_res = PyDict_SetItem(locals_pytiled_parser$tileset$$$class__5_Tileset_140, mod_consts[91], tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_ass_subvalue_34;
            PyObject *tmp_ass_subscribed_34;
            PyObject *tmp_ass_subscript_34;
            tmp_ass_subvalue_34 = (PyObject *)&PyUnicode_Type;
            tmp_ass_subscribed_34 = DICT_GET_ITEM0(tstate, locals_pytiled_parser$tileset$$$class__5_Tileset_140, mod_consts[40]);

            if (unlikely(tmp_ass_subscribed_34 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[40]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 205;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }

            if (tmp_ass_subscribed_34 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 205;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subscript_34 = mod_consts[91];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_34, tmp_ass_subscript_34, tmp_ass_subvalue_34);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 205;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        tmp_dictset_value = mod_consts[92];
        tmp_res = PyDict_SetItem(locals_pytiled_parser$tileset$$$class__5_Tileset_140, mod_consts[93], tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_ass_subvalue_35;
            PyObject *tmp_ass_subscribed_35;
            PyObject *tmp_ass_subscript_35;
            tmp_ass_subvalue_35 = (PyObject *)&PyUnicode_Type;
            tmp_ass_subscribed_35 = DICT_GET_ITEM0(tstate, locals_pytiled_parser$tileset$$$class__5_Tileset_140, mod_consts[40]);

            if (unlikely(tmp_ass_subscribed_35 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[40]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 206;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }

            if (tmp_ass_subscribed_35 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 206;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subscript_35 = mod_consts[93];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_35, tmp_ass_subscript_35, tmp_ass_subvalue_35);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 206;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        tmp_dictset_value = mod_consts[9];
        tmp_res = PyDict_SetItem(locals_pytiled_parser$tileset$$$class__5_Tileset_140, mod_consts[94], tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_ass_subvalue_36;
            PyObject *tmp_ass_subscribed_36;
            PyObject *tmp_ass_subscript_36;
            tmp_ass_subvalue_36 = (PyObject *)&PyLong_Type;
            tmp_ass_subscribed_36 = DICT_GET_ITEM0(tstate, locals_pytiled_parser$tileset$$$class__5_Tileset_140, mod_consts[40]);

            if (unlikely(tmp_ass_subscribed_36 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[40]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 208;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }

            if (tmp_ass_subscribed_36 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 208;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subscript_36 = mod_consts[94];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_36, tmp_ass_subscript_36, tmp_ass_subvalue_36);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 208;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        tmp_dictset_value = mod_consts[9];
        tmp_res = PyDict_SetItem(locals_pytiled_parser$tileset$$$class__5_Tileset_140, mod_consts[95], tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_ass_subvalue_37;
            PyObject *tmp_ass_subscribed_37;
            PyObject *tmp_ass_subscript_37;
            tmp_ass_subvalue_37 = (PyObject *)&PyLong_Type;
            tmp_ass_subscribed_37 = DICT_GET_ITEM0(tstate, locals_pytiled_parser$tileset$$$class__5_Tileset_140, mod_consts[40]);

            if (unlikely(tmp_ass_subscribed_37 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[40]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 209;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }

            if (tmp_ass_subscribed_37 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 209;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subscript_37 = mod_consts[95];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_37, tmp_ass_subscript_37, tmp_ass_subvalue_37);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 209;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        tmp_dictset_value = Py_None;
        tmp_res = PyDict_SetItem(locals_pytiled_parser$tileset$$$class__5_Tileset_140, mod_consts[96], tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_ass_subvalue_38;
            PyObject *tmp_expression_value_29;
            PyObject *tmp_subscript_value_14;
            PyObject *tmp_ass_subscribed_38;
            PyObject *tmp_ass_subscript_38;
            tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$tileset, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_29 == NULL)) {
                tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_29 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 211;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_subscript_value_14 = (PyObject *)&PyUnicode_Type;
            tmp_ass_subvalue_38 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_29, tmp_subscript_value_14);
            if (tmp_ass_subvalue_38 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 211;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subscribed_38 = DICT_GET_ITEM0(tstate, locals_pytiled_parser$tileset$$$class__5_Tileset_140, mod_consts[40]);

            if (unlikely(tmp_ass_subscribed_38 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
                Py_DECREF(tmp_ass_subvalue_38);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[40]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 211;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }

            if (tmp_ass_subscribed_38 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_38);

                exception_lineno = 211;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subscript_38 = mod_consts[96];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_38, tmp_ass_subscript_38, tmp_ass_subvalue_38);
            Py_DECREF(tmp_ass_subvalue_38);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 211;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        tmp_dictset_value = Py_None;
        tmp_res = PyDict_SetItem(locals_pytiled_parser$tileset$$$class__5_Tileset_140, mod_consts[97], tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_ass_subvalue_39;
            PyObject *tmp_expression_value_30;
            PyObject *tmp_subscript_value_15;
            PyObject *tmp_ass_subscribed_39;
            PyObject *tmp_ass_subscript_39;
            tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$tileset, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_30 == NULL)) {
                tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_30 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 212;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_subscript_value_15 = (PyObject *)&PyUnicode_Type;
            tmp_ass_subvalue_39 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_30, tmp_subscript_value_15);
            if (tmp_ass_subvalue_39 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 212;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subscribed_39 = DICT_GET_ITEM0(tstate, locals_pytiled_parser$tileset$$$class__5_Tileset_140, mod_consts[40]);

            if (unlikely(tmp_ass_subscribed_39 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
                Py_DECREF(tmp_ass_subvalue_39);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[40]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 212;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }

            if (tmp_ass_subscribed_39 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_39);

                exception_lineno = 212;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subscript_39 = mod_consts[97];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_39, tmp_ass_subscript_39, tmp_ass_subvalue_39);
            Py_DECREF(tmp_ass_subvalue_39);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 212;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        tmp_dictset_value = Py_None;
        tmp_res = PyDict_SetItem(locals_pytiled_parser$tileset$$$class__5_Tileset_140, mod_consts[71], tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_ass_subvalue_40;
            PyObject *tmp_expression_value_31;
            PyObject *tmp_subscript_value_16;
            PyObject *tmp_ass_subscribed_40;
            PyObject *tmp_ass_subscript_40;
            tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$tileset, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_31 == NULL)) {
                tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_31 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 214;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_subscript_value_16 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$tileset, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_subscript_value_16 == NULL)) {
                tmp_subscript_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
            }

            if (tmp_subscript_value_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 214;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subvalue_40 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_31, tmp_subscript_value_16);
            if (tmp_ass_subvalue_40 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 214;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subscribed_40 = DICT_GET_ITEM0(tstate, locals_pytiled_parser$tileset$$$class__5_Tileset_140, mod_consts[40]);

            if (unlikely(tmp_ass_subscribed_40 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
                Py_DECREF(tmp_ass_subvalue_40);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[40]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 214;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }

            if (tmp_ass_subscribed_40 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_40);

                exception_lineno = 214;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subscript_40 = mod_consts[71];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_40, tmp_ass_subscript_40, tmp_ass_subvalue_40);
            Py_DECREF(tmp_ass_subvalue_40);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 214;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        tmp_dictset_value = Py_None;
        tmp_res = PyDict_SetItem(locals_pytiled_parser$tileset$$$class__5_Tileset_140, mod_consts[72], tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_ass_subvalue_41;
            PyObject *tmp_expression_value_32;
            PyObject *tmp_subscript_value_17;
            PyObject *tmp_ass_subscribed_41;
            PyObject *tmp_ass_subscript_41;
            tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$tileset, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_32 == NULL)) {
                tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_32 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 215;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_subscript_value_17 = (PyObject *)&PyLong_Type;
            tmp_ass_subvalue_41 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_32, tmp_subscript_value_17);
            if (tmp_ass_subvalue_41 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 215;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subscribed_41 = DICT_GET_ITEM0(tstate, locals_pytiled_parser$tileset$$$class__5_Tileset_140, mod_consts[40]);

            if (unlikely(tmp_ass_subscribed_41 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
                Py_DECREF(tmp_ass_subvalue_41);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[40]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 215;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }

            if (tmp_ass_subscribed_41 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_41);

                exception_lineno = 215;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subscript_41 = mod_consts[72];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_41, tmp_ass_subscript_41, tmp_ass_subvalue_41);
            Py_DECREF(tmp_ass_subvalue_41);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 215;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        tmp_dictset_value = Py_None;
        tmp_res = PyDict_SetItem(locals_pytiled_parser$tileset$$$class__5_Tileset_140, mod_consts[73], tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_ass_subvalue_42;
            PyObject *tmp_expression_value_33;
            PyObject *tmp_subscript_value_18;
            PyObject *tmp_ass_subscribed_42;
            PyObject *tmp_ass_subscript_42;
            tmp_expression_value_33 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$tileset, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_33 == NULL)) {
                tmp_expression_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_33 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 216;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_subscript_value_18 = (PyObject *)&PyLong_Type;
            tmp_ass_subvalue_42 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_33, tmp_subscript_value_18);
            if (tmp_ass_subvalue_42 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 216;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subscribed_42 = DICT_GET_ITEM0(tstate, locals_pytiled_parser$tileset$$$class__5_Tileset_140, mod_consts[40]);

            if (unlikely(tmp_ass_subscribed_42 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
                Py_DECREF(tmp_ass_subvalue_42);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[40]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 216;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }

            if (tmp_ass_subscribed_42 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_42);

                exception_lineno = 216;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subscript_42 = mod_consts[73];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_42, tmp_ass_subscript_42, tmp_ass_subvalue_42);
            Py_DECREF(tmp_ass_subvalue_42);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 216;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        tmp_dictset_value = Py_None;
        tmp_res = PyDict_SetItem(locals_pytiled_parser$tileset$$$class__5_Tileset_140, mod_consts[98], tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_ass_subvalue_43;
            PyObject *tmp_expression_value_34;
            PyObject *tmp_subscript_value_19;
            PyObject *tmp_ass_subscribed_43;
            PyObject *tmp_ass_subscript_43;
            tmp_expression_value_34 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$tileset, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_34 == NULL)) {
                tmp_expression_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_34 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 218;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_subscript_value_19 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$tileset, (Nuitka_StringObject *)mod_consts[55]);

            if (unlikely(tmp_subscript_value_19 == NULL)) {
                tmp_subscript_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
            }

            if (tmp_subscript_value_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 218;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subvalue_43 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_34, tmp_subscript_value_19);
            if (tmp_ass_subvalue_43 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 218;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subscribed_43 = DICT_GET_ITEM0(tstate, locals_pytiled_parser$tileset$$$class__5_Tileset_140, mod_consts[40]);

            if (unlikely(tmp_ass_subscribed_43 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
                Py_DECREF(tmp_ass_subvalue_43);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[40]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 218;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }

            if (tmp_ass_subscribed_43 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_43);

                exception_lineno = 218;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subscript_43 = mod_consts[98];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_43, tmp_ass_subscript_43, tmp_ass_subvalue_43);
            Py_DECREF(tmp_ass_subvalue_43);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 218;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        tmp_dictset_value = Py_None;
        tmp_res = PyDict_SetItem(locals_pytiled_parser$tileset$$$class__5_Tileset_140, mod_consts[67], tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_ass_subvalue_44;
            PyObject *tmp_expression_value_35;
            PyObject *tmp_subscript_value_20;
            PyObject *tmp_ass_subscribed_44;
            PyObject *tmp_ass_subscript_44;
            tmp_expression_value_35 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$tileset, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_35 == NULL)) {
                tmp_expression_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_35 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 220;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_subscript_value_20 = (PyObject *)&PyUnicode_Type;
            tmp_ass_subvalue_44 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_35, tmp_subscript_value_20);
            if (tmp_ass_subvalue_44 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 220;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subscribed_44 = DICT_GET_ITEM0(tstate, locals_pytiled_parser$tileset$$$class__5_Tileset_140, mod_consts[40]);

            if (unlikely(tmp_ass_subscribed_44 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
                Py_DECREF(tmp_ass_subvalue_44);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[40]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 220;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }

            if (tmp_ass_subscribed_44 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_44);

                exception_lineno = 220;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subscript_44 = mod_consts[67];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_44, tmp_ass_subscript_44, tmp_ass_subvalue_44);
            Py_DECREF(tmp_ass_subvalue_44);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 220;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        tmp_dictset_value = Py_None;
        tmp_res = PyDict_SetItem(locals_pytiled_parser$tileset$$$class__5_Tileset_140, mod_consts[99], tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_ass_subvalue_45;
            PyObject *tmp_expression_value_36;
            PyObject *tmp_subscript_value_21;
            PyObject *tmp_ass_subscribed_45;
            PyObject *tmp_ass_subscript_45;
            tmp_expression_value_36 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$tileset, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_36 == NULL)) {
                tmp_expression_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_36 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 221;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_subscript_value_21 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$tileset, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_subscript_value_21 == NULL)) {
                tmp_subscript_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
            }

            if (tmp_subscript_value_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 221;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subvalue_45 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_36, tmp_subscript_value_21);
            if (tmp_ass_subvalue_45 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 221;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subscribed_45 = DICT_GET_ITEM0(tstate, locals_pytiled_parser$tileset$$$class__5_Tileset_140, mod_consts[40]);

            if (unlikely(tmp_ass_subscribed_45 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
                Py_DECREF(tmp_ass_subvalue_45);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[40]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 221;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }

            if (tmp_ass_subscribed_45 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_45);

                exception_lineno = 221;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subscript_45 = mod_consts[99];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_45, tmp_ass_subscript_45, tmp_ass_subvalue_45);
            Py_DECREF(tmp_ass_subvalue_45);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 221;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        tmp_dictset_value = Py_None;
        tmp_res = PyDict_SetItem(locals_pytiled_parser$tileset$$$class__5_Tileset_140, mod_consts[100], tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_ass_subvalue_46;
            PyObject *tmp_expression_value_37;
            PyObject *tmp_subscript_value_22;
            PyObject *tmp_ass_subscribed_46;
            PyObject *tmp_ass_subscript_46;
            tmp_expression_value_37 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$tileset, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_37 == NULL)) {
                tmp_expression_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_37 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 222;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_subscript_value_22 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$tileset, (Nuitka_StringObject *)mod_consts[26]);

            if (unlikely(tmp_subscript_value_22 == NULL)) {
                tmp_subscript_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
            }

            if (tmp_subscript_value_22 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 222;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subvalue_46 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_37, tmp_subscript_value_22);
            if (tmp_ass_subvalue_46 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 222;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subscribed_46 = DICT_GET_ITEM0(tstate, locals_pytiled_parser$tileset$$$class__5_Tileset_140, mod_consts[40]);

            if (unlikely(tmp_ass_subscribed_46 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
                Py_DECREF(tmp_ass_subvalue_46);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[40]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 222;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }

            if (tmp_ass_subscribed_46 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_46);

                exception_lineno = 222;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subscript_46 = mod_consts[100];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_46, tmp_ass_subscript_46, tmp_ass_subvalue_46);
            Py_DECREF(tmp_ass_subvalue_46);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 222;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        tmp_dictset_value = Py_None;
        tmp_res = PyDict_SetItem(locals_pytiled_parser$tileset$$$class__5_Tileset_140, mod_consts[101], tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_ass_subvalue_47;
            PyObject *tmp_expression_value_38;
            PyObject *tmp_subscript_value_23;
            PyObject *tmp_ass_subscribed_47;
            PyObject *tmp_ass_subscript_47;
            tmp_expression_value_38 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$tileset, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_38 == NULL)) {
                tmp_expression_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_38 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 223;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_subscript_value_23 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$tileset, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_subscript_value_23 == NULL)) {
                tmp_subscript_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
            }

            if (tmp_subscript_value_23 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 223;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subvalue_47 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_38, tmp_subscript_value_23);
            if (tmp_ass_subvalue_47 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 223;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subscribed_47 = DICT_GET_ITEM0(tstate, locals_pytiled_parser$tileset$$$class__5_Tileset_140, mod_consts[40]);

            if (unlikely(tmp_ass_subscribed_47 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
                Py_DECREF(tmp_ass_subvalue_47);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[40]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 223;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }

            if (tmp_ass_subscribed_47 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_47);

                exception_lineno = 223;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subscript_47 = mod_consts[101];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_47, tmp_ass_subscript_47, tmp_ass_subvalue_47);
            Py_DECREF(tmp_ass_subvalue_47);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 223;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        tmp_dictset_value = Py_None;
        tmp_res = PyDict_SetItem(locals_pytiled_parser$tileset$$$class__5_Tileset_140, mod_consts[102], tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_ass_subvalue_48;
            PyObject *tmp_expression_value_39;
            PyObject *tmp_subscript_value_24;
            PyObject *tmp_ass_subscribed_48;
            PyObject *tmp_ass_subscript_48;
            tmp_expression_value_39 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$tileset, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_39 == NULL)) {
                tmp_expression_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_39 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 224;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_subscript_value_24 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$tileset, (Nuitka_StringObject *)mod_consts[31]);

            if (unlikely(tmp_subscript_value_24 == NULL)) {
                tmp_subscript_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[31]);
            }

            if (tmp_subscript_value_24 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 224;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subvalue_48 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_39, tmp_subscript_value_24);
            if (tmp_ass_subvalue_48 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 224;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subscribed_48 = DICT_GET_ITEM0(tstate, locals_pytiled_parser$tileset$$$class__5_Tileset_140, mod_consts[40]);

            if (unlikely(tmp_ass_subscribed_48 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
                Py_DECREF(tmp_ass_subvalue_48);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[40]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 224;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }

            if (tmp_ass_subscribed_48 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_48);

                exception_lineno = 224;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subscript_48 = mod_consts[102];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_48, tmp_ass_subscript_48, tmp_ass_subvalue_48);
            Py_DECREF(tmp_ass_subvalue_48);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 224;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        tmp_dictset_value = Py_None;
        tmp_res = PyDict_SetItem(locals_pytiled_parser$tileset$$$class__5_Tileset_140, mod_consts[21], tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_ass_subvalue_49;
            PyObject *tmp_expression_value_40;
            PyObject *tmp_subscript_value_25;
            PyObject *tmp_expression_value_41;
            PyObject *tmp_ass_subscribed_49;
            PyObject *tmp_ass_subscript_49;
            tmp_expression_value_40 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$tileset, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_40 == NULL)) {
                tmp_expression_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_40 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 225;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_expression_value_41 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$tileset, (Nuitka_StringObject *)mod_consts[22]);

            if (unlikely(tmp_expression_value_41 == NULL)) {
                tmp_expression_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
            }

            if (tmp_expression_value_41 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 225;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_subscript_value_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_41, mod_consts[74]);
            if (tmp_subscript_value_25 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 225;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subvalue_49 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_40, tmp_subscript_value_25);
            Py_DECREF(tmp_subscript_value_25);
            if (tmp_ass_subvalue_49 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 225;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subscribed_49 = DICT_GET_ITEM0(tstate, locals_pytiled_parser$tileset$$$class__5_Tileset_140, mod_consts[40]);

            if (unlikely(tmp_ass_subscribed_49 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
                Py_DECREF(tmp_ass_subvalue_49);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[40]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 225;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }

            if (tmp_ass_subscribed_49 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_49);

                exception_lineno = 225;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subscript_49 = mod_consts[21];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_49, tmp_ass_subscript_49, tmp_ass_subvalue_49);
            Py_DECREF(tmp_ass_subvalue_49);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 225;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        tmp_dictset_value = Py_None;
        tmp_res = PyDict_SetItem(locals_pytiled_parser$tileset$$$class__5_Tileset_140, mod_consts[103], tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_ass_subvalue_50;
            PyObject *tmp_expression_value_42;
            PyObject *tmp_subscript_value_26;
            PyObject *tmp_expression_value_43;
            PyObject *tmp_subscript_value_27;
            PyObject *tmp_tuple_element_11;
            PyObject *tmp_ass_subscribed_50;
            PyObject *tmp_ass_subscript_50;
            tmp_expression_value_42 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$tileset, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_42 == NULL)) {
                tmp_expression_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_42 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 226;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_expression_value_43 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$tileset, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_expression_value_43 == NULL)) {
                tmp_expression_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
            }

            if (tmp_expression_value_43 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 226;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_tuple_element_11 = (PyObject *)&PyLong_Type;
            tmp_subscript_value_27 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_subscript_value_27, 0, tmp_tuple_element_11);
            tmp_tuple_element_11 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$tileset, (Nuitka_StringObject *)mod_consts[62]);

            if (unlikely(tmp_tuple_element_11 == NULL)) {
                tmp_tuple_element_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[62]);
            }

            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 226;
                type_description_2 = "o";
                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_27, 1, tmp_tuple_element_11);
            goto tuple_build_noexception_3;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_3:;
            Py_DECREF(tmp_subscript_value_27);
            goto frame_exception_exit_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_3:;
            tmp_subscript_value_26 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_43, tmp_subscript_value_27);
            Py_DECREF(tmp_subscript_value_27);
            if (tmp_subscript_value_26 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 226;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subvalue_50 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_42, tmp_subscript_value_26);
            Py_DECREF(tmp_subscript_value_26);
            if (tmp_ass_subvalue_50 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 226;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subscribed_50 = DICT_GET_ITEM0(tstate, locals_pytiled_parser$tileset$$$class__5_Tileset_140, mod_consts[40]);

            if (unlikely(tmp_ass_subscribed_50 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
                Py_DECREF(tmp_ass_subvalue_50);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[40]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 226;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }

            if (tmp_ass_subscribed_50 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_50);

                exception_lineno = 226;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subscript_50 = mod_consts[103];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_50, tmp_ass_subscript_50, tmp_ass_subvalue_50);
            Py_DECREF(tmp_ass_subvalue_50);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 226;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        tmp_dictset_value = Py_None;
        tmp_res = PyDict_SetItem(locals_pytiled_parser$tileset$$$class__5_Tileset_140, mod_consts[104], tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_ass_subvalue_51;
            PyObject *tmp_expression_value_44;
            PyObject *tmp_subscript_value_28;
            PyObject *tmp_expression_value_45;
            PyObject *tmp_subscript_value_29;
            PyObject *tmp_ass_subscribed_51;
            PyObject *tmp_ass_subscript_51;
            tmp_expression_value_44 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$tileset, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_44 == NULL)) {
                tmp_expression_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_44 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 227;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_expression_value_45 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$tileset, (Nuitka_StringObject *)mod_consts[12]);

            if (unlikely(tmp_expression_value_45 == NULL)) {
                tmp_expression_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
            }

            if (tmp_expression_value_45 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 227;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_subscript_value_29 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$tileset, (Nuitka_StringObject *)mod_consts[29]);

            if (unlikely(tmp_subscript_value_29 == NULL)) {
                tmp_subscript_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
            }

            if (tmp_subscript_value_29 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 227;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_subscript_value_28 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_45, tmp_subscript_value_29);
            if (tmp_subscript_value_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 227;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subvalue_51 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_44, tmp_subscript_value_28);
            Py_DECREF(tmp_subscript_value_28);
            if (tmp_ass_subvalue_51 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 227;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subscribed_51 = DICT_GET_ITEM0(tstate, locals_pytiled_parser$tileset$$$class__5_Tileset_140, mod_consts[40]);

            if (unlikely(tmp_ass_subscribed_51 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
                Py_DECREF(tmp_ass_subvalue_51);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[40]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 227;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }

            if (tmp_ass_subscribed_51 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_51);

                exception_lineno = 227;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subscript_51 = mod_consts[104];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_51, tmp_ass_subscript_51, tmp_ass_subvalue_51);
            Py_DECREF(tmp_ass_subvalue_51);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 227;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        tmp_dictset_value = Py_None;
        tmp_res = PyDict_SetItem(locals_pytiled_parser$tileset$$$class__5_Tileset_140, mod_consts[105], tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_ass_subvalue_52;
            PyObject *tmp_expression_value_46;
            PyObject *tmp_subscript_value_30;
            PyObject *tmp_ass_subscribed_52;
            PyObject *tmp_ass_subscript_52;
            tmp_expression_value_46 = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$tileset, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_46 == NULL)) {
                tmp_expression_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
            }

            if (tmp_expression_value_46 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 228;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_subscript_value_30 = (PyObject *)&PyUnicode_Type;
            tmp_ass_subvalue_52 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_46, tmp_subscript_value_30);
            if (tmp_ass_subvalue_52 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 228;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subscribed_52 = DICT_GET_ITEM0(tstate, locals_pytiled_parser$tileset$$$class__5_Tileset_140, mod_consts[40]);

            if (unlikely(tmp_ass_subscribed_52 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
                Py_DECREF(tmp_ass_subvalue_52);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[40]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 228;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }

            if (tmp_ass_subscribed_52 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_52);

                exception_lineno = 228;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subscript_52 = mod_consts[105];
            tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_52, tmp_ass_subscript_52, tmp_ass_subvalue_52);
            Py_DECREF(tmp_ass_subvalue_52);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 228;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_5;
        frame_exception_exit_6:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_6598e513f0bb22de2015eae415ba1b65_6, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_6598e513f0bb22de2015eae415ba1b65_6->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_6598e513f0bb22de2015eae415ba1b65_6, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_6598e513f0bb22de2015eae415ba1b65_6,
            type_description_2,
            outline_4_var___class__
        );



        assertFrameObject(frame_6598e513f0bb22de2015eae415ba1b65_6);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_5;
        frame_no_exception_5:;
        goto skip_nested_handling_5;
        nested_frame_exit_5:;

        goto try_except_handler_17;
        skip_nested_handling_5:;
        {
            PyObject *tmp_assign_source_44;
            PyObject *tmp_called_value_13;
            PyObject *tmp_args_value_7;
            PyObject *tmp_tuple_element_12;
            PyObject *tmp_kwargs_value_7;
            tmp_called_value_13 = (PyObject *)&PyType_Type;
            tmp_tuple_element_12 = mod_consts[76];
            tmp_args_value_7 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_12);
            tmp_tuple_element_12 = mod_consts[60];
            PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_12);
            tmp_tuple_element_12 = locals_pytiled_parser$tileset$$$class__5_Tileset_140;
            PyTuple_SET_ITEM0(tmp_args_value_7, 2, tmp_tuple_element_12);
            CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
            tmp_kwargs_value_7 = tmp_class_creation_5__class_decl_dict;
            frame_07faf9c966de872b429b78a374b78758->m_frame.f_lineno = 140;
            tmp_assign_source_44 = CALL_FUNCTION(tstate, tmp_called_value_13, tmp_args_value_7, tmp_kwargs_value_7);
            Py_DECREF(tmp_args_value_7);
            if (tmp_assign_source_44 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 140;

                goto try_except_handler_17;
            }
            assert(outline_4_var___class__ == NULL);
            outline_4_var___class__ = tmp_assign_source_44;
        }
        CHECK_OBJECT(outline_4_var___class__);
        tmp_args_element_value_3 = outline_4_var___class__;
        Py_INCREF(tmp_args_element_value_3);
        goto try_return_handler_17;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_17:;
        Py_DECREF(locals_pytiled_parser$tileset$$$class__5_Tileset_140);
        locals_pytiled_parser$tileset$$$class__5_Tileset_140 = NULL;
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

        Py_DECREF(locals_pytiled_parser$tileset$$$class__5_Tileset_140);
        locals_pytiled_parser$tileset$$$class__5_Tileset_140 = NULL;
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
        exception_lineno = 140;
        goto try_except_handler_15;
        outline_result_5:;
        frame_07faf9c966de872b429b78a374b78758->m_frame.f_lineno = 139;
        tmp_assign_source_43 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_11);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assign_source_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto try_except_handler_15;
        }
        UPDATE_STRING_DICT1(moduledict_pytiled_parser$tileset, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_43);
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


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_6;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_07faf9c966de872b429b78a374b78758, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_07faf9c966de872b429b78a374b78758->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_07faf9c966de872b429b78a374b78758, exception_lineno);
    }



    assertFrameObject(frame_07faf9c966de872b429b78a374b78758);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_6:;
    CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
    Py_DECREF(tmp_class_creation_5__class_decl_dict);
    tmp_class_creation_5__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_5__prepared);
    Py_DECREF(tmp_class_creation_5__prepared);
    tmp_class_creation_5__prepared = NULL;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("pytiled_parser.tileset", false);

    Py_INCREF(module_pytiled_parser$tileset);
    return module_pytiled_parser$tileset;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pytiled_parser$tileset, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("pytiled_parser$tileset", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
