/* Generated code for Python module 'pyglet.libs.x11.xf86vmode'
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

/* The "module_pyglet$libs$x11$xf86vmode" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pyglet$libs$x11$xf86vmode;
PyDictObject *moduledict_pyglet$libs$x11$xf86vmode;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[187];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[187];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("pyglet.libs.x11.xf86vmode"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 187; i++) {
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
void checkModuleConstants_pyglet$libs$x11$xf86vmode(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 187; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_e33b4e37eb07fbc5c2cc2b38efc41113;
static PyCodeObject *codeobj_3587aca49fef24afb1be3a7faf4d26ed;
static PyCodeObject *codeobj_464f698cb0bf1975fa78e31db51a4c6b;
static PyCodeObject *codeobj_cb34ed1b62fdd9d32d898d27189b753a;
static PyCodeObject *codeobj_1a79756d66e47b994e945291725c4440;
static PyCodeObject *codeobj_27c2768ec8d81075482c0d2b5ab420ca;
static PyCodeObject *codeobj_63ec358de44df473812d1eb0c2d85d0c;
static PyCodeObject *codeobj_225e2a29d1dc7552cecea0c537471d00;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[183]); CHECK_OBJECT(module_filename_obj);
    codeobj_e33b4e37eb07fbc5c2cc2b38efc41113 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[184], mod_consts[184], NULL, NULL, 0, 0, 0);
    codeobj_3587aca49fef24afb1be3a7faf4d26ed = MAKE_CODE_OBJECT(module_filename_obj, 61, CO_NOFREE, mod_consts[26], mod_consts[26], mod_consts[185], NULL, 0, 0, 0);
    codeobj_464f698cb0bf1975fa78e31db51a4c6b = MAKE_CODE_OBJECT(module_filename_obj, 103, CO_NOFREE, mod_consts[92], mod_consts[92], mod_consts[185], NULL, 0, 0, 0);
    codeobj_cb34ed1b62fdd9d32d898d27189b753a = MAKE_CODE_OBJECT(module_filename_obj, 135, CO_NOFREE, mod_consts[112], mod_consts[112], mod_consts[185], NULL, 0, 0, 0);
    codeobj_1a79756d66e47b994e945291725c4440 = MAKE_CODE_OBJECT(module_filename_obj, 168, CO_NOFREE, mod_consts[116], mod_consts[116], mod_consts[185], NULL, 0, 0, 0);
    codeobj_27c2768ec8d81075482c0d2b5ab420ca = MAKE_CODE_OBJECT(module_filename_obj, 179, CO_NOFREE, mod_consts[121], mod_consts[121], mod_consts[185], NULL, 0, 0, 0);
    codeobj_63ec358de44df473812d1eb0c2d85d0c = MAKE_CODE_OBJECT(module_filename_obj, 200, CO_NOFREE, mod_consts[133], mod_consts[133], mod_consts[185], NULL, 0, 0, 0);
    codeobj_225e2a29d1dc7552cecea0c537471d00 = MAKE_CODE_OBJECT(module_filename_obj, 228, CO_NOFREE, mod_consts[152], mod_consts[152], mod_consts[185], NULL, 0, 0, 0);
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

function_impl_code functable_pyglet$libs$x11$xf86vmode[] = {

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

    function_impl_code *current = functable_pyglet$libs$x11$xf86vmode;
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

    if (offset > sizeof(functable_pyglet$libs$x11$xf86vmode) || offset < 0) {
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
        functable_pyglet$libs$x11$xf86vmode[offset],
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
        module_pyglet$libs$x11$xf86vmode,
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
PyObject *modulecode_pyglet$libs$x11$xf86vmode(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("pyglet.libs.x11.xf86vmode");

    // Store the module for future use.
    module_pyglet$libs$x11$xf86vmode = module;

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
        PRINT_STRING("pyglet.libs.x11.xf86vmode: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("pyglet.libs.x11.xf86vmode: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initpyglet$libs$x11$xf86vmode\n");

    moduledict_pyglet$libs$x11$xf86vmode = MODULE_DICT(module_pyglet$libs$x11$xf86vmode);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(tstate, loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_pyglet$libs$x11$xf86vmode,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_pyglet$libs$x11$xf86vmode,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[186]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_pyglet$libs$x11$xf86vmode,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_pyglet$libs$x11$xf86vmode,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_pyglet$libs$x11$xf86vmode,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_pyglet$libs$x11$xf86vmode);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_pyglet$libs$x11$xf86vmode);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
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
    PyObject *tmp_class_creation_7__bases = NULL;
    PyObject *tmp_class_creation_7__bases_orig = NULL;
    PyObject *tmp_class_creation_7__class_decl_dict = NULL;
    PyObject *tmp_class_creation_7__metaclass = NULL;
    PyObject *tmp_class_creation_7__prepared = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_e33b4e37eb07fbc5c2cc2b38efc41113;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_inplace_orig;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_res;
    PyObject *locals_pyglet$libs$x11$xf86vmode$$$class__1_c_void_61 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_3587aca49fef24afb1be3a7faf4d26ed_2;
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
    PyObject *locals_pyglet$libs$x11$xf86vmode$$$class__2_struct_anon_93_103 = NULL;
    struct Nuitka_FrameObject *frame_464f698cb0bf1975fa78e31db51a4c6b_3;
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
    PyObject *locals_pyglet$libs$x11$xf86vmode$$$class__3_struct_anon_94_135 = NULL;
    struct Nuitka_FrameObject *frame_cb34ed1b62fdd9d32d898d27189b753a_4;
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
    PyObject *locals_pyglet$libs$x11$xf86vmode$$$class__4_struct_anon_95_168 = NULL;
    struct Nuitka_FrameObject *frame_1a79756d66e47b994e945291725c4440_5;
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
    PyObject *locals_pyglet$libs$x11$xf86vmode$$$class__5_struct_anon_96_179 = NULL;
    struct Nuitka_FrameObject *frame_27c2768ec8d81075482c0d2b5ab420ca_6;
    NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
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
    PyObject *locals_pyglet$libs$x11$xf86vmode$$$class__6_struct_anon_97_200 = NULL;
    struct Nuitka_FrameObject *frame_63ec358de44df473812d1eb0c2d85d0c_7;
    NUITKA_MAY_BE_UNUSED char const *type_description_7 = NULL;
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
    PyObject *locals_pyglet$libs$x11$xf86vmode$$$class__7_struct_anon_98_228 = NULL;
    struct Nuitka_FrameObject *frame_225e2a29d1dc7552cecea0c537471d00_8;
    NUITKA_MAY_BE_UNUSED char const *type_description_8 = NULL;
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
        tmp_assign_source_1 = mod_consts[0];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_2);
    }
    frame_e33b4e37eb07fbc5c2cc2b38efc41113 = MAKE_MODULE_FRAME(codeobj_e33b4e37eb07fbc5c2cc2b38efc41113, module_pyglet$libs$x11$xf86vmode);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_e33b4e37eb07fbc5c2cc2b38efc41113);
    assert(Py_REFCNT(frame_e33b4e37eb07fbc5c2cc2b38efc41113) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[3]);

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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[3]);

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
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = IMPORT_HARD_CTYPES();
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[7], tmp_assign_source_4);
    }
    {
        PyObject *tmp_star_imported_1;
        tmp_star_imported_1 = IMPORT_HARD_CTYPES();
        assert(!(tmp_star_imported_1 == NULL));
        tmp_result = IMPORT_MODULE_STAR(tstate, module_pyglet$libs$x11$xf86vmode, true, tmp_star_imported_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[8];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_pyglet$libs$x11$xf86vmode;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[9];
        frame_e33b4e37eb07fbc5c2cc2b38efc41113->m_frame.f_lineno = 47;
        tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[10], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
        }

        assert(!(tmp_expression_value_1 == NULL));
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[11]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;

            goto frame_exception_exit_1;
        }
        frame_e33b4e37eb07fbc5c2cc2b38efc41113->m_frame.f_lineno = 49;
        tmp_assign_source_6 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_1,
            mod_consts[12],
            PyTuple_GET_ITEM(mod_consts[13], 0)
        );

        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[14], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_7 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_assign_source_7, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;

            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_7, 1, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_assign_source_7);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_7);
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        int tmp_truth_name_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        assert(!(tmp_args_element_value_1 == NULL));
        tmp_args_element_value_2 = mod_consts[19];
        frame_e33b4e37eb07fbc5c2cc2b38efc41113->m_frame.f_lineno = 52;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 52;

            goto frame_exception_exit_1;
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
        PyObject *tmp_assign_source_8;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_expression_value_2;
        tmp_iadd_expr_left_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_iadd_expr_left_1 == NULL)) {
            tmp_iadd_expr_left_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
        }

        if (tmp_iadd_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        assert(!(tmp_expression_value_2 == NULL));
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[19]);
        if (tmp_tuple_element_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto frame_exception_exit_1;
        }
        tmp_iadd_expr_right_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_iadd_expr_right_1, 0, tmp_tuple_element_2);
        tmp_inplace_orig = tmp_iadd_expr_left_1;
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_TUPLE(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        Py_DECREF(tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_8 = tmp_iadd_expr_left_1;
        if (tmp_inplace_orig != tmp_assign_source_8) {
            UPDATE_STRING_DICT_INPLACE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_8);
        }
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_iter_arg_1;
        tmp_iter_arg_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_iter_arg_1 == NULL)) {
            tmp_iter_arg_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
        }

        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_9 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;

            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_9;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_10 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_10 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

                exception_lineno = 57;
                goto try_except_handler_1;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_10;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_11 = tmp_for_loop_1__iter_value;
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_11);
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;

            goto try_except_handler_1;
        }
        tmp_args_element_value_3 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_args_element_value_3 == NULL)) {
            tmp_args_element_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        assert(!(tmp_args_element_value_3 == NULL));
        frame_e33b4e37eb07fbc5c2cc2b38efc41113->m_frame.f_lineno = 58;
        tmp_cmp_expr_left_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;

            goto try_except_handler_1;
        }
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 58;

            goto try_except_handler_1;
        }
        tmp_args_element_value_4 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_args_element_value_4 == NULL)) {
            tmp_args_element_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 58;

            goto try_except_handler_1;
        }
        frame_e33b4e37eb07fbc5c2cc2b38efc41113->m_frame.f_lineno = 58;
        tmp_cmp_expr_right_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_4);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 58;

            goto try_except_handler_1;
        }
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;

            goto try_except_handler_1;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_assign_source_12 == NULL)) {
            tmp_assign_source_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_12);
    }
    branch_no_2:;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 57;

        goto try_except_handler_1;
    }
    goto loop_start_1;
    loop_end_1:;
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
    // Tried code:
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_tuple_element_3;
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_tuple_element_3 == NULL)) {
            tmp_tuple_element_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
        }

        if (tmp_tuple_element_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto try_except_handler_2;
        }
        tmp_assign_source_13 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_13, 0, tmp_tuple_element_3);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_14 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_metaclass_value_1;
        nuitka_bool tmp_condition_result_3;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_bases_value_1;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto try_except_handler_2;
        }
        tmp_condition_result_3 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_expression_value_3 = tmp_class_creation_1__bases;
        tmp_subscript_value_1 = mod_consts[9];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_3, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto try_except_handler_2;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto try_except_handler_2;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_16 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_16;
    }
    {
        bool tmp_condition_result_4;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_4 = tmp_class_creation_1__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_4, mod_consts[25]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto try_except_handler_2;
        }
        tmp_condition_result_4 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_5 = tmp_class_creation_1__metaclass;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[25]);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto try_except_handler_2;
        }
        tmp_tuple_element_4 = mod_consts[26];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_4);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_4 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_4);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_e33b4e37eb07fbc5c2cc2b38efc41113->m_frame.f_lineno = 61;
        tmp_assign_source_17 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_17;
    }
    {
        bool tmp_condition_result_5;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_6 = tmp_class_creation_1__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_6, mod_consts[27]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto try_except_handler_2;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_5 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_value_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_name_value_2;
        PyObject *tmp_default_value_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[28];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_7 = tmp_class_creation_1__metaclass;
        tmp_name_value_2 = mod_consts[29];
        tmp_default_value_1 = mod_consts[30];
        tmp_tuple_element_5 = BUILTIN_GETATTR(tstate, tmp_expression_value_7, tmp_name_value_2, tmp_default_value_1);
        if (tmp_tuple_element_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto try_except_handler_2;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_8;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_5);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_value_8 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_8 == NULL));
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[29]);
            Py_DECREF(tmp_expression_value_8);
            if (tmp_tuple_element_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_5);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_raise_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto try_except_handler_2;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 61;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_2;
    }
    branch_no_4:;
    goto branch_end_3;
    branch_no_3:;
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_18;
    }
    branch_end_3:;
    {
        PyObject *tmp_assign_source_19;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_pyglet$libs$x11$xf86vmode$$$class__1_c_void_61 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[31];
        tmp_res = PyObject_SetItem(locals_pyglet$libs$x11$xf86vmode$$$class__1_c_void_61, mod_consts[32], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto try_except_handler_4;
        }
        tmp_dictset_value = mod_consts[26];
        tmp_res = PyObject_SetItem(locals_pyglet$libs$x11$xf86vmode$$$class__1_c_void_61, mod_consts[33], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto try_except_handler_4;
        }
        frame_3587aca49fef24afb1be3a7faf4d26ed_2 = MAKE_CLASS_FRAME(tstate, codeobj_3587aca49fef24afb1be3a7faf4d26ed, module_pyglet$libs$x11$xf86vmode, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_3587aca49fef24afb1be3a7faf4d26ed_2);
        assert(Py_REFCNT(frame_3587aca49fef24afb1be3a7faf4d26ed_2) == 2);

        // Framed code:
        {
            PyObject *tmp_list_element_1;
            PyObject *tmp_tuple_element_6;
            tmp_tuple_element_6 = mod_consts[34];
            tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_6);
            tmp_tuple_element_6 = PyObject_GetItem(locals_pyglet$libs$x11$xf86vmode$$$class__1_c_void_61, mod_consts[35]);

            if (tmp_tuple_element_6 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[35]);

                    if (unlikely(tmp_tuple_element_6 == NULL)) {
                        tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
                    }

                    if (tmp_tuple_element_6 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 65;
                        type_description_2 = "o";
                        goto tuple_build_exception_3;
                    }
                    Py_INCREF(tmp_tuple_element_6);
                } else {
                    goto tuple_build_exception_3;
                }
            }

            PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_6);
            goto tuple_build_noexception_3;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_3:;
            Py_DECREF(tmp_list_element_1);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_3:;
            tmp_dictset_value = MAKE_LIST_EMPTY(1);
            PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_1);
            tmp_res = PyObject_SetItem(locals_pyglet$libs$x11$xf86vmode$$$class__1_c_void_61, mod_consts[36], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 65;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_3587aca49fef24afb1be3a7faf4d26ed_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_3587aca49fef24afb1be3a7faf4d26ed_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_3587aca49fef24afb1be3a7faf4d26ed_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_3587aca49fef24afb1be3a7faf4d26ed_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_3587aca49fef24afb1be3a7faf4d26ed_2);

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
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_cmp_expr_left_2;
            PyObject *tmp_cmp_expr_right_2;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_cmp_expr_left_2 = tmp_class_creation_1__bases;
            CHECK_OBJECT(tmp_class_creation_1__bases_orig);
            tmp_cmp_expr_right_2 = tmp_class_creation_1__bases_orig;
            tmp_condition_result_6 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
            if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;

                goto try_except_handler_4;
            }
            if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
                goto branch_yes_5;
            } else {
                goto branch_no_5;
            }
        }
        branch_yes_5:;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dictset_value = tmp_class_creation_1__bases_orig;
        tmp_res = PyObject_SetItem(locals_pyglet$libs$x11$xf86vmode$$$class__1_c_void_61, mod_consts[37], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto try_except_handler_4;
        }
        branch_no_5:;
        {
            PyObject *tmp_assign_source_20;
            PyObject *tmp_called_value_5;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_7;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_5 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_7 = mod_consts[26];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_7);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_7 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_7);
            tmp_tuple_element_7 = locals_pyglet$libs$x11$xf86vmode$$$class__1_c_void_61;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_7);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_e33b4e37eb07fbc5c2cc2b38efc41113->m_frame.f_lineno = 61;
            tmp_assign_source_20 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_20 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;

                goto try_except_handler_4;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_20;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_19 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_19);
        goto try_return_handler_4;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_DECREF(locals_pyglet$libs$x11$xf86vmode$$$class__1_c_void_61);
        locals_pyglet$libs$x11$xf86vmode$$$class__1_c_void_61 = NULL;
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

        Py_DECREF(locals_pyglet$libs$x11$xf86vmode$$$class__1_c_void_61);
        locals_pyglet$libs$x11$xf86vmode$$$class__1_c_void_61 = NULL;
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
        exception_lineno = 61;
        goto try_except_handler_2;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[26], tmp_assign_source_19);
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
        PyObject *tmp_assign_source_21;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_3 = mod_consts[38];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_pyglet$libs$x11$xf86vmode;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[9];
        frame_e33b4e37eb07fbc5c2cc2b38efc41113->m_frame.f_lineno = 68;
        tmp_assign_source_21 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[10], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = mod_consts[9];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = mod_consts[40];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        tmp_assign_source_24 = mod_consts[42];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        tmp_assign_source_25 = mod_consts[44];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = mod_consts[46];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[47], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = mod_consts[48];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        tmp_assign_source_28 = mod_consts[50];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[51], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        tmp_assign_source_29 = mod_consts[52];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = mod_consts[54];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        tmp_assign_source_31 = mod_consts[56];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[57], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        tmp_assign_source_32 = mod_consts[58];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        tmp_assign_source_33 = mod_consts[60];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[61], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = mod_consts[62];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        tmp_assign_source_35 = mod_consts[64];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[65], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        tmp_assign_source_36 = mod_consts[66];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;
        tmp_assign_source_37 = mod_consts[68];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[69], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;
        tmp_assign_source_38 = mod_consts[70];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;
        tmp_assign_source_39 = mod_consts[72];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[73], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;
        tmp_assign_source_40 = mod_consts[74];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[75], tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_41;
        tmp_assign_source_41 = mod_consts[76];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[77], tmp_assign_source_41);
    }
    {
        PyObject *tmp_assign_source_42;
        tmp_assign_source_42 = mod_consts[78];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[79], tmp_assign_source_42);
    }
    {
        PyObject *tmp_assign_source_43;
        tmp_assign_source_43 = mod_consts[40];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[80], tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;
        tmp_assign_source_44 = mod_consts[9];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[81], tmp_assign_source_44);
    }
    {
        PyObject *tmp_assign_source_45;
        tmp_assign_source_45 = mod_consts[9];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[82], tmp_assign_source_45);
    }
    {
        PyObject *tmp_assign_source_46;
        tmp_assign_source_46 = mod_consts[40];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[83], tmp_assign_source_46);
    }
    {
        PyObject *tmp_assign_source_47;
        tmp_assign_source_47 = mod_consts[42];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[84], tmp_assign_source_47);
    }
    {
        PyObject *tmp_assign_source_48;
        tmp_assign_source_48 = mod_consts[44];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[85], tmp_assign_source_48);
    }
    {
        PyObject *tmp_assign_source_49;
        tmp_assign_source_49 = mod_consts[46];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[86], tmp_assign_source_49);
    }
    {
        PyObject *tmp_assign_source_50;
        tmp_assign_source_50 = mod_consts[48];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[87], tmp_assign_source_50);
    }
    {
        PyObject *tmp_assign_source_51;
        tmp_assign_source_51 = mod_consts[50];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[88], tmp_assign_source_51);
    }
    {
        PyObject *tmp_assign_source_52;
        tmp_assign_source_52 = mod_consts[52];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[89], tmp_assign_source_52);
    }
    {
        PyObject *tmp_assign_source_53;
        tmp_assign_source_53 = mod_consts[40];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[90], tmp_assign_source_53);
    }
    {
        PyObject *tmp_assign_source_54;
        tmp_assign_source_54 = mod_consts[42];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[91], tmp_assign_source_54);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_tuple_element_8;
        tmp_tuple_element_8 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_tuple_element_8 == NULL)) {
            tmp_tuple_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
        }

        if (tmp_tuple_element_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;

            goto try_except_handler_5;
        }
        tmp_assign_source_55 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_55, 0, tmp_tuple_element_8);
        assert(tmp_class_creation_2__bases_orig == NULL);
        tmp_class_creation_2__bases_orig = tmp_assign_source_55;
    }
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dircall_arg1_2 = tmp_class_creation_2__bases_orig;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_56 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_56 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;

            goto try_except_handler_5;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_56;
    }
    {
        PyObject *tmp_assign_source_57;
        tmp_assign_source_57 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_57;
    }
    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_metaclass_value_2;
        nuitka_bool tmp_condition_result_7;
        int tmp_truth_name_3;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_bases_value_2;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
        if (tmp_truth_name_3 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;

            goto try_except_handler_5;
        }
        tmp_condition_result_7 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_expression_value_9 = tmp_class_creation_2__bases;
        tmp_subscript_value_2 = mod_consts[9];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_9, tmp_subscript_value_2, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;

            goto try_except_handler_5;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;

            goto try_except_handler_5;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_2);
        condexpr_end_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_value_2 = tmp_class_creation_2__bases;
        tmp_assign_source_58 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
        Py_DECREF(tmp_metaclass_value_2);
        if (tmp_assign_source_58 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;

            goto try_except_handler_5;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_58;
    }
    {
        bool tmp_condition_result_8;
        PyObject *tmp_expression_value_10;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_10 = tmp_class_creation_2__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_10, mod_consts[25]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;

            goto try_except_handler_5;
        }
        tmp_condition_result_8 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_8 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assign_source_59;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_9;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_11 = tmp_class_creation_2__metaclass;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[25]);
        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;

            goto try_except_handler_5;
        }
        tmp_tuple_element_9 = mod_consts[92];
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_9);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_9 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_9);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
        frame_e33b4e37eb07fbc5c2cc2b38efc41113->m_frame.f_lineno = 103;
        tmp_assign_source_59 = CALL_FUNCTION(tstate, tmp_called_value_6, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_value_3);
        if (tmp_assign_source_59 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;

            goto try_except_handler_5;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_59;
    }
    {
        bool tmp_condition_result_9;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_12;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_12 = tmp_class_creation_2__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_12, mod_consts[27]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;

            goto try_except_handler_5;
        }
        tmp_operand_value_2 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        assert(!(tmp_res == -1));
        tmp_condition_result_9 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_9 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_raise_value_2;
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        PyObject *tmp_tuple_element_10;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_name_value_4;
        PyObject *tmp_default_value_2;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_mod_expr_left_2 = mod_consts[28];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_13 = tmp_class_creation_2__metaclass;
        tmp_name_value_4 = mod_consts[29];
        tmp_default_value_2 = mod_consts[30];
        tmp_tuple_element_10 = BUILTIN_GETATTR(tstate, tmp_expression_value_13, tmp_name_value_4, tmp_default_value_2);
        if (tmp_tuple_element_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;

            goto try_except_handler_5;
        }
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_14;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_10);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_4 = tmp_class_creation_2__prepared;
            tmp_expression_value_14 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_value_14 == NULL));
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[29]);
            Py_DECREF(tmp_expression_value_14);
            if (tmp_tuple_element_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 103;

                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_10);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_mod_expr_right_2);
        goto try_except_handler_5;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_raise_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;

            goto try_except_handler_5;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 103;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_5;
    }
    branch_no_7:;
    goto branch_end_6;
    branch_no_6:;
    {
        PyObject *tmp_assign_source_60;
        tmp_assign_source_60 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_60;
    }
    branch_end_6:;
    {
        PyObject *tmp_assign_source_61;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_pyglet$libs$x11$xf86vmode$$$class__2_struct_anon_93_103 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[31];
        tmp_res = PyObject_SetItem(locals_pyglet$libs$x11$xf86vmode$$$class__2_struct_anon_93_103, mod_consts[32], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;

            goto try_except_handler_7;
        }
        tmp_dictset_value = mod_consts[92];
        tmp_res = PyObject_SetItem(locals_pyglet$libs$x11$xf86vmode$$$class__2_struct_anon_93_103, mod_consts[33], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;

            goto try_except_handler_7;
        }
        frame_464f698cb0bf1975fa78e31db51a4c6b_3 = MAKE_CLASS_FRAME(tstate, codeobj_464f698cb0bf1975fa78e31db51a4c6b, module_pyglet$libs$x11$xf86vmode, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_464f698cb0bf1975fa78e31db51a4c6b_3);
        assert(Py_REFCNT(frame_464f698cb0bf1975fa78e31db51a4c6b_3) == 2);

        // Framed code:
        tmp_dictset_value = MAKE_LIST12(mod_consts[93]);
        tmp_res = PyObject_SetItem(locals_pyglet$libs$x11$xf86vmode$$$class__2_struct_anon_93_103, mod_consts[94], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_464f698cb0bf1975fa78e31db51a4c6b_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_464f698cb0bf1975fa78e31db51a4c6b_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_464f698cb0bf1975fa78e31db51a4c6b_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_464f698cb0bf1975fa78e31db51a4c6b_3,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_464f698cb0bf1975fa78e31db51a4c6b_3);

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
            nuitka_bool tmp_condition_result_10;
            PyObject *tmp_cmp_expr_left_3;
            PyObject *tmp_cmp_expr_right_3;
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_cmp_expr_left_3 = tmp_class_creation_2__bases;
            CHECK_OBJECT(tmp_class_creation_2__bases_orig);
            tmp_cmp_expr_right_3 = tmp_class_creation_2__bases_orig;
            tmp_condition_result_10 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
            if (tmp_condition_result_10 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 103;

                goto try_except_handler_7;
            }
            if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
                goto branch_yes_8;
            } else {
                goto branch_no_8;
            }
        }
        branch_yes_8:;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dictset_value = tmp_class_creation_2__bases_orig;
        tmp_res = PyObject_SetItem(locals_pyglet$libs$x11$xf86vmode$$$class__2_struct_anon_93_103, mod_consts[37], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;

            goto try_except_handler_7;
        }
        branch_no_8:;
        {
            PyObject *tmp_assign_source_62;
            PyObject *tmp_called_value_7;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_11;
            PyObject *tmp_kwargs_value_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_7 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_11 = mod_consts[92];
            tmp_args_value_4 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_11);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_11 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_11);
            tmp_tuple_element_11 = locals_pyglet$libs$x11$xf86vmode$$$class__2_struct_anon_93_103;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_11);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_2__class_decl_dict;
            frame_e33b4e37eb07fbc5c2cc2b38efc41113->m_frame.f_lineno = 103;
            tmp_assign_source_62 = CALL_FUNCTION(tstate, tmp_called_value_7, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_62 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 103;

                goto try_except_handler_7;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_62;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_61 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_61);
        goto try_return_handler_7;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        Py_DECREF(locals_pyglet$libs$x11$xf86vmode$$$class__2_struct_anon_93_103);
        locals_pyglet$libs$x11$xf86vmode$$$class__2_struct_anon_93_103 = NULL;
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

        Py_DECREF(locals_pyglet$libs$x11$xf86vmode$$$class__2_struct_anon_93_103);
        locals_pyglet$libs$x11$xf86vmode$$$class__2_struct_anon_93_103 = NULL;
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
        exception_lineno = 103;
        goto try_except_handler_5;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[92], tmp_assign_source_61);
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
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
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
        PyObject *tmp_assign_source_63;
        tmp_assign_source_63 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_assign_source_63 == NULL)) {
            tmp_assign_source_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_assign_source_63 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[95], tmp_assign_source_63);
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_list_element_2;
        PyObject *tmp_tuple_element_12;
        PyObject *tmp_assattr_target_3;
        tmp_tuple_element_12 = mod_consts[96];
        tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_12);
        tmp_tuple_element_12 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[97]);

        if (unlikely(tmp_tuple_element_12 == NULL)) {
            tmp_tuple_element_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[97]);
        }

        if (tmp_tuple_element_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;

            goto tuple_build_exception_5;
        }
        PyTuple_SET_ITEM0(tmp_list_element_2, 1, tmp_tuple_element_12);
        goto tuple_build_noexception_5;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_5:;
        Py_DECREF(tmp_list_element_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_5:;
        tmp_assattr_value_3 = MAKE_LIST_EMPTY(12);
        {
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
            PyList_SET_ITEM(tmp_assattr_value_3, 0, tmp_list_element_2);
            tmp_tuple_element_13 = mod_consts[98];
            tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_13);
            tmp_tuple_element_13 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[97]);

            if (unlikely(tmp_tuple_element_13 == NULL)) {
                tmp_tuple_element_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[97]);
            }

            if (tmp_tuple_element_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 121;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM0(tmp_list_element_2, 1, tmp_tuple_element_13);
            goto tuple_build_noexception_6;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_6:;
            Py_DECREF(tmp_list_element_2);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_6:;
            PyList_SET_ITEM(tmp_assattr_value_3, 1, tmp_list_element_2);
            tmp_tuple_element_14 = mod_consts[99];
            tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_14);
            tmp_tuple_element_14 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[97]);

            if (unlikely(tmp_tuple_element_14 == NULL)) {
                tmp_tuple_element_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[97]);
            }

            if (tmp_tuple_element_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 122;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM0(tmp_list_element_2, 1, tmp_tuple_element_14);
            goto tuple_build_noexception_7;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_7:;
            Py_DECREF(tmp_list_element_2);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_7:;
            PyList_SET_ITEM(tmp_assattr_value_3, 2, tmp_list_element_2);
            tmp_tuple_element_15 = mod_consts[100];
            tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_15);
            tmp_tuple_element_15 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[97]);

            if (unlikely(tmp_tuple_element_15 == NULL)) {
                tmp_tuple_element_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[97]);
            }

            if (tmp_tuple_element_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 123;

                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM0(tmp_list_element_2, 1, tmp_tuple_element_15);
            goto tuple_build_noexception_8;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_8:;
            Py_DECREF(tmp_list_element_2);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_8:;
            PyList_SET_ITEM(tmp_assattr_value_3, 3, tmp_list_element_2);
            tmp_tuple_element_16 = mod_consts[101];
            tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_16);
            tmp_tuple_element_16 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[97]);

            if (unlikely(tmp_tuple_element_16 == NULL)) {
                tmp_tuple_element_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[97]);
            }

            if (tmp_tuple_element_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 124;

                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM0(tmp_list_element_2, 1, tmp_tuple_element_16);
            goto tuple_build_noexception_9;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_9:;
            Py_DECREF(tmp_list_element_2);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_9:;
            PyList_SET_ITEM(tmp_assattr_value_3, 4, tmp_list_element_2);
            tmp_tuple_element_17 = mod_consts[102];
            tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_17);
            tmp_tuple_element_17 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[97]);

            if (unlikely(tmp_tuple_element_17 == NULL)) {
                tmp_tuple_element_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[97]);
            }

            if (tmp_tuple_element_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 125;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM0(tmp_list_element_2, 1, tmp_tuple_element_17);
            goto tuple_build_noexception_10;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_10:;
            Py_DECREF(tmp_list_element_2);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_10:;
            PyList_SET_ITEM(tmp_assattr_value_3, 5, tmp_list_element_2);
            tmp_tuple_element_18 = mod_consts[103];
            tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_18);
            tmp_tuple_element_18 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[97]);

            if (unlikely(tmp_tuple_element_18 == NULL)) {
                tmp_tuple_element_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[97]);
            }

            if (tmp_tuple_element_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 126;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM0(tmp_list_element_2, 1, tmp_tuple_element_18);
            goto tuple_build_noexception_11;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_11:;
            Py_DECREF(tmp_list_element_2);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_11:;
            PyList_SET_ITEM(tmp_assattr_value_3, 6, tmp_list_element_2);
            tmp_tuple_element_19 = mod_consts[104];
            tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_19);
            tmp_tuple_element_19 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[97]);

            if (unlikely(tmp_tuple_element_19 == NULL)) {
                tmp_tuple_element_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[97]);
            }

            if (tmp_tuple_element_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 127;

                goto tuple_build_exception_12;
            }
            PyTuple_SET_ITEM0(tmp_list_element_2, 1, tmp_tuple_element_19);
            goto tuple_build_noexception_12;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_12:;
            Py_DECREF(tmp_list_element_2);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_12:;
            PyList_SET_ITEM(tmp_assattr_value_3, 7, tmp_list_element_2);
            tmp_tuple_element_20 = mod_consts[105];
            tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_20);
            tmp_tuple_element_20 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[97]);

            if (unlikely(tmp_tuple_element_20 == NULL)) {
                tmp_tuple_element_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[97]);
            }

            if (tmp_tuple_element_20 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 128;

                goto tuple_build_exception_13;
            }
            PyTuple_SET_ITEM0(tmp_list_element_2, 1, tmp_tuple_element_20);
            goto tuple_build_noexception_13;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_13:;
            Py_DECREF(tmp_list_element_2);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_13:;
            PyList_SET_ITEM(tmp_assattr_value_3, 8, tmp_list_element_2);
            tmp_tuple_element_21 = mod_consts[106];
            tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_21);
            tmp_tuple_element_21 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[107]);

            if (unlikely(tmp_tuple_element_21 == NULL)) {
                tmp_tuple_element_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[107]);
            }

            if (tmp_tuple_element_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 129;

                goto tuple_build_exception_14;
            }
            PyTuple_SET_ITEM0(tmp_list_element_2, 1, tmp_tuple_element_21);
            goto tuple_build_noexception_14;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_14:;
            Py_DECREF(tmp_list_element_2);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_14:;
            PyList_SET_ITEM(tmp_assattr_value_3, 9, tmp_list_element_2);
            tmp_tuple_element_22 = mod_consts[108];
            tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_22);
            tmp_tuple_element_22 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[35]);

            if (unlikely(tmp_tuple_element_22 == NULL)) {
                tmp_tuple_element_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
            }

            if (tmp_tuple_element_22 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 130;

                goto tuple_build_exception_15;
            }
            PyTuple_SET_ITEM0(tmp_list_element_2, 1, tmp_tuple_element_22);
            goto tuple_build_noexception_15;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_15:;
            Py_DECREF(tmp_list_element_2);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_15:;
            PyList_SET_ITEM(tmp_assattr_value_3, 10, tmp_list_element_2);
            tmp_tuple_element_23 = mod_consts[109];
            tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_8;
                PyObject *tmp_args_element_value_5;
                PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_23);
                tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[110]);

                if (unlikely(tmp_called_value_8 == NULL)) {
                    tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[110]);
                }

                if (tmp_called_value_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 131;

                    goto tuple_build_exception_16;
                }
                tmp_args_element_value_5 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[95]);

                if (unlikely(tmp_args_element_value_5 == NULL)) {
                    tmp_args_element_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[95]);
                }

                assert(!(tmp_args_element_value_5 == NULL));
                frame_e33b4e37eb07fbc5c2cc2b38efc41113->m_frame.f_lineno = 131;
                tmp_tuple_element_23 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_5);
                if (tmp_tuple_element_23 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 131;

                    goto tuple_build_exception_16;
                }
                PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_23);
            }
            goto tuple_build_noexception_16;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_16:;
            Py_DECREF(tmp_list_element_2);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_16:;
            PyList_SET_ITEM(tmp_assattr_value_3, 11, tmp_list_element_2);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_assattr_value_3);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        tmp_assattr_target_3 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_assattr_target_3 == NULL)) {
            tmp_assattr_target_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[92]);
        }

        if (tmp_assattr_target_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_3);

            exception_lineno = 119;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[36], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_64;
        tmp_assign_source_64 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_assign_source_64 == NULL)) {
            tmp_assign_source_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[92]);
        }

        if (tmp_assign_source_64 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[111], tmp_assign_source_64);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_65;
        PyObject *tmp_tuple_element_24;
        tmp_tuple_element_24 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_tuple_element_24 == NULL)) {
            tmp_tuple_element_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
        }

        if (tmp_tuple_element_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto try_except_handler_8;
        }
        tmp_assign_source_65 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_65, 0, tmp_tuple_element_24);
        assert(tmp_class_creation_3__bases_orig == NULL);
        tmp_class_creation_3__bases_orig = tmp_assign_source_65;
    }
    {
        PyObject *tmp_assign_source_66;
        PyObject *tmp_dircall_arg1_3;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dircall_arg1_3 = tmp_class_creation_3__bases_orig;
        Py_INCREF(tmp_dircall_arg1_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
            tmp_assign_source_66 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_66 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto try_except_handler_8;
        }
        assert(tmp_class_creation_3__bases == NULL);
        tmp_class_creation_3__bases = tmp_assign_source_66;
    }
    {
        PyObject *tmp_assign_source_67;
        tmp_assign_source_67 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_67;
    }
    {
        PyObject *tmp_assign_source_68;
        PyObject *tmp_metaclass_value_3;
        nuitka_bool tmp_condition_result_11;
        int tmp_truth_name_4;
        PyObject *tmp_type_arg_5;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_bases_value_3;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_class_creation_3__bases);
        if (tmp_truth_name_4 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto try_except_handler_8;
        }
        tmp_condition_result_11 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_3;
        } else {
            goto condexpr_false_3;
        }
        condexpr_true_3:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_expression_value_15 = tmp_class_creation_3__bases;
        tmp_subscript_value_3 = mod_consts[9];
        tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_15, tmp_subscript_value_3, 0);
        if (tmp_type_arg_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto try_except_handler_8;
        }
        tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
        Py_DECREF(tmp_type_arg_5);
        if (tmp_metaclass_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto try_except_handler_8;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_3);
        condexpr_end_3:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_bases_value_3 = tmp_class_creation_3__bases;
        tmp_assign_source_68 = SELECT_METACLASS(tstate, tmp_metaclass_value_3, tmp_bases_value_3);
        Py_DECREF(tmp_metaclass_value_3);
        if (tmp_assign_source_68 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto try_except_handler_8;
        }
        assert(tmp_class_creation_3__metaclass == NULL);
        tmp_class_creation_3__metaclass = tmp_assign_source_68;
    }
    {
        bool tmp_condition_result_12;
        PyObject *tmp_expression_value_16;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_16 = tmp_class_creation_3__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_16, mod_consts[25]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto try_except_handler_8;
        }
        tmp_condition_result_12 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_12 != false) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_assign_source_69;
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_args_value_5;
        PyObject *tmp_tuple_element_25;
        PyObject *tmp_kwargs_value_5;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_17 = tmp_class_creation_3__metaclass;
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts[25]);
        if (tmp_called_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto try_except_handler_8;
        }
        tmp_tuple_element_25 = mod_consts[112];
        tmp_args_value_5 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_25);
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_tuple_element_25 = tmp_class_creation_3__bases;
        PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_25);
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_kwargs_value_5 = tmp_class_creation_3__class_decl_dict;
        frame_e33b4e37eb07fbc5c2cc2b38efc41113->m_frame.f_lineno = 135;
        tmp_assign_source_69 = CALL_FUNCTION(tstate, tmp_called_value_9, tmp_args_value_5, tmp_kwargs_value_5);
        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_args_value_5);
        if (tmp_assign_source_69 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto try_except_handler_8;
        }
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_69;
    }
    {
        bool tmp_condition_result_13;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_expression_value_18;
        CHECK_OBJECT(tmp_class_creation_3__prepared);
        tmp_expression_value_18 = tmp_class_creation_3__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_18, mod_consts[27]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto try_except_handler_8;
        }
        tmp_operand_value_3 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        assert(!(tmp_res == -1));
        tmp_condition_result_13 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_13 != false) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_raise_value_3;
        PyObject *tmp_mod_expr_left_3;
        PyObject *tmp_mod_expr_right_3;
        PyObject *tmp_tuple_element_26;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_name_value_5;
        PyObject *tmp_default_value_3;
        tmp_raise_type_3 = PyExc_TypeError;
        tmp_mod_expr_left_3 = mod_consts[28];
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_19 = tmp_class_creation_3__metaclass;
        tmp_name_value_5 = mod_consts[29];
        tmp_default_value_3 = mod_consts[30];
        tmp_tuple_element_26 = BUILTIN_GETATTR(tstate, tmp_expression_value_19, tmp_name_value_5, tmp_default_value_3);
        if (tmp_tuple_element_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto try_except_handler_8;
        }
        tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_20;
            PyObject *tmp_type_arg_6;
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_26);
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_type_arg_6 = tmp_class_creation_3__prepared;
            tmp_expression_value_20 = BUILTIN_TYPE1(tmp_type_arg_6);
            assert(!(tmp_expression_value_20 == NULL));
            tmp_tuple_element_26 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts[29]);
            Py_DECREF(tmp_expression_value_20);
            if (tmp_tuple_element_26 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 135;

                goto tuple_build_exception_17;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_26);
        }
        goto tuple_build_noexception_17;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_17:;
        Py_DECREF(tmp_mod_expr_right_3);
        goto try_except_handler_8;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_17:;
        tmp_raise_value_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
        Py_DECREF(tmp_mod_expr_right_3);
        if (tmp_raise_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto try_except_handler_8;
        }
        exception_type = tmp_raise_type_3;
        Py_INCREF(tmp_raise_type_3);
        exception_value = tmp_raise_value_3;
        exception_lineno = 135;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_8;
    }
    branch_no_10:;
    goto branch_end_9;
    branch_no_9:;
    {
        PyObject *tmp_assign_source_70;
        tmp_assign_source_70 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_70;
    }
    branch_end_9:;
    {
        PyObject *tmp_assign_source_71;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_pyglet$libs$x11$xf86vmode$$$class__3_struct_anon_94_135 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[31];
        tmp_res = PyObject_SetItem(locals_pyglet$libs$x11$xf86vmode$$$class__3_struct_anon_94_135, mod_consts[32], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto try_except_handler_10;
        }
        tmp_dictset_value = mod_consts[112];
        tmp_res = PyObject_SetItem(locals_pyglet$libs$x11$xf86vmode$$$class__3_struct_anon_94_135, mod_consts[33], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto try_except_handler_10;
        }
        frame_cb34ed1b62fdd9d32d898d27189b753a_4 = MAKE_CLASS_FRAME(tstate, codeobj_cb34ed1b62fdd9d32d898d27189b753a, module_pyglet$libs$x11$xf86vmode, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_cb34ed1b62fdd9d32d898d27189b753a_4);
        assert(Py_REFCNT(frame_cb34ed1b62fdd9d32d898d27189b753a_4) == 2);

        // Framed code:
        tmp_dictset_value = LIST_COPY(mod_consts[113]);
        tmp_res = PyObject_SetItem(locals_pyglet$libs$x11$xf86vmode$$$class__3_struct_anon_94_135, mod_consts[94], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_3;
        frame_exception_exit_4:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_cb34ed1b62fdd9d32d898d27189b753a_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_cb34ed1b62fdd9d32d898d27189b753a_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_cb34ed1b62fdd9d32d898d27189b753a_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_cb34ed1b62fdd9d32d898d27189b753a_4,
            type_description_2,
            outline_2_var___class__
        );



        assertFrameObject(frame_cb34ed1b62fdd9d32d898d27189b753a_4);

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
            nuitka_bool tmp_condition_result_14;
            PyObject *tmp_cmp_expr_left_4;
            PyObject *tmp_cmp_expr_right_4;
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_cmp_expr_left_4 = tmp_class_creation_3__bases;
            CHECK_OBJECT(tmp_class_creation_3__bases_orig);
            tmp_cmp_expr_right_4 = tmp_class_creation_3__bases_orig;
            tmp_condition_result_14 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
            if (tmp_condition_result_14 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 135;

                goto try_except_handler_10;
            }
            if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
                goto branch_yes_11;
            } else {
                goto branch_no_11;
            }
        }
        branch_yes_11:;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dictset_value = tmp_class_creation_3__bases_orig;
        tmp_res = PyObject_SetItem(locals_pyglet$libs$x11$xf86vmode$$$class__3_struct_anon_94_135, mod_consts[37], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto try_except_handler_10;
        }
        branch_no_11:;
        {
            PyObject *tmp_assign_source_72;
            PyObject *tmp_called_value_10;
            PyObject *tmp_args_value_6;
            PyObject *tmp_tuple_element_27;
            PyObject *tmp_kwargs_value_6;
            CHECK_OBJECT(tmp_class_creation_3__metaclass);
            tmp_called_value_10 = tmp_class_creation_3__metaclass;
            tmp_tuple_element_27 = mod_consts[112];
            tmp_args_value_6 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_27);
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_tuple_element_27 = tmp_class_creation_3__bases;
            PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_27);
            tmp_tuple_element_27 = locals_pyglet$libs$x11$xf86vmode$$$class__3_struct_anon_94_135;
            PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_27);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_value_6 = tmp_class_creation_3__class_decl_dict;
            frame_e33b4e37eb07fbc5c2cc2b38efc41113->m_frame.f_lineno = 135;
            tmp_assign_source_72 = CALL_FUNCTION(tstate, tmp_called_value_10, tmp_args_value_6, tmp_kwargs_value_6);
            Py_DECREF(tmp_args_value_6);
            if (tmp_assign_source_72 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 135;

                goto try_except_handler_10;
            }
            assert(outline_2_var___class__ == NULL);
            outline_2_var___class__ = tmp_assign_source_72;
        }
        CHECK_OBJECT(outline_2_var___class__);
        tmp_assign_source_71 = outline_2_var___class__;
        Py_INCREF(tmp_assign_source_71);
        goto try_return_handler_10;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_10:;
        Py_DECREF(locals_pyglet$libs$x11$xf86vmode$$$class__3_struct_anon_94_135);
        locals_pyglet$libs$x11$xf86vmode$$$class__3_struct_anon_94_135 = NULL;
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

        Py_DECREF(locals_pyglet$libs$x11$xf86vmode$$$class__3_struct_anon_94_135);
        locals_pyglet$libs$x11$xf86vmode$$$class__3_struct_anon_94_135 = NULL;
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
        exception_lineno = 135;
        goto try_except_handler_8;
        outline_result_3:;
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[112], tmp_assign_source_71);
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
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
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
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_list_element_3;
        PyObject *tmp_tuple_element_28;
        PyObject *tmp_assattr_target_4;
        tmp_tuple_element_28 = mod_consts[114];
        tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_28);
        tmp_tuple_element_28 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[107]);

        if (unlikely(tmp_tuple_element_28 == NULL)) {
            tmp_tuple_element_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[107]);
        }

        if (tmp_tuple_element_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;

            goto tuple_build_exception_18;
        }
        PyTuple_SET_ITEM0(tmp_list_element_3, 1, tmp_tuple_element_28);
        goto tuple_build_noexception_18;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_18:;
        Py_DECREF(tmp_list_element_3);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_18:;
        tmp_assattr_value_4 = MAKE_LIST_EMPTY(13);
        {
            PyObject *tmp_tuple_element_29;
            PyObject *tmp_tuple_element_30;
            PyObject *tmp_tuple_element_31;
            PyObject *tmp_tuple_element_32;
            PyObject *tmp_tuple_element_33;
            PyObject *tmp_tuple_element_34;
            PyObject *tmp_tuple_element_35;
            PyObject *tmp_tuple_element_36;
            PyObject *tmp_tuple_element_37;
            PyObject *tmp_tuple_element_38;
            PyObject *tmp_tuple_element_39;
            PyObject *tmp_tuple_element_40;
            PyList_SET_ITEM(tmp_assattr_value_4, 0, tmp_list_element_3);
            tmp_tuple_element_29 = mod_consts[96];
            tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_29);
            tmp_tuple_element_29 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[97]);

            if (unlikely(tmp_tuple_element_29 == NULL)) {
                tmp_tuple_element_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[97]);
            }

            if (tmp_tuple_element_29 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 153;

                goto tuple_build_exception_19;
            }
            PyTuple_SET_ITEM0(tmp_list_element_3, 1, tmp_tuple_element_29);
            goto tuple_build_noexception_19;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_19:;
            Py_DECREF(tmp_list_element_3);
            goto list_build_exception_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_19:;
            PyList_SET_ITEM(tmp_assattr_value_4, 1, tmp_list_element_3);
            tmp_tuple_element_30 = mod_consts[98];
            tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_30);
            tmp_tuple_element_30 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[97]);

            if (unlikely(tmp_tuple_element_30 == NULL)) {
                tmp_tuple_element_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[97]);
            }

            if (tmp_tuple_element_30 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 154;

                goto tuple_build_exception_20;
            }
            PyTuple_SET_ITEM0(tmp_list_element_3, 1, tmp_tuple_element_30);
            goto tuple_build_noexception_20;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_20:;
            Py_DECREF(tmp_list_element_3);
            goto list_build_exception_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_20:;
            PyList_SET_ITEM(tmp_assattr_value_4, 2, tmp_list_element_3);
            tmp_tuple_element_31 = mod_consts[99];
            tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_31);
            tmp_tuple_element_31 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[97]);

            if (unlikely(tmp_tuple_element_31 == NULL)) {
                tmp_tuple_element_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[97]);
            }

            if (tmp_tuple_element_31 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 155;

                goto tuple_build_exception_21;
            }
            PyTuple_SET_ITEM0(tmp_list_element_3, 1, tmp_tuple_element_31);
            goto tuple_build_noexception_21;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_21:;
            Py_DECREF(tmp_list_element_3);
            goto list_build_exception_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_21:;
            PyList_SET_ITEM(tmp_assattr_value_4, 3, tmp_list_element_3);
            tmp_tuple_element_32 = mod_consts[100];
            tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_32);
            tmp_tuple_element_32 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[97]);

            if (unlikely(tmp_tuple_element_32 == NULL)) {
                tmp_tuple_element_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[97]);
            }

            if (tmp_tuple_element_32 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 156;

                goto tuple_build_exception_22;
            }
            PyTuple_SET_ITEM0(tmp_list_element_3, 1, tmp_tuple_element_32);
            goto tuple_build_noexception_22;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_22:;
            Py_DECREF(tmp_list_element_3);
            goto list_build_exception_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_22:;
            PyList_SET_ITEM(tmp_assattr_value_4, 4, tmp_list_element_3);
            tmp_tuple_element_33 = mod_consts[101];
            tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_33);
            tmp_tuple_element_33 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[97]);

            if (unlikely(tmp_tuple_element_33 == NULL)) {
                tmp_tuple_element_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[97]);
            }

            if (tmp_tuple_element_33 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 157;

                goto tuple_build_exception_23;
            }
            PyTuple_SET_ITEM0(tmp_list_element_3, 1, tmp_tuple_element_33);
            goto tuple_build_noexception_23;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_23:;
            Py_DECREF(tmp_list_element_3);
            goto list_build_exception_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_23:;
            PyList_SET_ITEM(tmp_assattr_value_4, 5, tmp_list_element_3);
            tmp_tuple_element_34 = mod_consts[102];
            tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_34);
            tmp_tuple_element_34 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[97]);

            if (unlikely(tmp_tuple_element_34 == NULL)) {
                tmp_tuple_element_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[97]);
            }

            if (tmp_tuple_element_34 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 158;

                goto tuple_build_exception_24;
            }
            PyTuple_SET_ITEM0(tmp_list_element_3, 1, tmp_tuple_element_34);
            goto tuple_build_noexception_24;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_24:;
            Py_DECREF(tmp_list_element_3);
            goto list_build_exception_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_24:;
            PyList_SET_ITEM(tmp_assattr_value_4, 6, tmp_list_element_3);
            tmp_tuple_element_35 = mod_consts[103];
            tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_35);
            tmp_tuple_element_35 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[97]);

            if (unlikely(tmp_tuple_element_35 == NULL)) {
                tmp_tuple_element_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[97]);
            }

            if (tmp_tuple_element_35 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 159;

                goto tuple_build_exception_25;
            }
            PyTuple_SET_ITEM0(tmp_list_element_3, 1, tmp_tuple_element_35);
            goto tuple_build_noexception_25;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_25:;
            Py_DECREF(tmp_list_element_3);
            goto list_build_exception_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_25:;
            PyList_SET_ITEM(tmp_assattr_value_4, 7, tmp_list_element_3);
            tmp_tuple_element_36 = mod_consts[104];
            tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_36);
            tmp_tuple_element_36 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[97]);

            if (unlikely(tmp_tuple_element_36 == NULL)) {
                tmp_tuple_element_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[97]);
            }

            if (tmp_tuple_element_36 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 160;

                goto tuple_build_exception_26;
            }
            PyTuple_SET_ITEM0(tmp_list_element_3, 1, tmp_tuple_element_36);
            goto tuple_build_noexception_26;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_26:;
            Py_DECREF(tmp_list_element_3);
            goto list_build_exception_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_26:;
            PyList_SET_ITEM(tmp_assattr_value_4, 8, tmp_list_element_3);
            tmp_tuple_element_37 = mod_consts[105];
            tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_37);
            tmp_tuple_element_37 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[97]);

            if (unlikely(tmp_tuple_element_37 == NULL)) {
                tmp_tuple_element_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[97]);
            }

            if (tmp_tuple_element_37 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 161;

                goto tuple_build_exception_27;
            }
            PyTuple_SET_ITEM0(tmp_list_element_3, 1, tmp_tuple_element_37);
            goto tuple_build_noexception_27;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_27:;
            Py_DECREF(tmp_list_element_3);
            goto list_build_exception_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_27:;
            PyList_SET_ITEM(tmp_assattr_value_4, 9, tmp_list_element_3);
            tmp_tuple_element_38 = mod_consts[106];
            tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_38);
            tmp_tuple_element_38 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[107]);

            if (unlikely(tmp_tuple_element_38 == NULL)) {
                tmp_tuple_element_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[107]);
            }

            if (tmp_tuple_element_38 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 162;

                goto tuple_build_exception_28;
            }
            PyTuple_SET_ITEM0(tmp_list_element_3, 1, tmp_tuple_element_38);
            goto tuple_build_noexception_28;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_28:;
            Py_DECREF(tmp_list_element_3);
            goto list_build_exception_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_28:;
            PyList_SET_ITEM(tmp_assattr_value_4, 10, tmp_list_element_3);
            tmp_tuple_element_39 = mod_consts[108];
            tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_39);
            tmp_tuple_element_39 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[35]);

            if (unlikely(tmp_tuple_element_39 == NULL)) {
                tmp_tuple_element_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
            }

            if (tmp_tuple_element_39 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 163;

                goto tuple_build_exception_29;
            }
            PyTuple_SET_ITEM0(tmp_list_element_3, 1, tmp_tuple_element_39);
            goto tuple_build_noexception_29;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_29:;
            Py_DECREF(tmp_list_element_3);
            goto list_build_exception_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_29:;
            PyList_SET_ITEM(tmp_assattr_value_4, 11, tmp_list_element_3);
            tmp_tuple_element_40 = mod_consts[109];
            tmp_list_element_3 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_11;
                PyObject *tmp_args_element_value_6;
                PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_40);
                tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[110]);

                if (unlikely(tmp_called_value_11 == NULL)) {
                    tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[110]);
                }

                if (tmp_called_value_11 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 164;

                    goto tuple_build_exception_30;
                }
                tmp_args_element_value_6 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[95]);

                if (unlikely(tmp_args_element_value_6 == NULL)) {
                    tmp_args_element_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[95]);
                }

                if (tmp_args_element_value_6 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 164;

                    goto tuple_build_exception_30;
                }
                frame_e33b4e37eb07fbc5c2cc2b38efc41113->m_frame.f_lineno = 164;
                tmp_tuple_element_40 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_6);
                if (tmp_tuple_element_40 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 164;

                    goto tuple_build_exception_30;
                }
                PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_40);
            }
            goto tuple_build_noexception_30;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_30:;
            Py_DECREF(tmp_list_element_3);
            goto list_build_exception_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_30:;
            PyList_SET_ITEM(tmp_assattr_value_4, 12, tmp_list_element_3);
        }
        goto list_build_noexception_2;
        // Exception handling pass through code for list_build:
        list_build_exception_2:;
        Py_DECREF(tmp_assattr_value_4);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_2:;
        tmp_assattr_target_4 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_assattr_target_4 == NULL)) {
            tmp_assattr_target_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_assattr_target_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_4);

            exception_lineno = 151;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts[36], tmp_assattr_value_4);
        Py_DECREF(tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_73;
        tmp_assign_source_73 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_assign_source_73 == NULL)) {
            tmp_assign_source_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_assign_source_73 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[115], tmp_assign_source_73);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_74;
        PyObject *tmp_tuple_element_41;
        tmp_tuple_element_41 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_tuple_element_41 == NULL)) {
            tmp_tuple_element_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
        }

        if (tmp_tuple_element_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;

            goto try_except_handler_11;
        }
        tmp_assign_source_74 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_74, 0, tmp_tuple_element_41);
        assert(tmp_class_creation_4__bases_orig == NULL);
        tmp_class_creation_4__bases_orig = tmp_assign_source_74;
    }
    {
        PyObject *tmp_assign_source_75;
        PyObject *tmp_dircall_arg1_4;
        CHECK_OBJECT(tmp_class_creation_4__bases_orig);
        tmp_dircall_arg1_4 = tmp_class_creation_4__bases_orig;
        Py_INCREF(tmp_dircall_arg1_4);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_4};
            tmp_assign_source_75 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_75 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;

            goto try_except_handler_11;
        }
        assert(tmp_class_creation_4__bases == NULL);
        tmp_class_creation_4__bases = tmp_assign_source_75;
    }
    {
        PyObject *tmp_assign_source_76;
        tmp_assign_source_76 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__class_decl_dict == NULL);
        tmp_class_creation_4__class_decl_dict = tmp_assign_source_76;
    }
    {
        PyObject *tmp_assign_source_77;
        PyObject *tmp_metaclass_value_4;
        nuitka_bool tmp_condition_result_15;
        int tmp_truth_name_5;
        PyObject *tmp_type_arg_7;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_bases_value_4;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_truth_name_5 = CHECK_IF_TRUE(tmp_class_creation_4__bases);
        if (tmp_truth_name_5 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;

            goto try_except_handler_11;
        }
        tmp_condition_result_15 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_4;
        } else {
            goto condexpr_false_4;
        }
        condexpr_true_4:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_expression_value_21 = tmp_class_creation_4__bases;
        tmp_subscript_value_4 = mod_consts[9];
        tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_21, tmp_subscript_value_4, 0);
        if (tmp_type_arg_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;

            goto try_except_handler_11;
        }
        tmp_metaclass_value_4 = BUILTIN_TYPE1(tmp_type_arg_7);
        Py_DECREF(tmp_type_arg_7);
        if (tmp_metaclass_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;

            goto try_except_handler_11;
        }
        goto condexpr_end_4;
        condexpr_false_4:;
        tmp_metaclass_value_4 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_4);
        condexpr_end_4:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_bases_value_4 = tmp_class_creation_4__bases;
        tmp_assign_source_77 = SELECT_METACLASS(tstate, tmp_metaclass_value_4, tmp_bases_value_4);
        Py_DECREF(tmp_metaclass_value_4);
        if (tmp_assign_source_77 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;

            goto try_except_handler_11;
        }
        assert(tmp_class_creation_4__metaclass == NULL);
        tmp_class_creation_4__metaclass = tmp_assign_source_77;
    }
    {
        bool tmp_condition_result_16;
        PyObject *tmp_expression_value_22;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_22 = tmp_class_creation_4__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_22, mod_consts[25]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;

            goto try_except_handler_11;
        }
        tmp_condition_result_16 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_16 != false) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
    }
    branch_yes_12:;
    {
        PyObject *tmp_assign_source_78;
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_args_value_7;
        PyObject *tmp_tuple_element_42;
        PyObject *tmp_kwargs_value_7;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_23 = tmp_class_creation_4__metaclass;
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts[25]);
        if (tmp_called_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;

            goto try_except_handler_11;
        }
        tmp_tuple_element_42 = mod_consts[116];
        tmp_args_value_7 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_42);
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_tuple_element_42 = tmp_class_creation_4__bases;
        PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_42);
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_kwargs_value_7 = tmp_class_creation_4__class_decl_dict;
        frame_e33b4e37eb07fbc5c2cc2b38efc41113->m_frame.f_lineno = 168;
        tmp_assign_source_78 = CALL_FUNCTION(tstate, tmp_called_value_12, tmp_args_value_7, tmp_kwargs_value_7);
        Py_DECREF(tmp_called_value_12);
        Py_DECREF(tmp_args_value_7);
        if (tmp_assign_source_78 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;

            goto try_except_handler_11;
        }
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_78;
    }
    {
        bool tmp_condition_result_17;
        PyObject *tmp_operand_value_4;
        PyObject *tmp_expression_value_24;
        CHECK_OBJECT(tmp_class_creation_4__prepared);
        tmp_expression_value_24 = tmp_class_creation_4__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_24, mod_consts[27]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;

            goto try_except_handler_11;
        }
        tmp_operand_value_4 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
        assert(!(tmp_res == -1));
        tmp_condition_result_17 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_17 != false) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    {
        PyObject *tmp_raise_type_4;
        PyObject *tmp_raise_value_4;
        PyObject *tmp_mod_expr_left_4;
        PyObject *tmp_mod_expr_right_4;
        PyObject *tmp_tuple_element_43;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_name_value_6;
        PyObject *tmp_default_value_4;
        tmp_raise_type_4 = PyExc_TypeError;
        tmp_mod_expr_left_4 = mod_consts[28];
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_25 = tmp_class_creation_4__metaclass;
        tmp_name_value_6 = mod_consts[29];
        tmp_default_value_4 = mod_consts[30];
        tmp_tuple_element_43 = BUILTIN_GETATTR(tstate, tmp_expression_value_25, tmp_name_value_6, tmp_default_value_4);
        if (tmp_tuple_element_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;

            goto try_except_handler_11;
        }
        tmp_mod_expr_right_4 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_26;
            PyObject *tmp_type_arg_8;
            PyTuple_SET_ITEM(tmp_mod_expr_right_4, 0, tmp_tuple_element_43);
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_type_arg_8 = tmp_class_creation_4__prepared;
            tmp_expression_value_26 = BUILTIN_TYPE1(tmp_type_arg_8);
            assert(!(tmp_expression_value_26 == NULL));
            tmp_tuple_element_43 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts[29]);
            Py_DECREF(tmp_expression_value_26);
            if (tmp_tuple_element_43 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 168;

                goto tuple_build_exception_31;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_4, 1, tmp_tuple_element_43);
        }
        goto tuple_build_noexception_31;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_31:;
        Py_DECREF(tmp_mod_expr_right_4);
        goto try_except_handler_11;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_31:;
        tmp_raise_value_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
        Py_DECREF(tmp_mod_expr_right_4);
        if (tmp_raise_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;

            goto try_except_handler_11;
        }
        exception_type = tmp_raise_type_4;
        Py_INCREF(tmp_raise_type_4);
        exception_value = tmp_raise_value_4;
        exception_lineno = 168;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_11;
    }
    branch_no_13:;
    goto branch_end_12;
    branch_no_12:;
    {
        PyObject *tmp_assign_source_79;
        tmp_assign_source_79 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_79;
    }
    branch_end_12:;
    {
        PyObject *tmp_assign_source_80;
        {
            PyObject *tmp_set_locals_4;
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_set_locals_4 = tmp_class_creation_4__prepared;
            locals_pyglet$libs$x11$xf86vmode$$$class__4_struct_anon_95_168 = tmp_set_locals_4;
            Py_INCREF(tmp_set_locals_4);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[31];
        tmp_res = PyObject_SetItem(locals_pyglet$libs$x11$xf86vmode$$$class__4_struct_anon_95_168, mod_consts[32], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;

            goto try_except_handler_13;
        }
        tmp_dictset_value = mod_consts[116];
        tmp_res = PyObject_SetItem(locals_pyglet$libs$x11$xf86vmode$$$class__4_struct_anon_95_168, mod_consts[33], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;

            goto try_except_handler_13;
        }
        frame_1a79756d66e47b994e945291725c4440_5 = MAKE_CLASS_FRAME(tstate, codeobj_1a79756d66e47b994e945291725c4440, module_pyglet$libs$x11$xf86vmode, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_1a79756d66e47b994e945291725c4440_5);
        assert(Py_REFCNT(frame_1a79756d66e47b994e945291725c4440_5) == 2);

        // Framed code:
        tmp_dictset_value = MAKE_LIST2(mod_consts[117],mod_consts[118]);
        tmp_res = PyObject_SetItem(locals_pyglet$libs$x11$xf86vmode$$$class__4_struct_anon_95_168, mod_consts[94], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_4;
        frame_exception_exit_5:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_1a79756d66e47b994e945291725c4440_5, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_1a79756d66e47b994e945291725c4440_5->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_1a79756d66e47b994e945291725c4440_5, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_1a79756d66e47b994e945291725c4440_5,
            type_description_2,
            outline_3_var___class__
        );



        assertFrameObject(frame_1a79756d66e47b994e945291725c4440_5);

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
            nuitka_bool tmp_condition_result_18;
            PyObject *tmp_cmp_expr_left_5;
            PyObject *tmp_cmp_expr_right_5;
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_cmp_expr_left_5 = tmp_class_creation_4__bases;
            CHECK_OBJECT(tmp_class_creation_4__bases_orig);
            tmp_cmp_expr_right_5 = tmp_class_creation_4__bases_orig;
            tmp_condition_result_18 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
            if (tmp_condition_result_18 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 168;

                goto try_except_handler_13;
            }
            if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
                goto branch_yes_14;
            } else {
                goto branch_no_14;
            }
        }
        branch_yes_14:;
        CHECK_OBJECT(tmp_class_creation_4__bases_orig);
        tmp_dictset_value = tmp_class_creation_4__bases_orig;
        tmp_res = PyObject_SetItem(locals_pyglet$libs$x11$xf86vmode$$$class__4_struct_anon_95_168, mod_consts[37], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;

            goto try_except_handler_13;
        }
        branch_no_14:;
        {
            PyObject *tmp_assign_source_81;
            PyObject *tmp_called_value_13;
            PyObject *tmp_args_value_8;
            PyObject *tmp_tuple_element_44;
            PyObject *tmp_kwargs_value_8;
            CHECK_OBJECT(tmp_class_creation_4__metaclass);
            tmp_called_value_13 = tmp_class_creation_4__metaclass;
            tmp_tuple_element_44 = mod_consts[116];
            tmp_args_value_8 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_44);
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_tuple_element_44 = tmp_class_creation_4__bases;
            PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_44);
            tmp_tuple_element_44 = locals_pyglet$libs$x11$xf86vmode$$$class__4_struct_anon_95_168;
            PyTuple_SET_ITEM0(tmp_args_value_8, 2, tmp_tuple_element_44);
            CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
            tmp_kwargs_value_8 = tmp_class_creation_4__class_decl_dict;
            frame_e33b4e37eb07fbc5c2cc2b38efc41113->m_frame.f_lineno = 168;
            tmp_assign_source_81 = CALL_FUNCTION(tstate, tmp_called_value_13, tmp_args_value_8, tmp_kwargs_value_8);
            Py_DECREF(tmp_args_value_8);
            if (tmp_assign_source_81 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 168;

                goto try_except_handler_13;
            }
            assert(outline_3_var___class__ == NULL);
            outline_3_var___class__ = tmp_assign_source_81;
        }
        CHECK_OBJECT(outline_3_var___class__);
        tmp_assign_source_80 = outline_3_var___class__;
        Py_INCREF(tmp_assign_source_80);
        goto try_return_handler_13;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_13:;
        Py_DECREF(locals_pyglet$libs$x11$xf86vmode$$$class__4_struct_anon_95_168);
        locals_pyglet$libs$x11$xf86vmode$$$class__4_struct_anon_95_168 = NULL;
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

        Py_DECREF(locals_pyglet$libs$x11$xf86vmode$$$class__4_struct_anon_95_168);
        locals_pyglet$libs$x11$xf86vmode$$$class__4_struct_anon_95_168 = NULL;
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
        exception_lineno = 168;
        goto try_except_handler_11;
        outline_result_4:;
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[116], tmp_assign_source_80);
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
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
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
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_list_element_4;
        PyObject *tmp_tuple_element_45;
        PyObject *tmp_assattr_target_5;
        tmp_tuple_element_45 = mod_consts[117];
        tmp_list_element_4 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_list_element_4, 0, tmp_tuple_element_45);
        tmp_tuple_element_45 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[119]);

        if (unlikely(tmp_tuple_element_45 == NULL)) {
            tmp_tuple_element_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[119]);
        }

        if (tmp_tuple_element_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;

            goto tuple_build_exception_32;
        }
        PyTuple_SET_ITEM0(tmp_list_element_4, 1, tmp_tuple_element_45);
        goto tuple_build_noexception_32;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_32:;
        Py_DECREF(tmp_list_element_4);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_32:;
        tmp_assattr_value_5 = MAKE_LIST_EMPTY(2);
        {
            PyObject *tmp_tuple_element_46;
            PyList_SET_ITEM(tmp_assattr_value_5, 0, tmp_list_element_4);
            tmp_tuple_element_46 = mod_consts[118];
            tmp_list_element_4 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_4, 0, tmp_tuple_element_46);
            tmp_tuple_element_46 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[119]);

            if (unlikely(tmp_tuple_element_46 == NULL)) {
                tmp_tuple_element_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[119]);
            }

            if (tmp_tuple_element_46 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 175;

                goto tuple_build_exception_33;
            }
            PyTuple_SET_ITEM0(tmp_list_element_4, 1, tmp_tuple_element_46);
            goto tuple_build_noexception_33;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_33:;
            Py_DECREF(tmp_list_element_4);
            goto list_build_exception_3;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_33:;
            PyList_SET_ITEM(tmp_assattr_value_5, 1, tmp_list_element_4);
        }
        goto list_build_noexception_3;
        // Exception handling pass through code for list_build:
        list_build_exception_3:;
        Py_DECREF(tmp_assattr_value_5);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_3:;
        tmp_assattr_target_5 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_assattr_target_5 == NULL)) {
            tmp_assattr_target_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[116]);
        }

        if (tmp_assattr_target_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_5);

            exception_lineno = 173;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts[36], tmp_assattr_value_5);
        Py_DECREF(tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_82;
        tmp_assign_source_82 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_assign_source_82 == NULL)) {
            tmp_assign_source_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[116]);
        }

        if (tmp_assign_source_82 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[120], tmp_assign_source_82);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_83;
        PyObject *tmp_tuple_element_47;
        tmp_tuple_element_47 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_tuple_element_47 == NULL)) {
            tmp_tuple_element_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
        }

        if (tmp_tuple_element_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;

            goto try_except_handler_14;
        }
        tmp_assign_source_83 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_83, 0, tmp_tuple_element_47);
        assert(tmp_class_creation_5__bases_orig == NULL);
        tmp_class_creation_5__bases_orig = tmp_assign_source_83;
    }
    {
        PyObject *tmp_assign_source_84;
        PyObject *tmp_dircall_arg1_5;
        CHECK_OBJECT(tmp_class_creation_5__bases_orig);
        tmp_dircall_arg1_5 = tmp_class_creation_5__bases_orig;
        Py_INCREF(tmp_dircall_arg1_5);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_5};
            tmp_assign_source_84 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_84 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;

            goto try_except_handler_14;
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
        PyObject *tmp_metaclass_value_5;
        nuitka_bool tmp_condition_result_19;
        int tmp_truth_name_6;
        PyObject *tmp_type_arg_9;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_bases_value_5;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_truth_name_6 = CHECK_IF_TRUE(tmp_class_creation_5__bases);
        if (tmp_truth_name_6 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;

            goto try_except_handler_14;
        }
        tmp_condition_result_19 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_19 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_5;
        } else {
            goto condexpr_false_5;
        }
        condexpr_true_5:;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_expression_value_27 = tmp_class_creation_5__bases;
        tmp_subscript_value_5 = mod_consts[9];
        tmp_type_arg_9 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_27, tmp_subscript_value_5, 0);
        if (tmp_type_arg_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;

            goto try_except_handler_14;
        }
        tmp_metaclass_value_5 = BUILTIN_TYPE1(tmp_type_arg_9);
        Py_DECREF(tmp_type_arg_9);
        if (tmp_metaclass_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;

            goto try_except_handler_14;
        }
        goto condexpr_end_5;
        condexpr_false_5:;
        tmp_metaclass_value_5 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_5);
        condexpr_end_5:;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_bases_value_5 = tmp_class_creation_5__bases;
        tmp_assign_source_86 = SELECT_METACLASS(tstate, tmp_metaclass_value_5, tmp_bases_value_5);
        Py_DECREF(tmp_metaclass_value_5);
        if (tmp_assign_source_86 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;

            goto try_except_handler_14;
        }
        assert(tmp_class_creation_5__metaclass == NULL);
        tmp_class_creation_5__metaclass = tmp_assign_source_86;
    }
    {
        bool tmp_condition_result_20;
        PyObject *tmp_expression_value_28;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_28 = tmp_class_creation_5__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_28, mod_consts[25]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;

            goto try_except_handler_14;
        }
        tmp_condition_result_20 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_20 != false) {
            goto branch_yes_15;
        } else {
            goto branch_no_15;
        }
    }
    branch_yes_15:;
    {
        PyObject *tmp_assign_source_87;
        PyObject *tmp_called_value_14;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_args_value_9;
        PyObject *tmp_tuple_element_48;
        PyObject *tmp_kwargs_value_9;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_29 = tmp_class_creation_5__metaclass;
        tmp_called_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts[25]);
        if (tmp_called_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;

            goto try_except_handler_14;
        }
        tmp_tuple_element_48 = mod_consts[121];
        tmp_args_value_9 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_9, 0, tmp_tuple_element_48);
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_tuple_element_48 = tmp_class_creation_5__bases;
        PyTuple_SET_ITEM0(tmp_args_value_9, 1, tmp_tuple_element_48);
        CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
        tmp_kwargs_value_9 = tmp_class_creation_5__class_decl_dict;
        frame_e33b4e37eb07fbc5c2cc2b38efc41113->m_frame.f_lineno = 179;
        tmp_assign_source_87 = CALL_FUNCTION(tstate, tmp_called_value_14, tmp_args_value_9, tmp_kwargs_value_9);
        Py_DECREF(tmp_called_value_14);
        Py_DECREF(tmp_args_value_9);
        if (tmp_assign_source_87 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;

            goto try_except_handler_14;
        }
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_87;
    }
    {
        bool tmp_condition_result_21;
        PyObject *tmp_operand_value_5;
        PyObject *tmp_expression_value_30;
        CHECK_OBJECT(tmp_class_creation_5__prepared);
        tmp_expression_value_30 = tmp_class_creation_5__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_30, mod_consts[27]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;

            goto try_except_handler_14;
        }
        tmp_operand_value_5 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
        assert(!(tmp_res == -1));
        tmp_condition_result_21 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_21 != false) {
            goto branch_yes_16;
        } else {
            goto branch_no_16;
        }
    }
    branch_yes_16:;
    {
        PyObject *tmp_raise_type_5;
        PyObject *tmp_raise_value_5;
        PyObject *tmp_mod_expr_left_5;
        PyObject *tmp_mod_expr_right_5;
        PyObject *tmp_tuple_element_49;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_name_value_7;
        PyObject *tmp_default_value_5;
        tmp_raise_type_5 = PyExc_TypeError;
        tmp_mod_expr_left_5 = mod_consts[28];
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_31 = tmp_class_creation_5__metaclass;
        tmp_name_value_7 = mod_consts[29];
        tmp_default_value_5 = mod_consts[30];
        tmp_tuple_element_49 = BUILTIN_GETATTR(tstate, tmp_expression_value_31, tmp_name_value_7, tmp_default_value_5);
        if (tmp_tuple_element_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;

            goto try_except_handler_14;
        }
        tmp_mod_expr_right_5 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_32;
            PyObject *tmp_type_arg_10;
            PyTuple_SET_ITEM(tmp_mod_expr_right_5, 0, tmp_tuple_element_49);
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_type_arg_10 = tmp_class_creation_5__prepared;
            tmp_expression_value_32 = BUILTIN_TYPE1(tmp_type_arg_10);
            assert(!(tmp_expression_value_32 == NULL));
            tmp_tuple_element_49 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts[29]);
            Py_DECREF(tmp_expression_value_32);
            if (tmp_tuple_element_49 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 179;

                goto tuple_build_exception_34;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_5, 1, tmp_tuple_element_49);
        }
        goto tuple_build_noexception_34;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_34:;
        Py_DECREF(tmp_mod_expr_right_5);
        goto try_except_handler_14;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_34:;
        tmp_raise_value_5 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_5, tmp_mod_expr_right_5);
        Py_DECREF(tmp_mod_expr_right_5);
        if (tmp_raise_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;

            goto try_except_handler_14;
        }
        exception_type = tmp_raise_type_5;
        Py_INCREF(tmp_raise_type_5);
        exception_value = tmp_raise_value_5;
        exception_lineno = 179;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_14;
    }
    branch_no_16:;
    goto branch_end_15;
    branch_no_15:;
    {
        PyObject *tmp_assign_source_88;
        tmp_assign_source_88 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_88;
    }
    branch_end_15:;
    {
        PyObject *tmp_assign_source_89;
        {
            PyObject *tmp_set_locals_5;
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_set_locals_5 = tmp_class_creation_5__prepared;
            locals_pyglet$libs$x11$xf86vmode$$$class__5_struct_anon_96_179 = tmp_set_locals_5;
            Py_INCREF(tmp_set_locals_5);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[31];
        tmp_res = PyObject_SetItem(locals_pyglet$libs$x11$xf86vmode$$$class__5_struct_anon_96_179, mod_consts[32], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;

            goto try_except_handler_16;
        }
        tmp_dictset_value = mod_consts[121];
        tmp_res = PyObject_SetItem(locals_pyglet$libs$x11$xf86vmode$$$class__5_struct_anon_96_179, mod_consts[33], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;

            goto try_except_handler_16;
        }
        frame_27c2768ec8d81075482c0d2b5ab420ca_6 = MAKE_CLASS_FRAME(tstate, codeobj_27c2768ec8d81075482c0d2b5ab420ca, module_pyglet$libs$x11$xf86vmode, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_27c2768ec8d81075482c0d2b5ab420ca_6);
        assert(Py_REFCNT(frame_27c2768ec8d81075482c0d2b5ab420ca_6) == 2);

        // Framed code:
        tmp_dictset_value = MAKE_LIST7(mod_consts[122]);
        tmp_res = PyObject_SetItem(locals_pyglet$libs$x11$xf86vmode$$$class__5_struct_anon_96_179, mod_consts[94], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_2 = "o";
            goto frame_exception_exit_6;
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_5;
        frame_exception_exit_6:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_27c2768ec8d81075482c0d2b5ab420ca_6, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_27c2768ec8d81075482c0d2b5ab420ca_6->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_27c2768ec8d81075482c0d2b5ab420ca_6, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_27c2768ec8d81075482c0d2b5ab420ca_6,
            type_description_2,
            outline_4_var___class__
        );



        assertFrameObject(frame_27c2768ec8d81075482c0d2b5ab420ca_6);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_5;
        frame_no_exception_5:;
        goto skip_nested_handling_5;
        nested_frame_exit_5:;

        goto try_except_handler_16;
        skip_nested_handling_5:;
        {
            nuitka_bool tmp_condition_result_22;
            PyObject *tmp_cmp_expr_left_6;
            PyObject *tmp_cmp_expr_right_6;
            CHECK_OBJECT(tmp_class_creation_5__bases);
            tmp_cmp_expr_left_6 = tmp_class_creation_5__bases;
            CHECK_OBJECT(tmp_class_creation_5__bases_orig);
            tmp_cmp_expr_right_6 = tmp_class_creation_5__bases_orig;
            tmp_condition_result_22 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
            if (tmp_condition_result_22 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 179;

                goto try_except_handler_16;
            }
            if (tmp_condition_result_22 == NUITKA_BOOL_TRUE) {
                goto branch_yes_17;
            } else {
                goto branch_no_17;
            }
        }
        branch_yes_17:;
        CHECK_OBJECT(tmp_class_creation_5__bases_orig);
        tmp_dictset_value = tmp_class_creation_5__bases_orig;
        tmp_res = PyObject_SetItem(locals_pyglet$libs$x11$xf86vmode$$$class__5_struct_anon_96_179, mod_consts[37], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;

            goto try_except_handler_16;
        }
        branch_no_17:;
        {
            PyObject *tmp_assign_source_90;
            PyObject *tmp_called_value_15;
            PyObject *tmp_args_value_10;
            PyObject *tmp_tuple_element_50;
            PyObject *tmp_kwargs_value_10;
            CHECK_OBJECT(tmp_class_creation_5__metaclass);
            tmp_called_value_15 = tmp_class_creation_5__metaclass;
            tmp_tuple_element_50 = mod_consts[121];
            tmp_args_value_10 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_10, 0, tmp_tuple_element_50);
            CHECK_OBJECT(tmp_class_creation_5__bases);
            tmp_tuple_element_50 = tmp_class_creation_5__bases;
            PyTuple_SET_ITEM0(tmp_args_value_10, 1, tmp_tuple_element_50);
            tmp_tuple_element_50 = locals_pyglet$libs$x11$xf86vmode$$$class__5_struct_anon_96_179;
            PyTuple_SET_ITEM0(tmp_args_value_10, 2, tmp_tuple_element_50);
            CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
            tmp_kwargs_value_10 = tmp_class_creation_5__class_decl_dict;
            frame_e33b4e37eb07fbc5c2cc2b38efc41113->m_frame.f_lineno = 179;
            tmp_assign_source_90 = CALL_FUNCTION(tstate, tmp_called_value_15, tmp_args_value_10, tmp_kwargs_value_10);
            Py_DECREF(tmp_args_value_10);
            if (tmp_assign_source_90 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 179;

                goto try_except_handler_16;
            }
            assert(outline_4_var___class__ == NULL);
            outline_4_var___class__ = tmp_assign_source_90;
        }
        CHECK_OBJECT(outline_4_var___class__);
        tmp_assign_source_89 = outline_4_var___class__;
        Py_INCREF(tmp_assign_source_89);
        goto try_return_handler_16;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_16:;
        Py_DECREF(locals_pyglet$libs$x11$xf86vmode$$$class__5_struct_anon_96_179);
        locals_pyglet$libs$x11$xf86vmode$$$class__5_struct_anon_96_179 = NULL;
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

        Py_DECREF(locals_pyglet$libs$x11$xf86vmode$$$class__5_struct_anon_96_179);
        locals_pyglet$libs$x11$xf86vmode$$$class__5_struct_anon_96_179 = NULL;
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
        CHECK_OBJECT(outline_4_var___class__);
        Py_DECREF(outline_4_var___class__);
        outline_4_var___class__ = NULL;
        goto outline_result_5;
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

        goto outline_exception_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_5:;
        exception_lineno = 179;
        goto try_except_handler_14;
        outline_result_5:;
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[121], tmp_assign_source_89);
    }
    goto try_end_6;
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
    exception_type = exception_keeper_type_16;
    exception_value = exception_keeper_value_16;
    exception_tb = exception_keeper_tb_16;
    exception_lineno = exception_keeper_lineno_16;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
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
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_list_element_5;
        PyObject *tmp_tuple_element_51;
        PyObject *tmp_assattr_target_6;
        tmp_tuple_element_51 = mod_consts[123];
        tmp_list_element_5 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_list_element_5, 0, tmp_tuple_element_51);
        tmp_tuple_element_51 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[124]);

        if (unlikely(tmp_tuple_element_51 == NULL)) {
            tmp_tuple_element_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[124]);
        }

        if (tmp_tuple_element_51 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;

            goto tuple_build_exception_35;
        }
        PyTuple_SET_ITEM0(tmp_list_element_5, 1, tmp_tuple_element_51);
        goto tuple_build_noexception_35;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_35:;
        Py_DECREF(tmp_list_element_5);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_35:;
        tmp_assattr_value_6 = MAKE_LIST_EMPTY(7);
        {
            PyObject *tmp_tuple_element_52;
            PyObject *tmp_tuple_element_53;
            PyObject *tmp_tuple_element_54;
            PyObject *tmp_tuple_element_55;
            PyObject *tmp_tuple_element_56;
            PyObject *tmp_tuple_element_57;
            PyList_SET_ITEM(tmp_assattr_value_6, 0, tmp_list_element_5);
            tmp_tuple_element_52 = mod_consts[125];
            tmp_list_element_5 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_5, 0, tmp_tuple_element_52);
            tmp_tuple_element_52 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[124]);

            if (unlikely(tmp_tuple_element_52 == NULL)) {
                tmp_tuple_element_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[124]);
            }

            if (tmp_tuple_element_52 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 191;

                goto tuple_build_exception_36;
            }
            PyTuple_SET_ITEM0(tmp_list_element_5, 1, tmp_tuple_element_52);
            goto tuple_build_noexception_36;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_36:;
            Py_DECREF(tmp_list_element_5);
            goto list_build_exception_4;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_36:;
            PyList_SET_ITEM(tmp_assattr_value_6, 1, tmp_list_element_5);
            tmp_tuple_element_53 = mod_consts[126];
            tmp_list_element_5 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_5, 0, tmp_tuple_element_53);
            tmp_tuple_element_53 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[119]);

            if (unlikely(tmp_tuple_element_53 == NULL)) {
                tmp_tuple_element_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[119]);
            }

            if (tmp_tuple_element_53 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 192;

                goto tuple_build_exception_37;
            }
            PyTuple_SET_ITEM0(tmp_list_element_5, 1, tmp_tuple_element_53);
            goto tuple_build_noexception_37;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_37:;
            Py_DECREF(tmp_list_element_5);
            goto list_build_exception_4;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_37:;
            PyList_SET_ITEM(tmp_assattr_value_6, 2, tmp_list_element_5);
            tmp_tuple_element_54 = mod_consts[127];
            tmp_list_element_5 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_5, 0, tmp_tuple_element_54);
            tmp_tuple_element_54 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[128]);

            if (unlikely(tmp_tuple_element_54 == NULL)) {
                tmp_tuple_element_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[128]);
            }

            if (tmp_tuple_element_54 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 193;

                goto tuple_build_exception_38;
            }
            PyTuple_SET_ITEM0(tmp_list_element_5, 1, tmp_tuple_element_54);
            goto tuple_build_noexception_38;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_38:;
            Py_DECREF(tmp_list_element_5);
            goto list_build_exception_4;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_38:;
            PyList_SET_ITEM(tmp_assattr_value_6, 3, tmp_list_element_5);
            tmp_tuple_element_55 = mod_consts[129];
            tmp_list_element_5 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_16;
                PyObject *tmp_args_element_value_7;
                PyTuple_SET_ITEM0(tmp_list_element_5, 0, tmp_tuple_element_55);
                tmp_called_value_16 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[110]);

                if (unlikely(tmp_called_value_16 == NULL)) {
                    tmp_called_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[110]);
                }

                if (tmp_called_value_16 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 194;

                    goto tuple_build_exception_39;
                }
                tmp_args_element_value_7 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[120]);

                if (unlikely(tmp_args_element_value_7 == NULL)) {
                    tmp_args_element_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[120]);
                }

                if (tmp_args_element_value_7 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 194;

                    goto tuple_build_exception_39;
                }
                frame_e33b4e37eb07fbc5c2cc2b38efc41113->m_frame.f_lineno = 194;
                tmp_tuple_element_55 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_16, tmp_args_element_value_7);
                if (tmp_tuple_element_55 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 194;

                    goto tuple_build_exception_39;
                }
                PyTuple_SET_ITEM(tmp_list_element_5, 1, tmp_tuple_element_55);
            }
            goto tuple_build_noexception_39;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_39:;
            Py_DECREF(tmp_list_element_5);
            goto list_build_exception_4;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_39:;
            PyList_SET_ITEM(tmp_assattr_value_6, 4, tmp_list_element_5);
            tmp_tuple_element_56 = mod_consts[130];
            tmp_list_element_5 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_5, 0, tmp_tuple_element_56);
            tmp_tuple_element_56 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[128]);

            if (unlikely(tmp_tuple_element_56 == NULL)) {
                tmp_tuple_element_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[128]);
            }

            if (tmp_tuple_element_56 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 195;

                goto tuple_build_exception_40;
            }
            PyTuple_SET_ITEM0(tmp_list_element_5, 1, tmp_tuple_element_56);
            goto tuple_build_noexception_40;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_40:;
            Py_DECREF(tmp_list_element_5);
            goto list_build_exception_4;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_40:;
            PyList_SET_ITEM(tmp_assattr_value_6, 5, tmp_list_element_5);
            tmp_tuple_element_57 = mod_consts[131];
            tmp_list_element_5 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_17;
                PyObject *tmp_args_element_value_8;
                PyTuple_SET_ITEM0(tmp_list_element_5, 0, tmp_tuple_element_57);
                tmp_called_value_17 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[110]);

                if (unlikely(tmp_called_value_17 == NULL)) {
                    tmp_called_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[110]);
                }

                if (tmp_called_value_17 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 196;

                    goto tuple_build_exception_41;
                }
                tmp_args_element_value_8 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[120]);

                if (unlikely(tmp_args_element_value_8 == NULL)) {
                    tmp_args_element_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[120]);
                }

                if (tmp_args_element_value_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 196;

                    goto tuple_build_exception_41;
                }
                frame_e33b4e37eb07fbc5c2cc2b38efc41113->m_frame.f_lineno = 196;
                tmp_tuple_element_57 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_17, tmp_args_element_value_8);
                if (tmp_tuple_element_57 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 196;

                    goto tuple_build_exception_41;
                }
                PyTuple_SET_ITEM(tmp_list_element_5, 1, tmp_tuple_element_57);
            }
            goto tuple_build_noexception_41;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_41:;
            Py_DECREF(tmp_list_element_5);
            goto list_build_exception_4;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_41:;
            PyList_SET_ITEM(tmp_assattr_value_6, 6, tmp_list_element_5);
        }
        goto list_build_noexception_4;
        // Exception handling pass through code for list_build:
        list_build_exception_4:;
        Py_DECREF(tmp_assattr_value_6);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_4:;
        tmp_assattr_target_6 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_assattr_target_6 == NULL)) {
            tmp_assattr_target_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[121]);
        }

        if (tmp_assattr_target_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_6);

            exception_lineno = 189;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts[36], tmp_assattr_value_6);
        Py_DECREF(tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_91;
        tmp_assign_source_91 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_assign_source_91 == NULL)) {
            tmp_assign_source_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[121]);
        }

        if (tmp_assign_source_91 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[132], tmp_assign_source_91);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_92;
        PyObject *tmp_tuple_element_58;
        tmp_tuple_element_58 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_tuple_element_58 == NULL)) {
            tmp_tuple_element_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
        }

        if (tmp_tuple_element_58 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;

            goto try_except_handler_17;
        }
        tmp_assign_source_92 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_92, 0, tmp_tuple_element_58);
        assert(tmp_class_creation_6__bases_orig == NULL);
        tmp_class_creation_6__bases_orig = tmp_assign_source_92;
    }
    {
        PyObject *tmp_assign_source_93;
        PyObject *tmp_dircall_arg1_6;
        CHECK_OBJECT(tmp_class_creation_6__bases_orig);
        tmp_dircall_arg1_6 = tmp_class_creation_6__bases_orig;
        Py_INCREF(tmp_dircall_arg1_6);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_6};
            tmp_assign_source_93 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_93 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;

            goto try_except_handler_17;
        }
        assert(tmp_class_creation_6__bases == NULL);
        tmp_class_creation_6__bases = tmp_assign_source_93;
    }
    {
        PyObject *tmp_assign_source_94;
        tmp_assign_source_94 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_6__class_decl_dict == NULL);
        tmp_class_creation_6__class_decl_dict = tmp_assign_source_94;
    }
    {
        PyObject *tmp_assign_source_95;
        PyObject *tmp_metaclass_value_6;
        nuitka_bool tmp_condition_result_23;
        int tmp_truth_name_7;
        PyObject *tmp_type_arg_11;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_subscript_value_6;
        PyObject *tmp_bases_value_6;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_truth_name_7 = CHECK_IF_TRUE(tmp_class_creation_6__bases);
        if (tmp_truth_name_7 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;

            goto try_except_handler_17;
        }
        tmp_condition_result_23 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_23 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_6;
        } else {
            goto condexpr_false_6;
        }
        condexpr_true_6:;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_expression_value_33 = tmp_class_creation_6__bases;
        tmp_subscript_value_6 = mod_consts[9];
        tmp_type_arg_11 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_33, tmp_subscript_value_6, 0);
        if (tmp_type_arg_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;

            goto try_except_handler_17;
        }
        tmp_metaclass_value_6 = BUILTIN_TYPE1(tmp_type_arg_11);
        Py_DECREF(tmp_type_arg_11);
        if (tmp_metaclass_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;

            goto try_except_handler_17;
        }
        goto condexpr_end_6;
        condexpr_false_6:;
        tmp_metaclass_value_6 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_6);
        condexpr_end_6:;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_bases_value_6 = tmp_class_creation_6__bases;
        tmp_assign_source_95 = SELECT_METACLASS(tstate, tmp_metaclass_value_6, tmp_bases_value_6);
        Py_DECREF(tmp_metaclass_value_6);
        if (tmp_assign_source_95 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;

            goto try_except_handler_17;
        }
        assert(tmp_class_creation_6__metaclass == NULL);
        tmp_class_creation_6__metaclass = tmp_assign_source_95;
    }
    {
        bool tmp_condition_result_24;
        PyObject *tmp_expression_value_34;
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_value_34 = tmp_class_creation_6__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_34, mod_consts[25]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;

            goto try_except_handler_17;
        }
        tmp_condition_result_24 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_24 != false) {
            goto branch_yes_18;
        } else {
            goto branch_no_18;
        }
    }
    branch_yes_18:;
    {
        PyObject *tmp_assign_source_96;
        PyObject *tmp_called_value_18;
        PyObject *tmp_expression_value_35;
        PyObject *tmp_args_value_11;
        PyObject *tmp_tuple_element_59;
        PyObject *tmp_kwargs_value_11;
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_value_35 = tmp_class_creation_6__metaclass;
        tmp_called_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, mod_consts[25]);
        if (tmp_called_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;

            goto try_except_handler_17;
        }
        tmp_tuple_element_59 = mod_consts[133];
        tmp_args_value_11 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_11, 0, tmp_tuple_element_59);
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_tuple_element_59 = tmp_class_creation_6__bases;
        PyTuple_SET_ITEM0(tmp_args_value_11, 1, tmp_tuple_element_59);
        CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
        tmp_kwargs_value_11 = tmp_class_creation_6__class_decl_dict;
        frame_e33b4e37eb07fbc5c2cc2b38efc41113->m_frame.f_lineno = 200;
        tmp_assign_source_96 = CALL_FUNCTION(tstate, tmp_called_value_18, tmp_args_value_11, tmp_kwargs_value_11);
        Py_DECREF(tmp_called_value_18);
        Py_DECREF(tmp_args_value_11);
        if (tmp_assign_source_96 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;

            goto try_except_handler_17;
        }
        assert(tmp_class_creation_6__prepared == NULL);
        tmp_class_creation_6__prepared = tmp_assign_source_96;
    }
    {
        bool tmp_condition_result_25;
        PyObject *tmp_operand_value_6;
        PyObject *tmp_expression_value_36;
        CHECK_OBJECT(tmp_class_creation_6__prepared);
        tmp_expression_value_36 = tmp_class_creation_6__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_36, mod_consts[27]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;

            goto try_except_handler_17;
        }
        tmp_operand_value_6 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_6);
        assert(!(tmp_res == -1));
        tmp_condition_result_25 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_25 != false) {
            goto branch_yes_19;
        } else {
            goto branch_no_19;
        }
    }
    branch_yes_19:;
    {
        PyObject *tmp_raise_type_6;
        PyObject *tmp_raise_value_6;
        PyObject *tmp_mod_expr_left_6;
        PyObject *tmp_mod_expr_right_6;
        PyObject *tmp_tuple_element_60;
        PyObject *tmp_expression_value_37;
        PyObject *tmp_name_value_8;
        PyObject *tmp_default_value_6;
        tmp_raise_type_6 = PyExc_TypeError;
        tmp_mod_expr_left_6 = mod_consts[28];
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_value_37 = tmp_class_creation_6__metaclass;
        tmp_name_value_8 = mod_consts[29];
        tmp_default_value_6 = mod_consts[30];
        tmp_tuple_element_60 = BUILTIN_GETATTR(tstate, tmp_expression_value_37, tmp_name_value_8, tmp_default_value_6);
        if (tmp_tuple_element_60 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;

            goto try_except_handler_17;
        }
        tmp_mod_expr_right_6 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_38;
            PyObject *tmp_type_arg_12;
            PyTuple_SET_ITEM(tmp_mod_expr_right_6, 0, tmp_tuple_element_60);
            CHECK_OBJECT(tmp_class_creation_6__prepared);
            tmp_type_arg_12 = tmp_class_creation_6__prepared;
            tmp_expression_value_38 = BUILTIN_TYPE1(tmp_type_arg_12);
            assert(!(tmp_expression_value_38 == NULL));
            tmp_tuple_element_60 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_38, mod_consts[29]);
            Py_DECREF(tmp_expression_value_38);
            if (tmp_tuple_element_60 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 200;

                goto tuple_build_exception_42;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_6, 1, tmp_tuple_element_60);
        }
        goto tuple_build_noexception_42;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_42:;
        Py_DECREF(tmp_mod_expr_right_6);
        goto try_except_handler_17;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_42:;
        tmp_raise_value_6 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_6, tmp_mod_expr_right_6);
        Py_DECREF(tmp_mod_expr_right_6);
        if (tmp_raise_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;

            goto try_except_handler_17;
        }
        exception_type = tmp_raise_type_6;
        Py_INCREF(tmp_raise_type_6);
        exception_value = tmp_raise_value_6;
        exception_lineno = 200;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_17;
    }
    branch_no_19:;
    goto branch_end_18;
    branch_no_18:;
    {
        PyObject *tmp_assign_source_97;
        tmp_assign_source_97 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_6__prepared == NULL);
        tmp_class_creation_6__prepared = tmp_assign_source_97;
    }
    branch_end_18:;
    {
        PyObject *tmp_assign_source_98;
        {
            PyObject *tmp_set_locals_6;
            CHECK_OBJECT(tmp_class_creation_6__prepared);
            tmp_set_locals_6 = tmp_class_creation_6__prepared;
            locals_pyglet$libs$x11$xf86vmode$$$class__6_struct_anon_97_200 = tmp_set_locals_6;
            Py_INCREF(tmp_set_locals_6);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[31];
        tmp_res = PyObject_SetItem(locals_pyglet$libs$x11$xf86vmode$$$class__6_struct_anon_97_200, mod_consts[32], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;

            goto try_except_handler_19;
        }
        tmp_dictset_value = mod_consts[133];
        tmp_res = PyObject_SetItem(locals_pyglet$libs$x11$xf86vmode$$$class__6_struct_anon_97_200, mod_consts[33], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;

            goto try_except_handler_19;
        }
        frame_63ec358de44df473812d1eb0c2d85d0c_7 = MAKE_CLASS_FRAME(tstate, codeobj_63ec358de44df473812d1eb0c2d85d0c, module_pyglet$libs$x11$xf86vmode, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_63ec358de44df473812d1eb0c2d85d0c_7);
        assert(Py_REFCNT(frame_63ec358de44df473812d1eb0c2d85d0c_7) == 2);

        // Framed code:
        tmp_dictset_value = MAKE_LIST9(mod_consts[134]);
        tmp_res = PyObject_SetItem(locals_pyglet$libs$x11$xf86vmode$$$class__6_struct_anon_97_200, mod_consts[94], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_2 = "o";
            goto frame_exception_exit_7;
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_6;
        frame_exception_exit_7:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_63ec358de44df473812d1eb0c2d85d0c_7, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_63ec358de44df473812d1eb0c2d85d0c_7->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_63ec358de44df473812d1eb0c2d85d0c_7, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_63ec358de44df473812d1eb0c2d85d0c_7,
            type_description_2,
            outline_5_var___class__
        );



        assertFrameObject(frame_63ec358de44df473812d1eb0c2d85d0c_7);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_6;
        frame_no_exception_6:;
        goto skip_nested_handling_6;
        nested_frame_exit_6:;

        goto try_except_handler_19;
        skip_nested_handling_6:;
        {
            nuitka_bool tmp_condition_result_26;
            PyObject *tmp_cmp_expr_left_7;
            PyObject *tmp_cmp_expr_right_7;
            CHECK_OBJECT(tmp_class_creation_6__bases);
            tmp_cmp_expr_left_7 = tmp_class_creation_6__bases;
            CHECK_OBJECT(tmp_class_creation_6__bases_orig);
            tmp_cmp_expr_right_7 = tmp_class_creation_6__bases_orig;
            tmp_condition_result_26 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
            if (tmp_condition_result_26 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 200;

                goto try_except_handler_19;
            }
            if (tmp_condition_result_26 == NUITKA_BOOL_TRUE) {
                goto branch_yes_20;
            } else {
                goto branch_no_20;
            }
        }
        branch_yes_20:;
        CHECK_OBJECT(tmp_class_creation_6__bases_orig);
        tmp_dictset_value = tmp_class_creation_6__bases_orig;
        tmp_res = PyObject_SetItem(locals_pyglet$libs$x11$xf86vmode$$$class__6_struct_anon_97_200, mod_consts[37], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;

            goto try_except_handler_19;
        }
        branch_no_20:;
        {
            PyObject *tmp_assign_source_99;
            PyObject *tmp_called_value_19;
            PyObject *tmp_args_value_12;
            PyObject *tmp_tuple_element_61;
            PyObject *tmp_kwargs_value_12;
            CHECK_OBJECT(tmp_class_creation_6__metaclass);
            tmp_called_value_19 = tmp_class_creation_6__metaclass;
            tmp_tuple_element_61 = mod_consts[133];
            tmp_args_value_12 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_12, 0, tmp_tuple_element_61);
            CHECK_OBJECT(tmp_class_creation_6__bases);
            tmp_tuple_element_61 = tmp_class_creation_6__bases;
            PyTuple_SET_ITEM0(tmp_args_value_12, 1, tmp_tuple_element_61);
            tmp_tuple_element_61 = locals_pyglet$libs$x11$xf86vmode$$$class__6_struct_anon_97_200;
            PyTuple_SET_ITEM0(tmp_args_value_12, 2, tmp_tuple_element_61);
            CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
            tmp_kwargs_value_12 = tmp_class_creation_6__class_decl_dict;
            frame_e33b4e37eb07fbc5c2cc2b38efc41113->m_frame.f_lineno = 200;
            tmp_assign_source_99 = CALL_FUNCTION(tstate, tmp_called_value_19, tmp_args_value_12, tmp_kwargs_value_12);
            Py_DECREF(tmp_args_value_12);
            if (tmp_assign_source_99 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 200;

                goto try_except_handler_19;
            }
            assert(outline_5_var___class__ == NULL);
            outline_5_var___class__ = tmp_assign_source_99;
        }
        CHECK_OBJECT(outline_5_var___class__);
        tmp_assign_source_98 = outline_5_var___class__;
        Py_INCREF(tmp_assign_source_98);
        goto try_return_handler_19;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_19:;
        Py_DECREF(locals_pyglet$libs$x11$xf86vmode$$$class__6_struct_anon_97_200);
        locals_pyglet$libs$x11$xf86vmode$$$class__6_struct_anon_97_200 = NULL;
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

        Py_DECREF(locals_pyglet$libs$x11$xf86vmode$$$class__6_struct_anon_97_200);
        locals_pyglet$libs$x11$xf86vmode$$$class__6_struct_anon_97_200 = NULL;
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
        CHECK_OBJECT(outline_5_var___class__);
        Py_DECREF(outline_5_var___class__);
        outline_5_var___class__ = NULL;
        goto outline_result_6;
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

        goto outline_exception_6;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_6:;
        exception_lineno = 200;
        goto try_except_handler_17;
        outline_result_6:;
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[133], tmp_assign_source_98);
    }
    goto try_end_7;
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
    exception_type = exception_keeper_type_19;
    exception_value = exception_keeper_value_19;
    exception_tb = exception_keeper_tb_19;
    exception_lineno = exception_keeper_lineno_19;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
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
        PyObject *tmp_assign_source_100;
        PyObject *tmp_expression_value_39;
        PyObject *tmp_expression_value_40;
        PyObject *tmp_expression_value_41;
        PyObject *tmp_expression_value_42;
        tmp_expression_value_42 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_42 == NULL)) {
            tmp_expression_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
        }

        if (tmp_expression_value_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_41 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_42, mod_consts[135]);
        if (tmp_expression_value_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_40 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_41, mod_consts[136]);
        Py_DECREF(tmp_expression_value_41);
        if (tmp_expression_value_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_39 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_40, mod_consts[137]);
        Py_DECREF(tmp_expression_value_40);
        if (tmp_expression_value_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_100 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, mod_consts[138]);
        Py_DECREF(tmp_expression_value_39);
        if (tmp_assign_source_100 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[138], tmp_assign_source_100);
    }
    {
        PyObject *tmp_assign_source_101;
        PyObject *tmp_expression_value_43;
        PyObject *tmp_expression_value_44;
        PyObject *tmp_expression_value_45;
        PyObject *tmp_expression_value_46;
        tmp_expression_value_46 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_46 == NULL)) {
            tmp_expression_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
        }

        if (tmp_expression_value_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_45 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_46, mod_consts[135]);
        if (tmp_expression_value_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_44 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_45, mod_consts[136]);
        Py_DECREF(tmp_expression_value_45);
        if (tmp_expression_value_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_43 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_44, mod_consts[137]);
        Py_DECREF(tmp_expression_value_44);
        if (tmp_expression_value_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_101 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_43, mod_consts[139]);
        Py_DECREF(tmp_expression_value_43);
        if (tmp_assign_source_101 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[139], tmp_assign_source_101);
    }
    {
        PyObject *tmp_assign_source_102;
        PyObject *tmp_expression_value_47;
        PyObject *tmp_expression_value_48;
        PyObject *tmp_expression_value_49;
        PyObject *tmp_expression_value_50;
        tmp_expression_value_50 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_50 == NULL)) {
            tmp_expression_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
        }

        if (tmp_expression_value_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_49 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_50, mod_consts[135]);
        if (tmp_expression_value_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_48 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_49, mod_consts[136]);
        Py_DECREF(tmp_expression_value_49);
        if (tmp_expression_value_48 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_47 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_48, mod_consts[137]);
        Py_DECREF(tmp_expression_value_48);
        if (tmp_expression_value_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_102 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_47, mod_consts[140]);
        Py_DECREF(tmp_expression_value_47);
        if (tmp_assign_source_102 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[140], tmp_assign_source_102);
    }
    {
        PyObject *tmp_assattr_value_7;
        PyObject *tmp_list_element_6;
        PyObject *tmp_tuple_element_62;
        PyObject *tmp_assattr_target_7;
        tmp_tuple_element_62 = mod_consts[141];
        tmp_list_element_6 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_list_element_6, 0, tmp_tuple_element_62);
        tmp_tuple_element_62 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_tuple_element_62 == NULL)) {
            tmp_tuple_element_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_tuple_element_62 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;

            goto tuple_build_exception_43;
        }
        PyTuple_SET_ITEM0(tmp_list_element_6, 1, tmp_tuple_element_62);
        goto tuple_build_noexception_43;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_43:;
        Py_DECREF(tmp_list_element_6);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_43:;
        tmp_assattr_value_7 = MAKE_LIST_EMPTY(9);
        {
            PyObject *tmp_tuple_element_63;
            PyObject *tmp_tuple_element_64;
            PyObject *tmp_tuple_element_65;
            PyObject *tmp_tuple_element_66;
            PyObject *tmp_tuple_element_67;
            PyObject *tmp_tuple_element_68;
            PyObject *tmp_tuple_element_69;
            PyObject *tmp_tuple_element_70;
            PyList_SET_ITEM(tmp_assattr_value_7, 0, tmp_list_element_6);
            tmp_tuple_element_63 = mod_consts[142];
            tmp_list_element_6 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_6, 0, tmp_tuple_element_63);
            tmp_tuple_element_63 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[143]);

            if (unlikely(tmp_tuple_element_63 == NULL)) {
                tmp_tuple_element_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[143]);
            }

            if (tmp_tuple_element_63 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 217;

                goto tuple_build_exception_44;
            }
            PyTuple_SET_ITEM0(tmp_list_element_6, 1, tmp_tuple_element_63);
            goto tuple_build_noexception_44;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_44:;
            Py_DECREF(tmp_list_element_6);
            goto list_build_exception_5;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_44:;
            PyList_SET_ITEM(tmp_assattr_value_7, 1, tmp_list_element_6);
            tmp_tuple_element_64 = mod_consts[144];
            tmp_list_element_6 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_6, 0, tmp_tuple_element_64);
            tmp_tuple_element_64 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[35]);

            if (unlikely(tmp_tuple_element_64 == NULL)) {
                tmp_tuple_element_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
            }

            if (tmp_tuple_element_64 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 218;

                goto tuple_build_exception_45;
            }
            PyTuple_SET_ITEM0(tmp_list_element_6, 1, tmp_tuple_element_64);
            goto tuple_build_noexception_45;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_45:;
            Py_DECREF(tmp_list_element_6);
            goto list_build_exception_5;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_45:;
            PyList_SET_ITEM(tmp_assattr_value_7, 2, tmp_list_element_6);
            tmp_tuple_element_65 = mod_consts[145];
            tmp_list_element_6 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_20;
                PyObject *tmp_args_element_value_9;
                PyTuple_SET_ITEM0(tmp_list_element_6, 0, tmp_tuple_element_65);
                tmp_called_value_20 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[110]);

                if (unlikely(tmp_called_value_20 == NULL)) {
                    tmp_called_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[110]);
                }

                if (tmp_called_value_20 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 219;

                    goto tuple_build_exception_46;
                }
                tmp_args_element_value_9 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[138]);

                if (unlikely(tmp_args_element_value_9 == NULL)) {
                    tmp_args_element_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[138]);
                }

                if (tmp_args_element_value_9 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 219;

                    goto tuple_build_exception_46;
                }
                frame_e33b4e37eb07fbc5c2cc2b38efc41113->m_frame.f_lineno = 219;
                tmp_tuple_element_65 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_20, tmp_args_element_value_9);
                if (tmp_tuple_element_65 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 219;

                    goto tuple_build_exception_46;
                }
                PyTuple_SET_ITEM(tmp_list_element_6, 1, tmp_tuple_element_65);
            }
            goto tuple_build_noexception_46;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_46:;
            Py_DECREF(tmp_list_element_6);
            goto list_build_exception_5;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_46:;
            PyList_SET_ITEM(tmp_assattr_value_7, 3, tmp_list_element_6);
            tmp_tuple_element_66 = mod_consts[146];
            tmp_list_element_6 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_6, 0, tmp_tuple_element_66);
            tmp_tuple_element_66 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[139]);

            if (unlikely(tmp_tuple_element_66 == NULL)) {
                tmp_tuple_element_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[139]);
            }

            if (tmp_tuple_element_66 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 220;

                goto tuple_build_exception_47;
            }
            PyTuple_SET_ITEM0(tmp_list_element_6, 1, tmp_tuple_element_66);
            goto tuple_build_noexception_47;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_47:;
            Py_DECREF(tmp_list_element_6);
            goto list_build_exception_5;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_47:;
            PyList_SET_ITEM(tmp_assattr_value_7, 4, tmp_list_element_6);
            tmp_tuple_element_67 = mod_consts[147];
            tmp_list_element_6 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_6, 0, tmp_tuple_element_67);
            tmp_tuple_element_67 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[35]);

            if (unlikely(tmp_tuple_element_67 == NULL)) {
                tmp_tuple_element_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
            }

            if (tmp_tuple_element_67 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 221;

                goto tuple_build_exception_48;
            }
            PyTuple_SET_ITEM0(tmp_list_element_6, 1, tmp_tuple_element_67);
            goto tuple_build_noexception_48;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_48:;
            Py_DECREF(tmp_list_element_6);
            goto list_build_exception_5;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_48:;
            PyList_SET_ITEM(tmp_assattr_value_7, 5, tmp_list_element_6);
            tmp_tuple_element_68 = mod_consts[148];
            tmp_list_element_6 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_6, 0, tmp_tuple_element_68);
            tmp_tuple_element_68 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[35]);

            if (unlikely(tmp_tuple_element_68 == NULL)) {
                tmp_tuple_element_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
            }

            if (tmp_tuple_element_68 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 222;

                goto tuple_build_exception_49;
            }
            PyTuple_SET_ITEM0(tmp_list_element_6, 1, tmp_tuple_element_68);
            goto tuple_build_noexception_49;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_49:;
            Py_DECREF(tmp_list_element_6);
            goto list_build_exception_5;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_49:;
            PyList_SET_ITEM(tmp_assattr_value_7, 6, tmp_list_element_6);
            tmp_tuple_element_69 = mod_consts[149];
            tmp_list_element_6 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_6, 0, tmp_tuple_element_69);
            tmp_tuple_element_69 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[35]);

            if (unlikely(tmp_tuple_element_69 == NULL)) {
                tmp_tuple_element_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
            }

            if (tmp_tuple_element_69 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 223;

                goto tuple_build_exception_50;
            }
            PyTuple_SET_ITEM0(tmp_list_element_6, 1, tmp_tuple_element_69);
            goto tuple_build_noexception_50;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_50:;
            Py_DECREF(tmp_list_element_6);
            goto list_build_exception_5;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_50:;
            PyList_SET_ITEM(tmp_assattr_value_7, 7, tmp_list_element_6);
            tmp_tuple_element_70 = mod_consts[150];
            tmp_list_element_6 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_6, 0, tmp_tuple_element_70);
            tmp_tuple_element_70 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[140]);

            if (unlikely(tmp_tuple_element_70 == NULL)) {
                tmp_tuple_element_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[140]);
            }

            if (tmp_tuple_element_70 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 224;

                goto tuple_build_exception_51;
            }
            PyTuple_SET_ITEM0(tmp_list_element_6, 1, tmp_tuple_element_70);
            goto tuple_build_noexception_51;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_51:;
            Py_DECREF(tmp_list_element_6);
            goto list_build_exception_5;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_51:;
            PyList_SET_ITEM(tmp_assattr_value_7, 8, tmp_list_element_6);
        }
        goto list_build_noexception_5;
        // Exception handling pass through code for list_build:
        list_build_exception_5:;
        Py_DECREF(tmp_assattr_value_7);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_5:;
        tmp_assattr_target_7 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[133]);

        if (unlikely(tmp_assattr_target_7 == NULL)) {
            tmp_assattr_target_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[133]);
        }

        if (tmp_assattr_target_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_7);

            exception_lineno = 215;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_7, mod_consts[36], tmp_assattr_value_7);
        Py_DECREF(tmp_assattr_value_7);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_103;
        tmp_assign_source_103 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[133]);

        if (unlikely(tmp_assign_source_103 == NULL)) {
            tmp_assign_source_103 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[133]);
        }

        if (tmp_assign_source_103 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[151], tmp_assign_source_103);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_104;
        PyObject *tmp_tuple_element_71;
        tmp_tuple_element_71 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_tuple_element_71 == NULL)) {
            tmp_tuple_element_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
        }

        if (tmp_tuple_element_71 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;

            goto try_except_handler_20;
        }
        tmp_assign_source_104 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_104, 0, tmp_tuple_element_71);
        assert(tmp_class_creation_7__bases_orig == NULL);
        tmp_class_creation_7__bases_orig = tmp_assign_source_104;
    }
    {
        PyObject *tmp_assign_source_105;
        PyObject *tmp_dircall_arg1_7;
        CHECK_OBJECT(tmp_class_creation_7__bases_orig);
        tmp_dircall_arg1_7 = tmp_class_creation_7__bases_orig;
        Py_INCREF(tmp_dircall_arg1_7);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_7};
            tmp_assign_source_105 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_105 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;

            goto try_except_handler_20;
        }
        assert(tmp_class_creation_7__bases == NULL);
        tmp_class_creation_7__bases = tmp_assign_source_105;
    }
    {
        PyObject *tmp_assign_source_106;
        tmp_assign_source_106 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_7__class_decl_dict == NULL);
        tmp_class_creation_7__class_decl_dict = tmp_assign_source_106;
    }
    {
        PyObject *tmp_assign_source_107;
        PyObject *tmp_metaclass_value_7;
        nuitka_bool tmp_condition_result_27;
        int tmp_truth_name_8;
        PyObject *tmp_type_arg_13;
        PyObject *tmp_expression_value_51;
        PyObject *tmp_subscript_value_7;
        PyObject *tmp_bases_value_7;
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_truth_name_8 = CHECK_IF_TRUE(tmp_class_creation_7__bases);
        if (tmp_truth_name_8 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;

            goto try_except_handler_20;
        }
        tmp_condition_result_27 = tmp_truth_name_8 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_27 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_7;
        } else {
            goto condexpr_false_7;
        }
        condexpr_true_7:;
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_expression_value_51 = tmp_class_creation_7__bases;
        tmp_subscript_value_7 = mod_consts[9];
        tmp_type_arg_13 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_51, tmp_subscript_value_7, 0);
        if (tmp_type_arg_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;

            goto try_except_handler_20;
        }
        tmp_metaclass_value_7 = BUILTIN_TYPE1(tmp_type_arg_13);
        Py_DECREF(tmp_type_arg_13);
        if (tmp_metaclass_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;

            goto try_except_handler_20;
        }
        goto condexpr_end_7;
        condexpr_false_7:;
        tmp_metaclass_value_7 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_7);
        condexpr_end_7:;
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_bases_value_7 = tmp_class_creation_7__bases;
        tmp_assign_source_107 = SELECT_METACLASS(tstate, tmp_metaclass_value_7, tmp_bases_value_7);
        Py_DECREF(tmp_metaclass_value_7);
        if (tmp_assign_source_107 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;

            goto try_except_handler_20;
        }
        assert(tmp_class_creation_7__metaclass == NULL);
        tmp_class_creation_7__metaclass = tmp_assign_source_107;
    }
    {
        bool tmp_condition_result_28;
        PyObject *tmp_expression_value_52;
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_expression_value_52 = tmp_class_creation_7__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_52, mod_consts[25]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;

            goto try_except_handler_20;
        }
        tmp_condition_result_28 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_28 != false) {
            goto branch_yes_21;
        } else {
            goto branch_no_21;
        }
    }
    branch_yes_21:;
    {
        PyObject *tmp_assign_source_108;
        PyObject *tmp_called_value_21;
        PyObject *tmp_expression_value_53;
        PyObject *tmp_args_value_13;
        PyObject *tmp_tuple_element_72;
        PyObject *tmp_kwargs_value_13;
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_expression_value_53 = tmp_class_creation_7__metaclass;
        tmp_called_value_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_53, mod_consts[25]);
        if (tmp_called_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;

            goto try_except_handler_20;
        }
        tmp_tuple_element_72 = mod_consts[152];
        tmp_args_value_13 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_13, 0, tmp_tuple_element_72);
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_tuple_element_72 = tmp_class_creation_7__bases;
        PyTuple_SET_ITEM0(tmp_args_value_13, 1, tmp_tuple_element_72);
        CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
        tmp_kwargs_value_13 = tmp_class_creation_7__class_decl_dict;
        frame_e33b4e37eb07fbc5c2cc2b38efc41113->m_frame.f_lineno = 228;
        tmp_assign_source_108 = CALL_FUNCTION(tstate, tmp_called_value_21, tmp_args_value_13, tmp_kwargs_value_13);
        Py_DECREF(tmp_called_value_21);
        Py_DECREF(tmp_args_value_13);
        if (tmp_assign_source_108 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;

            goto try_except_handler_20;
        }
        assert(tmp_class_creation_7__prepared == NULL);
        tmp_class_creation_7__prepared = tmp_assign_source_108;
    }
    {
        bool tmp_condition_result_29;
        PyObject *tmp_operand_value_7;
        PyObject *tmp_expression_value_54;
        CHECK_OBJECT(tmp_class_creation_7__prepared);
        tmp_expression_value_54 = tmp_class_creation_7__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_54, mod_consts[27]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;

            goto try_except_handler_20;
        }
        tmp_operand_value_7 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_7);
        assert(!(tmp_res == -1));
        tmp_condition_result_29 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_29 != false) {
            goto branch_yes_22;
        } else {
            goto branch_no_22;
        }
    }
    branch_yes_22:;
    {
        PyObject *tmp_raise_type_7;
        PyObject *tmp_raise_value_7;
        PyObject *tmp_mod_expr_left_7;
        PyObject *tmp_mod_expr_right_7;
        PyObject *tmp_tuple_element_73;
        PyObject *tmp_expression_value_55;
        PyObject *tmp_name_value_9;
        PyObject *tmp_default_value_7;
        tmp_raise_type_7 = PyExc_TypeError;
        tmp_mod_expr_left_7 = mod_consts[28];
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_expression_value_55 = tmp_class_creation_7__metaclass;
        tmp_name_value_9 = mod_consts[29];
        tmp_default_value_7 = mod_consts[30];
        tmp_tuple_element_73 = BUILTIN_GETATTR(tstate, tmp_expression_value_55, tmp_name_value_9, tmp_default_value_7);
        if (tmp_tuple_element_73 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;

            goto try_except_handler_20;
        }
        tmp_mod_expr_right_7 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_56;
            PyObject *tmp_type_arg_14;
            PyTuple_SET_ITEM(tmp_mod_expr_right_7, 0, tmp_tuple_element_73);
            CHECK_OBJECT(tmp_class_creation_7__prepared);
            tmp_type_arg_14 = tmp_class_creation_7__prepared;
            tmp_expression_value_56 = BUILTIN_TYPE1(tmp_type_arg_14);
            assert(!(tmp_expression_value_56 == NULL));
            tmp_tuple_element_73 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_56, mod_consts[29]);
            Py_DECREF(tmp_expression_value_56);
            if (tmp_tuple_element_73 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 228;

                goto tuple_build_exception_52;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_7, 1, tmp_tuple_element_73);
        }
        goto tuple_build_noexception_52;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_52:;
        Py_DECREF(tmp_mod_expr_right_7);
        goto try_except_handler_20;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_52:;
        tmp_raise_value_7 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_7, tmp_mod_expr_right_7);
        Py_DECREF(tmp_mod_expr_right_7);
        if (tmp_raise_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;

            goto try_except_handler_20;
        }
        exception_type = tmp_raise_type_7;
        Py_INCREF(tmp_raise_type_7);
        exception_value = tmp_raise_value_7;
        exception_lineno = 228;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_20;
    }
    branch_no_22:;
    goto branch_end_21;
    branch_no_21:;
    {
        PyObject *tmp_assign_source_109;
        tmp_assign_source_109 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_7__prepared == NULL);
        tmp_class_creation_7__prepared = tmp_assign_source_109;
    }
    branch_end_21:;
    {
        PyObject *tmp_assign_source_110;
        {
            PyObject *tmp_set_locals_7;
            CHECK_OBJECT(tmp_class_creation_7__prepared);
            tmp_set_locals_7 = tmp_class_creation_7__prepared;
            locals_pyglet$libs$x11$xf86vmode$$$class__7_struct_anon_98_228 = tmp_set_locals_7;
            Py_INCREF(tmp_set_locals_7);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[31];
        tmp_res = PyObject_SetItem(locals_pyglet$libs$x11$xf86vmode$$$class__7_struct_anon_98_228, mod_consts[32], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;

            goto try_except_handler_22;
        }
        tmp_dictset_value = mod_consts[152];
        tmp_res = PyObject_SetItem(locals_pyglet$libs$x11$xf86vmode$$$class__7_struct_anon_98_228, mod_consts[33], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;

            goto try_except_handler_22;
        }
        frame_225e2a29d1dc7552cecea0c537471d00_8 = MAKE_CLASS_FRAME(tstate, codeobj_225e2a29d1dc7552cecea0c537471d00, module_pyglet$libs$x11$xf86vmode, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_225e2a29d1dc7552cecea0c537471d00_8);
        assert(Py_REFCNT(frame_225e2a29d1dc7552cecea0c537471d00_8) == 2);

        // Framed code:
        tmp_dictset_value = MAKE_LIST3(mod_consts[153],mod_consts[154],mod_consts[155]);
        tmp_res = PyObject_SetItem(locals_pyglet$libs$x11$xf86vmode$$$class__7_struct_anon_98_228, mod_consts[94], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_2 = "o";
            goto frame_exception_exit_8;
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_7;
        frame_exception_exit_8:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_225e2a29d1dc7552cecea0c537471d00_8, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_225e2a29d1dc7552cecea0c537471d00_8->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_225e2a29d1dc7552cecea0c537471d00_8, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_225e2a29d1dc7552cecea0c537471d00_8,
            type_description_2,
            outline_6_var___class__
        );



        assertFrameObject(frame_225e2a29d1dc7552cecea0c537471d00_8);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_7;
        frame_no_exception_7:;
        goto skip_nested_handling_7;
        nested_frame_exit_7:;

        goto try_except_handler_22;
        skip_nested_handling_7:;
        {
            nuitka_bool tmp_condition_result_30;
            PyObject *tmp_cmp_expr_left_8;
            PyObject *tmp_cmp_expr_right_8;
            CHECK_OBJECT(tmp_class_creation_7__bases);
            tmp_cmp_expr_left_8 = tmp_class_creation_7__bases;
            CHECK_OBJECT(tmp_class_creation_7__bases_orig);
            tmp_cmp_expr_right_8 = tmp_class_creation_7__bases_orig;
            tmp_condition_result_30 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
            if (tmp_condition_result_30 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 228;

                goto try_except_handler_22;
            }
            if (tmp_condition_result_30 == NUITKA_BOOL_TRUE) {
                goto branch_yes_23;
            } else {
                goto branch_no_23;
            }
        }
        branch_yes_23:;
        CHECK_OBJECT(tmp_class_creation_7__bases_orig);
        tmp_dictset_value = tmp_class_creation_7__bases_orig;
        tmp_res = PyObject_SetItem(locals_pyglet$libs$x11$xf86vmode$$$class__7_struct_anon_98_228, mod_consts[37], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;

            goto try_except_handler_22;
        }
        branch_no_23:;
        {
            PyObject *tmp_assign_source_111;
            PyObject *tmp_called_value_22;
            PyObject *tmp_args_value_14;
            PyObject *tmp_tuple_element_74;
            PyObject *tmp_kwargs_value_14;
            CHECK_OBJECT(tmp_class_creation_7__metaclass);
            tmp_called_value_22 = tmp_class_creation_7__metaclass;
            tmp_tuple_element_74 = mod_consts[152];
            tmp_args_value_14 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_14, 0, tmp_tuple_element_74);
            CHECK_OBJECT(tmp_class_creation_7__bases);
            tmp_tuple_element_74 = tmp_class_creation_7__bases;
            PyTuple_SET_ITEM0(tmp_args_value_14, 1, tmp_tuple_element_74);
            tmp_tuple_element_74 = locals_pyglet$libs$x11$xf86vmode$$$class__7_struct_anon_98_228;
            PyTuple_SET_ITEM0(tmp_args_value_14, 2, tmp_tuple_element_74);
            CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
            tmp_kwargs_value_14 = tmp_class_creation_7__class_decl_dict;
            frame_e33b4e37eb07fbc5c2cc2b38efc41113->m_frame.f_lineno = 228;
            tmp_assign_source_111 = CALL_FUNCTION(tstate, tmp_called_value_22, tmp_args_value_14, tmp_kwargs_value_14);
            Py_DECREF(tmp_args_value_14);
            if (tmp_assign_source_111 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 228;

                goto try_except_handler_22;
            }
            assert(outline_6_var___class__ == NULL);
            outline_6_var___class__ = tmp_assign_source_111;
        }
        CHECK_OBJECT(outline_6_var___class__);
        tmp_assign_source_110 = outline_6_var___class__;
        Py_INCREF(tmp_assign_source_110);
        goto try_return_handler_22;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_22:;
        Py_DECREF(locals_pyglet$libs$x11$xf86vmode$$$class__7_struct_anon_98_228);
        locals_pyglet$libs$x11$xf86vmode$$$class__7_struct_anon_98_228 = NULL;
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

        Py_DECREF(locals_pyglet$libs$x11$xf86vmode$$$class__7_struct_anon_98_228);
        locals_pyglet$libs$x11$xf86vmode$$$class__7_struct_anon_98_228 = NULL;
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
        CHECK_OBJECT(outline_6_var___class__);
        Py_DECREF(outline_6_var___class__);
        outline_6_var___class__ = NULL;
        goto outline_result_7;
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

        goto outline_exception_7;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_7:;
        exception_lineno = 228;
        goto try_except_handler_20;
        outline_result_7:;
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[152], tmp_assign_source_110);
    }
    goto try_end_8;
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

    Py_XDECREF(tmp_class_creation_7__bases_orig);
    tmp_class_creation_7__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_7__bases);
    tmp_class_creation_7__bases = NULL;
    Py_XDECREF(tmp_class_creation_7__class_decl_dict);
    tmp_class_creation_7__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_7__metaclass);
    tmp_class_creation_7__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_7__prepared);
    tmp_class_creation_7__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_22;
    exception_value = exception_keeper_value_22;
    exception_tb = exception_keeper_tb_22;
    exception_lineno = exception_keeper_lineno_22;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    CHECK_OBJECT(tmp_class_creation_7__bases_orig);
    Py_DECREF(tmp_class_creation_7__bases_orig);
    tmp_class_creation_7__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_7__bases);
    Py_DECREF(tmp_class_creation_7__bases);
    tmp_class_creation_7__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
    Py_DECREF(tmp_class_creation_7__class_decl_dict);
    tmp_class_creation_7__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_7__metaclass);
    Py_DECREF(tmp_class_creation_7__metaclass);
    tmp_class_creation_7__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_7__prepared);
    Py_DECREF(tmp_class_creation_7__prepared);
    tmp_class_creation_7__prepared = NULL;
    {
        PyObject *tmp_assattr_value_8;
        PyObject *tmp_list_element_7;
        PyObject *tmp_tuple_element_75;
        PyObject *tmp_assattr_target_8;
        tmp_tuple_element_75 = mod_consts[153];
        tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_75);
        tmp_tuple_element_75 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[119]);

        if (unlikely(tmp_tuple_element_75 == NULL)) {
            tmp_tuple_element_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[119]);
        }

        if (tmp_tuple_element_75 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;

            goto tuple_build_exception_53;
        }
        PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_75);
        goto tuple_build_noexception_53;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_53:;
        Py_DECREF(tmp_list_element_7);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_53:;
        tmp_assattr_value_8 = MAKE_LIST_EMPTY(3);
        {
            PyObject *tmp_tuple_element_76;
            PyObject *tmp_tuple_element_77;
            PyList_SET_ITEM(tmp_assattr_value_8, 0, tmp_list_element_7);
            tmp_tuple_element_76 = mod_consts[154];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_76);
            tmp_tuple_element_76 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[119]);

            if (unlikely(tmp_tuple_element_76 == NULL)) {
                tmp_tuple_element_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[119]);
            }

            if (tmp_tuple_element_76 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 236;

                goto tuple_build_exception_54;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_76);
            goto tuple_build_noexception_54;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_54:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_54:;
            PyList_SET_ITEM(tmp_assattr_value_8, 1, tmp_list_element_7);
            tmp_tuple_element_77 = mod_consts[155];
            tmp_list_element_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_77);
            tmp_tuple_element_77 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[119]);

            if (unlikely(tmp_tuple_element_77 == NULL)) {
                tmp_tuple_element_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[119]);
            }

            if (tmp_tuple_element_77 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 237;

                goto tuple_build_exception_55;
            }
            PyTuple_SET_ITEM0(tmp_list_element_7, 1, tmp_tuple_element_77);
            goto tuple_build_noexception_55;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_55:;
            Py_DECREF(tmp_list_element_7);
            goto list_build_exception_6;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_55:;
            PyList_SET_ITEM(tmp_assattr_value_8, 2, tmp_list_element_7);
        }
        goto list_build_noexception_6;
        // Exception handling pass through code for list_build:
        list_build_exception_6:;
        Py_DECREF(tmp_assattr_value_8);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_6:;
        tmp_assattr_target_8 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[152]);

        if (unlikely(tmp_assattr_target_8 == NULL)) {
            tmp_assattr_target_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[152]);
        }

        if (tmp_assattr_target_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_8);

            exception_lineno = 234;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_8, mod_consts[36], tmp_assattr_value_8);
        Py_DECREF(tmp_assattr_value_8);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_112;
        tmp_assign_source_112 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[152]);

        if (unlikely(tmp_assign_source_112 == NULL)) {
            tmp_assign_source_112 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[152]);
        }

        if (tmp_assign_source_112 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[156], tmp_assign_source_112);
    }
    {
        PyObject *tmp_assign_source_113;
        PyObject *tmp_expression_value_57;
        tmp_expression_value_57 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_57 == NULL)) {
            tmp_expression_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
        }

        if (tmp_expression_value_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_113 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_57, mod_consts[157]);
        if (tmp_assign_source_113 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[157], tmp_assign_source_113);
    }
    {
        PyObject *tmp_assattr_value_9;
        PyObject *tmp_assattr_target_9;
        tmp_assattr_value_9 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_assattr_value_9 == NULL)) {
            tmp_assattr_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_assattr_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_9 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[157]);

        if (unlikely(tmp_assattr_target_9 == NULL)) {
            tmp_assattr_target_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[157]);
        }

        assert(!(tmp_assattr_target_9 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_9, mod_consts[158], tmp_assattr_value_9);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_10;
        PyObject *tmp_list_element_8;
        PyObject *tmp_called_value_23;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_assattr_target_10;
        tmp_called_value_23 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[110]);

        if (unlikely(tmp_called_value_23 == NULL)) {
            tmp_called_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[110]);
        }

        if (tmp_called_value_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_10 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[138]);

        if (unlikely(tmp_args_element_value_10 == NULL)) {
            tmp_args_element_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[138]);
        }

        if (tmp_args_element_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;

            goto frame_exception_exit_1;
        }
        frame_e33b4e37eb07fbc5c2cc2b38efc41113->m_frame.f_lineno = 244;
        tmp_list_element_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_23, tmp_args_element_value_10);
        if (tmp_list_element_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_10 = MAKE_LIST_EMPTY(3);
        {
            PyObject *tmp_called_value_24;
            PyObject *tmp_args_element_value_11;
            PyObject *tmp_called_value_25;
            PyObject *tmp_args_element_value_12;
            PyList_SET_ITEM(tmp_assattr_value_10, 0, tmp_list_element_8);
            tmp_called_value_24 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[110]);

            if (unlikely(tmp_called_value_24 == NULL)) {
                tmp_called_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[110]);
            }

            if (tmp_called_value_24 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 244;

                goto list_build_exception_7;
            }
            tmp_args_element_value_11 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[35]);

            if (unlikely(tmp_args_element_value_11 == NULL)) {
                tmp_args_element_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
            }

            if (tmp_args_element_value_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 244;

                goto list_build_exception_7;
            }
            frame_e33b4e37eb07fbc5c2cc2b38efc41113->m_frame.f_lineno = 244;
            tmp_list_element_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_24, tmp_args_element_value_11);
            if (tmp_list_element_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 244;

                goto list_build_exception_7;
            }
            PyList_SET_ITEM(tmp_assattr_value_10, 1, tmp_list_element_8);
            tmp_called_value_25 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[110]);

            if (unlikely(tmp_called_value_25 == NULL)) {
                tmp_called_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[110]);
            }

            if (tmp_called_value_25 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 244;

                goto list_build_exception_7;
            }
            tmp_args_element_value_12 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[35]);

            if (unlikely(tmp_args_element_value_12 == NULL)) {
                tmp_args_element_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
            }

            if (tmp_args_element_value_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 244;

                goto list_build_exception_7;
            }
            frame_e33b4e37eb07fbc5c2cc2b38efc41113->m_frame.f_lineno = 244;
            tmp_list_element_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_25, tmp_args_element_value_12);
            if (tmp_list_element_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 244;

                goto list_build_exception_7;
            }
            PyList_SET_ITEM(tmp_assattr_value_10, 2, tmp_list_element_8);
        }
        goto list_build_noexception_7;
        // Exception handling pass through code for list_build:
        list_build_exception_7:;
        Py_DECREF(tmp_assattr_value_10);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_7:;
        tmp_assattr_target_10 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[157]);

        if (unlikely(tmp_assattr_target_10 == NULL)) {
            tmp_assattr_target_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[157]);
        }

        if (tmp_assattr_target_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_10);

            exception_lineno = 244;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_10, mod_consts[159], tmp_assattr_value_10);
        Py_DECREF(tmp_assattr_value_10);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_114;
        PyObject *tmp_expression_value_58;
        tmp_expression_value_58 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_58 == NULL)) {
            tmp_expression_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
        }

        if (tmp_expression_value_58 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_114 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_58, mod_consts[160]);
        if (tmp_assign_source_114 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[160], tmp_assign_source_114);
    }
    {
        PyObject *tmp_assattr_value_11;
        PyObject *tmp_assattr_target_11;
        tmp_assattr_value_11 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_assattr_value_11 == NULL)) {
            tmp_assattr_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_assattr_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_11 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[160]);

        if (unlikely(tmp_assattr_target_11 == NULL)) {
            tmp_assattr_target_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[160]);
        }

        assert(!(tmp_assattr_target_11 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_11, mod_consts[158], tmp_assattr_value_11);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_12;
        PyObject *tmp_list_element_9;
        PyObject *tmp_called_value_26;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_assattr_target_12;
        tmp_called_value_26 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[110]);

        if (unlikely(tmp_called_value_26 == NULL)) {
            tmp_called_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[110]);
        }

        if (tmp_called_value_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_13 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[138]);

        if (unlikely(tmp_args_element_value_13 == NULL)) {
            tmp_args_element_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[138]);
        }

        if (tmp_args_element_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;

            goto frame_exception_exit_1;
        }
        frame_e33b4e37eb07fbc5c2cc2b38efc41113->m_frame.f_lineno = 249;
        tmp_list_element_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_26, tmp_args_element_value_13);
        if (tmp_list_element_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_12 = MAKE_LIST_EMPTY(3);
        {
            PyObject *tmp_called_value_27;
            PyObject *tmp_args_element_value_14;
            PyObject *tmp_called_value_28;
            PyObject *tmp_args_element_value_15;
            PyList_SET_ITEM(tmp_assattr_value_12, 0, tmp_list_element_9);
            tmp_called_value_27 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[110]);

            if (unlikely(tmp_called_value_27 == NULL)) {
                tmp_called_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[110]);
            }

            if (tmp_called_value_27 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 249;

                goto list_build_exception_8;
            }
            tmp_args_element_value_14 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[35]);

            if (unlikely(tmp_args_element_value_14 == NULL)) {
                tmp_args_element_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
            }

            if (tmp_args_element_value_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 249;

                goto list_build_exception_8;
            }
            frame_e33b4e37eb07fbc5c2cc2b38efc41113->m_frame.f_lineno = 249;
            tmp_list_element_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_27, tmp_args_element_value_14);
            if (tmp_list_element_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 249;

                goto list_build_exception_8;
            }
            PyList_SET_ITEM(tmp_assattr_value_12, 1, tmp_list_element_9);
            tmp_called_value_28 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[110]);

            if (unlikely(tmp_called_value_28 == NULL)) {
                tmp_called_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[110]);
            }

            if (tmp_called_value_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 249;

                goto list_build_exception_8;
            }
            tmp_args_element_value_15 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[35]);

            if (unlikely(tmp_args_element_value_15 == NULL)) {
                tmp_args_element_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
            }

            if (tmp_args_element_value_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 249;

                goto list_build_exception_8;
            }
            frame_e33b4e37eb07fbc5c2cc2b38efc41113->m_frame.f_lineno = 249;
            tmp_list_element_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_28, tmp_args_element_value_15);
            if (tmp_list_element_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 249;

                goto list_build_exception_8;
            }
            PyList_SET_ITEM(tmp_assattr_value_12, 2, tmp_list_element_9);
        }
        goto list_build_noexception_8;
        // Exception handling pass through code for list_build:
        list_build_exception_8:;
        Py_DECREF(tmp_assattr_value_12);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_8:;
        tmp_assattr_target_12 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[160]);

        if (unlikely(tmp_assattr_target_12 == NULL)) {
            tmp_assattr_target_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[160]);
        }

        if (tmp_assattr_target_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_12);

            exception_lineno = 249;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_12, mod_consts[159], tmp_assattr_value_12);
        Py_DECREF(tmp_assattr_value_12);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_115;
        PyObject *tmp_expression_value_59;
        tmp_expression_value_59 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_59 == NULL)) {
            tmp_expression_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
        }

        if (tmp_expression_value_59 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_115 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_59, mod_consts[161]);
        if (tmp_assign_source_115 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[161], tmp_assign_source_115);
    }
    {
        PyObject *tmp_assattr_value_13;
        PyObject *tmp_assattr_target_13;
        tmp_assattr_value_13 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_assattr_value_13 == NULL)) {
            tmp_assattr_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_assattr_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_13 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[161]);

        if (unlikely(tmp_assattr_target_13 == NULL)) {
            tmp_assattr_target_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[161]);
        }

        assert(!(tmp_assattr_target_13 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_13, mod_consts[158], tmp_assattr_value_13);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_14;
        PyObject *tmp_list_element_10;
        PyObject *tmp_called_value_29;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_assattr_target_14;
        tmp_called_value_29 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[110]);

        if (unlikely(tmp_called_value_29 == NULL)) {
            tmp_called_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[110]);
        }

        if (tmp_called_value_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_16 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[138]);

        if (unlikely(tmp_args_element_value_16 == NULL)) {
            tmp_args_element_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[138]);
        }

        if (tmp_args_element_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;

            goto frame_exception_exit_1;
        }
        frame_e33b4e37eb07fbc5c2cc2b38efc41113->m_frame.f_lineno = 254;
        tmp_list_element_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_29, tmp_args_element_value_16);
        if (tmp_list_element_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_14 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM(tmp_assattr_value_14, 0, tmp_list_element_10);
        tmp_assattr_target_14 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[161]);

        if (unlikely(tmp_assattr_target_14 == NULL)) {
            tmp_assattr_target_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[161]);
        }

        if (tmp_assattr_target_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_14);

            exception_lineno = 254;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_14, mod_consts[159], tmp_assattr_value_14);
        Py_DECREF(tmp_assattr_value_14);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_116;
        PyObject *tmp_expression_value_60;
        tmp_expression_value_60 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_60 == NULL)) {
            tmp_expression_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
        }

        if (tmp_expression_value_60 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_116 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_60, mod_consts[162]);
        if (tmp_assign_source_116 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[162], tmp_assign_source_116);
    }
    {
        PyObject *tmp_assattr_value_15;
        PyObject *tmp_assattr_target_15;
        tmp_assattr_value_15 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_assattr_value_15 == NULL)) {
            tmp_assattr_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_assattr_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_15 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[162]);

        if (unlikely(tmp_assattr_target_15 == NULL)) {
            tmp_assattr_target_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[162]);
        }

        assert(!(tmp_assattr_target_15 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_15, mod_consts[158], tmp_assattr_value_15);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_16;
        PyObject *tmp_list_element_11;
        PyObject *tmp_called_value_30;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_assattr_target_16;
        tmp_called_value_30 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[110]);

        if (unlikely(tmp_called_value_30 == NULL)) {
            tmp_called_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[110]);
        }

        if (tmp_called_value_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_17 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[138]);

        if (unlikely(tmp_args_element_value_17 == NULL)) {
            tmp_args_element_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[138]);
        }

        if (tmp_args_element_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;

            goto frame_exception_exit_1;
        }
        frame_e33b4e37eb07fbc5c2cc2b38efc41113->m_frame.f_lineno = 259;
        tmp_list_element_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_30, tmp_args_element_value_17);
        if (tmp_list_element_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_16 = MAKE_LIST_EMPTY(4);
        {
            PyObject *tmp_called_value_31;
            PyObject *tmp_args_element_value_18;
            PyObject *tmp_called_value_32;
            PyObject *tmp_args_element_value_19;
            PyList_SET_ITEM(tmp_assattr_value_16, 0, tmp_list_element_11);
            tmp_list_element_11 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[35]);

            if (unlikely(tmp_list_element_11 == NULL)) {
                tmp_list_element_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
            }

            if (tmp_list_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 259;

                goto list_build_exception_9;
            }
            PyList_SET_ITEM0(tmp_assattr_value_16, 1, tmp_list_element_11);
            tmp_called_value_31 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[110]);

            if (unlikely(tmp_called_value_31 == NULL)) {
                tmp_called_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[110]);
            }

            if (tmp_called_value_31 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 259;

                goto list_build_exception_9;
            }
            tmp_args_element_value_18 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[35]);

            if (unlikely(tmp_args_element_value_18 == NULL)) {
                tmp_args_element_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
            }

            if (tmp_args_element_value_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 259;

                goto list_build_exception_9;
            }
            frame_e33b4e37eb07fbc5c2cc2b38efc41113->m_frame.f_lineno = 259;
            tmp_list_element_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_31, tmp_args_element_value_18);
            if (tmp_list_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 259;

                goto list_build_exception_9;
            }
            PyList_SET_ITEM(tmp_assattr_value_16, 2, tmp_list_element_11);
            tmp_called_value_32 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[110]);

            if (unlikely(tmp_called_value_32 == NULL)) {
                tmp_called_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[110]);
            }

            if (tmp_called_value_32 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 259;

                goto list_build_exception_9;
            }
            tmp_args_element_value_19 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[111]);

            if (unlikely(tmp_args_element_value_19 == NULL)) {
                tmp_args_element_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[111]);
            }

            if (tmp_args_element_value_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 259;

                goto list_build_exception_9;
            }
            frame_e33b4e37eb07fbc5c2cc2b38efc41113->m_frame.f_lineno = 259;
            tmp_list_element_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_32, tmp_args_element_value_19);
            if (tmp_list_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 259;

                goto list_build_exception_9;
            }
            PyList_SET_ITEM(tmp_assattr_value_16, 3, tmp_list_element_11);
        }
        goto list_build_noexception_9;
        // Exception handling pass through code for list_build:
        list_build_exception_9:;
        Py_DECREF(tmp_assattr_value_16);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_9:;
        tmp_assattr_target_16 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[162]);

        if (unlikely(tmp_assattr_target_16 == NULL)) {
            tmp_assattr_target_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[162]);
        }

        if (tmp_assattr_target_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_16);

            exception_lineno = 259;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_16, mod_consts[159], tmp_assattr_value_16);
        Py_DECREF(tmp_assattr_value_16);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_117;
        PyObject *tmp_expression_value_61;
        tmp_expression_value_61 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_61 == NULL)) {
            tmp_expression_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
        }

        if (tmp_expression_value_61 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_117 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_61, mod_consts[163]);
        if (tmp_assign_source_117 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[163], tmp_assign_source_117);
    }
    {
        PyObject *tmp_assattr_value_17;
        PyObject *tmp_assattr_target_17;
        tmp_assattr_value_17 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_assattr_value_17 == NULL)) {
            tmp_assattr_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_assattr_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_17 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[163]);

        if (unlikely(tmp_assattr_target_17 == NULL)) {
            tmp_assattr_target_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[163]);
        }

        assert(!(tmp_assattr_target_17 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_17, mod_consts[158], tmp_assattr_value_17);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_18;
        PyObject *tmp_list_element_12;
        PyObject *tmp_called_value_33;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_assattr_target_18;
        tmp_called_value_33 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[110]);

        if (unlikely(tmp_called_value_33 == NULL)) {
            tmp_called_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[110]);
        }

        if (tmp_called_value_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_20 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[138]);

        if (unlikely(tmp_args_element_value_20 == NULL)) {
            tmp_args_element_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[138]);
        }

        if (tmp_args_element_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;

            goto frame_exception_exit_1;
        }
        frame_e33b4e37eb07fbc5c2cc2b38efc41113->m_frame.f_lineno = 264;
        tmp_list_element_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_33, tmp_args_element_value_20);
        if (tmp_list_element_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_18 = MAKE_LIST_EMPTY(4);
        {
            PyObject *tmp_called_value_34;
            PyObject *tmp_args_element_value_21;
            PyObject *tmp_called_value_35;
            PyObject *tmp_args_element_value_22;
            PyObject *tmp_called_value_36;
            PyObject *tmp_args_element_value_23;
            PyObject *tmp_called_value_37;
            PyObject *tmp_args_element_value_24;
            PyList_SET_ITEM(tmp_assattr_value_18, 0, tmp_list_element_12);
            tmp_list_element_12 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[35]);

            if (unlikely(tmp_list_element_12 == NULL)) {
                tmp_list_element_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
            }

            if (tmp_list_element_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 264;

                goto list_build_exception_10;
            }
            PyList_SET_ITEM0(tmp_assattr_value_18, 1, tmp_list_element_12);
            tmp_called_value_34 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[110]);

            if (unlikely(tmp_called_value_34 == NULL)) {
                tmp_called_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[110]);
            }

            if (tmp_called_value_34 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 264;

                goto list_build_exception_10;
            }
            tmp_args_element_value_21 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[35]);

            if (unlikely(tmp_args_element_value_21 == NULL)) {
                tmp_args_element_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
            }

            if (tmp_args_element_value_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 264;

                goto list_build_exception_10;
            }
            frame_e33b4e37eb07fbc5c2cc2b38efc41113->m_frame.f_lineno = 264;
            tmp_list_element_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_34, tmp_args_element_value_21);
            if (tmp_list_element_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 264;

                goto list_build_exception_10;
            }
            PyList_SET_ITEM(tmp_assattr_value_18, 2, tmp_list_element_12);
            tmp_called_value_35 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[110]);

            if (unlikely(tmp_called_value_35 == NULL)) {
                tmp_called_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[110]);
            }

            if (tmp_called_value_35 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 264;

                goto list_build_exception_10;
            }
            tmp_called_value_36 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[110]);

            if (unlikely(tmp_called_value_36 == NULL)) {
                tmp_called_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[110]);
            }

            if (tmp_called_value_36 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 264;

                goto list_build_exception_10;
            }
            tmp_called_value_37 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[110]);

            if (unlikely(tmp_called_value_37 == NULL)) {
                tmp_called_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[110]);
            }

            if (tmp_called_value_37 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 264;

                goto list_build_exception_10;
            }
            tmp_args_element_value_24 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[115]);

            if (unlikely(tmp_args_element_value_24 == NULL)) {
                tmp_args_element_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[115]);
            }

            if (tmp_args_element_value_24 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 264;

                goto list_build_exception_10;
            }
            frame_e33b4e37eb07fbc5c2cc2b38efc41113->m_frame.f_lineno = 264;
            tmp_args_element_value_23 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_37, tmp_args_element_value_24);
            if (tmp_args_element_value_23 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 264;

                goto list_build_exception_10;
            }
            frame_e33b4e37eb07fbc5c2cc2b38efc41113->m_frame.f_lineno = 264;
            tmp_args_element_value_22 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_36, tmp_args_element_value_23);
            Py_DECREF(tmp_args_element_value_23);
            if (tmp_args_element_value_22 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 264;

                goto list_build_exception_10;
            }
            frame_e33b4e37eb07fbc5c2cc2b38efc41113->m_frame.f_lineno = 264;
            tmp_list_element_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_35, tmp_args_element_value_22);
            Py_DECREF(tmp_args_element_value_22);
            if (tmp_list_element_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 264;

                goto list_build_exception_10;
            }
            PyList_SET_ITEM(tmp_assattr_value_18, 3, tmp_list_element_12);
        }
        goto list_build_noexception_10;
        // Exception handling pass through code for list_build:
        list_build_exception_10:;
        Py_DECREF(tmp_assattr_value_18);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_10:;
        tmp_assattr_target_18 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[163]);

        if (unlikely(tmp_assattr_target_18 == NULL)) {
            tmp_assattr_target_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[163]);
        }

        if (tmp_assattr_target_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_18);

            exception_lineno = 264;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_18, mod_consts[159], tmp_assattr_value_18);
        Py_DECREF(tmp_assattr_value_18);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_118;
        PyObject *tmp_expression_value_62;
        tmp_expression_value_62 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_62 == NULL)) {
            tmp_expression_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
        }

        if (tmp_expression_value_62 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_118 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_62, mod_consts[164]);
        if (tmp_assign_source_118 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[164], tmp_assign_source_118);
    }
    {
        PyObject *tmp_assattr_value_19;
        PyObject *tmp_assattr_target_19;
        tmp_assattr_value_19 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_assattr_value_19 == NULL)) {
            tmp_assattr_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_assattr_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_19 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[164]);

        if (unlikely(tmp_assattr_target_19 == NULL)) {
            tmp_assattr_target_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[164]);
        }

        assert(!(tmp_assattr_target_19 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_19, mod_consts[158], tmp_assattr_value_19);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_20;
        PyObject *tmp_list_element_13;
        PyObject *tmp_called_value_38;
        PyObject *tmp_args_element_value_25;
        PyObject *tmp_assattr_target_20;
        tmp_called_value_38 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[110]);

        if (unlikely(tmp_called_value_38 == NULL)) {
            tmp_called_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[110]);
        }

        if (tmp_called_value_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_25 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[138]);

        if (unlikely(tmp_args_element_value_25 == NULL)) {
            tmp_args_element_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[138]);
        }

        if (tmp_args_element_value_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;

            goto frame_exception_exit_1;
        }
        frame_e33b4e37eb07fbc5c2cc2b38efc41113->m_frame.f_lineno = 269;
        tmp_list_element_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_38, tmp_args_element_value_25);
        if (tmp_list_element_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_20 = MAKE_LIST_EMPTY(4);
        {
            PyObject *tmp_called_value_39;
            PyObject *tmp_args_element_value_26;
            PyObject *tmp_called_value_40;
            PyObject *tmp_args_element_value_27;
            PyList_SET_ITEM(tmp_assattr_value_20, 0, tmp_list_element_13);
            tmp_list_element_13 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[35]);

            if (unlikely(tmp_list_element_13 == NULL)) {
                tmp_list_element_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
            }

            if (tmp_list_element_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 269;

                goto list_build_exception_11;
            }
            PyList_SET_ITEM0(tmp_assattr_value_20, 1, tmp_list_element_13);
            tmp_called_value_39 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[110]);

            if (unlikely(tmp_called_value_39 == NULL)) {
                tmp_called_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[110]);
            }

            if (tmp_called_value_39 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 269;

                goto list_build_exception_11;
            }
            tmp_args_element_value_26 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[115]);

            if (unlikely(tmp_args_element_value_26 == NULL)) {
                tmp_args_element_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[115]);
            }

            if (tmp_args_element_value_26 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 269;

                goto list_build_exception_11;
            }
            frame_e33b4e37eb07fbc5c2cc2b38efc41113->m_frame.f_lineno = 269;
            tmp_list_element_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_39, tmp_args_element_value_26);
            if (tmp_list_element_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 269;

                goto list_build_exception_11;
            }
            PyList_SET_ITEM(tmp_assattr_value_20, 2, tmp_list_element_13);
            tmp_called_value_40 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[110]);

            if (unlikely(tmp_called_value_40 == NULL)) {
                tmp_called_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[110]);
            }

            if (tmp_called_value_40 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 269;

                goto list_build_exception_11;
            }
            tmp_args_element_value_27 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[115]);

            if (unlikely(tmp_args_element_value_27 == NULL)) {
                tmp_args_element_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[115]);
            }

            if (tmp_args_element_value_27 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 269;

                goto list_build_exception_11;
            }
            frame_e33b4e37eb07fbc5c2cc2b38efc41113->m_frame.f_lineno = 269;
            tmp_list_element_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_40, tmp_args_element_value_27);
            if (tmp_list_element_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 269;

                goto list_build_exception_11;
            }
            PyList_SET_ITEM(tmp_assattr_value_20, 3, tmp_list_element_13);
        }
        goto list_build_noexception_11;
        // Exception handling pass through code for list_build:
        list_build_exception_11:;
        Py_DECREF(tmp_assattr_value_20);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_11:;
        tmp_assattr_target_20 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[164]);

        if (unlikely(tmp_assattr_target_20 == NULL)) {
            tmp_assattr_target_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[164]);
        }

        if (tmp_assattr_target_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_20);

            exception_lineno = 269;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_20, mod_consts[159], tmp_assattr_value_20);
        Py_DECREF(tmp_assattr_value_20);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_119;
        PyObject *tmp_expression_value_63;
        tmp_expression_value_63 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_63 == NULL)) {
            tmp_expression_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
        }

        if (tmp_expression_value_63 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_119 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_63, mod_consts[165]);
        if (tmp_assign_source_119 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[165], tmp_assign_source_119);
    }
    {
        PyObject *tmp_assattr_value_21;
        PyObject *tmp_assattr_target_21;
        tmp_assattr_value_21 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_assattr_value_21 == NULL)) {
            tmp_assattr_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_assattr_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_21 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[165]);

        if (unlikely(tmp_assattr_target_21 == NULL)) {
            tmp_assattr_target_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[165]);
        }

        assert(!(tmp_assattr_target_21 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_21, mod_consts[158], tmp_assattr_value_21);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_22;
        PyObject *tmp_list_element_14;
        PyObject *tmp_called_value_41;
        PyObject *tmp_args_element_value_28;
        PyObject *tmp_assattr_target_22;
        tmp_called_value_41 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[110]);

        if (unlikely(tmp_called_value_41 == NULL)) {
            tmp_called_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[110]);
        }

        if (tmp_called_value_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_28 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[138]);

        if (unlikely(tmp_args_element_value_28 == NULL)) {
            tmp_args_element_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[138]);
        }

        if (tmp_args_element_value_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;

            goto frame_exception_exit_1;
        }
        frame_e33b4e37eb07fbc5c2cc2b38efc41113->m_frame.f_lineno = 274;
        tmp_list_element_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_41, tmp_args_element_value_28);
        if (tmp_list_element_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_22 = MAKE_LIST_EMPTY(3);
        {
            PyObject *tmp_called_value_42;
            PyObject *tmp_args_element_value_29;
            PyList_SET_ITEM(tmp_assattr_value_22, 0, tmp_list_element_14);
            tmp_list_element_14 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[35]);

            if (unlikely(tmp_list_element_14 == NULL)) {
                tmp_list_element_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
            }

            if (tmp_list_element_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 274;

                goto list_build_exception_12;
            }
            PyList_SET_ITEM0(tmp_assattr_value_22, 1, tmp_list_element_14);
            tmp_called_value_42 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[110]);

            if (unlikely(tmp_called_value_42 == NULL)) {
                tmp_called_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[110]);
            }

            if (tmp_called_value_42 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 274;

                goto list_build_exception_12;
            }
            tmp_args_element_value_29 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[115]);

            if (unlikely(tmp_args_element_value_29 == NULL)) {
                tmp_args_element_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[115]);
            }

            if (tmp_args_element_value_29 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 274;

                goto list_build_exception_12;
            }
            frame_e33b4e37eb07fbc5c2cc2b38efc41113->m_frame.f_lineno = 274;
            tmp_list_element_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_42, tmp_args_element_value_29);
            if (tmp_list_element_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 274;

                goto list_build_exception_12;
            }
            PyList_SET_ITEM(tmp_assattr_value_22, 2, tmp_list_element_14);
        }
        goto list_build_noexception_12;
        // Exception handling pass through code for list_build:
        list_build_exception_12:;
        Py_DECREF(tmp_assattr_value_22);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_12:;
        tmp_assattr_target_22 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[165]);

        if (unlikely(tmp_assattr_target_22 == NULL)) {
            tmp_assattr_target_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[165]);
        }

        if (tmp_assattr_target_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_22);

            exception_lineno = 274;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_22, mod_consts[159], tmp_assattr_value_22);
        Py_DECREF(tmp_assattr_value_22);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_120;
        PyObject *tmp_expression_value_64;
        tmp_expression_value_64 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_64 == NULL)) {
            tmp_expression_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
        }

        if (tmp_expression_value_64 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_120 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_64, mod_consts[166]);
        if (tmp_assign_source_120 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[166], tmp_assign_source_120);
    }
    {
        PyObject *tmp_assattr_value_23;
        PyObject *tmp_assattr_target_23;
        tmp_assattr_value_23 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_assattr_value_23 == NULL)) {
            tmp_assattr_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_assattr_value_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_23 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[166]);

        if (unlikely(tmp_assattr_target_23 == NULL)) {
            tmp_assattr_target_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[166]);
        }

        assert(!(tmp_assattr_target_23 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_23, mod_consts[158], tmp_assattr_value_23);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_24;
        PyObject *tmp_list_element_15;
        PyObject *tmp_called_value_43;
        PyObject *tmp_args_element_value_30;
        PyObject *tmp_assattr_target_24;
        tmp_called_value_43 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[110]);

        if (unlikely(tmp_called_value_43 == NULL)) {
            tmp_called_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[110]);
        }

        if (tmp_called_value_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_30 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[138]);

        if (unlikely(tmp_args_element_value_30 == NULL)) {
            tmp_args_element_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[138]);
        }

        if (tmp_args_element_value_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;

            goto frame_exception_exit_1;
        }
        frame_e33b4e37eb07fbc5c2cc2b38efc41113->m_frame.f_lineno = 279;
        tmp_list_element_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_43, tmp_args_element_value_30);
        if (tmp_list_element_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_24 = MAKE_LIST_EMPTY(3);
        {
            PyObject *tmp_called_value_44;
            PyObject *tmp_args_element_value_31;
            PyList_SET_ITEM(tmp_assattr_value_24, 0, tmp_list_element_15);
            tmp_list_element_15 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[35]);

            if (unlikely(tmp_list_element_15 == NULL)) {
                tmp_list_element_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
            }

            if (tmp_list_element_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 279;

                goto list_build_exception_13;
            }
            PyList_SET_ITEM0(tmp_assattr_value_24, 1, tmp_list_element_15);
            tmp_called_value_44 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[110]);

            if (unlikely(tmp_called_value_44 == NULL)) {
                tmp_called_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[110]);
            }

            if (tmp_called_value_44 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 279;

                goto list_build_exception_13;
            }
            tmp_args_element_value_31 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[111]);

            if (unlikely(tmp_args_element_value_31 == NULL)) {
                tmp_args_element_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[111]);
            }

            if (tmp_args_element_value_31 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 279;

                goto list_build_exception_13;
            }
            frame_e33b4e37eb07fbc5c2cc2b38efc41113->m_frame.f_lineno = 279;
            tmp_list_element_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_44, tmp_args_element_value_31);
            if (tmp_list_element_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 279;

                goto list_build_exception_13;
            }
            PyList_SET_ITEM(tmp_assattr_value_24, 2, tmp_list_element_15);
        }
        goto list_build_noexception_13;
        // Exception handling pass through code for list_build:
        list_build_exception_13:;
        Py_DECREF(tmp_assattr_value_24);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_13:;
        tmp_assattr_target_24 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[166]);

        if (unlikely(tmp_assattr_target_24 == NULL)) {
            tmp_assattr_target_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[166]);
        }

        if (tmp_assattr_target_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_24);

            exception_lineno = 279;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_24, mod_consts[159], tmp_assattr_value_24);
        Py_DECREF(tmp_assattr_value_24);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_121;
        PyObject *tmp_expression_value_65;
        tmp_expression_value_65 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_65 == NULL)) {
            tmp_expression_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
        }

        if (tmp_expression_value_65 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_121 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_65, mod_consts[167]);
        if (tmp_assign_source_121 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[167], tmp_assign_source_121);
    }
    {
        PyObject *tmp_assattr_value_25;
        PyObject *tmp_assattr_target_25;
        tmp_assattr_value_25 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_assattr_value_25 == NULL)) {
            tmp_assattr_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_assattr_value_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_25 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[167]);

        if (unlikely(tmp_assattr_target_25 == NULL)) {
            tmp_assattr_target_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[167]);
        }

        assert(!(tmp_assattr_target_25 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_25, mod_consts[158], tmp_assattr_value_25);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_26;
        PyObject *tmp_list_element_16;
        PyObject *tmp_called_value_45;
        PyObject *tmp_args_element_value_32;
        PyObject *tmp_assattr_target_26;
        tmp_called_value_45 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[110]);

        if (unlikely(tmp_called_value_45 == NULL)) {
            tmp_called_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[110]);
        }

        if (tmp_called_value_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_32 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[138]);

        if (unlikely(tmp_args_element_value_32 == NULL)) {
            tmp_args_element_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[138]);
        }

        if (tmp_args_element_value_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;

            goto frame_exception_exit_1;
        }
        frame_e33b4e37eb07fbc5c2cc2b38efc41113->m_frame.f_lineno = 284;
        tmp_list_element_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_45, tmp_args_element_value_32);
        if (tmp_list_element_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_26 = MAKE_LIST_EMPTY(3);
        {
            PyObject *tmp_called_value_46;
            PyObject *tmp_args_element_value_33;
            PyList_SET_ITEM(tmp_assattr_value_26, 0, tmp_list_element_16);
            tmp_list_element_16 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[35]);

            if (unlikely(tmp_list_element_16 == NULL)) {
                tmp_list_element_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
            }

            if (tmp_list_element_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 284;

                goto list_build_exception_14;
            }
            PyList_SET_ITEM0(tmp_assattr_value_26, 1, tmp_list_element_16);
            tmp_called_value_46 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[110]);

            if (unlikely(tmp_called_value_46 == NULL)) {
                tmp_called_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[110]);
            }

            if (tmp_called_value_46 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 284;

                goto list_build_exception_14;
            }
            tmp_args_element_value_33 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[115]);

            if (unlikely(tmp_args_element_value_33 == NULL)) {
                tmp_args_element_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[115]);
            }

            if (tmp_args_element_value_33 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 284;

                goto list_build_exception_14;
            }
            frame_e33b4e37eb07fbc5c2cc2b38efc41113->m_frame.f_lineno = 284;
            tmp_list_element_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_46, tmp_args_element_value_33);
            if (tmp_list_element_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 284;

                goto list_build_exception_14;
            }
            PyList_SET_ITEM(tmp_assattr_value_26, 2, tmp_list_element_16);
        }
        goto list_build_noexception_14;
        // Exception handling pass through code for list_build:
        list_build_exception_14:;
        Py_DECREF(tmp_assattr_value_26);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_14:;
        tmp_assattr_target_26 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[167]);

        if (unlikely(tmp_assattr_target_26 == NULL)) {
            tmp_assattr_target_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[167]);
        }

        if (tmp_assattr_target_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_26);

            exception_lineno = 284;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_26, mod_consts[159], tmp_assattr_value_26);
        Py_DECREF(tmp_assattr_value_26);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_122;
        PyObject *tmp_expression_value_66;
        tmp_expression_value_66 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_66 == NULL)) {
            tmp_expression_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
        }

        if (tmp_expression_value_66 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_122 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_66, mod_consts[168]);
        if (tmp_assign_source_122 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[168], tmp_assign_source_122);
    }
    {
        PyObject *tmp_assattr_value_27;
        PyObject *tmp_assattr_target_27;
        tmp_assattr_value_27 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_assattr_value_27 == NULL)) {
            tmp_assattr_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_assattr_value_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_27 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[168]);

        if (unlikely(tmp_assattr_target_27 == NULL)) {
            tmp_assattr_target_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[168]);
        }

        assert(!(tmp_assattr_target_27 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_27, mod_consts[158], tmp_assattr_value_27);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_28;
        PyObject *tmp_list_element_17;
        PyObject *tmp_called_value_47;
        PyObject *tmp_args_element_value_34;
        PyObject *tmp_assattr_target_28;
        tmp_called_value_47 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[110]);

        if (unlikely(tmp_called_value_47 == NULL)) {
            tmp_called_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[110]);
        }

        if (tmp_called_value_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_34 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[138]);

        if (unlikely(tmp_args_element_value_34 == NULL)) {
            tmp_args_element_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[138]);
        }

        if (tmp_args_element_value_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;

            goto frame_exception_exit_1;
        }
        frame_e33b4e37eb07fbc5c2cc2b38efc41113->m_frame.f_lineno = 289;
        tmp_list_element_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_47, tmp_args_element_value_34);
        if (tmp_list_element_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_28 = MAKE_LIST_EMPTY(3);
        PyList_SET_ITEM(tmp_assattr_value_28, 0, tmp_list_element_17);
        tmp_list_element_17 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_list_element_17 == NULL)) {
            tmp_list_element_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_list_element_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;

            goto list_build_exception_15;
        }
        PyList_SET_ITEM0(tmp_assattr_value_28, 1, tmp_list_element_17);
        tmp_list_element_17 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_list_element_17 == NULL)) {
            tmp_list_element_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_list_element_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;

            goto list_build_exception_15;
        }
        PyList_SET_ITEM0(tmp_assattr_value_28, 2, tmp_list_element_17);
        goto list_build_noexception_15;
        // Exception handling pass through code for list_build:
        list_build_exception_15:;
        Py_DECREF(tmp_assattr_value_28);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_15:;
        tmp_assattr_target_28 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[168]);

        if (unlikely(tmp_assattr_target_28 == NULL)) {
            tmp_assattr_target_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[168]);
        }

        if (tmp_assattr_target_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_28);

            exception_lineno = 289;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_28, mod_consts[159], tmp_assattr_value_28);
        Py_DECREF(tmp_assattr_value_28);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_123;
        PyObject *tmp_expression_value_67;
        tmp_expression_value_67 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_67 == NULL)) {
            tmp_expression_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
        }

        if (tmp_expression_value_67 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_123 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_67, mod_consts[169]);
        if (tmp_assign_source_123 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[169], tmp_assign_source_123);
    }
    {
        PyObject *tmp_assattr_value_29;
        PyObject *tmp_assattr_target_29;
        tmp_assattr_value_29 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_assattr_value_29 == NULL)) {
            tmp_assattr_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_assattr_value_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_29 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[169]);

        if (unlikely(tmp_assattr_target_29 == NULL)) {
            tmp_assattr_target_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[169]);
        }

        assert(!(tmp_assattr_target_29 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_29, mod_consts[158], tmp_assattr_value_29);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_30;
        PyObject *tmp_list_element_18;
        PyObject *tmp_called_value_48;
        PyObject *tmp_args_element_value_35;
        PyObject *tmp_assattr_target_30;
        tmp_called_value_48 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[110]);

        if (unlikely(tmp_called_value_48 == NULL)) {
            tmp_called_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[110]);
        }

        if (tmp_called_value_48 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_35 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[138]);

        if (unlikely(tmp_args_element_value_35 == NULL)) {
            tmp_args_element_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[138]);
        }

        if (tmp_args_element_value_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;

            goto frame_exception_exit_1;
        }
        frame_e33b4e37eb07fbc5c2cc2b38efc41113->m_frame.f_lineno = 294;
        tmp_list_element_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_48, tmp_args_element_value_35);
        if (tmp_list_element_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_30 = MAKE_LIST_EMPTY(3);
        {
            PyObject *tmp_called_value_49;
            PyObject *tmp_args_element_value_36;
            PyList_SET_ITEM(tmp_assattr_value_30, 0, tmp_list_element_18);
            tmp_list_element_18 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[35]);

            if (unlikely(tmp_list_element_18 == NULL)) {
                tmp_list_element_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
            }

            if (tmp_list_element_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 294;

                goto list_build_exception_16;
            }
            PyList_SET_ITEM0(tmp_assattr_value_30, 1, tmp_list_element_18);
            tmp_called_value_49 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[110]);

            if (unlikely(tmp_called_value_49 == NULL)) {
                tmp_called_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[110]);
            }

            if (tmp_called_value_49 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 294;

                goto list_build_exception_16;
            }
            tmp_args_element_value_36 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[115]);

            if (unlikely(tmp_args_element_value_36 == NULL)) {
                tmp_args_element_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[115]);
            }

            if (tmp_args_element_value_36 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 294;

                goto list_build_exception_16;
            }
            frame_e33b4e37eb07fbc5c2cc2b38efc41113->m_frame.f_lineno = 294;
            tmp_list_element_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_49, tmp_args_element_value_36);
            if (tmp_list_element_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 294;

                goto list_build_exception_16;
            }
            PyList_SET_ITEM(tmp_assattr_value_30, 2, tmp_list_element_18);
        }
        goto list_build_noexception_16;
        // Exception handling pass through code for list_build:
        list_build_exception_16:;
        Py_DECREF(tmp_assattr_value_30);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_16:;
        tmp_assattr_target_30 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[169]);

        if (unlikely(tmp_assattr_target_30 == NULL)) {
            tmp_assattr_target_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[169]);
        }

        if (tmp_assattr_target_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_30);

            exception_lineno = 294;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_30, mod_consts[159], tmp_assattr_value_30);
        Py_DECREF(tmp_assattr_value_30);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_124;
        PyObject *tmp_expression_value_68;
        tmp_expression_value_68 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_68 == NULL)) {
            tmp_expression_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
        }

        if (tmp_expression_value_68 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_124 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_68, mod_consts[170]);
        if (tmp_assign_source_124 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[170], tmp_assign_source_124);
    }
    {
        PyObject *tmp_assattr_value_31;
        PyObject *tmp_assattr_target_31;
        tmp_assattr_value_31 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_assattr_value_31 == NULL)) {
            tmp_assattr_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_assattr_value_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_31 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[170]);

        if (unlikely(tmp_assattr_target_31 == NULL)) {
            tmp_assattr_target_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[170]);
        }

        assert(!(tmp_assattr_target_31 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_31, mod_consts[158], tmp_assattr_value_31);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_32;
        PyObject *tmp_list_element_19;
        PyObject *tmp_called_value_50;
        PyObject *tmp_args_element_value_37;
        PyObject *tmp_assattr_target_32;
        tmp_called_value_50 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[110]);

        if (unlikely(tmp_called_value_50 == NULL)) {
            tmp_called_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[110]);
        }

        if (tmp_called_value_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_37 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[138]);

        if (unlikely(tmp_args_element_value_37 == NULL)) {
            tmp_args_element_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[138]);
        }

        if (tmp_args_element_value_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;

            goto frame_exception_exit_1;
        }
        frame_e33b4e37eb07fbc5c2cc2b38efc41113->m_frame.f_lineno = 299;
        tmp_list_element_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_50, tmp_args_element_value_37);
        if (tmp_list_element_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_32 = MAKE_LIST_EMPTY(3);
        PyList_SET_ITEM(tmp_assattr_value_32, 0, tmp_list_element_19);
        tmp_list_element_19 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_list_element_19 == NULL)) {
            tmp_list_element_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_list_element_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;

            goto list_build_exception_17;
        }
        PyList_SET_ITEM0(tmp_assattr_value_32, 1, tmp_list_element_19);
        tmp_list_element_19 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_list_element_19 == NULL)) {
            tmp_list_element_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_list_element_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;

            goto list_build_exception_17;
        }
        PyList_SET_ITEM0(tmp_assattr_value_32, 2, tmp_list_element_19);
        goto list_build_noexception_17;
        // Exception handling pass through code for list_build:
        list_build_exception_17:;
        Py_DECREF(tmp_assattr_value_32);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_17:;
        tmp_assattr_target_32 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[170]);

        if (unlikely(tmp_assattr_target_32 == NULL)) {
            tmp_assattr_target_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[170]);
        }

        if (tmp_assattr_target_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_32);

            exception_lineno = 299;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_32, mod_consts[159], tmp_assattr_value_32);
        Py_DECREF(tmp_assattr_value_32);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_125;
        PyObject *tmp_expression_value_69;
        tmp_expression_value_69 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_69 == NULL)) {
            tmp_expression_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
        }

        if (tmp_expression_value_69 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_125 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_69, mod_consts[171]);
        if (tmp_assign_source_125 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[171], tmp_assign_source_125);
    }
    {
        PyObject *tmp_assattr_value_33;
        PyObject *tmp_assattr_target_33;
        tmp_assattr_value_33 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_assattr_value_33 == NULL)) {
            tmp_assattr_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_assattr_value_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_33 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[171]);

        if (unlikely(tmp_assattr_target_33 == NULL)) {
            tmp_assattr_target_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[171]);
        }

        assert(!(tmp_assattr_target_33 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_33, mod_consts[158], tmp_assattr_value_33);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_34;
        PyObject *tmp_list_element_20;
        PyObject *tmp_called_value_51;
        PyObject *tmp_args_element_value_38;
        PyObject *tmp_assattr_target_34;
        tmp_called_value_51 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[110]);

        if (unlikely(tmp_called_value_51 == NULL)) {
            tmp_called_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[110]);
        }

        if (tmp_called_value_51 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_38 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[138]);

        if (unlikely(tmp_args_element_value_38 == NULL)) {
            tmp_args_element_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[138]);
        }

        if (tmp_args_element_value_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;

            goto frame_exception_exit_1;
        }
        frame_e33b4e37eb07fbc5c2cc2b38efc41113->m_frame.f_lineno = 304;
        tmp_list_element_20 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_51, tmp_args_element_value_38);
        if (tmp_list_element_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_34 = MAKE_LIST_EMPTY(3);
        {
            PyObject *tmp_called_value_52;
            PyObject *tmp_args_element_value_39;
            PyList_SET_ITEM(tmp_assattr_value_34, 0, tmp_list_element_20);
            tmp_list_element_20 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[35]);

            if (unlikely(tmp_list_element_20 == NULL)) {
                tmp_list_element_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
            }

            if (tmp_list_element_20 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 304;

                goto list_build_exception_18;
            }
            PyList_SET_ITEM0(tmp_assattr_value_34, 1, tmp_list_element_20);
            tmp_called_value_52 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[110]);

            if (unlikely(tmp_called_value_52 == NULL)) {
                tmp_called_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[110]);
            }

            if (tmp_called_value_52 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 304;

                goto list_build_exception_18;
            }
            tmp_args_element_value_39 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[132]);

            if (unlikely(tmp_args_element_value_39 == NULL)) {
                tmp_args_element_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[132]);
            }

            if (tmp_args_element_value_39 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 304;

                goto list_build_exception_18;
            }
            frame_e33b4e37eb07fbc5c2cc2b38efc41113->m_frame.f_lineno = 304;
            tmp_list_element_20 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_52, tmp_args_element_value_39);
            if (tmp_list_element_20 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 304;

                goto list_build_exception_18;
            }
            PyList_SET_ITEM(tmp_assattr_value_34, 2, tmp_list_element_20);
        }
        goto list_build_noexception_18;
        // Exception handling pass through code for list_build:
        list_build_exception_18:;
        Py_DECREF(tmp_assattr_value_34);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_18:;
        tmp_assattr_target_34 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[171]);

        if (unlikely(tmp_assattr_target_34 == NULL)) {
            tmp_assattr_target_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[171]);
        }

        if (tmp_assattr_target_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_34);

            exception_lineno = 304;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_34, mod_consts[159], tmp_assattr_value_34);
        Py_DECREF(tmp_assattr_value_34);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_126;
        PyObject *tmp_expression_value_70;
        tmp_expression_value_70 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_70 == NULL)) {
            tmp_expression_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
        }

        if (tmp_expression_value_70 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 307;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_126 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_70, mod_consts[172]);
        if (tmp_assign_source_126 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 307;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[172], tmp_assign_source_126);
    }
    {
        PyObject *tmp_assattr_value_35;
        PyObject *tmp_assattr_target_35;
        tmp_assattr_value_35 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_assattr_value_35 == NULL)) {
            tmp_assattr_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_assattr_value_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_35 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[172]);

        if (unlikely(tmp_assattr_target_35 == NULL)) {
            tmp_assattr_target_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[172]);
        }

        assert(!(tmp_assattr_target_35 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_35, mod_consts[158], tmp_assattr_value_35);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_36;
        PyObject *tmp_list_element_21;
        PyObject *tmp_called_value_53;
        PyObject *tmp_args_element_value_40;
        PyObject *tmp_assattr_target_36;
        tmp_called_value_53 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[110]);

        if (unlikely(tmp_called_value_53 == NULL)) {
            tmp_called_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[110]);
        }

        if (tmp_called_value_53 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_40 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[138]);

        if (unlikely(tmp_args_element_value_40 == NULL)) {
            tmp_args_element_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[138]);
        }

        if (tmp_args_element_value_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;

            goto frame_exception_exit_1;
        }
        frame_e33b4e37eb07fbc5c2cc2b38efc41113->m_frame.f_lineno = 309;
        tmp_list_element_21 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_53, tmp_args_element_value_40);
        if (tmp_list_element_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_36 = MAKE_LIST_EMPTY(4);
        {
            PyObject *tmp_called_value_54;
            PyObject *tmp_args_element_value_41;
            PyObject *tmp_called_value_55;
            PyObject *tmp_args_element_value_42;
            PyList_SET_ITEM(tmp_assattr_value_36, 0, tmp_list_element_21);
            tmp_list_element_21 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[35]);

            if (unlikely(tmp_list_element_21 == NULL)) {
                tmp_list_element_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
            }

            if (tmp_list_element_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 309;

                goto list_build_exception_19;
            }
            PyList_SET_ITEM0(tmp_assattr_value_36, 1, tmp_list_element_21);
            tmp_called_value_54 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[110]);

            if (unlikely(tmp_called_value_54 == NULL)) {
                tmp_called_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[110]);
            }

            if (tmp_called_value_54 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 309;

                goto list_build_exception_19;
            }
            tmp_args_element_value_41 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[35]);

            if (unlikely(tmp_args_element_value_41 == NULL)) {
                tmp_args_element_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
            }

            if (tmp_args_element_value_41 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 309;

                goto list_build_exception_19;
            }
            frame_e33b4e37eb07fbc5c2cc2b38efc41113->m_frame.f_lineno = 309;
            tmp_list_element_21 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_54, tmp_args_element_value_41);
            if (tmp_list_element_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 309;

                goto list_build_exception_19;
            }
            PyList_SET_ITEM(tmp_assattr_value_36, 2, tmp_list_element_21);
            tmp_called_value_55 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[110]);

            if (unlikely(tmp_called_value_55 == NULL)) {
                tmp_called_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[110]);
            }

            if (tmp_called_value_55 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 309;

                goto list_build_exception_19;
            }
            tmp_args_element_value_42 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[35]);

            if (unlikely(tmp_args_element_value_42 == NULL)) {
                tmp_args_element_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
            }

            if (tmp_args_element_value_42 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 309;

                goto list_build_exception_19;
            }
            frame_e33b4e37eb07fbc5c2cc2b38efc41113->m_frame.f_lineno = 309;
            tmp_list_element_21 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_55, tmp_args_element_value_42);
            if (tmp_list_element_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 309;

                goto list_build_exception_19;
            }
            PyList_SET_ITEM(tmp_assattr_value_36, 3, tmp_list_element_21);
        }
        goto list_build_noexception_19;
        // Exception handling pass through code for list_build:
        list_build_exception_19:;
        Py_DECREF(tmp_assattr_value_36);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_19:;
        tmp_assattr_target_36 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[172]);

        if (unlikely(tmp_assattr_target_36 == NULL)) {
            tmp_assattr_target_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[172]);
        }

        if (tmp_assattr_target_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_36);

            exception_lineno = 309;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_36, mod_consts[159], tmp_assattr_value_36);
        Py_DECREF(tmp_assattr_value_36);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_127;
        PyObject *tmp_expression_value_71;
        tmp_expression_value_71 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_71 == NULL)) {
            tmp_expression_value_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
        }

        if (tmp_expression_value_71 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_127 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_71, mod_consts[173]);
        if (tmp_assign_source_127 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[173], tmp_assign_source_127);
    }
    {
        PyObject *tmp_assattr_value_37;
        PyObject *tmp_assattr_target_37;
        tmp_assattr_value_37 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_assattr_value_37 == NULL)) {
            tmp_assattr_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_assattr_value_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_37 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[173]);

        if (unlikely(tmp_assattr_target_37 == NULL)) {
            tmp_assattr_target_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[173]);
        }

        assert(!(tmp_assattr_target_37 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_37, mod_consts[158], tmp_assattr_value_37);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_38;
        PyObject *tmp_list_element_22;
        PyObject *tmp_called_value_56;
        PyObject *tmp_args_element_value_43;
        PyObject *tmp_assattr_target_38;
        tmp_called_value_56 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[110]);

        if (unlikely(tmp_called_value_56 == NULL)) {
            tmp_called_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[110]);
        }

        if (tmp_called_value_56 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_43 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[138]);

        if (unlikely(tmp_args_element_value_43 == NULL)) {
            tmp_args_element_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[138]);
        }

        if (tmp_args_element_value_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;

            goto frame_exception_exit_1;
        }
        frame_e33b4e37eb07fbc5c2cc2b38efc41113->m_frame.f_lineno = 314;
        tmp_list_element_22 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_56, tmp_args_element_value_43);
        if (tmp_list_element_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_38 = MAKE_LIST_EMPTY(4);
        PyList_SET_ITEM(tmp_assattr_value_38, 0, tmp_list_element_22);
        tmp_list_element_22 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_list_element_22 == NULL)) {
            tmp_list_element_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_list_element_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;

            goto list_build_exception_20;
        }
        PyList_SET_ITEM0(tmp_assattr_value_38, 1, tmp_list_element_22);
        tmp_list_element_22 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_list_element_22 == NULL)) {
            tmp_list_element_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_list_element_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;

            goto list_build_exception_20;
        }
        PyList_SET_ITEM0(tmp_assattr_value_38, 2, tmp_list_element_22);
        tmp_list_element_22 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_list_element_22 == NULL)) {
            tmp_list_element_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_list_element_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;

            goto list_build_exception_20;
        }
        PyList_SET_ITEM0(tmp_assattr_value_38, 3, tmp_list_element_22);
        goto list_build_noexception_20;
        // Exception handling pass through code for list_build:
        list_build_exception_20:;
        Py_DECREF(tmp_assattr_value_38);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_20:;
        tmp_assattr_target_38 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[173]);

        if (unlikely(tmp_assattr_target_38 == NULL)) {
            tmp_assattr_target_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[173]);
        }

        if (tmp_assattr_target_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_38);

            exception_lineno = 314;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_38, mod_consts[159], tmp_assattr_value_38);
        Py_DECREF(tmp_assattr_value_38);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_128;
        PyObject *tmp_expression_value_72;
        tmp_expression_value_72 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_72 == NULL)) {
            tmp_expression_value_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
        }

        if (tmp_expression_value_72 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_128 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_72, mod_consts[174]);
        if (tmp_assign_source_128 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[174], tmp_assign_source_128);
    }
    {
        PyObject *tmp_assattr_value_39;
        PyObject *tmp_assattr_target_39;
        tmp_assattr_value_39 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_assattr_value_39 == NULL)) {
            tmp_assattr_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_assattr_value_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_39 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[174]);

        if (unlikely(tmp_assattr_target_39 == NULL)) {
            tmp_assattr_target_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[174]);
        }

        assert(!(tmp_assattr_target_39 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_39, mod_consts[158], tmp_assattr_value_39);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_40;
        PyObject *tmp_list_element_23;
        PyObject *tmp_called_value_57;
        PyObject *tmp_args_element_value_44;
        PyObject *tmp_assattr_target_40;
        tmp_called_value_57 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[110]);

        if (unlikely(tmp_called_value_57 == NULL)) {
            tmp_called_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[110]);
        }

        if (tmp_called_value_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_44 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[138]);

        if (unlikely(tmp_args_element_value_44 == NULL)) {
            tmp_args_element_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[138]);
        }

        if (tmp_args_element_value_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;

            goto frame_exception_exit_1;
        }
        frame_e33b4e37eb07fbc5c2cc2b38efc41113->m_frame.f_lineno = 319;
        tmp_list_element_23 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_57, tmp_args_element_value_44);
        if (tmp_list_element_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_40 = MAKE_LIST_EMPTY(6);
        {
            PyObject *tmp_called_value_58;
            PyObject *tmp_args_element_value_45;
            PyObject *tmp_called_value_59;
            PyObject *tmp_args_element_value_46;
            PyObject *tmp_called_value_60;
            PyObject *tmp_args_element_value_47;
            PyObject *tmp_called_value_61;
            PyObject *tmp_args_element_value_48;
            PyObject *tmp_called_value_62;
            PyObject *tmp_args_element_value_49;
            PyList_SET_ITEM(tmp_assattr_value_40, 0, tmp_list_element_23);
            tmp_list_element_23 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[35]);

            if (unlikely(tmp_list_element_23 == NULL)) {
                tmp_list_element_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
            }

            if (tmp_list_element_23 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 319;

                goto list_build_exception_21;
            }
            PyList_SET_ITEM0(tmp_assattr_value_40, 1, tmp_list_element_23);
            tmp_called_value_58 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[110]);

            if (unlikely(tmp_called_value_58 == NULL)) {
                tmp_called_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[110]);
            }

            if (tmp_called_value_58 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 319;

                goto list_build_exception_21;
            }
            tmp_args_element_value_45 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[35]);

            if (unlikely(tmp_args_element_value_45 == NULL)) {
                tmp_args_element_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
            }

            if (tmp_args_element_value_45 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 319;

                goto list_build_exception_21;
            }
            frame_e33b4e37eb07fbc5c2cc2b38efc41113->m_frame.f_lineno = 319;
            tmp_list_element_23 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_58, tmp_args_element_value_45);
            if (tmp_list_element_23 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 319;

                goto list_build_exception_21;
            }
            PyList_SET_ITEM(tmp_assattr_value_40, 2, tmp_list_element_23);
            tmp_called_value_59 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[110]);

            if (unlikely(tmp_called_value_59 == NULL)) {
                tmp_called_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[110]);
            }

            if (tmp_called_value_59 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 319;

                goto list_build_exception_21;
            }
            tmp_args_element_value_46 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[35]);

            if (unlikely(tmp_args_element_value_46 == NULL)) {
                tmp_args_element_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
            }

            if (tmp_args_element_value_46 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 319;

                goto list_build_exception_21;
            }
            frame_e33b4e37eb07fbc5c2cc2b38efc41113->m_frame.f_lineno = 319;
            tmp_list_element_23 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_59, tmp_args_element_value_46);
            if (tmp_list_element_23 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 319;

                goto list_build_exception_21;
            }
            PyList_SET_ITEM(tmp_assattr_value_40, 3, tmp_list_element_23);
            tmp_called_value_60 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[110]);

            if (unlikely(tmp_called_value_60 == NULL)) {
                tmp_called_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[110]);
            }

            if (tmp_called_value_60 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 319;

                goto list_build_exception_21;
            }
            tmp_args_element_value_47 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[35]);

            if (unlikely(tmp_args_element_value_47 == NULL)) {
                tmp_args_element_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
            }

            if (tmp_args_element_value_47 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 319;

                goto list_build_exception_21;
            }
            frame_e33b4e37eb07fbc5c2cc2b38efc41113->m_frame.f_lineno = 319;
            tmp_list_element_23 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_60, tmp_args_element_value_47);
            if (tmp_list_element_23 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 319;

                goto list_build_exception_21;
            }
            PyList_SET_ITEM(tmp_assattr_value_40, 4, tmp_list_element_23);
            tmp_called_value_61 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[110]);

            if (unlikely(tmp_called_value_61 == NULL)) {
                tmp_called_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[110]);
            }

            if (tmp_called_value_61 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 319;

                goto list_build_exception_21;
            }
            tmp_called_value_62 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[110]);

            if (unlikely(tmp_called_value_62 == NULL)) {
                tmp_called_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[110]);
            }

            if (tmp_called_value_62 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 319;

                goto list_build_exception_21;
            }
            tmp_args_element_value_49 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[35]);

            if (unlikely(tmp_args_element_value_49 == NULL)) {
                tmp_args_element_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
            }

            if (tmp_args_element_value_49 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 319;

                goto list_build_exception_21;
            }
            frame_e33b4e37eb07fbc5c2cc2b38efc41113->m_frame.f_lineno = 319;
            tmp_args_element_value_48 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_62, tmp_args_element_value_49);
            if (tmp_args_element_value_48 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 319;

                goto list_build_exception_21;
            }
            frame_e33b4e37eb07fbc5c2cc2b38efc41113->m_frame.f_lineno = 319;
            tmp_list_element_23 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_61, tmp_args_element_value_48);
            Py_DECREF(tmp_args_element_value_48);
            if (tmp_list_element_23 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 319;

                goto list_build_exception_21;
            }
            PyList_SET_ITEM(tmp_assattr_value_40, 5, tmp_list_element_23);
        }
        goto list_build_noexception_21;
        // Exception handling pass through code for list_build:
        list_build_exception_21:;
        Py_DECREF(tmp_assattr_value_40);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_21:;
        tmp_assattr_target_40 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[174]);

        if (unlikely(tmp_assattr_target_40 == NULL)) {
            tmp_assattr_target_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[174]);
        }

        if (tmp_assattr_target_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_40);

            exception_lineno = 319;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_40, mod_consts[159], tmp_assattr_value_40);
        Py_DECREF(tmp_assattr_value_40);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_129;
        PyObject *tmp_expression_value_73;
        tmp_expression_value_73 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_73 == NULL)) {
            tmp_expression_value_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
        }

        if (tmp_expression_value_73 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_129 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_73, mod_consts[175]);
        if (tmp_assign_source_129 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[175], tmp_assign_source_129);
    }
    {
        PyObject *tmp_assattr_value_41;
        PyObject *tmp_assattr_target_41;
        tmp_assattr_value_41 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_assattr_value_41 == NULL)) {
            tmp_assattr_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_assattr_value_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_41 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[175]);

        if (unlikely(tmp_assattr_target_41 == NULL)) {
            tmp_assattr_target_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[175]);
        }

        assert(!(tmp_assattr_target_41 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_41, mod_consts[158], tmp_assattr_value_41);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_42;
        PyObject *tmp_list_element_24;
        PyObject *tmp_called_value_63;
        PyObject *tmp_args_element_value_50;
        PyObject *tmp_assattr_target_42;
        tmp_called_value_63 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[110]);

        if (unlikely(tmp_called_value_63 == NULL)) {
            tmp_called_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[110]);
        }

        if (tmp_called_value_63 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_50 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[138]);

        if (unlikely(tmp_args_element_value_50 == NULL)) {
            tmp_args_element_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[138]);
        }

        if (tmp_args_element_value_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;

            goto frame_exception_exit_1;
        }
        frame_e33b4e37eb07fbc5c2cc2b38efc41113->m_frame.f_lineno = 324;
        tmp_list_element_24 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_63, tmp_args_element_value_50);
        if (tmp_list_element_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_42 = MAKE_LIST_EMPTY(3);
        {
            PyObject *tmp_called_value_64;
            PyObject *tmp_args_element_value_51;
            PyList_SET_ITEM(tmp_assattr_value_42, 0, tmp_list_element_24);
            tmp_list_element_24 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[35]);

            if (unlikely(tmp_list_element_24 == NULL)) {
                tmp_list_element_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
            }

            if (tmp_list_element_24 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 324;

                goto list_build_exception_22;
            }
            PyList_SET_ITEM0(tmp_assattr_value_42, 1, tmp_list_element_24);
            tmp_called_value_64 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[110]);

            if (unlikely(tmp_called_value_64 == NULL)) {
                tmp_called_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[110]);
            }

            if (tmp_called_value_64 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 324;

                goto list_build_exception_22;
            }
            tmp_args_element_value_51 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[156]);

            if (unlikely(tmp_args_element_value_51 == NULL)) {
                tmp_args_element_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[156]);
            }

            if (tmp_args_element_value_51 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 324;

                goto list_build_exception_22;
            }
            frame_e33b4e37eb07fbc5c2cc2b38efc41113->m_frame.f_lineno = 324;
            tmp_list_element_24 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_64, tmp_args_element_value_51);
            if (tmp_list_element_24 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 324;

                goto list_build_exception_22;
            }
            PyList_SET_ITEM(tmp_assattr_value_42, 2, tmp_list_element_24);
        }
        goto list_build_noexception_22;
        // Exception handling pass through code for list_build:
        list_build_exception_22:;
        Py_DECREF(tmp_assattr_value_42);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_22:;
        tmp_assattr_target_42 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[175]);

        if (unlikely(tmp_assattr_target_42 == NULL)) {
            tmp_assattr_target_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[175]);
        }

        if (tmp_assattr_target_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_42);

            exception_lineno = 324;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_42, mod_consts[159], tmp_assattr_value_42);
        Py_DECREF(tmp_assattr_value_42);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_130;
        PyObject *tmp_expression_value_74;
        tmp_expression_value_74 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_74 == NULL)) {
            tmp_expression_value_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
        }

        if (tmp_expression_value_74 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_130 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_74, mod_consts[176]);
        if (tmp_assign_source_130 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[176], tmp_assign_source_130);
    }
    {
        PyObject *tmp_assattr_value_43;
        PyObject *tmp_assattr_target_43;
        tmp_assattr_value_43 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_assattr_value_43 == NULL)) {
            tmp_assattr_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_assattr_value_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_43 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[176]);

        if (unlikely(tmp_assattr_target_43 == NULL)) {
            tmp_assattr_target_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[176]);
        }

        assert(!(tmp_assattr_target_43 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_43, mod_consts[158], tmp_assattr_value_43);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_44;
        PyObject *tmp_list_element_25;
        PyObject *tmp_called_value_65;
        PyObject *tmp_args_element_value_52;
        PyObject *tmp_assattr_target_44;
        tmp_called_value_65 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[110]);

        if (unlikely(tmp_called_value_65 == NULL)) {
            tmp_called_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[110]);
        }

        if (tmp_called_value_65 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_52 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[138]);

        if (unlikely(tmp_args_element_value_52 == NULL)) {
            tmp_args_element_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[138]);
        }

        if (tmp_args_element_value_52 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;

            goto frame_exception_exit_1;
        }
        frame_e33b4e37eb07fbc5c2cc2b38efc41113->m_frame.f_lineno = 329;
        tmp_list_element_25 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_65, tmp_args_element_value_52);
        if (tmp_list_element_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_44 = MAKE_LIST_EMPTY(3);
        {
            PyObject *tmp_called_value_66;
            PyObject *tmp_args_element_value_53;
            PyList_SET_ITEM(tmp_assattr_value_44, 0, tmp_list_element_25);
            tmp_list_element_25 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[35]);

            if (unlikely(tmp_list_element_25 == NULL)) {
                tmp_list_element_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
            }

            if (tmp_list_element_25 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 329;

                goto list_build_exception_23;
            }
            PyList_SET_ITEM0(tmp_assattr_value_44, 1, tmp_list_element_25);
            tmp_called_value_66 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[110]);

            if (unlikely(tmp_called_value_66 == NULL)) {
                tmp_called_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[110]);
            }

            if (tmp_called_value_66 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 329;

                goto list_build_exception_23;
            }
            tmp_args_element_value_53 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[156]);

            if (unlikely(tmp_args_element_value_53 == NULL)) {
                tmp_args_element_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[156]);
            }

            if (tmp_args_element_value_53 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 329;

                goto list_build_exception_23;
            }
            frame_e33b4e37eb07fbc5c2cc2b38efc41113->m_frame.f_lineno = 329;
            tmp_list_element_25 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_66, tmp_args_element_value_53);
            if (tmp_list_element_25 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 329;

                goto list_build_exception_23;
            }
            PyList_SET_ITEM(tmp_assattr_value_44, 2, tmp_list_element_25);
        }
        goto list_build_noexception_23;
        // Exception handling pass through code for list_build:
        list_build_exception_23:;
        Py_DECREF(tmp_assattr_value_44);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_23:;
        tmp_assattr_target_44 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[176]);

        if (unlikely(tmp_assattr_target_44 == NULL)) {
            tmp_assattr_target_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[176]);
        }

        if (tmp_assattr_target_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_44);

            exception_lineno = 329;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_44, mod_consts[159], tmp_assattr_value_44);
        Py_DECREF(tmp_assattr_value_44);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_131;
        PyObject *tmp_expression_value_75;
        tmp_expression_value_75 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_75 == NULL)) {
            tmp_expression_value_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
        }

        if (tmp_expression_value_75 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_131 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_75, mod_consts[177]);
        if (tmp_assign_source_131 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[177], tmp_assign_source_131);
    }
    {
        PyObject *tmp_assattr_value_45;
        PyObject *tmp_assattr_target_45;
        tmp_assattr_value_45 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_assattr_value_45 == NULL)) {
            tmp_assattr_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_assattr_value_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_45 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[177]);

        if (unlikely(tmp_assattr_target_45 == NULL)) {
            tmp_assattr_target_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[177]);
        }

        assert(!(tmp_assattr_target_45 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_45, mod_consts[158], tmp_assattr_value_45);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_46;
        PyObject *tmp_list_element_26;
        PyObject *tmp_called_value_67;
        PyObject *tmp_args_element_value_54;
        PyObject *tmp_assattr_target_46;
        tmp_called_value_67 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[110]);

        if (unlikely(tmp_called_value_67 == NULL)) {
            tmp_called_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[110]);
        }

        if (tmp_called_value_67 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_54 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[138]);

        if (unlikely(tmp_args_element_value_54 == NULL)) {
            tmp_args_element_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[138]);
        }

        if (tmp_args_element_value_54 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;

            goto frame_exception_exit_1;
        }
        frame_e33b4e37eb07fbc5c2cc2b38efc41113->m_frame.f_lineno = 334;
        tmp_list_element_26 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_67, tmp_args_element_value_54);
        if (tmp_list_element_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_46 = MAKE_LIST_EMPTY(6);
        {
            PyObject *tmp_called_value_68;
            PyObject *tmp_args_element_value_55;
            PyObject *tmp_called_value_69;
            PyObject *tmp_args_element_value_56;
            PyObject *tmp_called_value_70;
            PyObject *tmp_args_element_value_57;
            PyList_SET_ITEM(tmp_assattr_value_46, 0, tmp_list_element_26);
            tmp_list_element_26 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[35]);

            if (unlikely(tmp_list_element_26 == NULL)) {
                tmp_list_element_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
            }

            if (tmp_list_element_26 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 334;

                goto list_build_exception_24;
            }
            PyList_SET_ITEM0(tmp_assattr_value_46, 1, tmp_list_element_26);
            tmp_list_element_26 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[35]);

            if (unlikely(tmp_list_element_26 == NULL)) {
                tmp_list_element_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
            }

            if (tmp_list_element_26 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 334;

                goto list_build_exception_24;
            }
            PyList_SET_ITEM0(tmp_assattr_value_46, 2, tmp_list_element_26);
            tmp_called_value_68 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[110]);

            if (unlikely(tmp_called_value_68 == NULL)) {
                tmp_called_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[110]);
            }

            if (tmp_called_value_68 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 334;

                goto list_build_exception_24;
            }
            tmp_args_element_value_55 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[97]);

            if (unlikely(tmp_args_element_value_55 == NULL)) {
                tmp_args_element_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[97]);
            }

            if (tmp_args_element_value_55 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 334;

                goto list_build_exception_24;
            }
            frame_e33b4e37eb07fbc5c2cc2b38efc41113->m_frame.f_lineno = 334;
            tmp_list_element_26 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_68, tmp_args_element_value_55);
            if (tmp_list_element_26 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 334;

                goto list_build_exception_24;
            }
            PyList_SET_ITEM(tmp_assattr_value_46, 3, tmp_list_element_26);
            tmp_called_value_69 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[110]);

            if (unlikely(tmp_called_value_69 == NULL)) {
                tmp_called_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[110]);
            }

            if (tmp_called_value_69 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 334;

                goto list_build_exception_24;
            }
            tmp_args_element_value_56 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[97]);

            if (unlikely(tmp_args_element_value_56 == NULL)) {
                tmp_args_element_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[97]);
            }

            if (tmp_args_element_value_56 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 334;

                goto list_build_exception_24;
            }
            frame_e33b4e37eb07fbc5c2cc2b38efc41113->m_frame.f_lineno = 334;
            tmp_list_element_26 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_69, tmp_args_element_value_56);
            if (tmp_list_element_26 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 334;

                goto list_build_exception_24;
            }
            PyList_SET_ITEM(tmp_assattr_value_46, 4, tmp_list_element_26);
            tmp_called_value_70 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[110]);

            if (unlikely(tmp_called_value_70 == NULL)) {
                tmp_called_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[110]);
            }

            if (tmp_called_value_70 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 334;

                goto list_build_exception_24;
            }
            tmp_args_element_value_57 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[97]);

            if (unlikely(tmp_args_element_value_57 == NULL)) {
                tmp_args_element_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[97]);
            }

            if (tmp_args_element_value_57 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 334;

                goto list_build_exception_24;
            }
            frame_e33b4e37eb07fbc5c2cc2b38efc41113->m_frame.f_lineno = 334;
            tmp_list_element_26 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_70, tmp_args_element_value_57);
            if (tmp_list_element_26 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 334;

                goto list_build_exception_24;
            }
            PyList_SET_ITEM(tmp_assattr_value_46, 5, tmp_list_element_26);
        }
        goto list_build_noexception_24;
        // Exception handling pass through code for list_build:
        list_build_exception_24:;
        Py_DECREF(tmp_assattr_value_46);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_24:;
        tmp_assattr_target_46 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[177]);

        if (unlikely(tmp_assattr_target_46 == NULL)) {
            tmp_assattr_target_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[177]);
        }

        if (tmp_assattr_target_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_46);

            exception_lineno = 334;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_46, mod_consts[159], tmp_assattr_value_46);
        Py_DECREF(tmp_assattr_value_46);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_132;
        PyObject *tmp_expression_value_76;
        tmp_expression_value_76 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_76 == NULL)) {
            tmp_expression_value_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
        }

        if (tmp_expression_value_76 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_132 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_76, mod_consts[178]);
        if (tmp_assign_source_132 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[178], tmp_assign_source_132);
    }
    {
        PyObject *tmp_assattr_value_47;
        PyObject *tmp_assattr_target_47;
        tmp_assattr_value_47 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_assattr_value_47 == NULL)) {
            tmp_assattr_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_assattr_value_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_47 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[178]);

        if (unlikely(tmp_assattr_target_47 == NULL)) {
            tmp_assattr_target_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[178]);
        }

        assert(!(tmp_assattr_target_47 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_47, mod_consts[158], tmp_assattr_value_47);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_48;
        PyObject *tmp_list_element_27;
        PyObject *tmp_called_value_71;
        PyObject *tmp_args_element_value_58;
        PyObject *tmp_assattr_target_48;
        tmp_called_value_71 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[110]);

        if (unlikely(tmp_called_value_71 == NULL)) {
            tmp_called_value_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[110]);
        }

        if (tmp_called_value_71 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 339;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_58 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[138]);

        if (unlikely(tmp_args_element_value_58 == NULL)) {
            tmp_args_element_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[138]);
        }

        if (tmp_args_element_value_58 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 339;

            goto frame_exception_exit_1;
        }
        frame_e33b4e37eb07fbc5c2cc2b38efc41113->m_frame.f_lineno = 339;
        tmp_list_element_27 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_71, tmp_args_element_value_58);
        if (tmp_list_element_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 339;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_48 = MAKE_LIST_EMPTY(6);
        {
            PyObject *tmp_called_value_72;
            PyObject *tmp_args_element_value_59;
            PyObject *tmp_called_value_73;
            PyObject *tmp_args_element_value_60;
            PyObject *tmp_called_value_74;
            PyObject *tmp_args_element_value_61;
            PyList_SET_ITEM(tmp_assattr_value_48, 0, tmp_list_element_27);
            tmp_list_element_27 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[35]);

            if (unlikely(tmp_list_element_27 == NULL)) {
                tmp_list_element_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
            }

            if (tmp_list_element_27 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 339;

                goto list_build_exception_25;
            }
            PyList_SET_ITEM0(tmp_assattr_value_48, 1, tmp_list_element_27);
            tmp_list_element_27 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[35]);

            if (unlikely(tmp_list_element_27 == NULL)) {
                tmp_list_element_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
            }

            if (tmp_list_element_27 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 339;

                goto list_build_exception_25;
            }
            PyList_SET_ITEM0(tmp_assattr_value_48, 2, tmp_list_element_27);
            tmp_called_value_72 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[110]);

            if (unlikely(tmp_called_value_72 == NULL)) {
                tmp_called_value_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[110]);
            }

            if (tmp_called_value_72 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 339;

                goto list_build_exception_25;
            }
            tmp_args_element_value_59 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[97]);

            if (unlikely(tmp_args_element_value_59 == NULL)) {
                tmp_args_element_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[97]);
            }

            if (tmp_args_element_value_59 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 339;

                goto list_build_exception_25;
            }
            frame_e33b4e37eb07fbc5c2cc2b38efc41113->m_frame.f_lineno = 339;
            tmp_list_element_27 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_72, tmp_args_element_value_59);
            if (tmp_list_element_27 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 339;

                goto list_build_exception_25;
            }
            PyList_SET_ITEM(tmp_assattr_value_48, 3, tmp_list_element_27);
            tmp_called_value_73 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[110]);

            if (unlikely(tmp_called_value_73 == NULL)) {
                tmp_called_value_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[110]);
            }

            if (tmp_called_value_73 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 339;

                goto list_build_exception_25;
            }
            tmp_args_element_value_60 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[97]);

            if (unlikely(tmp_args_element_value_60 == NULL)) {
                tmp_args_element_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[97]);
            }

            if (tmp_args_element_value_60 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 339;

                goto list_build_exception_25;
            }
            frame_e33b4e37eb07fbc5c2cc2b38efc41113->m_frame.f_lineno = 339;
            tmp_list_element_27 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_73, tmp_args_element_value_60);
            if (tmp_list_element_27 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 339;

                goto list_build_exception_25;
            }
            PyList_SET_ITEM(tmp_assattr_value_48, 4, tmp_list_element_27);
            tmp_called_value_74 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[110]);

            if (unlikely(tmp_called_value_74 == NULL)) {
                tmp_called_value_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[110]);
            }

            if (tmp_called_value_74 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 339;

                goto list_build_exception_25;
            }
            tmp_args_element_value_61 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[97]);

            if (unlikely(tmp_args_element_value_61 == NULL)) {
                tmp_args_element_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[97]);
            }

            if (tmp_args_element_value_61 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 339;

                goto list_build_exception_25;
            }
            frame_e33b4e37eb07fbc5c2cc2b38efc41113->m_frame.f_lineno = 339;
            tmp_list_element_27 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_74, tmp_args_element_value_61);
            if (tmp_list_element_27 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 339;

                goto list_build_exception_25;
            }
            PyList_SET_ITEM(tmp_assattr_value_48, 5, tmp_list_element_27);
        }
        goto list_build_noexception_25;
        // Exception handling pass through code for list_build:
        list_build_exception_25:;
        Py_DECREF(tmp_assattr_value_48);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_25:;
        tmp_assattr_target_48 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[178]);

        if (unlikely(tmp_assattr_target_48 == NULL)) {
            tmp_assattr_target_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[178]);
        }

        if (tmp_assattr_target_48 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_48);

            exception_lineno = 339;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_48, mod_consts[159], tmp_assattr_value_48);
        Py_DECREF(tmp_assattr_value_48);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 339;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_133;
        PyObject *tmp_expression_value_77;
        tmp_expression_value_77 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_77 == NULL)) {
            tmp_expression_value_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
        }

        if (tmp_expression_value_77 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_133 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_77, mod_consts[179]);
        if (tmp_assign_source_133 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[179], tmp_assign_source_133);
    }
    {
        PyObject *tmp_assattr_value_49;
        PyObject *tmp_assattr_target_49;
        tmp_assattr_value_49 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_assattr_value_49 == NULL)) {
            tmp_assattr_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_assattr_value_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_49 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[179]);

        if (unlikely(tmp_assattr_target_49 == NULL)) {
            tmp_assattr_target_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[179]);
        }

        assert(!(tmp_assattr_target_49 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_49, mod_consts[158], tmp_assattr_value_49);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_50;
        PyObject *tmp_list_element_28;
        PyObject *tmp_called_value_75;
        PyObject *tmp_args_element_value_62;
        PyObject *tmp_assattr_target_50;
        tmp_called_value_75 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[110]);

        if (unlikely(tmp_called_value_75 == NULL)) {
            tmp_called_value_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[110]);
        }

        if (tmp_called_value_75 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 344;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_62 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[138]);

        if (unlikely(tmp_args_element_value_62 == NULL)) {
            tmp_args_element_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[138]);
        }

        if (tmp_args_element_value_62 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 344;

            goto frame_exception_exit_1;
        }
        frame_e33b4e37eb07fbc5c2cc2b38efc41113->m_frame.f_lineno = 344;
        tmp_list_element_28 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_75, tmp_args_element_value_62);
        if (tmp_list_element_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 344;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_50 = MAKE_LIST_EMPTY(3);
        {
            PyObject *tmp_called_value_76;
            PyObject *tmp_args_element_value_63;
            PyList_SET_ITEM(tmp_assattr_value_50, 0, tmp_list_element_28);
            tmp_list_element_28 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[35]);

            if (unlikely(tmp_list_element_28 == NULL)) {
                tmp_list_element_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
            }

            if (tmp_list_element_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 344;

                goto list_build_exception_26;
            }
            PyList_SET_ITEM0(tmp_assattr_value_50, 1, tmp_list_element_28);
            tmp_called_value_76 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[110]);

            if (unlikely(tmp_called_value_76 == NULL)) {
                tmp_called_value_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[110]);
            }

            if (tmp_called_value_76 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 344;

                goto list_build_exception_26;
            }
            tmp_args_element_value_63 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[35]);

            if (unlikely(tmp_args_element_value_63 == NULL)) {
                tmp_args_element_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
            }

            if (tmp_args_element_value_63 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 344;

                goto list_build_exception_26;
            }
            frame_e33b4e37eb07fbc5c2cc2b38efc41113->m_frame.f_lineno = 344;
            tmp_list_element_28 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_76, tmp_args_element_value_63);
            if (tmp_list_element_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 344;

                goto list_build_exception_26;
            }
            PyList_SET_ITEM(tmp_assattr_value_50, 2, tmp_list_element_28);
        }
        goto list_build_noexception_26;
        // Exception handling pass through code for list_build:
        list_build_exception_26:;
        Py_DECREF(tmp_assattr_value_50);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_26:;
        tmp_assattr_target_50 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[179]);

        if (unlikely(tmp_assattr_target_50 == NULL)) {
            tmp_assattr_target_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[179]);
        }

        if (tmp_assattr_target_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_50);

            exception_lineno = 344;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_50, mod_consts[159], tmp_assattr_value_50);
        Py_DECREF(tmp_assattr_value_50);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 344;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_134;
        PyObject *tmp_expression_value_78;
        tmp_expression_value_78 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_78 == NULL)) {
            tmp_expression_value_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
        }

        if (tmp_expression_value_78 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_134 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_78, mod_consts[180]);
        if (tmp_assign_source_134 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[180], tmp_assign_source_134);
    }
    {
        PyObject *tmp_assattr_value_51;
        PyObject *tmp_assattr_target_51;
        tmp_assattr_value_51 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_assattr_value_51 == NULL)) {
            tmp_assattr_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_assattr_value_51 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 348;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_51 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[180]);

        if (unlikely(tmp_assattr_target_51 == NULL)) {
            tmp_assattr_target_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[180]);
        }

        assert(!(tmp_assattr_target_51 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_51, mod_consts[158], tmp_assattr_value_51);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 348;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_52;
        PyObject *tmp_list_element_29;
        PyObject *tmp_called_value_77;
        PyObject *tmp_args_element_value_64;
        PyObject *tmp_assattr_target_52;
        tmp_called_value_77 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[110]);

        if (unlikely(tmp_called_value_77 == NULL)) {
            tmp_called_value_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[110]);
        }

        if (tmp_called_value_77 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_64 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[138]);

        if (unlikely(tmp_args_element_value_64 == NULL)) {
            tmp_args_element_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[138]);
        }

        if (tmp_args_element_value_64 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;

            goto frame_exception_exit_1;
        }
        frame_e33b4e37eb07fbc5c2cc2b38efc41113->m_frame.f_lineno = 349;
        tmp_list_element_29 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_77, tmp_args_element_value_64);
        if (tmp_list_element_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_52 = MAKE_LIST_EMPTY(3);
        {
            PyObject *tmp_called_value_78;
            PyObject *tmp_args_element_value_65;
            PyList_SET_ITEM(tmp_assattr_value_52, 0, tmp_list_element_29);
            tmp_list_element_29 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[35]);

            if (unlikely(tmp_list_element_29 == NULL)) {
                tmp_list_element_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
            }

            if (tmp_list_element_29 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 349;

                goto list_build_exception_27;
            }
            PyList_SET_ITEM0(tmp_assattr_value_52, 1, tmp_list_element_29);
            tmp_called_value_78 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[110]);

            if (unlikely(tmp_called_value_78 == NULL)) {
                tmp_called_value_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[110]);
            }

            if (tmp_called_value_78 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 349;

                goto list_build_exception_27;
            }
            tmp_args_element_value_65 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[35]);

            if (unlikely(tmp_args_element_value_65 == NULL)) {
                tmp_args_element_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
            }

            if (tmp_args_element_value_65 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 349;

                goto list_build_exception_27;
            }
            frame_e33b4e37eb07fbc5c2cc2b38efc41113->m_frame.f_lineno = 349;
            tmp_list_element_29 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_78, tmp_args_element_value_65);
            if (tmp_list_element_29 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 349;

                goto list_build_exception_27;
            }
            PyList_SET_ITEM(tmp_assattr_value_52, 2, tmp_list_element_29);
        }
        goto list_build_noexception_27;
        // Exception handling pass through code for list_build:
        list_build_exception_27:;
        Py_DECREF(tmp_assattr_value_52);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_27:;
        tmp_assattr_target_52 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[180]);

        if (unlikely(tmp_assattr_target_52 == NULL)) {
            tmp_assattr_target_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[180]);
        }

        if (tmp_assattr_target_52 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_52);

            exception_lineno = 349;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_52, mod_consts[159], tmp_assattr_value_52);
        Py_DECREF(tmp_assattr_value_52);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;

            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_8;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e33b4e37eb07fbc5c2cc2b38efc41113, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e33b4e37eb07fbc5c2cc2b38efc41113->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e33b4e37eb07fbc5c2cc2b38efc41113, exception_lineno);
    }



    assertFrameObject(frame_e33b4e37eb07fbc5c2cc2b38efc41113);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_8:;
    {
        PyObject *tmp_assign_source_135;
        tmp_assign_source_135 = LIST_COPY(mod_consts[181]);
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)mod_consts[182], tmp_assign_source_135);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("pyglet.libs.x11.xf86vmode", false);

    Py_INCREF(module_pyglet$libs$x11$xf86vmode);
    return module_pyglet$libs$x11$xf86vmode;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$x11$xf86vmode, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("pyglet$libs$x11$xf86vmode", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
