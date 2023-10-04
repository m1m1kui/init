/* Generated code for Python module 'pyglet.media.drivers.openal.lib_openal'
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

/* The "module_pyglet$media$drivers$openal$lib_openal" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pyglet$media$drivers$openal$lib_openal;
PyDictObject *moduledict_pyglet$media$drivers$openal$lib_openal;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[343];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[343];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("pyglet.media.drivers.openal.lib_openal"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 343; i++) {
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
void checkModuleConstants_pyglet$media$drivers$openal$lib_openal(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 343; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_8036f46be8fa35fb2f4ca3d8ab98b9a1;
static PyCodeObject *codeobj_0ab3575e45d5e004d3ed8bcd9564a25f;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[339]); CHECK_OBJECT(module_filename_obj);
    codeobj_8036f46be8fa35fb2f4ca3d8ab98b9a1 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[340], mod_consts[340], NULL, NULL, 0, 0, 0);
    codeobj_0ab3575e45d5e004d3ed8bcd9564a25f = MAKE_CODE_OBJECT(module_filename_obj, 68, CO_NOFREE, mod_consts[27], mod_consts[27], mod_consts[341], NULL, 0, 0, 0);
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

function_impl_code functable_pyglet$media$drivers$openal$lib_openal[] = {

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

    function_impl_code *current = functable_pyglet$media$drivers$openal$lib_openal;
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

    if (offset > sizeof(functable_pyglet$media$drivers$openal$lib_openal) || offset < 0) {
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
        functable_pyglet$media$drivers$openal$lib_openal[offset],
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
        module_pyglet$media$drivers$openal$lib_openal,
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
PyObject *modulecode_pyglet$media$drivers$openal$lib_openal(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("pyglet.media.drivers.openal.lib_openal");

    // Store the module for future use.
    module_pyglet$media$drivers$openal$lib_openal = module;

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
        PRINT_STRING("pyglet.media.drivers.openal.lib_openal: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("pyglet.media.drivers.openal.lib_openal: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initpyglet$media$drivers$openal$lib_openal\n");

    moduledict_pyglet$media$drivers$openal$lib_openal = MODULE_DICT(module_pyglet$media$drivers$openal$lib_openal);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(tstate, loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_pyglet$media$drivers$openal$lib_openal,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_pyglet$media$drivers$openal$lib_openal,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[342]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_pyglet$media$drivers$openal$lib_openal,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_pyglet$media$drivers$openal$lib_openal,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_pyglet$media$drivers$openal$lib_openal,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_pyglet$media$drivers$openal$lib_openal);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_pyglet$media$drivers$openal$lib_openal);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__bases_orig = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_8036f46be8fa35fb2f4ca3d8ab98b9a1;
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
    PyObject *locals_pyglet$media$drivers$openal$lib_openal$$$class__1_c_void_68 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_0ab3575e45d5e004d3ed8bcd9564a25f_2;
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
        tmp_assign_source_1 = mod_consts[0];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_2);
    }
    frame_8036f46be8fa35fb2f4ca3d8ab98b9a1 = MAKE_MODULE_FRAME(codeobj_8036f46be8fa35fb2f4ca3d8ab98b9a1, module_pyglet$media$drivers$openal$lib_openal);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_8036f46be8fa35fb2f4ca3d8ab98b9a1);
    assert(Py_REFCNT(frame_8036f46be8fa35fb2f4ca3d8ab98b9a1) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[3]);

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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[3]);

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
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = IMPORT_HARD_CTYPES();
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[7], tmp_assign_source_4);
    }
    {
        PyObject *tmp_star_imported_1;
        tmp_star_imported_1 = IMPORT_HARD_CTYPES();
        assert(!(tmp_star_imported_1 == NULL));
        tmp_result = IMPORT_MODULE_STAR(tstate, module_pyglet$media$drivers$openal$lib_openal, true, tmp_star_imported_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;

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
        tmp_globals_arg_value_1 = (PyObject *)moduledict_pyglet$media$drivers$openal$lib_openal;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[9];
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 51;
        tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[10], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
        }

        assert(!(tmp_expression_value_2 == NULL));
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[11]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;

            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[12]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 53;
        tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts[13], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_7 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_assign_source_7, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;

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
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_7);
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        int tmp_truth_name_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        assert(!(tmp_args_element_value_1 == NULL));
        tmp_args_element_value_2 = mod_consts[20];
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 58;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
        }

        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;

            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 58;

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
        PyObject *tmp_expression_value_3;
        tmp_iadd_expr_left_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_iadd_expr_left_1 == NULL)) {
            tmp_iadd_expr_left_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_iadd_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        assert(!(tmp_expression_value_3 == NULL));
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[20]);
        if (tmp_tuple_element_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

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


            exception_lineno = 62;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_8 = tmp_iadd_expr_left_1;
        if (tmp_inplace_orig != tmp_assign_source_8) {
            UPDATE_STRING_DICT_INPLACE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_8);
        }
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_iter_arg_1;
        tmp_iter_arg_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_iter_arg_1 == NULL)) {
            tmp_iter_arg_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_9 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;

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

                exception_lineno = 63;
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
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[21], tmp_assign_source_11);
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto try_except_handler_1;
        }
        tmp_args_element_value_3 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_args_element_value_3 == NULL)) {
            tmp_args_element_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
        }

        assert(!(tmp_args_element_value_3 == NULL));
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 64;
        tmp_cmp_expr_left_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto try_except_handler_1;
        }
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 64;

            goto try_except_handler_1;
        }
        tmp_args_element_value_4 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_args_element_value_4 == NULL)) {
            tmp_args_element_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
        }

        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 64;

            goto try_except_handler_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 64;
        tmp_cmp_expr_right_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_4);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 64;

            goto try_except_handler_1;
        }
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

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
        tmp_assign_source_12 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_assign_source_12 == NULL)) {
            tmp_assign_source_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[24], tmp_assign_source_12);
    }
    branch_no_2:;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 63;

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
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_tuple_element_3 == NULL)) {
            tmp_tuple_element_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
        }

        if (tmp_tuple_element_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

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


            exception_lineno = 68;

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
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_bases_value_1;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

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
        tmp_expression_value_4 = tmp_class_creation_1__bases;
        tmp_subscript_value_1 = mod_consts[9];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_4, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto try_except_handler_2;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

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


            exception_lineno = 68;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_16;
    }
    {
        bool tmp_condition_result_4;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_5 = tmp_class_creation_1__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_5, mod_consts[26]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

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
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_6 = tmp_class_creation_1__metaclass;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[26]);
        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto try_except_handler_2;
        }
        tmp_tuple_element_4 = mod_consts[27];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_4);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_4 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_4);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 68;
        tmp_assign_source_17 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_17;
    }
    {
        bool tmp_condition_result_5;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_7 = tmp_class_creation_1__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_7, mod_consts[28]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

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
        PyObject *tmp_expression_value_8;
        PyObject *tmp_name_value_2;
        PyObject *tmp_default_value_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[29];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_8 = tmp_class_creation_1__metaclass;
        tmp_name_value_2 = mod_consts[30];
        tmp_default_value_1 = mod_consts[31];
        tmp_tuple_element_5 = BUILTIN_GETATTR(tstate, tmp_expression_value_8, tmp_name_value_2, tmp_default_value_1);
        if (tmp_tuple_element_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto try_except_handler_2;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_9;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_5);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_value_9 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_9 == NULL));
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[30]);
            Py_DECREF(tmp_expression_value_9);
            if (tmp_tuple_element_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 68;

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


            exception_lineno = 68;

            goto try_except_handler_2;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 68;
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
            locals_pyglet$media$drivers$openal$lib_openal$$$class__1_c_void_68 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[32];
        tmp_res = PyObject_SetItem(locals_pyglet$media$drivers$openal$lib_openal$$$class__1_c_void_68, mod_consts[33], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto try_except_handler_4;
        }
        tmp_dictset_value = mod_consts[27];
        tmp_res = PyObject_SetItem(locals_pyglet$media$drivers$openal$lib_openal$$$class__1_c_void_68, mod_consts[34], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto try_except_handler_4;
        }
        frame_0ab3575e45d5e004d3ed8bcd9564a25f_2 = MAKE_CLASS_FRAME(tstate, codeobj_0ab3575e45d5e004d3ed8bcd9564a25f, module_pyglet$media$drivers$openal$lib_openal, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_0ab3575e45d5e004d3ed8bcd9564a25f_2);
        assert(Py_REFCNT(frame_0ab3575e45d5e004d3ed8bcd9564a25f_2) == 2);

        // Framed code:
        {
            PyObject *tmp_list_element_1;
            PyObject *tmp_tuple_element_6;
            tmp_tuple_element_6 = mod_consts[35];
            tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_6);
            tmp_tuple_element_6 = PyObject_GetItem(locals_pyglet$media$drivers$openal$lib_openal$$$class__1_c_void_68, mod_consts[36]);

            if (tmp_tuple_element_6 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[36]);

                    if (unlikely(tmp_tuple_element_6 == NULL)) {
                        tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[36]);
                    }

                    if (tmp_tuple_element_6 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 72;
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
            tmp_res = PyObject_SetItem(locals_pyglet$media$drivers$openal$lib_openal$$$class__1_c_void_68, mod_consts[37], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_0ab3575e45d5e004d3ed8bcd9564a25f_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_0ab3575e45d5e004d3ed8bcd9564a25f_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_0ab3575e45d5e004d3ed8bcd9564a25f_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_0ab3575e45d5e004d3ed8bcd9564a25f_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_0ab3575e45d5e004d3ed8bcd9564a25f_2);

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


                exception_lineno = 68;

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
        tmp_res = PyObject_SetItem(locals_pyglet$media$drivers$openal$lib_openal$$$class__1_c_void_68, mod_consts[38], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto try_except_handler_4;
        }
        branch_no_5:;
        {
            PyObject *tmp_assign_source_20;
            PyObject *tmp_called_value_6;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_7;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_6 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_7 = mod_consts[27];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_7);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_7 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_7);
            tmp_tuple_element_7 = locals_pyglet$media$drivers$openal$lib_openal$$$class__1_c_void_68;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_7);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 68;
            tmp_assign_source_20 = CALL_FUNCTION(tstate, tmp_called_value_6, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_20 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 68;

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
        Py_DECREF(locals_pyglet$media$drivers$openal$lib_openal$$$class__1_c_void_68);
        locals_pyglet$media$drivers$openal$lib_openal$$$class__1_c_void_68 = NULL;
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

        Py_DECREF(locals_pyglet$media$drivers$openal$lib_openal$$$class__1_c_void_68);
        locals_pyglet$media$drivers$openal$lib_openal$$$class__1_c_void_68 = NULL;
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
        exception_lineno = 68;
        goto try_except_handler_2;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[27], tmp_assign_source_19);
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
        tmp_assign_source_21 = mod_consts[9];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = mod_consts[9];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[40], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = mod_consts[41];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[42], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        tmp_assign_source_24 = mod_consts[9];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        tmp_assign_source_25 = mod_consts[9];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[36]);

        if (unlikely(tmp_assign_source_26 == NULL)) {
            tmp_assign_source_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[36]);
        }

        if (tmp_assign_source_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_assign_source_27 == NULL)) {
            tmp_assign_source_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[46]);
        }

        if (tmp_assign_source_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[47], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        tmp_assign_source_28 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_assign_source_28 == NULL)) {
            tmp_assign_source_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[46]);
        }

        if (tmp_assign_source_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[48], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        tmp_assign_source_29 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_assign_source_29 == NULL)) {
            tmp_assign_source_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
        }

        if (tmp_assign_source_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_assign_source_30 == NULL)) {
            tmp_assign_source_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[51]);
        }

        if (tmp_assign_source_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[52], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        tmp_assign_source_31 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_assign_source_31 == NULL)) {
            tmp_assign_source_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[53]);
        }

        if (tmp_assign_source_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[54], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        tmp_assign_source_32 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[36]);

        if (unlikely(tmp_assign_source_32 == NULL)) {
            tmp_assign_source_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[36]);
        }

        if (tmp_assign_source_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        tmp_assign_source_33 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_assign_source_33 == NULL)) {
            tmp_assign_source_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
        }

        if (tmp_assign_source_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[57], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[36]);

        if (unlikely(tmp_assign_source_34 == NULL)) {
            tmp_assign_source_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[36]);
        }

        if (tmp_assign_source_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[58], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        tmp_assign_source_35 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[36]);

        if (unlikely(tmp_assign_source_35 == NULL)) {
            tmp_assign_source_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[36]);
        }

        if (tmp_assign_source_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        tmp_assign_source_36 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_assign_source_36 == NULL)) {
            tmp_assign_source_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
        }

        if (tmp_assign_source_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[61], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;
        tmp_assign_source_37 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[62]);

        if (unlikely(tmp_assign_source_37 == NULL)) {
            tmp_assign_source_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[62]);
        }

        if (tmp_assign_source_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;
        tmp_assign_source_38 = Py_None;
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[64], tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;
        tmp_assign_source_39 = mod_consts[9];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[65], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;
        tmp_assign_source_40 = mod_consts[9];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[66], tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_41;
        tmp_assign_source_41 = mod_consts[67];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[68], tmp_assign_source_41);
    }
    {
        PyObject *tmp_assign_source_42;
        tmp_assign_source_42 = mod_consts[69];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[70], tmp_assign_source_42);
    }
    {
        PyObject *tmp_assign_source_43;
        tmp_assign_source_43 = mod_consts[71];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[72], tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;
        tmp_assign_source_44 = mod_consts[73];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[74], tmp_assign_source_44);
    }
    {
        PyObject *tmp_assign_source_45;
        tmp_assign_source_45 = mod_consts[75];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_45);
    }
    {
        PyObject *tmp_assign_source_46;
        tmp_assign_source_46 = mod_consts[77];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[78], tmp_assign_source_46);
    }
    {
        PyObject *tmp_assign_source_47;
        tmp_assign_source_47 = mod_consts[79];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[80], tmp_assign_source_47);
    }
    {
        PyObject *tmp_assign_source_48;
        tmp_assign_source_48 = mod_consts[81];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[82], tmp_assign_source_48);
    }
    {
        PyObject *tmp_assign_source_49;
        tmp_assign_source_49 = mod_consts[83];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[84], tmp_assign_source_49);
    }
    {
        PyObject *tmp_assign_source_50;
        tmp_assign_source_50 = mod_consts[85];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[86], tmp_assign_source_50);
    }
    {
        PyObject *tmp_assign_source_51;
        tmp_assign_source_51 = mod_consts[87];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[88], tmp_assign_source_51);
    }
    {
        PyObject *tmp_assign_source_52;
        tmp_assign_source_52 = mod_consts[89];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[90], tmp_assign_source_52);
    }
    {
        PyObject *tmp_assign_source_53;
        tmp_assign_source_53 = mod_consts[91];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[92], tmp_assign_source_53);
    }
    {
        PyObject *tmp_assign_source_54;
        tmp_assign_source_54 = mod_consts[93];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[94], tmp_assign_source_54);
    }
    {
        PyObject *tmp_assign_source_55;
        tmp_assign_source_55 = mod_consts[95];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[96], tmp_assign_source_55);
    }
    {
        PyObject *tmp_assign_source_56;
        tmp_assign_source_56 = mod_consts[97];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[98], tmp_assign_source_56);
    }
    {
        PyObject *tmp_assign_source_57;
        tmp_assign_source_57 = mod_consts[99];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[100], tmp_assign_source_57);
    }
    {
        PyObject *tmp_assign_source_58;
        tmp_assign_source_58 = mod_consts[101];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[102], tmp_assign_source_58);
    }
    {
        PyObject *tmp_assign_source_59;
        tmp_assign_source_59 = mod_consts[103];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[104], tmp_assign_source_59);
    }
    {
        PyObject *tmp_assign_source_60;
        tmp_assign_source_60 = mod_consts[105];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[106], tmp_assign_source_60);
    }
    {
        PyObject *tmp_assign_source_61;
        tmp_assign_source_61 = mod_consts[107];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[108], tmp_assign_source_61);
    }
    {
        PyObject *tmp_assign_source_62;
        tmp_assign_source_62 = mod_consts[109];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[110], tmp_assign_source_62);
    }
    {
        PyObject *tmp_assign_source_63;
        tmp_assign_source_63 = mod_consts[111];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[112], tmp_assign_source_63);
    }
    {
        PyObject *tmp_assign_source_64;
        tmp_assign_source_64 = mod_consts[113];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[114], tmp_assign_source_64);
    }
    {
        PyObject *tmp_assign_source_65;
        tmp_assign_source_65 = mod_consts[115];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[116], tmp_assign_source_65);
    }
    {
        PyObject *tmp_assign_source_66;
        tmp_assign_source_66 = mod_consts[117];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[118], tmp_assign_source_66);
    }
    {
        PyObject *tmp_assign_source_67;
        tmp_assign_source_67 = mod_consts[119];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[120], tmp_assign_source_67);
    }
    {
        PyObject *tmp_assign_source_68;
        tmp_assign_source_68 = mod_consts[121];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[122], tmp_assign_source_68);
    }
    {
        PyObject *tmp_assign_source_69;
        tmp_assign_source_69 = mod_consts[123];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[124], tmp_assign_source_69);
    }
    {
        PyObject *tmp_assign_source_70;
        tmp_assign_source_70 = mod_consts[125];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[126], tmp_assign_source_70);
    }
    {
        PyObject *tmp_assign_source_71;
        tmp_assign_source_71 = mod_consts[127];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[128], tmp_assign_source_71);
    }
    {
        PyObject *tmp_assign_source_72;
        tmp_assign_source_72 = mod_consts[129];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[130], tmp_assign_source_72);
    }
    {
        PyObject *tmp_assign_source_73;
        tmp_assign_source_73 = mod_consts[131];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[132], tmp_assign_source_73);
    }
    {
        PyObject *tmp_assign_source_74;
        tmp_assign_source_74 = mod_consts[133];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[134], tmp_assign_source_74);
    }
    {
        PyObject *tmp_assign_source_75;
        tmp_assign_source_75 = mod_consts[135];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[136], tmp_assign_source_75);
    }
    {
        PyObject *tmp_assign_source_76;
        tmp_assign_source_76 = mod_consts[137];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[138], tmp_assign_source_76);
    }
    {
        PyObject *tmp_assign_source_77;
        tmp_assign_source_77 = mod_consts[139];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[140], tmp_assign_source_77);
    }
    {
        PyObject *tmp_assign_source_78;
        tmp_assign_source_78 = mod_consts[141];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[142], tmp_assign_source_78);
    }
    {
        PyObject *tmp_assign_source_79;
        tmp_assign_source_79 = mod_consts[143];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[144], tmp_assign_source_79);
    }
    {
        PyObject *tmp_assign_source_80;
        tmp_assign_source_80 = mod_consts[145];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[146], tmp_assign_source_80);
    }
    {
        PyObject *tmp_assign_source_81;
        tmp_assign_source_81 = mod_consts[147];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[148], tmp_assign_source_81);
    }
    {
        PyObject *tmp_assign_source_82;
        tmp_assign_source_82 = mod_consts[149];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[150], tmp_assign_source_82);
    }
    {
        PyObject *tmp_assign_source_83;
        tmp_assign_source_83 = mod_consts[151];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[152], tmp_assign_source_83);
    }
    {
        PyObject *tmp_assign_source_84;
        tmp_assign_source_84 = mod_consts[9];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[153], tmp_assign_source_84);
    }
    {
        PyObject *tmp_assign_source_85;
        tmp_assign_source_85 = mod_consts[154];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[155], tmp_assign_source_85);
    }
    {
        PyObject *tmp_assign_source_86;
        tmp_assign_source_86 = mod_consts[156];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[157], tmp_assign_source_86);
    }
    {
        PyObject *tmp_assign_source_87;
        tmp_assign_source_87 = mod_consts[158];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[159], tmp_assign_source_87);
    }
    {
        PyObject *tmp_assign_source_88;
        tmp_assign_source_88 = mod_consts[160];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[161], tmp_assign_source_88);
    }
    {
        PyObject *tmp_assign_source_89;
        tmp_assign_source_89 = mod_consts[162];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[163], tmp_assign_source_89);
    }
    {
        PyObject *tmp_assign_source_90;
        tmp_assign_source_90 = mod_consts[164];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[165], tmp_assign_source_90);
    }
    {
        PyObject *tmp_assign_source_91;
        tmp_assign_source_91 = mod_consts[166];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[167], tmp_assign_source_91);
    }
    {
        PyObject *tmp_assign_source_92;
        tmp_assign_source_92 = mod_consts[168];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[169], tmp_assign_source_92);
    }
    {
        PyObject *tmp_assign_source_93;
        tmp_assign_source_93 = mod_consts[170];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[171], tmp_assign_source_93);
    }
    {
        PyObject *tmp_assign_source_94;
        tmp_assign_source_94 = mod_consts[172];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[173], tmp_assign_source_94);
    }
    {
        PyObject *tmp_assign_source_95;
        tmp_assign_source_95 = mod_consts[174];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[175], tmp_assign_source_95);
    }
    {
        PyObject *tmp_assign_source_96;
        tmp_assign_source_96 = mod_consts[176];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[177], tmp_assign_source_96);
    }
    {
        PyObject *tmp_assign_source_97;
        tmp_assign_source_97 = mod_consts[178];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[179], tmp_assign_source_97);
    }
    {
        PyObject *tmp_assign_source_98;
        tmp_assign_source_98 = mod_consts[180];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[181], tmp_assign_source_98);
    }
    {
        PyObject *tmp_assign_source_99;
        tmp_assign_source_99 = mod_consts[182];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[183], tmp_assign_source_99);
    }
    {
        PyObject *tmp_assign_source_100;
        tmp_assign_source_100 = mod_consts[184];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[185], tmp_assign_source_100);
    }
    {
        PyObject *tmp_assign_source_101;
        tmp_assign_source_101 = mod_consts[186];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[187], tmp_assign_source_101);
    }
    {
        PyObject *tmp_assign_source_102;
        tmp_assign_source_102 = mod_consts[188];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[189], tmp_assign_source_102);
    }
    {
        PyObject *tmp_assign_source_103;
        tmp_assign_source_103 = mod_consts[190];
        UPDATE_STRING_DICT0(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[191], tmp_assign_source_103);
    }
    {
        PyObject *tmp_assign_source_104;
        PyObject *tmp_expression_value_10;
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_104 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[192]);
        if (tmp_assign_source_104 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[192], tmp_assign_source_104);
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        tmp_assattr_value_3 = Py_None;
        tmp_assattr_target_3 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[192]);

        if (unlikely(tmp_assattr_target_3 == NULL)) {
            tmp_assattr_target_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[192]);
        }

        assert(!(tmp_assattr_target_3 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[193], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_list_element_2;
        PyObject *tmp_assattr_target_4;
        tmp_list_element_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_list_element_2 == NULL)) {
            tmp_list_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
        }

        if (tmp_list_element_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_4 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_4, 0, tmp_list_element_2);
        tmp_assattr_target_4 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[192]);

        if (unlikely(tmp_assattr_target_4 == NULL)) {
            tmp_assattr_target_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[192]);
        }

        if (tmp_assattr_target_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_4);

            exception_lineno = 161;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts[194], tmp_assattr_value_4);
        Py_DECREF(tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_105;
        PyObject *tmp_expression_value_11;
        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_11 == NULL)) {
            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_105 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[195]);
        if (tmp_assign_source_105 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[195], tmp_assign_source_105);
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_assattr_target_5;
        tmp_assattr_value_5 = Py_None;
        tmp_assattr_target_5 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[195]);

        if (unlikely(tmp_assattr_target_5 == NULL)) {
            tmp_assattr_target_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[195]);
        }

        assert(!(tmp_assattr_target_5 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts[193], tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_list_element_3;
        PyObject *tmp_assattr_target_6;
        tmp_list_element_3 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_list_element_3 == NULL)) {
            tmp_list_element_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
        }

        if (tmp_list_element_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_6 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_6, 0, tmp_list_element_3);
        tmp_assattr_target_6 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[195]);

        if (unlikely(tmp_assattr_target_6 == NULL)) {
            tmp_assattr_target_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[195]);
        }

        if (tmp_assattr_target_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_6);

            exception_lineno = 166;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts[194], tmp_assattr_value_6);
        Py_DECREF(tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_106;
        PyObject *tmp_expression_value_12;
        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_12 == NULL)) {
            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_106 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[196]);
        if (tmp_assign_source_106 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[196], tmp_assign_source_106);
    }
    {
        PyObject *tmp_assattr_value_7;
        PyObject *tmp_assattr_target_7;
        tmp_assattr_value_7 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_assattr_value_7 == NULL)) {
            tmp_assattr_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
        }

        if (tmp_assattr_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_7 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[196]);

        if (unlikely(tmp_assattr_target_7 == NULL)) {
            tmp_assattr_target_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[196]);
        }

        assert(!(tmp_assattr_target_7 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_7, mod_consts[193], tmp_assattr_value_7);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_8;
        PyObject *tmp_list_element_4;
        PyObject *tmp_assattr_target_8;
        tmp_list_element_4 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_list_element_4 == NULL)) {
            tmp_list_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
        }

        if (tmp_list_element_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_8 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_8, 0, tmp_list_element_4);
        tmp_assattr_target_8 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[196]);

        if (unlikely(tmp_assattr_target_8 == NULL)) {
            tmp_assattr_target_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[196]);
        }

        if (tmp_assattr_target_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_8);

            exception_lineno = 171;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_8, mod_consts[194], tmp_assattr_value_8);
        Py_DECREF(tmp_assattr_value_8);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_107;
        PyObject *tmp_expression_value_13;
        tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_13 == NULL)) {
            tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_107 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[197]);
        if (tmp_assign_source_107 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[197], tmp_assign_source_107);
    }
    {
        PyObject *tmp_assattr_value_9;
        PyObject *tmp_called_value_7;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_assattr_target_9;
        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[198]);

        if (unlikely(tmp_called_value_7 == NULL)) {
            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_5 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_args_element_value_5 == NULL)) {
            tmp_args_element_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[47]);
        }

        if (tmp_args_element_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 175;
        tmp_assattr_value_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_5);
        if (tmp_assattr_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_9 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[197]);

        if (unlikely(tmp_assattr_target_9 == NULL)) {
            tmp_assattr_target_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[197]);
        }

        if (tmp_assattr_target_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_9);

            exception_lineno = 175;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_9, mod_consts[193], tmp_assattr_value_9);
        Py_DECREF(tmp_assattr_value_9);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_10;
        PyObject *tmp_list_element_5;
        PyObject *tmp_assattr_target_10;
        tmp_list_element_5 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_list_element_5 == NULL)) {
            tmp_list_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
        }

        if (tmp_list_element_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_10 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_10, 0, tmp_list_element_5);
        tmp_assattr_target_10 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[197]);

        if (unlikely(tmp_assattr_target_10 == NULL)) {
            tmp_assattr_target_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[197]);
        }

        if (tmp_assattr_target_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_10);

            exception_lineno = 176;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_10, mod_consts[194], tmp_assattr_value_10);
        Py_DECREF(tmp_assattr_value_10);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_108;
        PyObject *tmp_expression_value_14;
        tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_14 == NULL)) {
            tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_108 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[199]);
        if (tmp_assign_source_108 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[199], tmp_assign_source_108);
    }
    {
        PyObject *tmp_assattr_value_11;
        PyObject *tmp_assattr_target_11;
        tmp_assattr_value_11 = Py_None;
        tmp_assattr_target_11 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[199]);

        if (unlikely(tmp_assattr_target_11 == NULL)) {
            tmp_assattr_target_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[199]);
        }

        assert(!(tmp_assattr_target_11 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_11, mod_consts[193], tmp_assattr_value_11);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_12;
        PyObject *tmp_list_element_6;
        PyObject *tmp_assattr_target_12;
        tmp_list_element_6 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_list_element_6 == NULL)) {
            tmp_list_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
        }

        if (tmp_list_element_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_12 = MAKE_LIST_EMPTY(2);
        {
            PyObject *tmp_called_value_8;
            PyObject *tmp_args_element_value_6;
            PyList_SET_ITEM0(tmp_assattr_value_12, 0, tmp_list_element_6);
            tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[198]);

            if (unlikely(tmp_called_value_8 == NULL)) {
                tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
            }

            if (tmp_called_value_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 181;

                goto list_build_exception_1;
            }
            tmp_args_element_value_6 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[45]);

            if (unlikely(tmp_args_element_value_6 == NULL)) {
                tmp_args_element_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
            }

            if (tmp_args_element_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 181;

                goto list_build_exception_1;
            }
            frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 181;
            tmp_list_element_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_6);
            if (tmp_list_element_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 181;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assattr_value_12, 1, tmp_list_element_6);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_assattr_value_12);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        tmp_assattr_target_12 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[199]);

        if (unlikely(tmp_assattr_target_12 == NULL)) {
            tmp_assattr_target_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[199]);
        }

        if (tmp_assattr_target_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_12);

            exception_lineno = 181;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_12, mod_consts[194], tmp_assattr_value_12);
        Py_DECREF(tmp_assattr_value_12);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_109;
        PyObject *tmp_expression_value_15;
        tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_15 == NULL)) {
            tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_109 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[200]);
        if (tmp_assign_source_109 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[200], tmp_assign_source_109);
    }
    {
        PyObject *tmp_assattr_value_13;
        PyObject *tmp_assattr_target_13;
        tmp_assattr_value_13 = Py_None;
        tmp_assattr_target_13 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[200]);

        if (unlikely(tmp_assattr_target_13 == NULL)) {
            tmp_assattr_target_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[200]);
        }

        assert(!(tmp_assattr_target_13 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_13, mod_consts[193], tmp_assattr_value_13);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_14;
        PyObject *tmp_list_element_7;
        PyObject *tmp_assattr_target_14;
        tmp_list_element_7 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_list_element_7 == NULL)) {
            tmp_list_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
        }

        if (tmp_list_element_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_14 = MAKE_LIST_EMPTY(2);
        {
            PyObject *tmp_called_value_9;
            PyObject *tmp_args_element_value_7;
            PyList_SET_ITEM0(tmp_assattr_value_14, 0, tmp_list_element_7);
            tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[198]);

            if (unlikely(tmp_called_value_9 == NULL)) {
                tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
            }

            if (tmp_called_value_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 186;

                goto list_build_exception_2;
            }
            tmp_args_element_value_7 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[55]);

            if (unlikely(tmp_args_element_value_7 == NULL)) {
                tmp_args_element_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
            }

            if (tmp_args_element_value_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 186;

                goto list_build_exception_2;
            }
            frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 186;
            tmp_list_element_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_7);
            if (tmp_list_element_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 186;

                goto list_build_exception_2;
            }
            PyList_SET_ITEM(tmp_assattr_value_14, 1, tmp_list_element_7);
        }
        goto list_build_noexception_2;
        // Exception handling pass through code for list_build:
        list_build_exception_2:;
        Py_DECREF(tmp_assattr_value_14);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_2:;
        tmp_assattr_target_14 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[200]);

        if (unlikely(tmp_assattr_target_14 == NULL)) {
            tmp_assattr_target_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[200]);
        }

        if (tmp_assattr_target_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_14);

            exception_lineno = 186;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_14, mod_consts[194], tmp_assattr_value_14);
        Py_DECREF(tmp_assattr_value_14);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_110;
        PyObject *tmp_expression_value_16;
        tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_16 == NULL)) {
            tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_110 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[201]);
        if (tmp_assign_source_110 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[201], tmp_assign_source_110);
    }
    {
        PyObject *tmp_assattr_value_15;
        PyObject *tmp_assattr_target_15;
        tmp_assattr_value_15 = Py_None;
        tmp_assattr_target_15 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[201]);

        if (unlikely(tmp_assattr_target_15 == NULL)) {
            tmp_assattr_target_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[201]);
        }

        assert(!(tmp_assattr_target_15 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_15, mod_consts[193], tmp_assattr_value_15);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_16;
        PyObject *tmp_list_element_8;
        PyObject *tmp_assattr_target_16;
        tmp_list_element_8 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_list_element_8 == NULL)) {
            tmp_list_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
        }

        if (tmp_list_element_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_16 = MAKE_LIST_EMPTY(2);
        {
            PyObject *tmp_called_value_10;
            PyObject *tmp_args_element_value_8;
            PyList_SET_ITEM0(tmp_assattr_value_16, 0, tmp_list_element_8);
            tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[198]);

            if (unlikely(tmp_called_value_10 == NULL)) {
                tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
            }

            if (tmp_called_value_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 191;

                goto list_build_exception_3;
            }
            tmp_args_element_value_8 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[61]);

            if (unlikely(tmp_args_element_value_8 == NULL)) {
                tmp_args_element_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
            }

            if (tmp_args_element_value_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 191;

                goto list_build_exception_3;
            }
            frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 191;
            tmp_list_element_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_8);
            if (tmp_list_element_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 191;

                goto list_build_exception_3;
            }
            PyList_SET_ITEM(tmp_assattr_value_16, 1, tmp_list_element_8);
        }
        goto list_build_noexception_3;
        // Exception handling pass through code for list_build:
        list_build_exception_3:;
        Py_DECREF(tmp_assattr_value_16);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_3:;
        tmp_assattr_target_16 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[201]);

        if (unlikely(tmp_assattr_target_16 == NULL)) {
            tmp_assattr_target_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[201]);
        }

        if (tmp_assattr_target_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_16);

            exception_lineno = 191;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_16, mod_consts[194], tmp_assattr_value_16);
        Py_DECREF(tmp_assattr_value_16);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_111;
        PyObject *tmp_expression_value_17;
        tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_17 == NULL)) {
            tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_111 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts[202]);
        if (tmp_assign_source_111 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[202], tmp_assign_source_111);
    }
    {
        PyObject *tmp_assattr_value_17;
        PyObject *tmp_assattr_target_17;
        tmp_assattr_value_17 = Py_None;
        tmp_assattr_target_17 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[202]);

        if (unlikely(tmp_assattr_target_17 == NULL)) {
            tmp_assattr_target_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[202]);
        }

        assert(!(tmp_assattr_target_17 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_17, mod_consts[193], tmp_assattr_value_17);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_18;
        PyObject *tmp_list_element_9;
        PyObject *tmp_assattr_target_18;
        tmp_list_element_9 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_list_element_9 == NULL)) {
            tmp_list_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
        }

        if (tmp_list_element_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_18 = MAKE_LIST_EMPTY(2);
        {
            PyObject *tmp_called_value_11;
            PyObject *tmp_args_element_value_9;
            PyList_SET_ITEM0(tmp_assattr_value_18, 0, tmp_list_element_9);
            tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[198]);

            if (unlikely(tmp_called_value_11 == NULL)) {
                tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
            }

            if (tmp_called_value_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 196;

                goto list_build_exception_4;
            }
            tmp_args_element_value_9 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[63]);

            if (unlikely(tmp_args_element_value_9 == NULL)) {
                tmp_args_element_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
            }

            if (tmp_args_element_value_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 196;

                goto list_build_exception_4;
            }
            frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 196;
            tmp_list_element_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_9);
            if (tmp_list_element_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 196;

                goto list_build_exception_4;
            }
            PyList_SET_ITEM(tmp_assattr_value_18, 1, tmp_list_element_9);
        }
        goto list_build_noexception_4;
        // Exception handling pass through code for list_build:
        list_build_exception_4:;
        Py_DECREF(tmp_assattr_value_18);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_4:;
        tmp_assattr_target_18 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[202]);

        if (unlikely(tmp_assattr_target_18 == NULL)) {
            tmp_assattr_target_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[202]);
        }

        if (tmp_assattr_target_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_18);

            exception_lineno = 196;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_18, mod_consts[194], tmp_assattr_value_18);
        Py_DECREF(tmp_assattr_value_18);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_112;
        PyObject *tmp_expression_value_18;
        tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_18 == NULL)) {
            tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_112 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts[203]);
        if (tmp_assign_source_112 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[203], tmp_assign_source_112);
    }
    {
        PyObject *tmp_assattr_value_19;
        PyObject *tmp_assattr_target_19;
        tmp_assattr_value_19 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_assattr_value_19 == NULL)) {
            tmp_assattr_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
        }

        if (tmp_assattr_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_19 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[203]);

        if (unlikely(tmp_assattr_target_19 == NULL)) {
            tmp_assattr_target_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[203]);
        }

        assert(!(tmp_assattr_target_19 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_19, mod_consts[193], tmp_assattr_value_19);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_20;
        PyObject *tmp_list_element_10;
        PyObject *tmp_assattr_target_20;
        tmp_list_element_10 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_list_element_10 == NULL)) {
            tmp_list_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
        }

        if (tmp_list_element_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_20 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_20, 0, tmp_list_element_10);
        tmp_assattr_target_20 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[203]);

        if (unlikely(tmp_assattr_target_20 == NULL)) {
            tmp_assattr_target_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[203]);
        }

        if (tmp_assattr_target_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_20);

            exception_lineno = 201;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_20, mod_consts[194], tmp_assattr_value_20);
        Py_DECREF(tmp_assattr_value_20);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_113;
        PyObject *tmp_expression_value_19;
        tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_19 == NULL)) {
            tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_113 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts[204]);
        if (tmp_assign_source_113 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[204], tmp_assign_source_113);
    }
    {
        PyObject *tmp_assattr_value_21;
        PyObject *tmp_assattr_target_21;
        tmp_assattr_value_21 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_assattr_value_21 == NULL)) {
            tmp_assattr_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
        }

        if (tmp_assattr_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_21 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[204]);

        if (unlikely(tmp_assattr_target_21 == NULL)) {
            tmp_assattr_target_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[204]);
        }

        assert(!(tmp_assattr_target_21 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_21, mod_consts[193], tmp_assattr_value_21);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_22;
        PyObject *tmp_list_element_11;
        PyObject *tmp_assattr_target_22;
        tmp_list_element_11 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_list_element_11 == NULL)) {
            tmp_list_element_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
        }

        if (tmp_list_element_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_22 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_22, 0, tmp_list_element_11);
        tmp_assattr_target_22 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[204]);

        if (unlikely(tmp_assattr_target_22 == NULL)) {
            tmp_assattr_target_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[204]);
        }

        if (tmp_assattr_target_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_22);

            exception_lineno = 206;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_22, mod_consts[194], tmp_assattr_value_22);
        Py_DECREF(tmp_assattr_value_22);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_114;
        PyObject *tmp_expression_value_20;
        tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_20 == NULL)) {
            tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_114 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts[205]);
        if (tmp_assign_source_114 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[205], tmp_assign_source_114);
    }
    {
        PyObject *tmp_assattr_value_23;
        PyObject *tmp_assattr_target_23;
        tmp_assattr_value_23 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_assattr_value_23 == NULL)) {
            tmp_assattr_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
        }

        if (tmp_assattr_value_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_23 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[205]);

        if (unlikely(tmp_assattr_target_23 == NULL)) {
            tmp_assattr_target_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[205]);
        }

        assert(!(tmp_assattr_target_23 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_23, mod_consts[193], tmp_assattr_value_23);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_24;
        PyObject *tmp_list_element_12;
        PyObject *tmp_assattr_target_24;
        tmp_list_element_12 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_list_element_12 == NULL)) {
            tmp_list_element_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
        }

        if (tmp_list_element_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_24 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_24, 0, tmp_list_element_12);
        tmp_assattr_target_24 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[205]);

        if (unlikely(tmp_assattr_target_24 == NULL)) {
            tmp_assattr_target_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[205]);
        }

        if (tmp_assattr_target_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_24);

            exception_lineno = 211;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_24, mod_consts[194], tmp_assattr_value_24);
        Py_DECREF(tmp_assattr_value_24);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_115;
        PyObject *tmp_expression_value_21;
        tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_21 == NULL)) {
            tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_115 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts[206]);
        if (tmp_assign_source_115 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[206], tmp_assign_source_115);
    }
    {
        PyObject *tmp_assattr_value_25;
        PyObject *tmp_assattr_target_25;
        tmp_assattr_value_25 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[63]);

        if (unlikely(tmp_assattr_value_25 == NULL)) {
            tmp_assattr_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
        }

        if (tmp_assattr_value_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_25 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[206]);

        if (unlikely(tmp_assattr_target_25 == NULL)) {
            tmp_assattr_target_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[206]);
        }

        assert(!(tmp_assattr_target_25 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_25, mod_consts[193], tmp_assattr_value_25);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_26;
        PyObject *tmp_list_element_13;
        PyObject *tmp_assattr_target_26;
        tmp_list_element_13 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_list_element_13 == NULL)) {
            tmp_list_element_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
        }

        if (tmp_list_element_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_26 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_26, 0, tmp_list_element_13);
        tmp_assattr_target_26 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[206]);

        if (unlikely(tmp_assattr_target_26 == NULL)) {
            tmp_assattr_target_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[206]);
        }

        if (tmp_assattr_target_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_26);

            exception_lineno = 216;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_26, mod_consts[194], tmp_assattr_value_26);
        Py_DECREF(tmp_assattr_value_26);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_116;
        PyObject *tmp_expression_value_22;
        tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_22 == NULL)) {
            tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_116 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts[207]);
        if (tmp_assign_source_116 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[207], tmp_assign_source_116);
    }
    {
        PyObject *tmp_assattr_value_27;
        PyObject *tmp_assattr_target_27;
        tmp_assattr_value_27 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_assattr_value_27 == NULL)) {
            tmp_assattr_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
        }

        if (tmp_assattr_value_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_27 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[207]);

        if (unlikely(tmp_assattr_target_27 == NULL)) {
            tmp_assattr_target_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[207]);
        }

        assert(!(tmp_assattr_target_27 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_27, mod_consts[193], tmp_assattr_value_27);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_28;
        PyObject *tmp_assattr_target_28;
        tmp_assattr_value_28 = MAKE_LIST_EMPTY(0);
        tmp_assattr_target_28 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[207]);

        if (unlikely(tmp_assattr_target_28 == NULL)) {
            tmp_assattr_target_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[207]);
        }

        if (tmp_assattr_target_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_28);

            exception_lineno = 221;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_28, mod_consts[194], tmp_assattr_value_28);
        Py_DECREF(tmp_assattr_value_28);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_117;
        PyObject *tmp_expression_value_23;
        tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_23 == NULL)) {
            tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_117 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts[208]);
        if (tmp_assign_source_117 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[208], tmp_assign_source_117);
    }
    {
        PyObject *tmp_assattr_value_29;
        PyObject *tmp_assattr_target_29;
        tmp_assattr_value_29 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_assattr_value_29 == NULL)) {
            tmp_assattr_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
        }

        if (tmp_assattr_value_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_29 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[208]);

        if (unlikely(tmp_assattr_target_29 == NULL)) {
            tmp_assattr_target_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[208]);
        }

        assert(!(tmp_assattr_target_29 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_29, mod_consts[193], tmp_assattr_value_29);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_30;
        PyObject *tmp_list_element_14;
        PyObject *tmp_called_value_12;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_assattr_target_30;
        tmp_called_value_12 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[198]);

        if (unlikely(tmp_called_value_12 == NULL)) {
            tmp_called_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
        }

        if (tmp_called_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_10 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_args_element_value_10 == NULL)) {
            tmp_args_element_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[47]);
        }

        if (tmp_args_element_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 226;
        tmp_list_element_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_10);
        if (tmp_list_element_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_30 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM(tmp_assattr_value_30, 0, tmp_list_element_14);
        tmp_assattr_target_30 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[208]);

        if (unlikely(tmp_assattr_target_30 == NULL)) {
            tmp_assattr_target_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[208]);
        }

        if (tmp_assattr_target_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_30);

            exception_lineno = 226;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_30, mod_consts[194], tmp_assattr_value_30);
        Py_DECREF(tmp_assattr_value_30);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_118;
        PyObject *tmp_expression_value_24;
        tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_24 == NULL)) {
            tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_118 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts[209]);
        if (tmp_assign_source_118 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[209], tmp_assign_source_118);
    }
    {
        PyObject *tmp_assattr_value_31;
        PyObject *tmp_called_value_13;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_assattr_target_31;
        tmp_called_value_13 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[198]);

        if (unlikely(tmp_called_value_13 == NULL)) {
            tmp_called_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
        }

        if (tmp_called_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_11 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_args_element_value_11 == NULL)) {
            tmp_args_element_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[27]);
        }

        if (tmp_args_element_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 230;
        tmp_assattr_value_31 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_13, tmp_args_element_value_11);
        if (tmp_assattr_value_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_31 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[209]);

        if (unlikely(tmp_assattr_target_31 == NULL)) {
            tmp_assattr_target_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[209]);
        }

        if (tmp_assattr_target_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_31);

            exception_lineno = 230;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_31, mod_consts[193], tmp_assattr_value_31);
        Py_DECREF(tmp_assattr_value_31);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_32;
        PyObject *tmp_list_element_15;
        PyObject *tmp_called_value_14;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_assattr_target_32;
        tmp_called_value_14 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[198]);

        if (unlikely(tmp_called_value_14 == NULL)) {
            tmp_called_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
        }

        if (tmp_called_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_12 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_args_element_value_12 == NULL)) {
            tmp_args_element_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[47]);
        }

        if (tmp_args_element_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 231;
        tmp_list_element_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_14, tmp_args_element_value_12);
        if (tmp_list_element_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_32 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM(tmp_assattr_value_32, 0, tmp_list_element_15);
        tmp_assattr_target_32 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[209]);

        if (unlikely(tmp_assattr_target_32 == NULL)) {
            tmp_assattr_target_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[209]);
        }

        if (tmp_assattr_target_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_32);

            exception_lineno = 231;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_32, mod_consts[194], tmp_assattr_value_32);
        Py_DECREF(tmp_assattr_value_32);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_119;
        PyObject *tmp_expression_value_25;
        tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_25 == NULL)) {
            tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_119 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts[210]);
        if (tmp_assign_source_119 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[210], tmp_assign_source_119);
    }
    {
        PyObject *tmp_assattr_value_33;
        PyObject *tmp_assattr_target_33;
        tmp_assattr_value_33 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_assattr_value_33 == NULL)) {
            tmp_assattr_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
        }

        if (tmp_assattr_value_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_33 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[210]);

        if (unlikely(tmp_assattr_target_33 == NULL)) {
            tmp_assattr_target_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[210]);
        }

        assert(!(tmp_assattr_target_33 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_33, mod_consts[193], tmp_assattr_value_33);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_34;
        PyObject *tmp_list_element_16;
        PyObject *tmp_called_value_15;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_assattr_target_34;
        tmp_called_value_15 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[198]);

        if (unlikely(tmp_called_value_15 == NULL)) {
            tmp_called_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
        }

        if (tmp_called_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_13 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_args_element_value_13 == NULL)) {
            tmp_args_element_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[47]);
        }

        if (tmp_args_element_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 236;
        tmp_list_element_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_15, tmp_args_element_value_13);
        if (tmp_list_element_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_34 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM(tmp_assattr_value_34, 0, tmp_list_element_16);
        tmp_assattr_target_34 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[210]);

        if (unlikely(tmp_assattr_target_34 == NULL)) {
            tmp_assattr_target_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[210]);
        }

        if (tmp_assattr_target_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_34);

            exception_lineno = 236;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_34, mod_consts[194], tmp_assattr_value_34);
        Py_DECREF(tmp_assattr_value_34);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_120;
        PyObject *tmp_expression_value_26;
        tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_26 == NULL)) {
            tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_120 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts[211]);
        if (tmp_assign_source_120 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[211], tmp_assign_source_120);
    }
    {
        PyObject *tmp_assattr_value_35;
        PyObject *tmp_assattr_target_35;
        tmp_assattr_value_35 = Py_None;
        tmp_assattr_target_35 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[211]);

        if (unlikely(tmp_assattr_target_35 == NULL)) {
            tmp_assattr_target_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[211]);
        }

        assert(!(tmp_assattr_target_35 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_35, mod_consts[193], tmp_assattr_value_35);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_36;
        PyObject *tmp_list_element_17;
        PyObject *tmp_assattr_target_36;
        tmp_list_element_17 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_list_element_17 == NULL)) {
            tmp_list_element_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
        }

        if (tmp_list_element_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_36 = MAKE_LIST_EMPTY(2);
        PyList_SET_ITEM0(tmp_assattr_value_36, 0, tmp_list_element_17);
        tmp_list_element_17 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_list_element_17 == NULL)) {
            tmp_list_element_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
        }

        if (tmp_list_element_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;

            goto list_build_exception_5;
        }
        PyList_SET_ITEM0(tmp_assattr_value_36, 1, tmp_list_element_17);
        goto list_build_noexception_5;
        // Exception handling pass through code for list_build:
        list_build_exception_5:;
        Py_DECREF(tmp_assattr_value_36);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_5:;
        tmp_assattr_target_36 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[211]);

        if (unlikely(tmp_assattr_target_36 == NULL)) {
            tmp_assattr_target_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[211]);
        }

        if (tmp_assattr_target_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_36);

            exception_lineno = 241;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_36, mod_consts[194], tmp_assattr_value_36);
        Py_DECREF(tmp_assattr_value_36);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_121;
        PyObject *tmp_expression_value_27;
        tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_27 == NULL)) {
            tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_121 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts[212]);
        if (tmp_assign_source_121 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[212], tmp_assign_source_121);
    }
    {
        PyObject *tmp_assattr_value_37;
        PyObject *tmp_assattr_target_37;
        tmp_assattr_value_37 = Py_None;
        tmp_assattr_target_37 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[212]);

        if (unlikely(tmp_assattr_target_37 == NULL)) {
            tmp_assattr_target_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[212]);
        }

        assert(!(tmp_assattr_target_37 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_37, mod_consts[193], tmp_assattr_value_37);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_38;
        PyObject *tmp_list_element_18;
        PyObject *tmp_assattr_target_38;
        tmp_list_element_18 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_list_element_18 == NULL)) {
            tmp_list_element_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
        }

        if (tmp_list_element_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_38 = MAKE_LIST_EMPTY(4);
        PyList_SET_ITEM0(tmp_assattr_value_38, 0, tmp_list_element_18);
        tmp_list_element_18 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_list_element_18 == NULL)) {
            tmp_list_element_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
        }

        if (tmp_list_element_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;

            goto list_build_exception_6;
        }
        PyList_SET_ITEM0(tmp_assattr_value_38, 1, tmp_list_element_18);
        tmp_list_element_18 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_list_element_18 == NULL)) {
            tmp_list_element_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
        }

        if (tmp_list_element_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;

            goto list_build_exception_6;
        }
        PyList_SET_ITEM0(tmp_assattr_value_38, 2, tmp_list_element_18);
        tmp_list_element_18 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_list_element_18 == NULL)) {
            tmp_list_element_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
        }

        if (tmp_list_element_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;

            goto list_build_exception_6;
        }
        PyList_SET_ITEM0(tmp_assattr_value_38, 3, tmp_list_element_18);
        goto list_build_noexception_6;
        // Exception handling pass through code for list_build:
        list_build_exception_6:;
        Py_DECREF(tmp_assattr_value_38);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_6:;
        tmp_assattr_target_38 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[212]);

        if (unlikely(tmp_assattr_target_38 == NULL)) {
            tmp_assattr_target_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[212]);
        }

        if (tmp_assattr_target_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_38);

            exception_lineno = 246;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_38, mod_consts[194], tmp_assattr_value_38);
        Py_DECREF(tmp_assattr_value_38);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_122;
        PyObject *tmp_expression_value_28;
        tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_28 == NULL)) {
            tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_122 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts[213]);
        if (tmp_assign_source_122 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[213], tmp_assign_source_122);
    }
    {
        PyObject *tmp_assattr_value_39;
        PyObject *tmp_assattr_target_39;
        tmp_assattr_value_39 = Py_None;
        tmp_assattr_target_39 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[213]);

        if (unlikely(tmp_assattr_target_39 == NULL)) {
            tmp_assattr_target_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[213]);
        }

        assert(!(tmp_assattr_target_39 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_39, mod_consts[193], tmp_assattr_value_39);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_40;
        PyObject *tmp_list_element_19;
        PyObject *tmp_assattr_target_40;
        tmp_list_element_19 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_list_element_19 == NULL)) {
            tmp_list_element_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
        }

        if (tmp_list_element_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_40 = MAKE_LIST_EMPTY(2);
        {
            PyObject *tmp_called_value_16;
            PyObject *tmp_args_element_value_14;
            PyList_SET_ITEM0(tmp_assattr_value_40, 0, tmp_list_element_19);
            tmp_called_value_16 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[198]);

            if (unlikely(tmp_called_value_16 == NULL)) {
                tmp_called_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
            }

            if (tmp_called_value_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 251;

                goto list_build_exception_7;
            }
            tmp_args_element_value_14 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[61]);

            if (unlikely(tmp_args_element_value_14 == NULL)) {
                tmp_args_element_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
            }

            if (tmp_args_element_value_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 251;

                goto list_build_exception_7;
            }
            frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 251;
            tmp_list_element_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_16, tmp_args_element_value_14);
            if (tmp_list_element_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 251;

                goto list_build_exception_7;
            }
            PyList_SET_ITEM(tmp_assattr_value_40, 1, tmp_list_element_19);
        }
        goto list_build_noexception_7;
        // Exception handling pass through code for list_build:
        list_build_exception_7:;
        Py_DECREF(tmp_assattr_value_40);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_7:;
        tmp_assattr_target_40 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[213]);

        if (unlikely(tmp_assattr_target_40 == NULL)) {
            tmp_assattr_target_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[213]);
        }

        if (tmp_assattr_target_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_40);

            exception_lineno = 251;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_40, mod_consts[194], tmp_assattr_value_40);
        Py_DECREF(tmp_assattr_value_40);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_123;
        PyObject *tmp_expression_value_29;
        tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_29 == NULL)) {
            tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_123 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts[214]);
        if (tmp_assign_source_123 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[214], tmp_assign_source_123);
    }
    {
        PyObject *tmp_assattr_value_41;
        PyObject *tmp_assattr_target_41;
        tmp_assattr_value_41 = Py_None;
        tmp_assattr_target_41 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[214]);

        if (unlikely(tmp_assattr_target_41 == NULL)) {
            tmp_assattr_target_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[214]);
        }

        assert(!(tmp_assattr_target_41 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_41, mod_consts[193], tmp_assattr_value_41);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_42;
        PyObject *tmp_list_element_20;
        PyObject *tmp_assattr_target_42;
        tmp_list_element_20 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_list_element_20 == NULL)) {
            tmp_list_element_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
        }

        if (tmp_list_element_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_42 = MAKE_LIST_EMPTY(2);
        PyList_SET_ITEM0(tmp_assattr_value_42, 0, tmp_list_element_20);
        tmp_list_element_20 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_list_element_20 == NULL)) {
            tmp_list_element_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
        }

        if (tmp_list_element_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;

            goto list_build_exception_8;
        }
        PyList_SET_ITEM0(tmp_assattr_value_42, 1, tmp_list_element_20);
        goto list_build_noexception_8;
        // Exception handling pass through code for list_build:
        list_build_exception_8:;
        Py_DECREF(tmp_assattr_value_42);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_8:;
        tmp_assattr_target_42 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[214]);

        if (unlikely(tmp_assattr_target_42 == NULL)) {
            tmp_assattr_target_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[214]);
        }

        if (tmp_assattr_target_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_42);

            exception_lineno = 256;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_42, mod_consts[194], tmp_assattr_value_42);
        Py_DECREF(tmp_assattr_value_42);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_124;
        PyObject *tmp_expression_value_30;
        tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_30 == NULL)) {
            tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_124 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts[215]);
        if (tmp_assign_source_124 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[215], tmp_assign_source_124);
    }
    {
        PyObject *tmp_assattr_value_43;
        PyObject *tmp_assattr_target_43;
        tmp_assattr_value_43 = Py_None;
        tmp_assattr_target_43 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[215]);

        if (unlikely(tmp_assattr_target_43 == NULL)) {
            tmp_assattr_target_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[215]);
        }

        assert(!(tmp_assattr_target_43 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_43, mod_consts[193], tmp_assattr_value_43);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_44;
        PyObject *tmp_list_element_21;
        PyObject *tmp_assattr_target_44;
        tmp_list_element_21 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_list_element_21 == NULL)) {
            tmp_list_element_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
        }

        if (tmp_list_element_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_44 = MAKE_LIST_EMPTY(2);
        {
            PyObject *tmp_called_value_17;
            PyObject *tmp_args_element_value_15;
            PyList_SET_ITEM0(tmp_assattr_value_44, 0, tmp_list_element_21);
            tmp_called_value_17 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[198]);

            if (unlikely(tmp_called_value_17 == NULL)) {
                tmp_called_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
            }

            if (tmp_called_value_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 271;

                goto list_build_exception_9;
            }
            tmp_args_element_value_15 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[61]);

            if (unlikely(tmp_args_element_value_15 == NULL)) {
                tmp_args_element_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
            }

            if (tmp_args_element_value_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 271;

                goto list_build_exception_9;
            }
            frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 271;
            tmp_list_element_21 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_17, tmp_args_element_value_15);
            if (tmp_list_element_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 271;

                goto list_build_exception_9;
            }
            PyList_SET_ITEM(tmp_assattr_value_44, 1, tmp_list_element_21);
        }
        goto list_build_noexception_9;
        // Exception handling pass through code for list_build:
        list_build_exception_9:;
        Py_DECREF(tmp_assattr_value_44);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_9:;
        tmp_assattr_target_44 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[215]);

        if (unlikely(tmp_assattr_target_44 == NULL)) {
            tmp_assattr_target_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[215]);
        }

        if (tmp_assattr_target_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_44);

            exception_lineno = 271;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_44, mod_consts[194], tmp_assattr_value_44);
        Py_DECREF(tmp_assattr_value_44);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_125;
        PyObject *tmp_expression_value_31;
        tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_31 == NULL)) {
            tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_125 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts[216]);
        if (tmp_assign_source_125 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[216], tmp_assign_source_125);
    }
    {
        PyObject *tmp_assattr_value_45;
        PyObject *tmp_assattr_target_45;
        tmp_assattr_value_45 = Py_None;
        tmp_assattr_target_45 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[216]);

        if (unlikely(tmp_assattr_target_45 == NULL)) {
            tmp_assattr_target_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[216]);
        }

        assert(!(tmp_assattr_target_45 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_45, mod_consts[193], tmp_assattr_value_45);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_46;
        PyObject *tmp_list_element_22;
        PyObject *tmp_assattr_target_46;
        tmp_list_element_22 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_list_element_22 == NULL)) {
            tmp_list_element_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
        }

        if (tmp_list_element_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_46 = MAKE_LIST_EMPTY(4);
        {
            PyObject *tmp_called_value_18;
            PyObject *tmp_args_element_value_16;
            PyObject *tmp_called_value_19;
            PyObject *tmp_args_element_value_17;
            PyObject *tmp_called_value_20;
            PyObject *tmp_args_element_value_18;
            PyList_SET_ITEM0(tmp_assattr_value_46, 0, tmp_list_element_22);
            tmp_called_value_18 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[198]);

            if (unlikely(tmp_called_value_18 == NULL)) {
                tmp_called_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
            }

            if (tmp_called_value_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 276;

                goto list_build_exception_10;
            }
            tmp_args_element_value_16 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[61]);

            if (unlikely(tmp_args_element_value_16 == NULL)) {
                tmp_args_element_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
            }

            if (tmp_args_element_value_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 276;

                goto list_build_exception_10;
            }
            frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 276;
            tmp_list_element_22 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_18, tmp_args_element_value_16);
            if (tmp_list_element_22 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 276;

                goto list_build_exception_10;
            }
            PyList_SET_ITEM(tmp_assattr_value_46, 1, tmp_list_element_22);
            tmp_called_value_19 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[198]);

            if (unlikely(tmp_called_value_19 == NULL)) {
                tmp_called_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
            }

            if (tmp_called_value_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 276;

                goto list_build_exception_10;
            }
            tmp_args_element_value_17 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[61]);

            if (unlikely(tmp_args_element_value_17 == NULL)) {
                tmp_args_element_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
            }

            if (tmp_args_element_value_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 276;

                goto list_build_exception_10;
            }
            frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 276;
            tmp_list_element_22 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_19, tmp_args_element_value_17);
            if (tmp_list_element_22 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 276;

                goto list_build_exception_10;
            }
            PyList_SET_ITEM(tmp_assattr_value_46, 2, tmp_list_element_22);
            tmp_called_value_20 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[198]);

            if (unlikely(tmp_called_value_20 == NULL)) {
                tmp_called_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
            }

            if (tmp_called_value_20 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 276;

                goto list_build_exception_10;
            }
            tmp_args_element_value_18 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[61]);

            if (unlikely(tmp_args_element_value_18 == NULL)) {
                tmp_args_element_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
            }

            if (tmp_args_element_value_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 276;

                goto list_build_exception_10;
            }
            frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 276;
            tmp_list_element_22 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_20, tmp_args_element_value_18);
            if (tmp_list_element_22 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 276;

                goto list_build_exception_10;
            }
            PyList_SET_ITEM(tmp_assattr_value_46, 3, tmp_list_element_22);
        }
        goto list_build_noexception_10;
        // Exception handling pass through code for list_build:
        list_build_exception_10:;
        Py_DECREF(tmp_assattr_value_46);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_10:;
        tmp_assattr_target_46 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[216]);

        if (unlikely(tmp_assattr_target_46 == NULL)) {
            tmp_assattr_target_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[216]);
        }

        if (tmp_assattr_target_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_46);

            exception_lineno = 276;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_46, mod_consts[194], tmp_assattr_value_46);
        Py_DECREF(tmp_assattr_value_46);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_126;
        PyObject *tmp_expression_value_32;
        tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_32 == NULL)) {
            tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_126 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts[217]);
        if (tmp_assign_source_126 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[217], tmp_assign_source_126);
    }
    {
        PyObject *tmp_assattr_value_47;
        PyObject *tmp_assattr_target_47;
        tmp_assattr_value_47 = Py_None;
        tmp_assattr_target_47 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[217]);

        if (unlikely(tmp_assattr_target_47 == NULL)) {
            tmp_assattr_target_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[217]);
        }

        assert(!(tmp_assattr_target_47 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_47, mod_consts[193], tmp_assattr_value_47);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_48;
        PyObject *tmp_list_element_23;
        PyObject *tmp_assattr_target_48;
        tmp_list_element_23 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_list_element_23 == NULL)) {
            tmp_list_element_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
        }

        if (tmp_list_element_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_48 = MAKE_LIST_EMPTY(2);
        {
            PyObject *tmp_called_value_21;
            PyObject *tmp_args_element_value_19;
            PyList_SET_ITEM0(tmp_assattr_value_48, 0, tmp_list_element_23);
            tmp_called_value_21 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[198]);

            if (unlikely(tmp_called_value_21 == NULL)) {
                tmp_called_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
            }

            if (tmp_called_value_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 281;

                goto list_build_exception_11;
            }
            tmp_args_element_value_19 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[61]);

            if (unlikely(tmp_args_element_value_19 == NULL)) {
                tmp_args_element_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
            }

            if (tmp_args_element_value_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 281;

                goto list_build_exception_11;
            }
            frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 281;
            tmp_list_element_23 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_21, tmp_args_element_value_19);
            if (tmp_list_element_23 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 281;

                goto list_build_exception_11;
            }
            PyList_SET_ITEM(tmp_assattr_value_48, 1, tmp_list_element_23);
        }
        goto list_build_noexception_11;
        // Exception handling pass through code for list_build:
        list_build_exception_11:;
        Py_DECREF(tmp_assattr_value_48);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_11:;
        tmp_assattr_target_48 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[217]);

        if (unlikely(tmp_assattr_target_48 == NULL)) {
            tmp_assattr_target_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[217]);
        }

        if (tmp_assattr_target_48 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_48);

            exception_lineno = 281;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_48, mod_consts[194], tmp_assattr_value_48);
        Py_DECREF(tmp_assattr_value_48);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_127;
        PyObject *tmp_expression_value_33;
        tmp_expression_value_33 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_33 == NULL)) {
            tmp_expression_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_127 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts[218]);
        if (tmp_assign_source_127 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[218], tmp_assign_source_127);
    }
    {
        PyObject *tmp_assattr_value_49;
        PyObject *tmp_assattr_target_49;
        tmp_assattr_value_49 = Py_None;
        tmp_assattr_target_49 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[218]);

        if (unlikely(tmp_assattr_target_49 == NULL)) {
            tmp_assattr_target_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[218]);
        }

        assert(!(tmp_assattr_target_49 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_49, mod_consts[193], tmp_assattr_value_49);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_50;
        PyObject *tmp_list_element_24;
        PyObject *tmp_assattr_target_50;
        tmp_list_element_24 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_list_element_24 == NULL)) {
            tmp_list_element_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
        }

        if (tmp_list_element_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_50 = MAKE_LIST_EMPTY(2);
        {
            PyObject *tmp_called_value_22;
            PyObject *tmp_args_element_value_20;
            PyList_SET_ITEM0(tmp_assattr_value_50, 0, tmp_list_element_24);
            tmp_called_value_22 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[198]);

            if (unlikely(tmp_called_value_22 == NULL)) {
                tmp_called_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
            }

            if (tmp_called_value_22 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 286;

                goto list_build_exception_12;
            }
            tmp_args_element_value_20 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[55]);

            if (unlikely(tmp_args_element_value_20 == NULL)) {
                tmp_args_element_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
            }

            if (tmp_args_element_value_20 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 286;

                goto list_build_exception_12;
            }
            frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 286;
            tmp_list_element_24 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_22, tmp_args_element_value_20);
            if (tmp_list_element_24 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 286;

                goto list_build_exception_12;
            }
            PyList_SET_ITEM(tmp_assattr_value_50, 1, tmp_list_element_24);
        }
        goto list_build_noexception_12;
        // Exception handling pass through code for list_build:
        list_build_exception_12:;
        Py_DECREF(tmp_assattr_value_50);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_12:;
        tmp_assattr_target_50 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[218]);

        if (unlikely(tmp_assattr_target_50 == NULL)) {
            tmp_assattr_target_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[218]);
        }

        if (tmp_assattr_target_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_50);

            exception_lineno = 286;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_50, mod_consts[194], tmp_assattr_value_50);
        Py_DECREF(tmp_assattr_value_50);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_128;
        PyObject *tmp_expression_value_34;
        tmp_expression_value_34 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_34 == NULL)) {
            tmp_expression_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_128 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts[219]);
        if (tmp_assign_source_128 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[219], tmp_assign_source_128);
    }
    {
        PyObject *tmp_assattr_value_51;
        PyObject *tmp_assattr_target_51;
        tmp_assattr_value_51 = Py_None;
        tmp_assattr_target_51 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[219]);

        if (unlikely(tmp_assattr_target_51 == NULL)) {
            tmp_assattr_target_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[219]);
        }

        assert(!(tmp_assattr_target_51 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_51, mod_consts[193], tmp_assattr_value_51);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_52;
        PyObject *tmp_list_element_25;
        PyObject *tmp_assattr_target_52;
        tmp_list_element_25 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_list_element_25 == NULL)) {
            tmp_list_element_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
        }

        if (tmp_list_element_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_52 = MAKE_LIST_EMPTY(4);
        {
            PyObject *tmp_called_value_23;
            PyObject *tmp_args_element_value_21;
            PyObject *tmp_called_value_24;
            PyObject *tmp_args_element_value_22;
            PyObject *tmp_called_value_25;
            PyObject *tmp_args_element_value_23;
            PyList_SET_ITEM0(tmp_assattr_value_52, 0, tmp_list_element_25);
            tmp_called_value_23 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[198]);

            if (unlikely(tmp_called_value_23 == NULL)) {
                tmp_called_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
            }

            if (tmp_called_value_23 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 291;

                goto list_build_exception_13;
            }
            tmp_args_element_value_21 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[55]);

            if (unlikely(tmp_args_element_value_21 == NULL)) {
                tmp_args_element_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
            }

            if (tmp_args_element_value_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 291;

                goto list_build_exception_13;
            }
            frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 291;
            tmp_list_element_25 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_23, tmp_args_element_value_21);
            if (tmp_list_element_25 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 291;

                goto list_build_exception_13;
            }
            PyList_SET_ITEM(tmp_assattr_value_52, 1, tmp_list_element_25);
            tmp_called_value_24 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[198]);

            if (unlikely(tmp_called_value_24 == NULL)) {
                tmp_called_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
            }

            if (tmp_called_value_24 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 291;

                goto list_build_exception_13;
            }
            tmp_args_element_value_22 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[55]);

            if (unlikely(tmp_args_element_value_22 == NULL)) {
                tmp_args_element_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
            }

            if (tmp_args_element_value_22 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 291;

                goto list_build_exception_13;
            }
            frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 291;
            tmp_list_element_25 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_24, tmp_args_element_value_22);
            if (tmp_list_element_25 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 291;

                goto list_build_exception_13;
            }
            PyList_SET_ITEM(tmp_assattr_value_52, 2, tmp_list_element_25);
            tmp_called_value_25 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[198]);

            if (unlikely(tmp_called_value_25 == NULL)) {
                tmp_called_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
            }

            if (tmp_called_value_25 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 291;

                goto list_build_exception_13;
            }
            tmp_args_element_value_23 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[55]);

            if (unlikely(tmp_args_element_value_23 == NULL)) {
                tmp_args_element_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
            }

            if (tmp_args_element_value_23 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 291;

                goto list_build_exception_13;
            }
            frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 291;
            tmp_list_element_25 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_25, tmp_args_element_value_23);
            if (tmp_list_element_25 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 291;

                goto list_build_exception_13;
            }
            PyList_SET_ITEM(tmp_assattr_value_52, 3, tmp_list_element_25);
        }
        goto list_build_noexception_13;
        // Exception handling pass through code for list_build:
        list_build_exception_13:;
        Py_DECREF(tmp_assattr_value_52);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_13:;
        tmp_assattr_target_52 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[219]);

        if (unlikely(tmp_assattr_target_52 == NULL)) {
            tmp_assattr_target_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[219]);
        }

        if (tmp_assattr_target_52 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_52);

            exception_lineno = 291;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_52, mod_consts[194], tmp_assattr_value_52);
        Py_DECREF(tmp_assattr_value_52);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_129;
        PyObject *tmp_expression_value_35;
        tmp_expression_value_35 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_35 == NULL)) {
            tmp_expression_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_129 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, mod_consts[220]);
        if (tmp_assign_source_129 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[220], tmp_assign_source_129);
    }
    {
        PyObject *tmp_assattr_value_53;
        PyObject *tmp_assattr_target_53;
        tmp_assattr_value_53 = Py_None;
        tmp_assattr_target_53 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[220]);

        if (unlikely(tmp_assattr_target_53 == NULL)) {
            tmp_assattr_target_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[220]);
        }

        assert(!(tmp_assattr_target_53 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_53, mod_consts[193], tmp_assattr_value_53);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_54;
        PyObject *tmp_list_element_26;
        PyObject *tmp_assattr_target_54;
        tmp_list_element_26 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_list_element_26 == NULL)) {
            tmp_list_element_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
        }

        if (tmp_list_element_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_54 = MAKE_LIST_EMPTY(2);
        {
            PyObject *tmp_called_value_26;
            PyObject *tmp_args_element_value_24;
            PyList_SET_ITEM0(tmp_assattr_value_54, 0, tmp_list_element_26);
            tmp_called_value_26 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[198]);

            if (unlikely(tmp_called_value_26 == NULL)) {
                tmp_called_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
            }

            if (tmp_called_value_26 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 296;

                goto list_build_exception_14;
            }
            tmp_args_element_value_24 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[55]);

            if (unlikely(tmp_args_element_value_24 == NULL)) {
                tmp_args_element_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
            }

            if (tmp_args_element_value_24 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 296;

                goto list_build_exception_14;
            }
            frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 296;
            tmp_list_element_26 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_26, tmp_args_element_value_24);
            if (tmp_list_element_26 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 296;

                goto list_build_exception_14;
            }
            PyList_SET_ITEM(tmp_assattr_value_54, 1, tmp_list_element_26);
        }
        goto list_build_noexception_14;
        // Exception handling pass through code for list_build:
        list_build_exception_14:;
        Py_DECREF(tmp_assattr_value_54);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_14:;
        tmp_assattr_target_54 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[220]);

        if (unlikely(tmp_assattr_target_54 == NULL)) {
            tmp_assattr_target_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[220]);
        }

        if (tmp_assattr_target_54 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_54);

            exception_lineno = 296;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_54, mod_consts[194], tmp_assattr_value_54);
        Py_DECREF(tmp_assattr_value_54);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_130;
        PyObject *tmp_expression_value_36;
        tmp_expression_value_36 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_36 == NULL)) {
            tmp_expression_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_130 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, mod_consts[221]);
        if (tmp_assign_source_130 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[221], tmp_assign_source_130);
    }
    {
        PyObject *tmp_assattr_value_55;
        PyObject *tmp_assattr_target_55;
        tmp_assattr_value_55 = Py_None;
        tmp_assattr_target_55 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[221]);

        if (unlikely(tmp_assattr_target_55 == NULL)) {
            tmp_assattr_target_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[221]);
        }

        assert(!(tmp_assattr_target_55 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_55, mod_consts[193], tmp_assattr_value_55);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_56;
        PyObject *tmp_list_element_27;
        PyObject *tmp_assattr_target_56;
        tmp_list_element_27 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_list_element_27 == NULL)) {
            tmp_list_element_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
        }

        if (tmp_list_element_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_56 = MAKE_LIST_EMPTY(2);
        {
            PyObject *tmp_called_value_27;
            PyObject *tmp_args_element_value_25;
            PyList_SET_ITEM0(tmp_assattr_value_56, 0, tmp_list_element_27);
            tmp_called_value_27 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[198]);

            if (unlikely(tmp_called_value_27 == NULL)) {
                tmp_called_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
            }

            if (tmp_called_value_27 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 301;

                goto list_build_exception_15;
            }
            tmp_args_element_value_25 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[57]);

            if (unlikely(tmp_args_element_value_25 == NULL)) {
                tmp_args_element_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
            }

            if (tmp_args_element_value_25 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 301;

                goto list_build_exception_15;
            }
            frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 301;
            tmp_list_element_27 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_27, tmp_args_element_value_25);
            if (tmp_list_element_27 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 301;

                goto list_build_exception_15;
            }
            PyList_SET_ITEM(tmp_assattr_value_56, 1, tmp_list_element_27);
        }
        goto list_build_noexception_15;
        // Exception handling pass through code for list_build:
        list_build_exception_15:;
        Py_DECREF(tmp_assattr_value_56);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_15:;
        tmp_assattr_target_56 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[221]);

        if (unlikely(tmp_assattr_target_56 == NULL)) {
            tmp_assattr_target_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[221]);
        }

        if (tmp_assattr_target_56 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_56);

            exception_lineno = 301;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_56, mod_consts[194], tmp_assattr_value_56);
        Py_DECREF(tmp_assattr_value_56);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_131;
        PyObject *tmp_expression_value_37;
        tmp_expression_value_37 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_37 == NULL)) {
            tmp_expression_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_131 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_37, mod_consts[222]);
        if (tmp_assign_source_131 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[222], tmp_assign_source_131);
    }
    {
        PyObject *tmp_assattr_value_57;
        PyObject *tmp_assattr_target_57;
        tmp_assattr_value_57 = Py_None;
        tmp_assattr_target_57 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[222]);

        if (unlikely(tmp_assattr_target_57 == NULL)) {
            tmp_assattr_target_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[222]);
        }

        assert(!(tmp_assattr_target_57 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_57, mod_consts[193], tmp_assattr_value_57);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_58;
        PyObject *tmp_list_element_28;
        PyObject *tmp_assattr_target_58;
        tmp_list_element_28 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_list_element_28 == NULL)) {
            tmp_list_element_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
        }

        if (tmp_list_element_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 306;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_58 = MAKE_LIST_EMPTY(2);
        {
            PyObject *tmp_called_value_28;
            PyObject *tmp_args_element_value_26;
            PyList_SET_ITEM0(tmp_assattr_value_58, 0, tmp_list_element_28);
            tmp_called_value_28 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[198]);

            if (unlikely(tmp_called_value_28 == NULL)) {
                tmp_called_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
            }

            if (tmp_called_value_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 306;

                goto list_build_exception_16;
            }
            tmp_args_element_value_26 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[57]);

            if (unlikely(tmp_args_element_value_26 == NULL)) {
                tmp_args_element_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
            }

            if (tmp_args_element_value_26 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 306;

                goto list_build_exception_16;
            }
            frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 306;
            tmp_list_element_28 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_28, tmp_args_element_value_26);
            if (tmp_list_element_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 306;

                goto list_build_exception_16;
            }
            PyList_SET_ITEM(tmp_assattr_value_58, 1, tmp_list_element_28);
        }
        goto list_build_noexception_16;
        // Exception handling pass through code for list_build:
        list_build_exception_16:;
        Py_DECREF(tmp_assattr_value_58);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_16:;
        tmp_assattr_target_58 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[222]);

        if (unlikely(tmp_assattr_target_58 == NULL)) {
            tmp_assattr_target_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[222]);
        }

        if (tmp_assattr_target_58 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_58);

            exception_lineno = 306;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_58, mod_consts[194], tmp_assattr_value_58);
        Py_DECREF(tmp_assattr_value_58);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 306;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_132;
        PyObject *tmp_expression_value_38;
        tmp_expression_value_38 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_38 == NULL)) {
            tmp_expression_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_132 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_38, mod_consts[223]);
        if (tmp_assign_source_132 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[223], tmp_assign_source_132);
    }
    {
        PyObject *tmp_assattr_value_59;
        PyObject *tmp_assattr_target_59;
        tmp_assattr_value_59 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_assattr_value_59 == NULL)) {
            tmp_assattr_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
        }

        if (tmp_assattr_value_59 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_59 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[223]);

        if (unlikely(tmp_assattr_target_59 == NULL)) {
            tmp_assattr_target_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[223]);
        }

        assert(!(tmp_assattr_target_59 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_59, mod_consts[193], tmp_assattr_value_59);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_60;
        PyObject *tmp_list_element_29;
        PyObject *tmp_assattr_target_60;
        tmp_list_element_29 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_list_element_29 == NULL)) {
            tmp_list_element_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
        }

        if (tmp_list_element_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_60 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_60, 0, tmp_list_element_29);
        tmp_assattr_target_60 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[223]);

        if (unlikely(tmp_assattr_target_60 == NULL)) {
            tmp_assattr_target_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[223]);
        }

        if (tmp_assattr_target_60 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_60);

            exception_lineno = 311;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_60, mod_consts[194], tmp_assattr_value_60);
        Py_DECREF(tmp_assattr_value_60);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_133;
        PyObject *tmp_expression_value_39;
        tmp_expression_value_39 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_39 == NULL)) {
            tmp_expression_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_133 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, mod_consts[224]);
        if (tmp_assign_source_133 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[224], tmp_assign_source_133);
    }
    {
        PyObject *tmp_assattr_value_61;
        PyObject *tmp_assattr_target_61;
        tmp_assattr_value_61 = Py_None;
        tmp_assattr_target_61 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[224]);

        if (unlikely(tmp_assattr_target_61 == NULL)) {
            tmp_assattr_target_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[224]);
        }

        assert(!(tmp_assattr_target_61 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_61, mod_consts[193], tmp_assattr_value_61);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_62;
        PyObject *tmp_list_element_30;
        PyObject *tmp_assattr_target_62;
        tmp_list_element_30 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_list_element_30 == NULL)) {
            tmp_list_element_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
        }

        if (tmp_list_element_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_62 = MAKE_LIST_EMPTY(3);
        PyList_SET_ITEM0(tmp_assattr_value_62, 0, tmp_list_element_30);
        tmp_list_element_30 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_list_element_30 == NULL)) {
            tmp_list_element_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
        }

        if (tmp_list_element_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;

            goto list_build_exception_17;
        }
        PyList_SET_ITEM0(tmp_assattr_value_62, 1, tmp_list_element_30);
        tmp_list_element_30 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_list_element_30 == NULL)) {
            tmp_list_element_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
        }

        if (tmp_list_element_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;

            goto list_build_exception_17;
        }
        PyList_SET_ITEM0(tmp_assattr_value_62, 2, tmp_list_element_30);
        goto list_build_noexception_17;
        // Exception handling pass through code for list_build:
        list_build_exception_17:;
        Py_DECREF(tmp_assattr_value_62);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_17:;
        tmp_assattr_target_62 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[224]);

        if (unlikely(tmp_assattr_target_62 == NULL)) {
            tmp_assattr_target_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[224]);
        }

        if (tmp_assattr_target_62 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_62);

            exception_lineno = 316;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_62, mod_consts[194], tmp_assattr_value_62);
        Py_DECREF(tmp_assattr_value_62);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_134;
        PyObject *tmp_expression_value_40;
        tmp_expression_value_40 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_40 == NULL)) {
            tmp_expression_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_134 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_40, mod_consts[225]);
        if (tmp_assign_source_134 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[225], tmp_assign_source_134);
    }
    {
        PyObject *tmp_assattr_value_63;
        PyObject *tmp_assattr_target_63;
        tmp_assattr_value_63 = Py_None;
        tmp_assattr_target_63 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[225]);

        if (unlikely(tmp_assattr_target_63 == NULL)) {
            tmp_assattr_target_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[225]);
        }

        assert(!(tmp_assattr_target_63 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_63, mod_consts[193], tmp_assattr_value_63);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_64;
        PyObject *tmp_list_element_31;
        PyObject *tmp_assattr_target_64;
        tmp_list_element_31 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_list_element_31 == NULL)) {
            tmp_list_element_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
        }

        if (tmp_list_element_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_64 = MAKE_LIST_EMPTY(5);
        PyList_SET_ITEM0(tmp_assattr_value_64, 0, tmp_list_element_31);
        tmp_list_element_31 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_list_element_31 == NULL)) {
            tmp_list_element_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
        }

        if (tmp_list_element_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;

            goto list_build_exception_18;
        }
        PyList_SET_ITEM0(tmp_assattr_value_64, 1, tmp_list_element_31);
        tmp_list_element_31 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_list_element_31 == NULL)) {
            tmp_list_element_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
        }

        if (tmp_list_element_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;

            goto list_build_exception_18;
        }
        PyList_SET_ITEM0(tmp_assattr_value_64, 2, tmp_list_element_31);
        tmp_list_element_31 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_list_element_31 == NULL)) {
            tmp_list_element_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
        }

        if (tmp_list_element_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;

            goto list_build_exception_18;
        }
        PyList_SET_ITEM0(tmp_assattr_value_64, 3, tmp_list_element_31);
        tmp_list_element_31 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_list_element_31 == NULL)) {
            tmp_list_element_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
        }

        if (tmp_list_element_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;

            goto list_build_exception_18;
        }
        PyList_SET_ITEM0(tmp_assattr_value_64, 4, tmp_list_element_31);
        goto list_build_noexception_18;
        // Exception handling pass through code for list_build:
        list_build_exception_18:;
        Py_DECREF(tmp_assattr_value_64);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_18:;
        tmp_assattr_target_64 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[225]);

        if (unlikely(tmp_assattr_target_64 == NULL)) {
            tmp_assattr_target_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[225]);
        }

        if (tmp_assattr_target_64 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_64);

            exception_lineno = 321;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_64, mod_consts[194], tmp_assattr_value_64);
        Py_DECREF(tmp_assattr_value_64);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_135;
        PyObject *tmp_expression_value_41;
        tmp_expression_value_41 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_41 == NULL)) {
            tmp_expression_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_135 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_41, mod_consts[226]);
        if (tmp_assign_source_135 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[226], tmp_assign_source_135);
    }
    {
        PyObject *tmp_assattr_value_65;
        PyObject *tmp_assattr_target_65;
        tmp_assattr_value_65 = Py_None;
        tmp_assattr_target_65 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[226]);

        if (unlikely(tmp_assattr_target_65 == NULL)) {
            tmp_assattr_target_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[226]);
        }

        assert(!(tmp_assattr_target_65 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_65, mod_consts[193], tmp_assattr_value_65);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_66;
        PyObject *tmp_list_element_32;
        PyObject *tmp_assattr_target_66;
        tmp_list_element_32 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_list_element_32 == NULL)) {
            tmp_list_element_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
        }

        if (tmp_list_element_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_66 = MAKE_LIST_EMPTY(3);
        {
            PyObject *tmp_called_value_29;
            PyObject *tmp_args_element_value_27;
            PyList_SET_ITEM0(tmp_assattr_value_66, 0, tmp_list_element_32);
            tmp_list_element_32 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[59]);

            if (unlikely(tmp_list_element_32 == NULL)) {
                tmp_list_element_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
            }

            if (tmp_list_element_32 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 326;

                goto list_build_exception_19;
            }
            PyList_SET_ITEM0(tmp_assattr_value_66, 1, tmp_list_element_32);
            tmp_called_value_29 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[198]);

            if (unlikely(tmp_called_value_29 == NULL)) {
                tmp_called_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
            }

            if (tmp_called_value_29 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 326;

                goto list_build_exception_19;
            }
            tmp_args_element_value_27 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[61]);

            if (unlikely(tmp_args_element_value_27 == NULL)) {
                tmp_args_element_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
            }

            if (tmp_args_element_value_27 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 326;

                goto list_build_exception_19;
            }
            frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 326;
            tmp_list_element_32 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_29, tmp_args_element_value_27);
            if (tmp_list_element_32 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 326;

                goto list_build_exception_19;
            }
            PyList_SET_ITEM(tmp_assattr_value_66, 2, tmp_list_element_32);
        }
        goto list_build_noexception_19;
        // Exception handling pass through code for list_build:
        list_build_exception_19:;
        Py_DECREF(tmp_assattr_value_66);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_19:;
        tmp_assattr_target_66 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[226]);

        if (unlikely(tmp_assattr_target_66 == NULL)) {
            tmp_assattr_target_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[226]);
        }

        if (tmp_assattr_target_66 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_66);

            exception_lineno = 326;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_66, mod_consts[194], tmp_assattr_value_66);
        Py_DECREF(tmp_assattr_value_66);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_136;
        PyObject *tmp_expression_value_42;
        tmp_expression_value_42 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_42 == NULL)) {
            tmp_expression_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_136 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_42, mod_consts[227]);
        if (tmp_assign_source_136 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[227], tmp_assign_source_136);
    }
    {
        PyObject *tmp_assattr_value_67;
        PyObject *tmp_assattr_target_67;
        tmp_assattr_value_67 = Py_None;
        tmp_assattr_target_67 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[227]);

        if (unlikely(tmp_assattr_target_67 == NULL)) {
            tmp_assattr_target_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[227]);
        }

        assert(!(tmp_assattr_target_67 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_67, mod_consts[193], tmp_assattr_value_67);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_68;
        PyObject *tmp_list_element_33;
        PyObject *tmp_assattr_target_68;
        tmp_list_element_33 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_list_element_33 == NULL)) {
            tmp_list_element_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
        }

        if (tmp_list_element_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_68 = MAKE_LIST_EMPTY(3);
        PyList_SET_ITEM0(tmp_assattr_value_68, 0, tmp_list_element_33);
        tmp_list_element_33 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_list_element_33 == NULL)) {
            tmp_list_element_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
        }

        if (tmp_list_element_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;

            goto list_build_exception_20;
        }
        PyList_SET_ITEM0(tmp_assattr_value_68, 1, tmp_list_element_33);
        tmp_list_element_33 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_list_element_33 == NULL)) {
            tmp_list_element_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
        }

        if (tmp_list_element_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;

            goto list_build_exception_20;
        }
        PyList_SET_ITEM0(tmp_assattr_value_68, 2, tmp_list_element_33);
        goto list_build_noexception_20;
        // Exception handling pass through code for list_build:
        list_build_exception_20:;
        Py_DECREF(tmp_assattr_value_68);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_20:;
        tmp_assattr_target_68 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[227]);

        if (unlikely(tmp_assattr_target_68 == NULL)) {
            tmp_assattr_target_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[227]);
        }

        if (tmp_assattr_target_68 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_68);

            exception_lineno = 331;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_68, mod_consts[194], tmp_assattr_value_68);
        Py_DECREF(tmp_assattr_value_68);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_137;
        PyObject *tmp_expression_value_43;
        tmp_expression_value_43 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_43 == NULL)) {
            tmp_expression_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 344;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_137 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_43, mod_consts[228]);
        if (tmp_assign_source_137 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 344;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[228], tmp_assign_source_137);
    }
    {
        PyObject *tmp_assattr_value_69;
        PyObject *tmp_assattr_target_69;
        tmp_assattr_value_69 = Py_None;
        tmp_assattr_target_69 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[228]);

        if (unlikely(tmp_assattr_target_69 == NULL)) {
            tmp_assattr_target_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[228]);
        }

        assert(!(tmp_assattr_target_69 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_69, mod_consts[193], tmp_assattr_value_69);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_70;
        PyObject *tmp_list_element_34;
        PyObject *tmp_assattr_target_70;
        tmp_list_element_34 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_list_element_34 == NULL)) {
            tmp_list_element_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
        }

        if (tmp_list_element_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 346;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_70 = MAKE_LIST_EMPTY(3);
        {
            PyObject *tmp_called_value_30;
            PyObject *tmp_args_element_value_28;
            PyList_SET_ITEM0(tmp_assattr_value_70, 0, tmp_list_element_34);
            tmp_list_element_34 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[59]);

            if (unlikely(tmp_list_element_34 == NULL)) {
                tmp_list_element_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
            }

            if (tmp_list_element_34 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 346;

                goto list_build_exception_21;
            }
            PyList_SET_ITEM0(tmp_assattr_value_70, 1, tmp_list_element_34);
            tmp_called_value_30 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[198]);

            if (unlikely(tmp_called_value_30 == NULL)) {
                tmp_called_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
            }

            if (tmp_called_value_30 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 346;

                goto list_build_exception_21;
            }
            tmp_args_element_value_28 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[61]);

            if (unlikely(tmp_args_element_value_28 == NULL)) {
                tmp_args_element_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
            }

            if (tmp_args_element_value_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 346;

                goto list_build_exception_21;
            }
            frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 346;
            tmp_list_element_34 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_30, tmp_args_element_value_28);
            if (tmp_list_element_34 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 346;

                goto list_build_exception_21;
            }
            PyList_SET_ITEM(tmp_assattr_value_70, 2, tmp_list_element_34);
        }
        goto list_build_noexception_21;
        // Exception handling pass through code for list_build:
        list_build_exception_21:;
        Py_DECREF(tmp_assattr_value_70);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_21:;
        tmp_assattr_target_70 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[228]);

        if (unlikely(tmp_assattr_target_70 == NULL)) {
            tmp_assattr_target_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[228]);
        }

        if (tmp_assattr_target_70 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_70);

            exception_lineno = 346;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_70, mod_consts[194], tmp_assattr_value_70);
        Py_DECREF(tmp_assattr_value_70);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 346;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_138;
        PyObject *tmp_expression_value_44;
        tmp_expression_value_44 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_44 == NULL)) {
            tmp_expression_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_138 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_44, mod_consts[229]);
        if (tmp_assign_source_138 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[229], tmp_assign_source_138);
    }
    {
        PyObject *tmp_assattr_value_71;
        PyObject *tmp_assattr_target_71;
        tmp_assattr_value_71 = Py_None;
        tmp_assattr_target_71 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[229]);

        if (unlikely(tmp_assattr_target_71 == NULL)) {
            tmp_assattr_target_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[229]);
        }

        assert(!(tmp_assattr_target_71 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_71, mod_consts[193], tmp_assattr_value_71);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_72;
        PyObject *tmp_list_element_35;
        PyObject *tmp_assattr_target_72;
        tmp_list_element_35 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_list_element_35 == NULL)) {
            tmp_list_element_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
        }

        if (tmp_list_element_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_72 = MAKE_LIST_EMPTY(5);
        {
            PyObject *tmp_called_value_31;
            PyObject *tmp_args_element_value_29;
            PyObject *tmp_called_value_32;
            PyObject *tmp_args_element_value_30;
            PyObject *tmp_called_value_33;
            PyObject *tmp_args_element_value_31;
            PyList_SET_ITEM0(tmp_assattr_value_72, 0, tmp_list_element_35);
            tmp_list_element_35 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[59]);

            if (unlikely(tmp_list_element_35 == NULL)) {
                tmp_list_element_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
            }

            if (tmp_list_element_35 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 351;

                goto list_build_exception_22;
            }
            PyList_SET_ITEM0(tmp_assattr_value_72, 1, tmp_list_element_35);
            tmp_called_value_31 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[198]);

            if (unlikely(tmp_called_value_31 == NULL)) {
                tmp_called_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
            }

            if (tmp_called_value_31 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 351;

                goto list_build_exception_22;
            }
            tmp_args_element_value_29 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[61]);

            if (unlikely(tmp_args_element_value_29 == NULL)) {
                tmp_args_element_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
            }

            if (tmp_args_element_value_29 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 351;

                goto list_build_exception_22;
            }
            frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 351;
            tmp_list_element_35 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_31, tmp_args_element_value_29);
            if (tmp_list_element_35 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 351;

                goto list_build_exception_22;
            }
            PyList_SET_ITEM(tmp_assattr_value_72, 2, tmp_list_element_35);
            tmp_called_value_32 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[198]);

            if (unlikely(tmp_called_value_32 == NULL)) {
                tmp_called_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
            }

            if (tmp_called_value_32 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 351;

                goto list_build_exception_22;
            }
            tmp_args_element_value_30 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[61]);

            if (unlikely(tmp_args_element_value_30 == NULL)) {
                tmp_args_element_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
            }

            if (tmp_args_element_value_30 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 351;

                goto list_build_exception_22;
            }
            frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 351;
            tmp_list_element_35 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_32, tmp_args_element_value_30);
            if (tmp_list_element_35 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 351;

                goto list_build_exception_22;
            }
            PyList_SET_ITEM(tmp_assattr_value_72, 3, tmp_list_element_35);
            tmp_called_value_33 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[198]);

            if (unlikely(tmp_called_value_33 == NULL)) {
                tmp_called_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
            }

            if (tmp_called_value_33 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 351;

                goto list_build_exception_22;
            }
            tmp_args_element_value_31 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[61]);

            if (unlikely(tmp_args_element_value_31 == NULL)) {
                tmp_args_element_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
            }

            if (tmp_args_element_value_31 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 351;

                goto list_build_exception_22;
            }
            frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 351;
            tmp_list_element_35 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_33, tmp_args_element_value_31);
            if (tmp_list_element_35 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 351;

                goto list_build_exception_22;
            }
            PyList_SET_ITEM(tmp_assattr_value_72, 4, tmp_list_element_35);
        }
        goto list_build_noexception_22;
        // Exception handling pass through code for list_build:
        list_build_exception_22:;
        Py_DECREF(tmp_assattr_value_72);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_22:;
        tmp_assattr_target_72 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[229]);

        if (unlikely(tmp_assattr_target_72 == NULL)) {
            tmp_assattr_target_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[229]);
        }

        if (tmp_assattr_target_72 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_72);

            exception_lineno = 351;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_72, mod_consts[194], tmp_assattr_value_72);
        Py_DECREF(tmp_assattr_value_72);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_139;
        PyObject *tmp_expression_value_45;
        tmp_expression_value_45 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_45 == NULL)) {
            tmp_expression_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_139 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_45, mod_consts[230]);
        if (tmp_assign_source_139 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[230], tmp_assign_source_139);
    }
    {
        PyObject *tmp_assattr_value_73;
        PyObject *tmp_assattr_target_73;
        tmp_assattr_value_73 = Py_None;
        tmp_assattr_target_73 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[230]);

        if (unlikely(tmp_assattr_target_73 == NULL)) {
            tmp_assattr_target_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[230]);
        }

        assert(!(tmp_assattr_target_73 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_73, mod_consts[193], tmp_assattr_value_73);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 355;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_74;
        PyObject *tmp_list_element_36;
        PyObject *tmp_assattr_target_74;
        tmp_list_element_36 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_list_element_36 == NULL)) {
            tmp_list_element_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
        }

        if (tmp_list_element_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 356;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_74 = MAKE_LIST_EMPTY(3);
        {
            PyObject *tmp_called_value_34;
            PyObject *tmp_args_element_value_32;
            PyList_SET_ITEM0(tmp_assattr_value_74, 0, tmp_list_element_36);
            tmp_list_element_36 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[59]);

            if (unlikely(tmp_list_element_36 == NULL)) {
                tmp_list_element_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
            }

            if (tmp_list_element_36 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 356;

                goto list_build_exception_23;
            }
            PyList_SET_ITEM0(tmp_assattr_value_74, 1, tmp_list_element_36);
            tmp_called_value_34 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[198]);

            if (unlikely(tmp_called_value_34 == NULL)) {
                tmp_called_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
            }

            if (tmp_called_value_34 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 356;

                goto list_build_exception_23;
            }
            tmp_args_element_value_32 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[61]);

            if (unlikely(tmp_args_element_value_32 == NULL)) {
                tmp_args_element_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
            }

            if (tmp_args_element_value_32 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 356;

                goto list_build_exception_23;
            }
            frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 356;
            tmp_list_element_36 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_34, tmp_args_element_value_32);
            if (tmp_list_element_36 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 356;

                goto list_build_exception_23;
            }
            PyList_SET_ITEM(tmp_assattr_value_74, 2, tmp_list_element_36);
        }
        goto list_build_noexception_23;
        // Exception handling pass through code for list_build:
        list_build_exception_23:;
        Py_DECREF(tmp_assattr_value_74);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_23:;
        tmp_assattr_target_74 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[230]);

        if (unlikely(tmp_assattr_target_74 == NULL)) {
            tmp_assattr_target_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[230]);
        }

        if (tmp_assattr_target_74 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_74);

            exception_lineno = 356;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_74, mod_consts[194], tmp_assattr_value_74);
        Py_DECREF(tmp_assattr_value_74);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 356;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_140;
        PyObject *tmp_expression_value_46;
        tmp_expression_value_46 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_46 == NULL)) {
            tmp_expression_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 359;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_140 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_46, mod_consts[231]);
        if (tmp_assign_source_140 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 359;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[231], tmp_assign_source_140);
    }
    {
        PyObject *tmp_assattr_value_75;
        PyObject *tmp_assattr_target_75;
        tmp_assattr_value_75 = Py_None;
        tmp_assattr_target_75 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[231]);

        if (unlikely(tmp_assattr_target_75 == NULL)) {
            tmp_assattr_target_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[231]);
        }

        assert(!(tmp_assattr_target_75 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_75, mod_consts[193], tmp_assattr_value_75);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 360;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_76;
        PyObject *tmp_list_element_37;
        PyObject *tmp_assattr_target_76;
        tmp_list_element_37 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_list_element_37 == NULL)) {
            tmp_list_element_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
        }

        if (tmp_list_element_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 361;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_76 = MAKE_LIST_EMPTY(3);
        {
            PyObject *tmp_called_value_35;
            PyObject *tmp_args_element_value_33;
            PyList_SET_ITEM0(tmp_assattr_value_76, 0, tmp_list_element_37);
            tmp_list_element_37 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[59]);

            if (unlikely(tmp_list_element_37 == NULL)) {
                tmp_list_element_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
            }

            if (tmp_list_element_37 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 361;

                goto list_build_exception_24;
            }
            PyList_SET_ITEM0(tmp_assattr_value_76, 1, tmp_list_element_37);
            tmp_called_value_35 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[198]);

            if (unlikely(tmp_called_value_35 == NULL)) {
                tmp_called_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
            }

            if (tmp_called_value_35 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 361;

                goto list_build_exception_24;
            }
            tmp_args_element_value_33 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[55]);

            if (unlikely(tmp_args_element_value_33 == NULL)) {
                tmp_args_element_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
            }

            if (tmp_args_element_value_33 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 361;

                goto list_build_exception_24;
            }
            frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 361;
            tmp_list_element_37 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_35, tmp_args_element_value_33);
            if (tmp_list_element_37 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 361;

                goto list_build_exception_24;
            }
            PyList_SET_ITEM(tmp_assattr_value_76, 2, tmp_list_element_37);
        }
        goto list_build_noexception_24;
        // Exception handling pass through code for list_build:
        list_build_exception_24:;
        Py_DECREF(tmp_assattr_value_76);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_24:;
        tmp_assattr_target_76 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[231]);

        if (unlikely(tmp_assattr_target_76 == NULL)) {
            tmp_assattr_target_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[231]);
        }

        if (tmp_assattr_target_76 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_76);

            exception_lineno = 361;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_76, mod_consts[194], tmp_assattr_value_76);
        Py_DECREF(tmp_assattr_value_76);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 361;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_141;
        PyObject *tmp_expression_value_47;
        tmp_expression_value_47 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_47 == NULL)) {
            tmp_expression_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 369;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_141 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_47, mod_consts[232]);
        if (tmp_assign_source_141 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 369;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[232], tmp_assign_source_141);
    }
    {
        PyObject *tmp_assattr_value_77;
        PyObject *tmp_assattr_target_77;
        tmp_assattr_value_77 = Py_None;
        tmp_assattr_target_77 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[232]);

        if (unlikely(tmp_assattr_target_77 == NULL)) {
            tmp_assattr_target_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[232]);
        }

        assert(!(tmp_assattr_target_77 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_77, mod_consts[193], tmp_assattr_value_77);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 370;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_78;
        PyObject *tmp_list_element_38;
        PyObject *tmp_assattr_target_78;
        tmp_list_element_38 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_list_element_38 == NULL)) {
            tmp_list_element_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
        }

        if (tmp_list_element_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_78 = MAKE_LIST_EMPTY(3);
        {
            PyObject *tmp_called_value_36;
            PyObject *tmp_args_element_value_34;
            PyList_SET_ITEM0(tmp_assattr_value_78, 0, tmp_list_element_38);
            tmp_list_element_38 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[59]);

            if (unlikely(tmp_list_element_38 == NULL)) {
                tmp_list_element_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
            }

            if (tmp_list_element_38 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 371;

                goto list_build_exception_25;
            }
            PyList_SET_ITEM0(tmp_assattr_value_78, 1, tmp_list_element_38);
            tmp_called_value_36 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[198]);

            if (unlikely(tmp_called_value_36 == NULL)) {
                tmp_called_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
            }

            if (tmp_called_value_36 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 371;

                goto list_build_exception_25;
            }
            tmp_args_element_value_34 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[55]);

            if (unlikely(tmp_args_element_value_34 == NULL)) {
                tmp_args_element_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
            }

            if (tmp_args_element_value_34 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 371;

                goto list_build_exception_25;
            }
            frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 371;
            tmp_list_element_38 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_36, tmp_args_element_value_34);
            if (tmp_list_element_38 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 371;

                goto list_build_exception_25;
            }
            PyList_SET_ITEM(tmp_assattr_value_78, 2, tmp_list_element_38);
        }
        goto list_build_noexception_25;
        // Exception handling pass through code for list_build:
        list_build_exception_25:;
        Py_DECREF(tmp_assattr_value_78);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_25:;
        tmp_assattr_target_78 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[232]);

        if (unlikely(tmp_assattr_target_78 == NULL)) {
            tmp_assattr_target_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[232]);
        }

        if (tmp_assattr_target_78 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_78);

            exception_lineno = 371;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_78, mod_consts[194], tmp_assattr_value_78);
        Py_DECREF(tmp_assattr_value_78);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_142;
        PyObject *tmp_expression_value_48;
        tmp_expression_value_48 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_48 == NULL)) {
            tmp_expression_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_48 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_142 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_48, mod_consts[233]);
        if (tmp_assign_source_142 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[233], tmp_assign_source_142);
    }
    {
        PyObject *tmp_assattr_value_79;
        PyObject *tmp_assattr_target_79;
        tmp_assattr_value_79 = Py_None;
        tmp_assattr_target_79 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[233]);

        if (unlikely(tmp_assattr_target_79 == NULL)) {
            tmp_assattr_target_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[233]);
        }

        assert(!(tmp_assattr_target_79 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_79, mod_consts[193], tmp_assattr_value_79);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_80;
        PyObject *tmp_list_element_39;
        PyObject *tmp_assattr_target_80;
        tmp_list_element_39 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_list_element_39 == NULL)) {
            tmp_list_element_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
        }

        if (tmp_list_element_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 376;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_80 = MAKE_LIST_EMPTY(2);
        {
            PyObject *tmp_called_value_37;
            PyObject *tmp_args_element_value_35;
            PyList_SET_ITEM0(tmp_assattr_value_80, 0, tmp_list_element_39);
            tmp_called_value_37 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[198]);

            if (unlikely(tmp_called_value_37 == NULL)) {
                tmp_called_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
            }

            if (tmp_called_value_37 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 376;

                goto list_build_exception_26;
            }
            tmp_args_element_value_35 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[57]);

            if (unlikely(tmp_args_element_value_35 == NULL)) {
                tmp_args_element_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
            }

            if (tmp_args_element_value_35 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 376;

                goto list_build_exception_26;
            }
            frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 376;
            tmp_list_element_39 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_37, tmp_args_element_value_35);
            if (tmp_list_element_39 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 376;

                goto list_build_exception_26;
            }
            PyList_SET_ITEM(tmp_assattr_value_80, 1, tmp_list_element_39);
        }
        goto list_build_noexception_26;
        // Exception handling pass through code for list_build:
        list_build_exception_26:;
        Py_DECREF(tmp_assattr_value_80);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_26:;
        tmp_assattr_target_80 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[233]);

        if (unlikely(tmp_assattr_target_80 == NULL)) {
            tmp_assattr_target_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[233]);
        }

        if (tmp_assattr_target_80 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_80);

            exception_lineno = 376;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_80, mod_consts[194], tmp_assattr_value_80);
        Py_DECREF(tmp_assattr_value_80);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 376;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_143;
        PyObject *tmp_expression_value_49;
        tmp_expression_value_49 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_49 == NULL)) {
            tmp_expression_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 379;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_143 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_49, mod_consts[234]);
        if (tmp_assign_source_143 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 379;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[234], tmp_assign_source_143);
    }
    {
        PyObject *tmp_assattr_value_81;
        PyObject *tmp_assattr_target_81;
        tmp_assattr_value_81 = Py_None;
        tmp_assattr_target_81 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[234]);

        if (unlikely(tmp_assattr_target_81 == NULL)) {
            tmp_assattr_target_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[234]);
        }

        assert(!(tmp_assattr_target_81 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_81, mod_consts[193], tmp_assattr_value_81);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 380;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_82;
        PyObject *tmp_list_element_40;
        PyObject *tmp_assattr_target_82;
        tmp_list_element_40 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_list_element_40 == NULL)) {
            tmp_list_element_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
        }

        if (tmp_list_element_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 381;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_82 = MAKE_LIST_EMPTY(2);
        {
            PyObject *tmp_called_value_38;
            PyObject *tmp_args_element_value_36;
            PyList_SET_ITEM0(tmp_assattr_value_82, 0, tmp_list_element_40);
            tmp_called_value_38 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[198]);

            if (unlikely(tmp_called_value_38 == NULL)) {
                tmp_called_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
            }

            if (tmp_called_value_38 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 381;

                goto list_build_exception_27;
            }
            tmp_args_element_value_36 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[57]);

            if (unlikely(tmp_args_element_value_36 == NULL)) {
                tmp_args_element_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
            }

            if (tmp_args_element_value_36 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 381;

                goto list_build_exception_27;
            }
            frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 381;
            tmp_list_element_40 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_38, tmp_args_element_value_36);
            if (tmp_list_element_40 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 381;

                goto list_build_exception_27;
            }
            PyList_SET_ITEM(tmp_assattr_value_82, 1, tmp_list_element_40);
        }
        goto list_build_noexception_27;
        // Exception handling pass through code for list_build:
        list_build_exception_27:;
        Py_DECREF(tmp_assattr_value_82);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_27:;
        tmp_assattr_target_82 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[234]);

        if (unlikely(tmp_assattr_target_82 == NULL)) {
            tmp_assattr_target_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[234]);
        }

        if (tmp_assattr_target_82 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_82);

            exception_lineno = 381;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_82, mod_consts[194], tmp_assattr_value_82);
        Py_DECREF(tmp_assattr_value_82);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 381;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_144;
        PyObject *tmp_expression_value_50;
        tmp_expression_value_50 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_50 == NULL)) {
            tmp_expression_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 384;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_144 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_50, mod_consts[235]);
        if (tmp_assign_source_144 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 384;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[235], tmp_assign_source_144);
    }
    {
        PyObject *tmp_assattr_value_83;
        PyObject *tmp_assattr_target_83;
        tmp_assattr_value_83 = Py_None;
        tmp_assattr_target_83 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[235]);

        if (unlikely(tmp_assattr_target_83 == NULL)) {
            tmp_assattr_target_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[235]);
        }

        assert(!(tmp_assattr_target_83 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_83, mod_consts[193], tmp_assattr_value_83);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_84;
        PyObject *tmp_list_element_41;
        PyObject *tmp_assattr_target_84;
        tmp_list_element_41 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_list_element_41 == NULL)) {
            tmp_list_element_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
        }

        if (tmp_list_element_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_84 = MAKE_LIST_EMPTY(2);
        {
            PyObject *tmp_called_value_39;
            PyObject *tmp_args_element_value_37;
            PyList_SET_ITEM0(tmp_assattr_value_84, 0, tmp_list_element_41);
            tmp_called_value_39 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[198]);

            if (unlikely(tmp_called_value_39 == NULL)) {
                tmp_called_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
            }

            if (tmp_called_value_39 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 386;

                goto list_build_exception_28;
            }
            tmp_args_element_value_37 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[57]);

            if (unlikely(tmp_args_element_value_37 == NULL)) {
                tmp_args_element_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
            }

            if (tmp_args_element_value_37 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 386;

                goto list_build_exception_28;
            }
            frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 386;
            tmp_list_element_41 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_39, tmp_args_element_value_37);
            if (tmp_list_element_41 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 386;

                goto list_build_exception_28;
            }
            PyList_SET_ITEM(tmp_assattr_value_84, 1, tmp_list_element_41);
        }
        goto list_build_noexception_28;
        // Exception handling pass through code for list_build:
        list_build_exception_28:;
        Py_DECREF(tmp_assattr_value_84);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_28:;
        tmp_assattr_target_84 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[235]);

        if (unlikely(tmp_assattr_target_84 == NULL)) {
            tmp_assattr_target_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[235]);
        }

        if (tmp_assattr_target_84 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_84);

            exception_lineno = 386;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_84, mod_consts[194], tmp_assattr_value_84);
        Py_DECREF(tmp_assattr_value_84);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_145;
        PyObject *tmp_expression_value_51;
        tmp_expression_value_51 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_51 == NULL)) {
            tmp_expression_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_51 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 389;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_145 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_51, mod_consts[236]);
        if (tmp_assign_source_145 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 389;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[236], tmp_assign_source_145);
    }
    {
        PyObject *tmp_assattr_value_85;
        PyObject *tmp_assattr_target_85;
        tmp_assattr_value_85 = Py_None;
        tmp_assattr_target_85 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[236]);

        if (unlikely(tmp_assattr_target_85 == NULL)) {
            tmp_assattr_target_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[236]);
        }

        assert(!(tmp_assattr_target_85 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_85, mod_consts[193], tmp_assattr_value_85);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 390;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_86;
        PyObject *tmp_list_element_42;
        PyObject *tmp_assattr_target_86;
        tmp_list_element_42 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_list_element_42 == NULL)) {
            tmp_list_element_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
        }

        if (tmp_list_element_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 391;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_86 = MAKE_LIST_EMPTY(2);
        {
            PyObject *tmp_called_value_40;
            PyObject *tmp_args_element_value_38;
            PyList_SET_ITEM0(tmp_assattr_value_86, 0, tmp_list_element_42);
            tmp_called_value_40 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[198]);

            if (unlikely(tmp_called_value_40 == NULL)) {
                tmp_called_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
            }

            if (tmp_called_value_40 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 391;

                goto list_build_exception_29;
            }
            tmp_args_element_value_38 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[57]);

            if (unlikely(tmp_args_element_value_38 == NULL)) {
                tmp_args_element_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
            }

            if (tmp_args_element_value_38 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 391;

                goto list_build_exception_29;
            }
            frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 391;
            tmp_list_element_42 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_40, tmp_args_element_value_38);
            if (tmp_list_element_42 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 391;

                goto list_build_exception_29;
            }
            PyList_SET_ITEM(tmp_assattr_value_86, 1, tmp_list_element_42);
        }
        goto list_build_noexception_29;
        // Exception handling pass through code for list_build:
        list_build_exception_29:;
        Py_DECREF(tmp_assattr_value_86);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_29:;
        tmp_assattr_target_86 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[236]);

        if (unlikely(tmp_assattr_target_86 == NULL)) {
            tmp_assattr_target_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[236]);
        }

        if (tmp_assattr_target_86 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_86);

            exception_lineno = 391;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_86, mod_consts[194], tmp_assattr_value_86);
        Py_DECREF(tmp_assattr_value_86);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 391;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_146;
        PyObject *tmp_expression_value_52;
        tmp_expression_value_52 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_52 == NULL)) {
            tmp_expression_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_52 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 394;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_146 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_52, mod_consts[237]);
        if (tmp_assign_source_146 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 394;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[237], tmp_assign_source_146);
    }
    {
        PyObject *tmp_assattr_value_87;
        PyObject *tmp_assattr_target_87;
        tmp_assattr_value_87 = Py_None;
        tmp_assattr_target_87 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[237]);

        if (unlikely(tmp_assattr_target_87 == NULL)) {
            tmp_assattr_target_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[237]);
        }

        assert(!(tmp_assattr_target_87 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_87, mod_consts[193], tmp_assattr_value_87);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 395;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_88;
        PyObject *tmp_list_element_43;
        PyObject *tmp_assattr_target_88;
        tmp_list_element_43 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_list_element_43 == NULL)) {
            tmp_list_element_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
        }

        if (tmp_list_element_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 396;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_88 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_88, 0, tmp_list_element_43);
        tmp_assattr_target_88 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[237]);

        if (unlikely(tmp_assattr_target_88 == NULL)) {
            tmp_assattr_target_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[237]);
        }

        if (tmp_assattr_target_88 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_88);

            exception_lineno = 396;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_88, mod_consts[194], tmp_assattr_value_88);
        Py_DECREF(tmp_assattr_value_88);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 396;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_147;
        PyObject *tmp_expression_value_53;
        tmp_expression_value_53 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_53 == NULL)) {
            tmp_expression_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_53 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 399;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_147 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_53, mod_consts[238]);
        if (tmp_assign_source_147 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 399;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[238], tmp_assign_source_147);
    }
    {
        PyObject *tmp_assattr_value_89;
        PyObject *tmp_assattr_target_89;
        tmp_assattr_value_89 = Py_None;
        tmp_assattr_target_89 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[238]);

        if (unlikely(tmp_assattr_target_89 == NULL)) {
            tmp_assattr_target_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[238]);
        }

        assert(!(tmp_assattr_target_89 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_89, mod_consts[193], tmp_assattr_value_89);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 400;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_90;
        PyObject *tmp_list_element_44;
        PyObject *tmp_assattr_target_90;
        tmp_list_element_44 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_list_element_44 == NULL)) {
            tmp_list_element_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
        }

        if (tmp_list_element_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 401;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_90 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_90, 0, tmp_list_element_44);
        tmp_assattr_target_90 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[238]);

        if (unlikely(tmp_assattr_target_90 == NULL)) {
            tmp_assattr_target_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[238]);
        }

        if (tmp_assattr_target_90 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_90);

            exception_lineno = 401;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_90, mod_consts[194], tmp_assattr_value_90);
        Py_DECREF(tmp_assattr_value_90);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 401;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_148;
        PyObject *tmp_expression_value_54;
        tmp_expression_value_54 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_54 == NULL)) {
            tmp_expression_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_54 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 404;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_148 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_54, mod_consts[239]);
        if (tmp_assign_source_148 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 404;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[239], tmp_assign_source_148);
    }
    {
        PyObject *tmp_assattr_value_91;
        PyObject *tmp_assattr_target_91;
        tmp_assattr_value_91 = Py_None;
        tmp_assattr_target_91 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[239]);

        if (unlikely(tmp_assattr_target_91 == NULL)) {
            tmp_assattr_target_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[239]);
        }

        assert(!(tmp_assattr_target_91 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_91, mod_consts[193], tmp_assattr_value_91);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 405;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_92;
        PyObject *tmp_list_element_45;
        PyObject *tmp_assattr_target_92;
        tmp_list_element_45 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_list_element_45 == NULL)) {
            tmp_list_element_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
        }

        if (tmp_list_element_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 406;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_92 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_92, 0, tmp_list_element_45);
        tmp_assattr_target_92 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[239]);

        if (unlikely(tmp_assattr_target_92 == NULL)) {
            tmp_assattr_target_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[239]);
        }

        if (tmp_assattr_target_92 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_92);

            exception_lineno = 406;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_92, mod_consts[194], tmp_assattr_value_92);
        Py_DECREF(tmp_assattr_value_92);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 406;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_149;
        PyObject *tmp_expression_value_55;
        tmp_expression_value_55 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_55 == NULL)) {
            tmp_expression_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_55 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 409;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_149 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_55, mod_consts[240]);
        if (tmp_assign_source_149 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 409;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[240], tmp_assign_source_149);
    }
    {
        PyObject *tmp_assattr_value_93;
        PyObject *tmp_assattr_target_93;
        tmp_assattr_value_93 = Py_None;
        tmp_assattr_target_93 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[240]);

        if (unlikely(tmp_assattr_target_93 == NULL)) {
            tmp_assattr_target_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[240]);
        }

        assert(!(tmp_assattr_target_93 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_93, mod_consts[193], tmp_assattr_value_93);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 410;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_94;
        PyObject *tmp_list_element_46;
        PyObject *tmp_assattr_target_94;
        tmp_list_element_46 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_list_element_46 == NULL)) {
            tmp_list_element_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
        }

        if (tmp_list_element_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 411;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_94 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_94, 0, tmp_list_element_46);
        tmp_assattr_target_94 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[240]);

        if (unlikely(tmp_assattr_target_94 == NULL)) {
            tmp_assattr_target_94 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[240]);
        }

        if (tmp_assattr_target_94 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_94);

            exception_lineno = 411;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_94, mod_consts[194], tmp_assattr_value_94);
        Py_DECREF(tmp_assattr_value_94);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 411;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_150;
        PyObject *tmp_expression_value_56;
        tmp_expression_value_56 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_56 == NULL)) {
            tmp_expression_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_56 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 414;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_150 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_56, mod_consts[241]);
        if (tmp_assign_source_150 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 414;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[241], tmp_assign_source_150);
    }
    {
        PyObject *tmp_assattr_value_95;
        PyObject *tmp_assattr_target_95;
        tmp_assattr_value_95 = Py_None;
        tmp_assattr_target_95 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[241]);

        if (unlikely(tmp_assattr_target_95 == NULL)) {
            tmp_assattr_target_95 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[241]);
        }

        assert(!(tmp_assattr_target_95 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_95, mod_consts[193], tmp_assattr_value_95);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 415;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_96;
        PyObject *tmp_list_element_47;
        PyObject *tmp_assattr_target_96;
        tmp_list_element_47 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_list_element_47 == NULL)) {
            tmp_list_element_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
        }

        if (tmp_list_element_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_96 = MAKE_LIST_EMPTY(3);
        {
            PyObject *tmp_called_value_41;
            PyObject *tmp_args_element_value_39;
            PyList_SET_ITEM0(tmp_assattr_value_96, 0, tmp_list_element_47);
            tmp_list_element_47 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[58]);

            if (unlikely(tmp_list_element_47 == NULL)) {
                tmp_list_element_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
            }

            if (tmp_list_element_47 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 416;

                goto list_build_exception_30;
            }
            PyList_SET_ITEM0(tmp_assattr_value_96, 1, tmp_list_element_47);
            tmp_called_value_41 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[198]);

            if (unlikely(tmp_called_value_41 == NULL)) {
                tmp_called_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
            }

            if (tmp_called_value_41 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 416;

                goto list_build_exception_30;
            }
            tmp_args_element_value_39 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[57]);

            if (unlikely(tmp_args_element_value_39 == NULL)) {
                tmp_args_element_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
            }

            if (tmp_args_element_value_39 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 416;

                goto list_build_exception_30;
            }
            frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 416;
            tmp_list_element_47 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_41, tmp_args_element_value_39);
            if (tmp_list_element_47 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 416;

                goto list_build_exception_30;
            }
            PyList_SET_ITEM(tmp_assattr_value_96, 2, tmp_list_element_47);
        }
        goto list_build_noexception_30;
        // Exception handling pass through code for list_build:
        list_build_exception_30:;
        Py_DECREF(tmp_assattr_value_96);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_30:;
        tmp_assattr_target_96 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[241]);

        if (unlikely(tmp_assattr_target_96 == NULL)) {
            tmp_assattr_target_96 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[241]);
        }

        if (tmp_assattr_target_96 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_96);

            exception_lineno = 416;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_96, mod_consts[194], tmp_assattr_value_96);
        Py_DECREF(tmp_assattr_value_96);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_151;
        PyObject *tmp_expression_value_57;
        tmp_expression_value_57 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_57 == NULL)) {
            tmp_expression_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 419;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_151 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_57, mod_consts[242]);
        if (tmp_assign_source_151 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 419;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[242], tmp_assign_source_151);
    }
    {
        PyObject *tmp_assattr_value_97;
        PyObject *tmp_assattr_target_97;
        tmp_assattr_value_97 = Py_None;
        tmp_assattr_target_97 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[242]);

        if (unlikely(tmp_assattr_target_97 == NULL)) {
            tmp_assattr_target_97 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[242]);
        }

        assert(!(tmp_assattr_target_97 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_97, mod_consts[193], tmp_assattr_value_97);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 420;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_98;
        PyObject *tmp_list_element_48;
        PyObject *tmp_assattr_target_98;
        tmp_list_element_48 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_list_element_48 == NULL)) {
            tmp_list_element_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
        }

        if (tmp_list_element_48 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 421;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_98 = MAKE_LIST_EMPTY(3);
        {
            PyObject *tmp_called_value_42;
            PyObject *tmp_args_element_value_40;
            PyList_SET_ITEM0(tmp_assattr_value_98, 0, tmp_list_element_48);
            tmp_list_element_48 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[58]);

            if (unlikely(tmp_list_element_48 == NULL)) {
                tmp_list_element_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
            }

            if (tmp_list_element_48 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 421;

                goto list_build_exception_31;
            }
            PyList_SET_ITEM0(tmp_assattr_value_98, 1, tmp_list_element_48);
            tmp_called_value_42 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[198]);

            if (unlikely(tmp_called_value_42 == NULL)) {
                tmp_called_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
            }

            if (tmp_called_value_42 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 421;

                goto list_build_exception_31;
            }
            tmp_args_element_value_40 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[57]);

            if (unlikely(tmp_args_element_value_40 == NULL)) {
                tmp_args_element_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
            }

            if (tmp_args_element_value_40 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 421;

                goto list_build_exception_31;
            }
            frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 421;
            tmp_list_element_48 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_42, tmp_args_element_value_40);
            if (tmp_list_element_48 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 421;

                goto list_build_exception_31;
            }
            PyList_SET_ITEM(tmp_assattr_value_98, 2, tmp_list_element_48);
        }
        goto list_build_noexception_31;
        // Exception handling pass through code for list_build:
        list_build_exception_31:;
        Py_DECREF(tmp_assattr_value_98);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_31:;
        tmp_assattr_target_98 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[242]);

        if (unlikely(tmp_assattr_target_98 == NULL)) {
            tmp_assattr_target_98 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[242]);
        }

        if (tmp_assattr_target_98 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_98);

            exception_lineno = 421;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_98, mod_consts[194], tmp_assattr_value_98);
        Py_DECREF(tmp_assattr_value_98);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 421;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_152;
        PyObject *tmp_expression_value_58;
        tmp_expression_value_58 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_58 == NULL)) {
            tmp_expression_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_58 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 424;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_152 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_58, mod_consts[243]);
        if (tmp_assign_source_152 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 424;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[243], tmp_assign_source_152);
    }
    {
        PyObject *tmp_assattr_value_99;
        PyObject *tmp_assattr_target_99;
        tmp_assattr_value_99 = Py_None;
        tmp_assattr_target_99 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[243]);

        if (unlikely(tmp_assattr_target_99 == NULL)) {
            tmp_assattr_target_99 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[243]);
        }

        assert(!(tmp_assattr_target_99 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_99, mod_consts[193], tmp_assattr_value_99);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 425;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_100;
        PyObject *tmp_list_element_49;
        PyObject *tmp_assattr_target_100;
        tmp_list_element_49 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_list_element_49 == NULL)) {
            tmp_list_element_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
        }

        if (tmp_list_element_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 426;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_100 = MAKE_LIST_EMPTY(2);
        {
            PyObject *tmp_called_value_43;
            PyObject *tmp_args_element_value_41;
            PyList_SET_ITEM0(tmp_assattr_value_100, 0, tmp_list_element_49);
            tmp_called_value_43 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[198]);

            if (unlikely(tmp_called_value_43 == NULL)) {
                tmp_called_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
            }

            if (tmp_called_value_43 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 426;

                goto list_build_exception_32;
            }
            tmp_args_element_value_41 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[57]);

            if (unlikely(tmp_args_element_value_41 == NULL)) {
                tmp_args_element_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
            }

            if (tmp_args_element_value_41 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 426;

                goto list_build_exception_32;
            }
            frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 426;
            tmp_list_element_49 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_43, tmp_args_element_value_41);
            if (tmp_list_element_49 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 426;

                goto list_build_exception_32;
            }
            PyList_SET_ITEM(tmp_assattr_value_100, 1, tmp_list_element_49);
        }
        goto list_build_noexception_32;
        // Exception handling pass through code for list_build:
        list_build_exception_32:;
        Py_DECREF(tmp_assattr_value_100);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_32:;
        tmp_assattr_target_100 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[243]);

        if (unlikely(tmp_assattr_target_100 == NULL)) {
            tmp_assattr_target_100 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[243]);
        }

        if (tmp_assattr_target_100 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_100);

            exception_lineno = 426;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_100, mod_consts[194], tmp_assattr_value_100);
        Py_DECREF(tmp_assattr_value_100);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 426;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_153;
        PyObject *tmp_expression_value_59;
        tmp_expression_value_59 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_59 == NULL)) {
            tmp_expression_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_59 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 429;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_153 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_59, mod_consts[244]);
        if (tmp_assign_source_153 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 429;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[244], tmp_assign_source_153);
    }
    {
        PyObject *tmp_assattr_value_101;
        PyObject *tmp_assattr_target_101;
        tmp_assattr_value_101 = Py_None;
        tmp_assattr_target_101 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[244]);

        if (unlikely(tmp_assattr_target_101 == NULL)) {
            tmp_assattr_target_101 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[244]);
        }

        assert(!(tmp_assattr_target_101 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_101, mod_consts[193], tmp_assattr_value_101);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 430;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_102;
        PyObject *tmp_list_element_50;
        PyObject *tmp_assattr_target_102;
        tmp_list_element_50 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_list_element_50 == NULL)) {
            tmp_list_element_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
        }

        if (tmp_list_element_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 431;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_102 = MAKE_LIST_EMPTY(2);
        {
            PyObject *tmp_called_value_44;
            PyObject *tmp_args_element_value_42;
            PyList_SET_ITEM0(tmp_assattr_value_102, 0, tmp_list_element_50);
            tmp_called_value_44 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[198]);

            if (unlikely(tmp_called_value_44 == NULL)) {
                tmp_called_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
            }

            if (tmp_called_value_44 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 431;

                goto list_build_exception_33;
            }
            tmp_args_element_value_42 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[57]);

            if (unlikely(tmp_args_element_value_42 == NULL)) {
                tmp_args_element_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
            }

            if (tmp_args_element_value_42 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 431;

                goto list_build_exception_33;
            }
            frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 431;
            tmp_list_element_50 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_44, tmp_args_element_value_42);
            if (tmp_list_element_50 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 431;

                goto list_build_exception_33;
            }
            PyList_SET_ITEM(tmp_assattr_value_102, 1, tmp_list_element_50);
        }
        goto list_build_noexception_33;
        // Exception handling pass through code for list_build:
        list_build_exception_33:;
        Py_DECREF(tmp_assattr_value_102);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_33:;
        tmp_assattr_target_102 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[244]);

        if (unlikely(tmp_assattr_target_102 == NULL)) {
            tmp_assattr_target_102 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[244]);
        }

        if (tmp_assattr_target_102 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_102);

            exception_lineno = 431;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_102, mod_consts[194], tmp_assattr_value_102);
        Py_DECREF(tmp_assattr_value_102);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 431;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_154;
        PyObject *tmp_expression_value_60;
        tmp_expression_value_60 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_60 == NULL)) {
            tmp_expression_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_60 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 434;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_154 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_60, mod_consts[245]);
        if (tmp_assign_source_154 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 434;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[245], tmp_assign_source_154);
    }
    {
        PyObject *tmp_assattr_value_103;
        PyObject *tmp_assattr_target_103;
        tmp_assattr_value_103 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_assattr_value_103 == NULL)) {
            tmp_assattr_value_103 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
        }

        if (tmp_assattr_value_103 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 435;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_103 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[245]);

        if (unlikely(tmp_assattr_target_103 == NULL)) {
            tmp_assattr_target_103 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[245]);
        }

        assert(!(tmp_assattr_target_103 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_103, mod_consts[193], tmp_assattr_value_103);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 435;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_104;
        PyObject *tmp_list_element_51;
        PyObject *tmp_assattr_target_104;
        tmp_list_element_51 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_list_element_51 == NULL)) {
            tmp_list_element_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
        }

        if (tmp_list_element_51 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 436;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_104 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_104, 0, tmp_list_element_51);
        tmp_assattr_target_104 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[245]);

        if (unlikely(tmp_assattr_target_104 == NULL)) {
            tmp_assattr_target_104 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[245]);
        }

        if (tmp_assattr_target_104 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_104);

            exception_lineno = 436;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_104, mod_consts[194], tmp_assattr_value_104);
        Py_DECREF(tmp_assattr_value_104);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 436;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_155;
        PyObject *tmp_expression_value_61;
        tmp_expression_value_61 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_61 == NULL)) {
            tmp_expression_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_61 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 439;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_155 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_61, mod_consts[246]);
        if (tmp_assign_source_155 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 439;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[246], tmp_assign_source_155);
    }
    {
        PyObject *tmp_assattr_value_105;
        PyObject *tmp_assattr_target_105;
        tmp_assattr_value_105 = Py_None;
        tmp_assattr_target_105 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[246]);

        if (unlikely(tmp_assattr_target_105 == NULL)) {
            tmp_assattr_target_105 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[246]);
        }

        assert(!(tmp_assattr_target_105 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_105, mod_consts[193], tmp_assattr_value_105);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 440;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_106;
        PyObject *tmp_list_element_52;
        PyObject *tmp_assattr_target_106;
        tmp_list_element_52 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_list_element_52 == NULL)) {
            tmp_list_element_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
        }

        if (tmp_list_element_52 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 441;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_106 = MAKE_LIST_EMPTY(5);
        {
            PyObject *tmp_called_value_45;
            PyObject *tmp_args_element_value_43;
            PyList_SET_ITEM0(tmp_assattr_value_106, 0, tmp_list_element_52);
            tmp_list_element_52 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[59]);

            if (unlikely(tmp_list_element_52 == NULL)) {
                tmp_list_element_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
            }

            if (tmp_list_element_52 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 441;

                goto list_build_exception_34;
            }
            PyList_SET_ITEM0(tmp_assattr_value_106, 1, tmp_list_element_52);
            tmp_called_value_45 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[198]);

            if (unlikely(tmp_called_value_45 == NULL)) {
                tmp_called_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
            }

            if (tmp_called_value_45 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 441;

                goto list_build_exception_34;
            }
            tmp_args_element_value_43 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[64]);

            if (unlikely(tmp_args_element_value_43 == NULL)) {
                tmp_args_element_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[64]);
            }

            if (tmp_args_element_value_43 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 441;

                goto list_build_exception_34;
            }
            frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 441;
            tmp_list_element_52 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_45, tmp_args_element_value_43);
            if (tmp_list_element_52 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 441;

                goto list_build_exception_34;
            }
            PyList_SET_ITEM(tmp_assattr_value_106, 2, tmp_list_element_52);
            tmp_list_element_52 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[58]);

            if (unlikely(tmp_list_element_52 == NULL)) {
                tmp_list_element_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
            }

            if (tmp_list_element_52 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 441;

                goto list_build_exception_34;
            }
            PyList_SET_ITEM0(tmp_assattr_value_106, 3, tmp_list_element_52);
            tmp_list_element_52 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[58]);

            if (unlikely(tmp_list_element_52 == NULL)) {
                tmp_list_element_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
            }

            if (tmp_list_element_52 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 441;

                goto list_build_exception_34;
            }
            PyList_SET_ITEM0(tmp_assattr_value_106, 4, tmp_list_element_52);
        }
        goto list_build_noexception_34;
        // Exception handling pass through code for list_build:
        list_build_exception_34:;
        Py_DECREF(tmp_assattr_value_106);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_34:;
        tmp_assattr_target_106 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[246]);

        if (unlikely(tmp_assattr_target_106 == NULL)) {
            tmp_assattr_target_106 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[246]);
        }

        if (tmp_assattr_target_106 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_106);

            exception_lineno = 441;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_106, mod_consts[194], tmp_assattr_value_106);
        Py_DECREF(tmp_assattr_value_106);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 441;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_156;
        PyObject *tmp_expression_value_62;
        tmp_expression_value_62 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_62 == NULL)) {
            tmp_expression_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_62 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 444;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_156 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_62, mod_consts[247]);
        if (tmp_assign_source_156 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 444;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[247], tmp_assign_source_156);
    }
    {
        PyObject *tmp_assattr_value_107;
        PyObject *tmp_assattr_target_107;
        tmp_assattr_value_107 = Py_None;
        tmp_assattr_target_107 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[247]);

        if (unlikely(tmp_assattr_target_107 == NULL)) {
            tmp_assattr_target_107 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[247]);
        }

        assert(!(tmp_assattr_target_107 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_107, mod_consts[193], tmp_assattr_value_107);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 445;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_108;
        PyObject *tmp_list_element_53;
        PyObject *tmp_assattr_target_108;
        tmp_list_element_53 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_list_element_53 == NULL)) {
            tmp_list_element_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
        }

        if (tmp_list_element_53 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 446;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_108 = MAKE_LIST_EMPTY(3);
        PyList_SET_ITEM0(tmp_assattr_value_108, 0, tmp_list_element_53);
        tmp_list_element_53 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_list_element_53 == NULL)) {
            tmp_list_element_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
        }

        if (tmp_list_element_53 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 446;

            goto list_build_exception_35;
        }
        PyList_SET_ITEM0(tmp_assattr_value_108, 1, tmp_list_element_53);
        tmp_list_element_53 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_list_element_53 == NULL)) {
            tmp_list_element_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
        }

        if (tmp_list_element_53 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 446;

            goto list_build_exception_35;
        }
        PyList_SET_ITEM0(tmp_assattr_value_108, 2, tmp_list_element_53);
        goto list_build_noexception_35;
        // Exception handling pass through code for list_build:
        list_build_exception_35:;
        Py_DECREF(tmp_assattr_value_108);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_35:;
        tmp_assattr_target_108 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[247]);

        if (unlikely(tmp_assattr_target_108 == NULL)) {
            tmp_assattr_target_108 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[247]);
        }

        if (tmp_assattr_target_108 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_108);

            exception_lineno = 446;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_108, mod_consts[194], tmp_assattr_value_108);
        Py_DECREF(tmp_assattr_value_108);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 446;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_157;
        PyObject *tmp_expression_value_63;
        tmp_expression_value_63 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_63 == NULL)) {
            tmp_expression_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_63 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 449;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_157 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_63, mod_consts[248]);
        if (tmp_assign_source_157 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 449;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[248], tmp_assign_source_157);
    }
    {
        PyObject *tmp_assattr_value_109;
        PyObject *tmp_assattr_target_109;
        tmp_assattr_value_109 = Py_None;
        tmp_assattr_target_109 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[248]);

        if (unlikely(tmp_assattr_target_109 == NULL)) {
            tmp_assattr_target_109 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[248]);
        }

        assert(!(tmp_assattr_target_109 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_109, mod_consts[193], tmp_assattr_value_109);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 450;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_110;
        PyObject *tmp_list_element_54;
        PyObject *tmp_assattr_target_110;
        tmp_list_element_54 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_list_element_54 == NULL)) {
            tmp_list_element_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
        }

        if (tmp_list_element_54 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 451;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_110 = MAKE_LIST_EMPTY(5);
        PyList_SET_ITEM0(tmp_assattr_value_110, 0, tmp_list_element_54);
        tmp_list_element_54 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_list_element_54 == NULL)) {
            tmp_list_element_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
        }

        if (tmp_list_element_54 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 451;

            goto list_build_exception_36;
        }
        PyList_SET_ITEM0(tmp_assattr_value_110, 1, tmp_list_element_54);
        tmp_list_element_54 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_list_element_54 == NULL)) {
            tmp_list_element_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
        }

        if (tmp_list_element_54 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 451;

            goto list_build_exception_36;
        }
        PyList_SET_ITEM0(tmp_assattr_value_110, 2, tmp_list_element_54);
        tmp_list_element_54 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_list_element_54 == NULL)) {
            tmp_list_element_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
        }

        if (tmp_list_element_54 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 451;

            goto list_build_exception_36;
        }
        PyList_SET_ITEM0(tmp_assattr_value_110, 3, tmp_list_element_54);
        tmp_list_element_54 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_list_element_54 == NULL)) {
            tmp_list_element_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
        }

        if (tmp_list_element_54 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 451;

            goto list_build_exception_36;
        }
        PyList_SET_ITEM0(tmp_assattr_value_110, 4, tmp_list_element_54);
        goto list_build_noexception_36;
        // Exception handling pass through code for list_build:
        list_build_exception_36:;
        Py_DECREF(tmp_assattr_value_110);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_36:;
        tmp_assattr_target_110 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[248]);

        if (unlikely(tmp_assattr_target_110 == NULL)) {
            tmp_assattr_target_110 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[248]);
        }

        if (tmp_assattr_target_110 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_110);

            exception_lineno = 451;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_110, mod_consts[194], tmp_assattr_value_110);
        Py_DECREF(tmp_assattr_value_110);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 451;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_158;
        PyObject *tmp_expression_value_64;
        tmp_expression_value_64 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_64 == NULL)) {
            tmp_expression_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_64 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 454;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_158 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_64, mod_consts[249]);
        if (tmp_assign_source_158 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 454;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[249], tmp_assign_source_158);
    }
    {
        PyObject *tmp_assattr_value_111;
        PyObject *tmp_assattr_target_111;
        tmp_assattr_value_111 = Py_None;
        tmp_assattr_target_111 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[249]);

        if (unlikely(tmp_assattr_target_111 == NULL)) {
            tmp_assattr_target_111 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[249]);
        }

        assert(!(tmp_assattr_target_111 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_111, mod_consts[193], tmp_assattr_value_111);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 455;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_112;
        PyObject *tmp_list_element_55;
        PyObject *tmp_assattr_target_112;
        tmp_list_element_55 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_list_element_55 == NULL)) {
            tmp_list_element_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
        }

        if (tmp_list_element_55 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 456;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_112 = MAKE_LIST_EMPTY(3);
        {
            PyObject *tmp_called_value_46;
            PyObject *tmp_args_element_value_44;
            PyList_SET_ITEM0(tmp_assattr_value_112, 0, tmp_list_element_55);
            tmp_list_element_55 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[59]);

            if (unlikely(tmp_list_element_55 == NULL)) {
                tmp_list_element_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
            }

            if (tmp_list_element_55 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 456;

                goto list_build_exception_37;
            }
            PyList_SET_ITEM0(tmp_assattr_value_112, 1, tmp_list_element_55);
            tmp_called_value_46 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[198]);

            if (unlikely(tmp_called_value_46 == NULL)) {
                tmp_called_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
            }

            if (tmp_called_value_46 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 456;

                goto list_build_exception_37;
            }
            tmp_args_element_value_44 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[61]);

            if (unlikely(tmp_args_element_value_44 == NULL)) {
                tmp_args_element_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
            }

            if (tmp_args_element_value_44 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 456;

                goto list_build_exception_37;
            }
            frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 456;
            tmp_list_element_55 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_46, tmp_args_element_value_44);
            if (tmp_list_element_55 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 456;

                goto list_build_exception_37;
            }
            PyList_SET_ITEM(tmp_assattr_value_112, 2, tmp_list_element_55);
        }
        goto list_build_noexception_37;
        // Exception handling pass through code for list_build:
        list_build_exception_37:;
        Py_DECREF(tmp_assattr_value_112);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_37:;
        tmp_assattr_target_112 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[249]);

        if (unlikely(tmp_assattr_target_112 == NULL)) {
            tmp_assattr_target_112 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[249]);
        }

        if (tmp_assattr_target_112 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_112);

            exception_lineno = 456;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_112, mod_consts[194], tmp_assattr_value_112);
        Py_DECREF(tmp_assattr_value_112);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 456;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_159;
        PyObject *tmp_expression_value_65;
        tmp_expression_value_65 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_65 == NULL)) {
            tmp_expression_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_65 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 459;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_159 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_65, mod_consts[250]);
        if (tmp_assign_source_159 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 459;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[250], tmp_assign_source_159);
    }
    {
        PyObject *tmp_assattr_value_113;
        PyObject *tmp_assattr_target_113;
        tmp_assattr_value_113 = Py_None;
        tmp_assattr_target_113 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[250]);

        if (unlikely(tmp_assattr_target_113 == NULL)) {
            tmp_assattr_target_113 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[250]);
        }

        assert(!(tmp_assattr_target_113 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_113, mod_consts[193], tmp_assattr_value_113);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 460;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_114;
        PyObject *tmp_list_element_56;
        PyObject *tmp_assattr_target_114;
        tmp_list_element_56 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_list_element_56 == NULL)) {
            tmp_list_element_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
        }

        if (tmp_list_element_56 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 461;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_114 = MAKE_LIST_EMPTY(3);
        PyList_SET_ITEM0(tmp_assattr_value_114, 0, tmp_list_element_56);
        tmp_list_element_56 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_list_element_56 == NULL)) {
            tmp_list_element_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
        }

        if (tmp_list_element_56 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 461;

            goto list_build_exception_38;
        }
        PyList_SET_ITEM0(tmp_assattr_value_114, 1, tmp_list_element_56);
        tmp_list_element_56 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_list_element_56 == NULL)) {
            tmp_list_element_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
        }

        if (tmp_list_element_56 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 461;

            goto list_build_exception_38;
        }
        PyList_SET_ITEM0(tmp_assattr_value_114, 2, tmp_list_element_56);
        goto list_build_noexception_38;
        // Exception handling pass through code for list_build:
        list_build_exception_38:;
        Py_DECREF(tmp_assattr_value_114);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_38:;
        tmp_assattr_target_114 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[250]);

        if (unlikely(tmp_assattr_target_114 == NULL)) {
            tmp_assattr_target_114 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[250]);
        }

        if (tmp_assattr_target_114 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_114);

            exception_lineno = 461;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_114, mod_consts[194], tmp_assattr_value_114);
        Py_DECREF(tmp_assattr_value_114);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 461;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_160;
        PyObject *tmp_expression_value_66;
        tmp_expression_value_66 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_66 == NULL)) {
            tmp_expression_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_66 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 464;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_160 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_66, mod_consts[251]);
        if (tmp_assign_source_160 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 464;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[251], tmp_assign_source_160);
    }
    {
        PyObject *tmp_assattr_value_115;
        PyObject *tmp_assattr_target_115;
        tmp_assattr_value_115 = Py_None;
        tmp_assattr_target_115 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[251]);

        if (unlikely(tmp_assattr_target_115 == NULL)) {
            tmp_assattr_target_115 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[251]);
        }

        assert(!(tmp_assattr_target_115 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_115, mod_consts[193], tmp_assattr_value_115);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 465;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_116;
        PyObject *tmp_list_element_57;
        PyObject *tmp_assattr_target_116;
        tmp_list_element_57 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_list_element_57 == NULL)) {
            tmp_list_element_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
        }

        if (tmp_list_element_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 466;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_116 = MAKE_LIST_EMPTY(5);
        PyList_SET_ITEM0(tmp_assattr_value_116, 0, tmp_list_element_57);
        tmp_list_element_57 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_list_element_57 == NULL)) {
            tmp_list_element_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
        }

        if (tmp_list_element_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 466;

            goto list_build_exception_39;
        }
        PyList_SET_ITEM0(tmp_assattr_value_116, 1, tmp_list_element_57);
        tmp_list_element_57 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_list_element_57 == NULL)) {
            tmp_list_element_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
        }

        if (tmp_list_element_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 466;

            goto list_build_exception_39;
        }
        PyList_SET_ITEM0(tmp_assattr_value_116, 2, tmp_list_element_57);
        tmp_list_element_57 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_list_element_57 == NULL)) {
            tmp_list_element_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
        }

        if (tmp_list_element_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 466;

            goto list_build_exception_39;
        }
        PyList_SET_ITEM0(tmp_assattr_value_116, 3, tmp_list_element_57);
        tmp_list_element_57 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_list_element_57 == NULL)) {
            tmp_list_element_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
        }

        if (tmp_list_element_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 466;

            goto list_build_exception_39;
        }
        PyList_SET_ITEM0(tmp_assattr_value_116, 4, tmp_list_element_57);
        goto list_build_noexception_39;
        // Exception handling pass through code for list_build:
        list_build_exception_39:;
        Py_DECREF(tmp_assattr_value_116);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_39:;
        tmp_assattr_target_116 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[251]);

        if (unlikely(tmp_assattr_target_116 == NULL)) {
            tmp_assattr_target_116 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[251]);
        }

        if (tmp_assattr_target_116 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_116);

            exception_lineno = 466;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_116, mod_consts[194], tmp_assattr_value_116);
        Py_DECREF(tmp_assattr_value_116);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 466;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_161;
        PyObject *tmp_expression_value_67;
        tmp_expression_value_67 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_67 == NULL)) {
            tmp_expression_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_67 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 469;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_161 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_67, mod_consts[252]);
        if (tmp_assign_source_161 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 469;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[252], tmp_assign_source_161);
    }
    {
        PyObject *tmp_assattr_value_117;
        PyObject *tmp_assattr_target_117;
        tmp_assattr_value_117 = Py_None;
        tmp_assattr_target_117 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[252]);

        if (unlikely(tmp_assattr_target_117 == NULL)) {
            tmp_assattr_target_117 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[252]);
        }

        assert(!(tmp_assattr_target_117 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_117, mod_consts[193], tmp_assattr_value_117);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 470;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_118;
        PyObject *tmp_list_element_58;
        PyObject *tmp_assattr_target_118;
        tmp_list_element_58 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_list_element_58 == NULL)) {
            tmp_list_element_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
        }

        if (tmp_list_element_58 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 471;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_118 = MAKE_LIST_EMPTY(3);
        {
            PyObject *tmp_called_value_47;
            PyObject *tmp_args_element_value_45;
            PyList_SET_ITEM0(tmp_assattr_value_118, 0, tmp_list_element_58);
            tmp_list_element_58 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[59]);

            if (unlikely(tmp_list_element_58 == NULL)) {
                tmp_list_element_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
            }

            if (tmp_list_element_58 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 471;

                goto list_build_exception_40;
            }
            PyList_SET_ITEM0(tmp_assattr_value_118, 1, tmp_list_element_58);
            tmp_called_value_47 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[198]);

            if (unlikely(tmp_called_value_47 == NULL)) {
                tmp_called_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
            }

            if (tmp_called_value_47 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 471;

                goto list_build_exception_40;
            }
            tmp_args_element_value_45 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[55]);

            if (unlikely(tmp_args_element_value_45 == NULL)) {
                tmp_args_element_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
            }

            if (tmp_args_element_value_45 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 471;

                goto list_build_exception_40;
            }
            frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 471;
            tmp_list_element_58 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_47, tmp_args_element_value_45);
            if (tmp_list_element_58 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 471;

                goto list_build_exception_40;
            }
            PyList_SET_ITEM(tmp_assattr_value_118, 2, tmp_list_element_58);
        }
        goto list_build_noexception_40;
        // Exception handling pass through code for list_build:
        list_build_exception_40:;
        Py_DECREF(tmp_assattr_value_118);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_40:;
        tmp_assattr_target_118 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[252]);

        if (unlikely(tmp_assattr_target_118 == NULL)) {
            tmp_assattr_target_118 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[252]);
        }

        if (tmp_assattr_target_118 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_118);

            exception_lineno = 471;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_118, mod_consts[194], tmp_assattr_value_118);
        Py_DECREF(tmp_assattr_value_118);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 471;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_162;
        PyObject *tmp_expression_value_68;
        tmp_expression_value_68 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_68 == NULL)) {
            tmp_expression_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_68 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 474;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_162 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_68, mod_consts[253]);
        if (tmp_assign_source_162 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 474;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[253], tmp_assign_source_162);
    }
    {
        PyObject *tmp_assattr_value_119;
        PyObject *tmp_assattr_target_119;
        tmp_assattr_value_119 = Py_None;
        tmp_assattr_target_119 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[253]);

        if (unlikely(tmp_assattr_target_119 == NULL)) {
            tmp_assattr_target_119 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[253]);
        }

        assert(!(tmp_assattr_target_119 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_119, mod_consts[193], tmp_assattr_value_119);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 475;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_120;
        PyObject *tmp_list_element_59;
        PyObject *tmp_assattr_target_120;
        tmp_list_element_59 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_list_element_59 == NULL)) {
            tmp_list_element_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
        }

        if (tmp_list_element_59 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 476;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_120 = MAKE_LIST_EMPTY(3);
        {
            PyObject *tmp_called_value_48;
            PyObject *tmp_args_element_value_46;
            PyList_SET_ITEM0(tmp_assattr_value_120, 0, tmp_list_element_59);
            tmp_list_element_59 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[59]);

            if (unlikely(tmp_list_element_59 == NULL)) {
                tmp_list_element_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
            }

            if (tmp_list_element_59 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 476;

                goto list_build_exception_41;
            }
            PyList_SET_ITEM0(tmp_assattr_value_120, 1, tmp_list_element_59);
            tmp_called_value_48 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[198]);

            if (unlikely(tmp_called_value_48 == NULL)) {
                tmp_called_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
            }

            if (tmp_called_value_48 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 476;

                goto list_build_exception_41;
            }
            tmp_args_element_value_46 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[61]);

            if (unlikely(tmp_args_element_value_46 == NULL)) {
                tmp_args_element_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
            }

            if (tmp_args_element_value_46 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 476;

                goto list_build_exception_41;
            }
            frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 476;
            tmp_list_element_59 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_48, tmp_args_element_value_46);
            if (tmp_list_element_59 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 476;

                goto list_build_exception_41;
            }
            PyList_SET_ITEM(tmp_assattr_value_120, 2, tmp_list_element_59);
        }
        goto list_build_noexception_41;
        // Exception handling pass through code for list_build:
        list_build_exception_41:;
        Py_DECREF(tmp_assattr_value_120);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_41:;
        tmp_assattr_target_120 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[253]);

        if (unlikely(tmp_assattr_target_120 == NULL)) {
            tmp_assattr_target_120 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[253]);
        }

        if (tmp_assattr_target_120 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_120);

            exception_lineno = 476;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_120, mod_consts[194], tmp_assattr_value_120);
        Py_DECREF(tmp_assattr_value_120);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 476;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_163;
        PyObject *tmp_expression_value_69;
        tmp_expression_value_69 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_69 == NULL)) {
            tmp_expression_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_69 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 479;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_163 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_69, mod_consts[254]);
        if (tmp_assign_source_163 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 479;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[254], tmp_assign_source_163);
    }
    {
        PyObject *tmp_assattr_value_121;
        PyObject *tmp_assattr_target_121;
        tmp_assattr_value_121 = Py_None;
        tmp_assattr_target_121 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[254]);

        if (unlikely(tmp_assattr_target_121 == NULL)) {
            tmp_assattr_target_121 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[254]);
        }

        assert(!(tmp_assattr_target_121 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_121, mod_consts[193], tmp_assattr_value_121);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 480;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_122;
        PyObject *tmp_list_element_60;
        PyObject *tmp_assattr_target_122;
        tmp_list_element_60 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_list_element_60 == NULL)) {
            tmp_list_element_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
        }

        if (tmp_list_element_60 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 481;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_122 = MAKE_LIST_EMPTY(5);
        {
            PyObject *tmp_called_value_49;
            PyObject *tmp_args_element_value_47;
            PyObject *tmp_called_value_50;
            PyObject *tmp_args_element_value_48;
            PyObject *tmp_called_value_51;
            PyObject *tmp_args_element_value_49;
            PyList_SET_ITEM0(tmp_assattr_value_122, 0, tmp_list_element_60);
            tmp_list_element_60 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[59]);

            if (unlikely(tmp_list_element_60 == NULL)) {
                tmp_list_element_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
            }

            if (tmp_list_element_60 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 481;

                goto list_build_exception_42;
            }
            PyList_SET_ITEM0(tmp_assattr_value_122, 1, tmp_list_element_60);
            tmp_called_value_49 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[198]);

            if (unlikely(tmp_called_value_49 == NULL)) {
                tmp_called_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
            }

            if (tmp_called_value_49 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 481;

                goto list_build_exception_42;
            }
            tmp_args_element_value_47 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[61]);

            if (unlikely(tmp_args_element_value_47 == NULL)) {
                tmp_args_element_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
            }

            if (tmp_args_element_value_47 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 481;

                goto list_build_exception_42;
            }
            frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 481;
            tmp_list_element_60 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_49, tmp_args_element_value_47);
            if (tmp_list_element_60 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 481;

                goto list_build_exception_42;
            }
            PyList_SET_ITEM(tmp_assattr_value_122, 2, tmp_list_element_60);
            tmp_called_value_50 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[198]);

            if (unlikely(tmp_called_value_50 == NULL)) {
                tmp_called_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
            }

            if (tmp_called_value_50 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 481;

                goto list_build_exception_42;
            }
            tmp_args_element_value_48 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[61]);

            if (unlikely(tmp_args_element_value_48 == NULL)) {
                tmp_args_element_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
            }

            if (tmp_args_element_value_48 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 481;

                goto list_build_exception_42;
            }
            frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 481;
            tmp_list_element_60 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_50, tmp_args_element_value_48);
            if (tmp_list_element_60 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 481;

                goto list_build_exception_42;
            }
            PyList_SET_ITEM(tmp_assattr_value_122, 3, tmp_list_element_60);
            tmp_called_value_51 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[198]);

            if (unlikely(tmp_called_value_51 == NULL)) {
                tmp_called_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
            }

            if (tmp_called_value_51 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 481;

                goto list_build_exception_42;
            }
            tmp_args_element_value_49 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[61]);

            if (unlikely(tmp_args_element_value_49 == NULL)) {
                tmp_args_element_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
            }

            if (tmp_args_element_value_49 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 481;

                goto list_build_exception_42;
            }
            frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 481;
            tmp_list_element_60 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_51, tmp_args_element_value_49);
            if (tmp_list_element_60 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 481;

                goto list_build_exception_42;
            }
            PyList_SET_ITEM(tmp_assattr_value_122, 4, tmp_list_element_60);
        }
        goto list_build_noexception_42;
        // Exception handling pass through code for list_build:
        list_build_exception_42:;
        Py_DECREF(tmp_assattr_value_122);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_42:;
        tmp_assattr_target_122 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[254]);

        if (unlikely(tmp_assattr_target_122 == NULL)) {
            tmp_assattr_target_122 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[254]);
        }

        if (tmp_assattr_target_122 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_122);

            exception_lineno = 481;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_122, mod_consts[194], tmp_assattr_value_122);
        Py_DECREF(tmp_assattr_value_122);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 481;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_164;
        PyObject *tmp_expression_value_70;
        tmp_expression_value_70 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_70 == NULL)) {
            tmp_expression_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_70 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 484;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_164 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_70, mod_consts[255]);
        if (tmp_assign_source_164 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 484;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[255], tmp_assign_source_164);
    }
    {
        PyObject *tmp_assattr_value_123;
        PyObject *tmp_assattr_target_123;
        tmp_assattr_value_123 = Py_None;
        tmp_assattr_target_123 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[255]);

        if (unlikely(tmp_assattr_target_123 == NULL)) {
            tmp_assattr_target_123 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[255]);
        }

        assert(!(tmp_assattr_target_123 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_123, mod_consts[193], tmp_assattr_value_123);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 485;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_124;
        PyObject *tmp_list_element_61;
        PyObject *tmp_assattr_target_124;
        tmp_list_element_61 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_list_element_61 == NULL)) {
            tmp_list_element_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
        }

        if (tmp_list_element_61 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 486;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_124 = MAKE_LIST_EMPTY(3);
        {
            PyObject *tmp_called_value_52;
            PyObject *tmp_args_element_value_50;
            PyList_SET_ITEM0(tmp_assattr_value_124, 0, tmp_list_element_61);
            tmp_list_element_61 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[59]);

            if (unlikely(tmp_list_element_61 == NULL)) {
                tmp_list_element_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
            }

            if (tmp_list_element_61 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 486;

                goto list_build_exception_43;
            }
            PyList_SET_ITEM0(tmp_assattr_value_124, 1, tmp_list_element_61);
            tmp_called_value_52 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[198]);

            if (unlikely(tmp_called_value_52 == NULL)) {
                tmp_called_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
            }

            if (tmp_called_value_52 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 486;

                goto list_build_exception_43;
            }
            tmp_args_element_value_50 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[61]);

            if (unlikely(tmp_args_element_value_50 == NULL)) {
                tmp_args_element_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
            }

            if (tmp_args_element_value_50 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 486;

                goto list_build_exception_43;
            }
            frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 486;
            tmp_list_element_61 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_52, tmp_args_element_value_50);
            if (tmp_list_element_61 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 486;

                goto list_build_exception_43;
            }
            PyList_SET_ITEM(tmp_assattr_value_124, 2, tmp_list_element_61);
        }
        goto list_build_noexception_43;
        // Exception handling pass through code for list_build:
        list_build_exception_43:;
        Py_DECREF(tmp_assattr_value_124);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_43:;
        tmp_assattr_target_124 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[255]);

        if (unlikely(tmp_assattr_target_124 == NULL)) {
            tmp_assattr_target_124 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[255]);
        }

        if (tmp_assattr_target_124 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_124);

            exception_lineno = 486;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_124, mod_consts[194], tmp_assattr_value_124);
        Py_DECREF(tmp_assattr_value_124);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 486;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_165;
        PyObject *tmp_expression_value_71;
        tmp_expression_value_71 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_71 == NULL)) {
            tmp_expression_value_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_71 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 489;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_165 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_71, mod_consts[256]);
        if (tmp_assign_source_165 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 489;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[256], tmp_assign_source_165);
    }
    {
        PyObject *tmp_assattr_value_125;
        PyObject *tmp_assattr_target_125;
        tmp_assattr_value_125 = Py_None;
        tmp_assattr_target_125 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[256]);

        if (unlikely(tmp_assattr_target_125 == NULL)) {
            tmp_assattr_target_125 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[256]);
        }

        assert(!(tmp_assattr_target_125 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_125, mod_consts[193], tmp_assattr_value_125);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 490;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_126;
        PyObject *tmp_list_element_62;
        PyObject *tmp_assattr_target_126;
        tmp_list_element_62 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_list_element_62 == NULL)) {
            tmp_list_element_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
        }

        if (tmp_list_element_62 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 491;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_126 = MAKE_LIST_EMPTY(3);
        {
            PyObject *tmp_called_value_53;
            PyObject *tmp_args_element_value_51;
            PyList_SET_ITEM0(tmp_assattr_value_126, 0, tmp_list_element_62);
            tmp_list_element_62 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[59]);

            if (unlikely(tmp_list_element_62 == NULL)) {
                tmp_list_element_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
            }

            if (tmp_list_element_62 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 491;

                goto list_build_exception_44;
            }
            PyList_SET_ITEM0(tmp_assattr_value_126, 1, tmp_list_element_62);
            tmp_called_value_53 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[198]);

            if (unlikely(tmp_called_value_53 == NULL)) {
                tmp_called_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
            }

            if (tmp_called_value_53 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 491;

                goto list_build_exception_44;
            }
            tmp_args_element_value_51 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[55]);

            if (unlikely(tmp_args_element_value_51 == NULL)) {
                tmp_args_element_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
            }

            if (tmp_args_element_value_51 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 491;

                goto list_build_exception_44;
            }
            frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 491;
            tmp_list_element_62 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_53, tmp_args_element_value_51);
            if (tmp_list_element_62 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 491;

                goto list_build_exception_44;
            }
            PyList_SET_ITEM(tmp_assattr_value_126, 2, tmp_list_element_62);
        }
        goto list_build_noexception_44;
        // Exception handling pass through code for list_build:
        list_build_exception_44:;
        Py_DECREF(tmp_assattr_value_126);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_44:;
        tmp_assattr_target_126 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[256]);

        if (unlikely(tmp_assattr_target_126 == NULL)) {
            tmp_assattr_target_126 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[256]);
        }

        if (tmp_assattr_target_126 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_126);

            exception_lineno = 491;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_126, mod_consts[194], tmp_assattr_value_126);
        Py_DECREF(tmp_assattr_value_126);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 491;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_166;
        PyObject *tmp_expression_value_72;
        tmp_expression_value_72 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_72 == NULL)) {
            tmp_expression_value_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_72 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 494;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_166 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_72, mod_consts[257]);
        if (tmp_assign_source_166 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 494;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[257], tmp_assign_source_166);
    }
    {
        PyObject *tmp_assattr_value_127;
        PyObject *tmp_assattr_target_127;
        tmp_assattr_value_127 = Py_None;
        tmp_assattr_target_127 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[257]);

        if (unlikely(tmp_assattr_target_127 == NULL)) {
            tmp_assattr_target_127 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[257]);
        }

        assert(!(tmp_assattr_target_127 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_127, mod_consts[193], tmp_assattr_value_127);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 495;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_128;
        PyObject *tmp_list_element_63;
        PyObject *tmp_assattr_target_128;
        tmp_list_element_63 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_list_element_63 == NULL)) {
            tmp_list_element_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
        }

        if (tmp_list_element_63 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 496;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_128 = MAKE_LIST_EMPTY(5);
        {
            PyObject *tmp_called_value_54;
            PyObject *tmp_args_element_value_52;
            PyObject *tmp_called_value_55;
            PyObject *tmp_args_element_value_53;
            PyObject *tmp_called_value_56;
            PyObject *tmp_args_element_value_54;
            PyList_SET_ITEM0(tmp_assattr_value_128, 0, tmp_list_element_63);
            tmp_list_element_63 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[59]);

            if (unlikely(tmp_list_element_63 == NULL)) {
                tmp_list_element_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
            }

            if (tmp_list_element_63 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 496;

                goto list_build_exception_45;
            }
            PyList_SET_ITEM0(tmp_assattr_value_128, 1, tmp_list_element_63);
            tmp_called_value_54 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[198]);

            if (unlikely(tmp_called_value_54 == NULL)) {
                tmp_called_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
            }

            if (tmp_called_value_54 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 496;

                goto list_build_exception_45;
            }
            tmp_args_element_value_52 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[55]);

            if (unlikely(tmp_args_element_value_52 == NULL)) {
                tmp_args_element_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
            }

            if (tmp_args_element_value_52 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 496;

                goto list_build_exception_45;
            }
            frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 496;
            tmp_list_element_63 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_54, tmp_args_element_value_52);
            if (tmp_list_element_63 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 496;

                goto list_build_exception_45;
            }
            PyList_SET_ITEM(tmp_assattr_value_128, 2, tmp_list_element_63);
            tmp_called_value_55 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[198]);

            if (unlikely(tmp_called_value_55 == NULL)) {
                tmp_called_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
            }

            if (tmp_called_value_55 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 496;

                goto list_build_exception_45;
            }
            tmp_args_element_value_53 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[55]);

            if (unlikely(tmp_args_element_value_53 == NULL)) {
                tmp_args_element_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
            }

            if (tmp_args_element_value_53 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 496;

                goto list_build_exception_45;
            }
            frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 496;
            tmp_list_element_63 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_55, tmp_args_element_value_53);
            if (tmp_list_element_63 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 496;

                goto list_build_exception_45;
            }
            PyList_SET_ITEM(tmp_assattr_value_128, 3, tmp_list_element_63);
            tmp_called_value_56 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[198]);

            if (unlikely(tmp_called_value_56 == NULL)) {
                tmp_called_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
            }

            if (tmp_called_value_56 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 496;

                goto list_build_exception_45;
            }
            tmp_args_element_value_54 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[55]);

            if (unlikely(tmp_args_element_value_54 == NULL)) {
                tmp_args_element_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
            }

            if (tmp_args_element_value_54 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 496;

                goto list_build_exception_45;
            }
            frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 496;
            tmp_list_element_63 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_56, tmp_args_element_value_54);
            if (tmp_list_element_63 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 496;

                goto list_build_exception_45;
            }
            PyList_SET_ITEM(tmp_assattr_value_128, 4, tmp_list_element_63);
        }
        goto list_build_noexception_45;
        // Exception handling pass through code for list_build:
        list_build_exception_45:;
        Py_DECREF(tmp_assattr_value_128);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_45:;
        tmp_assattr_target_128 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[257]);

        if (unlikely(tmp_assattr_target_128 == NULL)) {
            tmp_assattr_target_128 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[257]);
        }

        if (tmp_assattr_target_128 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_128);

            exception_lineno = 496;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_128, mod_consts[194], tmp_assattr_value_128);
        Py_DECREF(tmp_assattr_value_128);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 496;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_167;
        PyObject *tmp_expression_value_73;
        tmp_expression_value_73 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_73 == NULL)) {
            tmp_expression_value_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_73 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 499;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_167 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_73, mod_consts[258]);
        if (tmp_assign_source_167 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 499;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[258], tmp_assign_source_167);
    }
    {
        PyObject *tmp_assattr_value_129;
        PyObject *tmp_assattr_target_129;
        tmp_assattr_value_129 = Py_None;
        tmp_assattr_target_129 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[258]);

        if (unlikely(tmp_assattr_target_129 == NULL)) {
            tmp_assattr_target_129 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[258]);
        }

        assert(!(tmp_assattr_target_129 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_129, mod_consts[193], tmp_assattr_value_129);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 500;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_130;
        PyObject *tmp_list_element_64;
        PyObject *tmp_assattr_target_130;
        tmp_list_element_64 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_list_element_64 == NULL)) {
            tmp_list_element_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
        }

        if (tmp_list_element_64 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 501;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_130 = MAKE_LIST_EMPTY(3);
        {
            PyObject *tmp_called_value_57;
            PyObject *tmp_args_element_value_55;
            PyList_SET_ITEM0(tmp_assattr_value_130, 0, tmp_list_element_64);
            tmp_list_element_64 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[59]);

            if (unlikely(tmp_list_element_64 == NULL)) {
                tmp_list_element_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
            }

            if (tmp_list_element_64 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 501;

                goto list_build_exception_46;
            }
            PyList_SET_ITEM0(tmp_assattr_value_130, 1, tmp_list_element_64);
            tmp_called_value_57 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[198]);

            if (unlikely(tmp_called_value_57 == NULL)) {
                tmp_called_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
            }

            if (tmp_called_value_57 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 501;

                goto list_build_exception_46;
            }
            tmp_args_element_value_55 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[55]);

            if (unlikely(tmp_args_element_value_55 == NULL)) {
                tmp_args_element_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
            }

            if (tmp_args_element_value_55 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 501;

                goto list_build_exception_46;
            }
            frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 501;
            tmp_list_element_64 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_57, tmp_args_element_value_55);
            if (tmp_list_element_64 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 501;

                goto list_build_exception_46;
            }
            PyList_SET_ITEM(tmp_assattr_value_130, 2, tmp_list_element_64);
        }
        goto list_build_noexception_46;
        // Exception handling pass through code for list_build:
        list_build_exception_46:;
        Py_DECREF(tmp_assattr_value_130);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_46:;
        tmp_assattr_target_130 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[258]);

        if (unlikely(tmp_assattr_target_130 == NULL)) {
            tmp_assattr_target_130 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[258]);
        }

        if (tmp_assattr_target_130 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_130);

            exception_lineno = 501;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_130, mod_consts[194], tmp_assattr_value_130);
        Py_DECREF(tmp_assattr_value_130);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 501;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_168;
        PyObject *tmp_expression_value_74;
        tmp_expression_value_74 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_74 == NULL)) {
            tmp_expression_value_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_74 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 504;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_168 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_74, mod_consts[259]);
        if (tmp_assign_source_168 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 504;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[259], tmp_assign_source_168);
    }
    {
        PyObject *tmp_assattr_value_131;
        PyObject *tmp_assattr_target_131;
        tmp_assattr_value_131 = Py_None;
        tmp_assattr_target_131 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[259]);

        if (unlikely(tmp_assattr_target_131 == NULL)) {
            tmp_assattr_target_131 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[259]);
        }

        assert(!(tmp_assattr_target_131 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_131, mod_consts[193], tmp_assattr_value_131);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 505;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_132;
        PyObject *tmp_list_element_65;
        PyObject *tmp_assattr_target_132;
        tmp_list_element_65 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_list_element_65 == NULL)) {
            tmp_list_element_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
        }

        if (tmp_list_element_65 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 506;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_132 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_132, 0, tmp_list_element_65);
        tmp_assattr_target_132 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[259]);

        if (unlikely(tmp_assattr_target_132 == NULL)) {
            tmp_assattr_target_132 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[259]);
        }

        if (tmp_assattr_target_132 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_132);

            exception_lineno = 506;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_132, mod_consts[194], tmp_assattr_value_132);
        Py_DECREF(tmp_assattr_value_132);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 506;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_169;
        PyObject *tmp_expression_value_75;
        tmp_expression_value_75 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_75 == NULL)) {
            tmp_expression_value_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_75 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 509;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_169 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_75, mod_consts[260]);
        if (tmp_assign_source_169 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 509;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[260], tmp_assign_source_169);
    }
    {
        PyObject *tmp_assattr_value_133;
        PyObject *tmp_assattr_target_133;
        tmp_assattr_value_133 = Py_None;
        tmp_assattr_target_133 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[260]);

        if (unlikely(tmp_assattr_target_133 == NULL)) {
            tmp_assattr_target_133 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[260]);
        }

        assert(!(tmp_assattr_target_133 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_133, mod_consts[193], tmp_assattr_value_133);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 510;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_134;
        PyObject *tmp_list_element_66;
        PyObject *tmp_assattr_target_134;
        tmp_list_element_66 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_list_element_66 == NULL)) {
            tmp_list_element_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
        }

        if (tmp_list_element_66 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 511;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_134 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_134, 0, tmp_list_element_66);
        tmp_assattr_target_134 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[260]);

        if (unlikely(tmp_assattr_target_134 == NULL)) {
            tmp_assattr_target_134 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[260]);
        }

        if (tmp_assattr_target_134 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_134);

            exception_lineno = 511;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_134, mod_consts[194], tmp_assattr_value_134);
        Py_DECREF(tmp_assattr_value_134);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 511;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_170;
        PyObject *tmp_expression_value_76;
        tmp_expression_value_76 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_76 == NULL)) {
            tmp_expression_value_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_76 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 514;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_170 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_76, mod_consts[261]);
        if (tmp_assign_source_170 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 514;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[261], tmp_assign_source_170);
    }
    {
        PyObject *tmp_assattr_value_135;
        PyObject *tmp_assattr_target_135;
        tmp_assattr_value_135 = Py_None;
        tmp_assattr_target_135 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[261]);

        if (unlikely(tmp_assattr_target_135 == NULL)) {
            tmp_assattr_target_135 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[261]);
        }

        assert(!(tmp_assattr_target_135 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_135, mod_consts[193], tmp_assattr_value_135);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 515;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_136;
        PyObject *tmp_list_element_67;
        PyObject *tmp_assattr_target_136;
        tmp_list_element_67 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_list_element_67 == NULL)) {
            tmp_list_element_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
        }

        if (tmp_list_element_67 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 516;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_136 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_136, 0, tmp_list_element_67);
        tmp_assattr_target_136 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[261]);

        if (unlikely(tmp_assattr_target_136 == NULL)) {
            tmp_assattr_target_136 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[261]);
        }

        if (tmp_assattr_target_136 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_136);

            exception_lineno = 516;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_136, mod_consts[194], tmp_assattr_value_136);
        Py_DECREF(tmp_assattr_value_136);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 516;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_171;
        PyObject *tmp_expression_value_77;
        tmp_expression_value_77 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_77 == NULL)) {
            tmp_expression_value_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_expression_value_77 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 519;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_171 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_77, mod_consts[262]);
        if (tmp_assign_source_171 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 519;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[262], tmp_assign_source_171);
    }
    {
        PyObject *tmp_assattr_value_137;
        PyObject *tmp_assattr_target_137;
        tmp_assattr_value_137 = Py_None;
        tmp_assattr_target_137 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[262]);

        if (unlikely(tmp_assattr_target_137 == NULL)) {
            tmp_assattr_target_137 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[262]);
        }

        assert(!(tmp_assattr_target_137 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_137, mod_consts[193], tmp_assattr_value_137);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 520;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_138;
        PyObject *tmp_list_element_68;
        PyObject *tmp_assattr_target_138;
        tmp_list_element_68 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_list_element_68 == NULL)) {
            tmp_list_element_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
        }

        if (tmp_list_element_68 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 521;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_138 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_138, 0, tmp_list_element_68);
        tmp_assattr_target_138 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[262]);

        if (unlikely(tmp_assattr_target_138 == NULL)) {
            tmp_assattr_target_138 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[262]);
        }

        if (tmp_assattr_target_138 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_138);

            exception_lineno = 521;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_138, mod_consts[194], tmp_assattr_value_138);
        Py_DECREF(tmp_assattr_value_138);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 521;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_172;
        PyObject *tmp_called_value_58;
        PyObject *tmp_args_element_value_56;
        PyObject *tmp_args_element_value_57;
        tmp_called_value_58 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[263]);

        if (unlikely(tmp_called_value_58 == NULL)) {
            tmp_called_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[263]);
        }

        if (tmp_called_value_58 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 523;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_56 = Py_None;
        tmp_args_element_value_57 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_args_element_value_57 == NULL)) {
            tmp_args_element_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
        }

        if (tmp_args_element_value_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 523;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 523;
        {
            PyObject *call_args[] = {tmp_args_element_value_56, tmp_args_element_value_57};
            tmp_assign_source_172 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_58, call_args);
        }

        if (tmp_assign_source_172 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 523;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[264], tmp_assign_source_172);
    }
    {
        PyObject *tmp_assign_source_173;
        PyObject *tmp_called_value_59;
        PyObject *tmp_args_element_value_58;
        PyObject *tmp_args_element_value_59;
        tmp_called_value_59 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[263]);

        if (unlikely(tmp_called_value_59 == NULL)) {
            tmp_called_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[263]);
        }

        if (tmp_called_value_59 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 524;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_58 = Py_None;
        tmp_args_element_value_59 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_args_element_value_59 == NULL)) {
            tmp_args_element_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
        }

        if (tmp_args_element_value_59 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 524;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 524;
        {
            PyObject *call_args[] = {tmp_args_element_value_58, tmp_args_element_value_59};
            tmp_assign_source_173 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_59, call_args);
        }

        if (tmp_assign_source_173 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 524;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[265], tmp_assign_source_173);
    }
    {
        PyObject *tmp_assign_source_174;
        PyObject *tmp_called_value_60;
        PyObject *tmp_args_element_value_60;
        PyObject *tmp_args_element_value_61;
        tmp_called_value_60 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[263]);

        if (unlikely(tmp_called_value_60 == NULL)) {
            tmp_called_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[263]);
        }

        if (tmp_called_value_60 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 525;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_60 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_args_element_value_60 == NULL)) {
            tmp_args_element_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
        }

        if (tmp_args_element_value_60 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 525;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_61 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_args_element_value_61 == NULL)) {
            tmp_args_element_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
        }

        if (tmp_args_element_value_61 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 525;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 525;
        {
            PyObject *call_args[] = {tmp_args_element_value_60, tmp_args_element_value_61};
            tmp_assign_source_174 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_60, call_args);
        }

        if (tmp_assign_source_174 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 525;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[266], tmp_assign_source_174);
    }
    {
        PyObject *tmp_assign_source_175;
        PyObject *tmp_called_value_61;
        PyObject *tmp_args_element_value_62;
        PyObject *tmp_called_value_62;
        PyObject *tmp_args_element_value_63;
        PyObject *tmp_args_element_value_64;
        tmp_called_value_61 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[263]);

        if (unlikely(tmp_called_value_61 == NULL)) {
            tmp_called_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[263]);
        }

        if (tmp_called_value_61 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 526;

            goto frame_exception_exit_1;
        }
        tmp_called_value_62 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[198]);

        if (unlikely(tmp_called_value_62 == NULL)) {
            tmp_called_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
        }

        if (tmp_called_value_62 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 526;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_63 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_args_element_value_63 == NULL)) {
            tmp_args_element_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[47]);
        }

        if (tmp_args_element_value_63 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 526;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 526;
        tmp_args_element_value_62 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_62, tmp_args_element_value_63);
        if (tmp_args_element_value_62 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 526;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_64 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_args_element_value_64 == NULL)) {
            tmp_args_element_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
        }

        if (tmp_args_element_value_64 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_62);

            exception_lineno = 526;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 526;
        {
            PyObject *call_args[] = {tmp_args_element_value_62, tmp_args_element_value_64};
            tmp_assign_source_175 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_61, call_args);
        }

        Py_DECREF(tmp_args_element_value_62);
        if (tmp_assign_source_175 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 526;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[267], tmp_assign_source_175);
    }
    {
        PyObject *tmp_assign_source_176;
        PyObject *tmp_called_value_63;
        PyObject *tmp_args_element_value_65;
        PyObject *tmp_args_element_value_66;
        PyObject *tmp_args_element_value_67;
        PyObject *tmp_called_value_64;
        PyObject *tmp_args_element_value_68;
        tmp_called_value_63 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[263]);

        if (unlikely(tmp_called_value_63 == NULL)) {
            tmp_called_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[263]);
        }

        if (tmp_called_value_63 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 527;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_65 = Py_None;
        tmp_args_element_value_66 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_args_element_value_66 == NULL)) {
            tmp_args_element_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
        }

        if (tmp_args_element_value_66 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 527;

            goto frame_exception_exit_1;
        }
        tmp_called_value_64 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[198]);

        if (unlikely(tmp_called_value_64 == NULL)) {
            tmp_called_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
        }

        if (tmp_called_value_64 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 527;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_68 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_args_element_value_68 == NULL)) {
            tmp_args_element_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
        }

        if (tmp_args_element_value_68 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 527;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 527;
        tmp_args_element_value_67 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_64, tmp_args_element_value_68);
        if (tmp_args_element_value_67 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 527;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 527;
        {
            PyObject *call_args[] = {tmp_args_element_value_65, tmp_args_element_value_66, tmp_args_element_value_67};
            tmp_assign_source_176 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_63, call_args);
        }

        Py_DECREF(tmp_args_element_value_67);
        if (tmp_assign_source_176 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 527;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[268], tmp_assign_source_176);
    }
    {
        PyObject *tmp_assign_source_177;
        PyObject *tmp_called_value_65;
        PyObject *tmp_args_element_value_69;
        PyObject *tmp_args_element_value_70;
        PyObject *tmp_args_element_value_71;
        PyObject *tmp_called_value_66;
        PyObject *tmp_args_element_value_72;
        tmp_called_value_65 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[263]);

        if (unlikely(tmp_called_value_65 == NULL)) {
            tmp_called_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[263]);
        }

        if (tmp_called_value_65 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 528;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_69 = Py_None;
        tmp_args_element_value_70 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_args_element_value_70 == NULL)) {
            tmp_args_element_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
        }

        if (tmp_args_element_value_70 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 528;

            goto frame_exception_exit_1;
        }
        tmp_called_value_66 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[198]);

        if (unlikely(tmp_called_value_66 == NULL)) {
            tmp_called_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
        }

        if (tmp_called_value_66 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 528;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_72 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_args_element_value_72 == NULL)) {
            tmp_args_element_value_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
        }

        if (tmp_args_element_value_72 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 528;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 528;
        tmp_args_element_value_71 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_66, tmp_args_element_value_72);
        if (tmp_args_element_value_71 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 528;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 528;
        {
            PyObject *call_args[] = {tmp_args_element_value_69, tmp_args_element_value_70, tmp_args_element_value_71};
            tmp_assign_source_177 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_65, call_args);
        }

        Py_DECREF(tmp_args_element_value_71);
        if (tmp_assign_source_177 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 528;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[269], tmp_assign_source_177);
    }
    {
        PyObject *tmp_assign_source_178;
        PyObject *tmp_called_value_67;
        PyObject *tmp_args_element_value_73;
        PyObject *tmp_args_element_value_74;
        PyObject *tmp_args_element_value_75;
        PyObject *tmp_called_value_68;
        PyObject *tmp_args_element_value_76;
        tmp_called_value_67 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[263]);

        if (unlikely(tmp_called_value_67 == NULL)) {
            tmp_called_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[263]);
        }

        if (tmp_called_value_67 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 529;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_73 = Py_None;
        tmp_args_element_value_74 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_args_element_value_74 == NULL)) {
            tmp_args_element_value_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
        }

        if (tmp_args_element_value_74 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 529;

            goto frame_exception_exit_1;
        }
        tmp_called_value_68 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[198]);

        if (unlikely(tmp_called_value_68 == NULL)) {
            tmp_called_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
        }

        if (tmp_called_value_68 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 529;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_76 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_args_element_value_76 == NULL)) {
            tmp_args_element_value_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
        }

        if (tmp_args_element_value_76 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 529;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 529;
        tmp_args_element_value_75 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_68, tmp_args_element_value_76);
        if (tmp_args_element_value_75 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 529;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 529;
        {
            PyObject *call_args[] = {tmp_args_element_value_73, tmp_args_element_value_74, tmp_args_element_value_75};
            tmp_assign_source_178 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_67, call_args);
        }

        Py_DECREF(tmp_args_element_value_75);
        if (tmp_assign_source_178 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 529;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[270], tmp_assign_source_178);
    }
    {
        PyObject *tmp_assign_source_179;
        PyObject *tmp_called_value_69;
        PyObject *tmp_args_element_value_77;
        PyObject *tmp_args_element_value_78;
        PyObject *tmp_args_element_value_79;
        PyObject *tmp_called_value_70;
        PyObject *tmp_args_element_value_80;
        tmp_called_value_69 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[263]);

        if (unlikely(tmp_called_value_69 == NULL)) {
            tmp_called_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[263]);
        }

        if (tmp_called_value_69 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 530;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_77 = Py_None;
        tmp_args_element_value_78 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_args_element_value_78 == NULL)) {
            tmp_args_element_value_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
        }

        if (tmp_args_element_value_78 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 530;

            goto frame_exception_exit_1;
        }
        tmp_called_value_70 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[198]);

        if (unlikely(tmp_called_value_70 == NULL)) {
            tmp_called_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
        }

        if (tmp_called_value_70 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 530;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_80 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[63]);

        if (unlikely(tmp_args_element_value_80 == NULL)) {
            tmp_args_element_value_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
        }

        if (tmp_args_element_value_80 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 530;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 530;
        tmp_args_element_value_79 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_70, tmp_args_element_value_80);
        if (tmp_args_element_value_79 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 530;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 530;
        {
            PyObject *call_args[] = {tmp_args_element_value_77, tmp_args_element_value_78, tmp_args_element_value_79};
            tmp_assign_source_179 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_69, call_args);
        }

        Py_DECREF(tmp_args_element_value_79);
        if (tmp_assign_source_179 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 530;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[271], tmp_assign_source_179);
    }
    {
        PyObject *tmp_assign_source_180;
        PyObject *tmp_called_value_71;
        PyObject *tmp_args_element_value_81;
        PyObject *tmp_args_element_value_82;
        tmp_called_value_71 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[263]);

        if (unlikely(tmp_called_value_71 == NULL)) {
            tmp_called_value_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[263]);
        }

        if (tmp_called_value_71 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 531;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_81 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_args_element_value_81 == NULL)) {
            tmp_args_element_value_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
        }

        if (tmp_args_element_value_81 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 531;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_82 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_args_element_value_82 == NULL)) {
            tmp_args_element_value_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
        }

        if (tmp_args_element_value_82 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 531;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 531;
        {
            PyObject *call_args[] = {tmp_args_element_value_81, tmp_args_element_value_82};
            tmp_assign_source_180 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_71, call_args);
        }

        if (tmp_assign_source_180 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 531;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[272], tmp_assign_source_180);
    }
    {
        PyObject *tmp_assign_source_181;
        PyObject *tmp_called_value_72;
        PyObject *tmp_args_element_value_83;
        PyObject *tmp_args_element_value_84;
        tmp_called_value_72 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[263]);

        if (unlikely(tmp_called_value_72 == NULL)) {
            tmp_called_value_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[263]);
        }

        if (tmp_called_value_72 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 532;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_83 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_args_element_value_83 == NULL)) {
            tmp_args_element_value_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
        }

        if (tmp_args_element_value_83 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 532;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_84 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_args_element_value_84 == NULL)) {
            tmp_args_element_value_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
        }

        if (tmp_args_element_value_84 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 532;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 532;
        {
            PyObject *call_args[] = {tmp_args_element_value_83, tmp_args_element_value_84};
            tmp_assign_source_181 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_72, call_args);
        }

        if (tmp_assign_source_181 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 532;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[273], tmp_assign_source_181);
    }
    {
        PyObject *tmp_assign_source_182;
        PyObject *tmp_called_value_73;
        PyObject *tmp_args_element_value_85;
        PyObject *tmp_args_element_value_86;
        tmp_called_value_73 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[263]);

        if (unlikely(tmp_called_value_73 == NULL)) {
            tmp_called_value_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[263]);
        }

        if (tmp_called_value_73 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 533;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_85 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_args_element_value_85 == NULL)) {
            tmp_args_element_value_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
        }

        if (tmp_args_element_value_85 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 533;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_86 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_args_element_value_86 == NULL)) {
            tmp_args_element_value_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
        }

        if (tmp_args_element_value_86 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 533;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 533;
        {
            PyObject *call_args[] = {tmp_args_element_value_85, tmp_args_element_value_86};
            tmp_assign_source_182 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_73, call_args);
        }

        if (tmp_assign_source_182 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 533;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[274], tmp_assign_source_182);
    }
    {
        PyObject *tmp_assign_source_183;
        PyObject *tmp_called_value_74;
        PyObject *tmp_args_element_value_87;
        PyObject *tmp_args_element_value_88;
        tmp_called_value_74 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[263]);

        if (unlikely(tmp_called_value_74 == NULL)) {
            tmp_called_value_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[263]);
        }

        if (tmp_called_value_74 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 534;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_87 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[63]);

        if (unlikely(tmp_args_element_value_87 == NULL)) {
            tmp_args_element_value_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
        }

        if (tmp_args_element_value_87 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 534;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_88 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_args_element_value_88 == NULL)) {
            tmp_args_element_value_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
        }

        if (tmp_args_element_value_88 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 534;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 534;
        {
            PyObject *call_args[] = {tmp_args_element_value_87, tmp_args_element_value_88};
            tmp_assign_source_183 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_74, call_args);
        }

        if (tmp_assign_source_183 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 534;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[275], tmp_assign_source_183);
    }
    {
        PyObject *tmp_assign_source_184;
        PyObject *tmp_called_value_75;
        PyObject *tmp_args_element_value_89;
        tmp_called_value_75 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[263]);

        if (unlikely(tmp_called_value_75 == NULL)) {
            tmp_called_value_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[263]);
        }

        if (tmp_called_value_75 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 535;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_89 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_args_element_value_89 == NULL)) {
            tmp_args_element_value_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
        }

        if (tmp_args_element_value_89 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 535;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 535;
        tmp_assign_source_184 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_75, tmp_args_element_value_89);
        if (tmp_assign_source_184 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 535;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[276], tmp_assign_source_184);
    }
    {
        PyObject *tmp_assign_source_185;
        PyObject *tmp_called_value_76;
        PyObject *tmp_args_element_value_90;
        PyObject *tmp_args_element_value_91;
        PyObject *tmp_called_value_77;
        PyObject *tmp_args_element_value_92;
        tmp_called_value_76 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[263]);

        if (unlikely(tmp_called_value_76 == NULL)) {
            tmp_called_value_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[263]);
        }

        if (tmp_called_value_76 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 536;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_90 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_args_element_value_90 == NULL)) {
            tmp_args_element_value_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
        }

        if (tmp_args_element_value_90 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 536;

            goto frame_exception_exit_1;
        }
        tmp_called_value_77 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[198]);

        if (unlikely(tmp_called_value_77 == NULL)) {
            tmp_called_value_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
        }

        if (tmp_called_value_77 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 536;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_92 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_args_element_value_92 == NULL)) {
            tmp_args_element_value_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[47]);
        }

        if (tmp_args_element_value_92 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 536;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 536;
        tmp_args_element_value_91 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_77, tmp_args_element_value_92);
        if (tmp_args_element_value_91 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 536;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 536;
        {
            PyObject *call_args[] = {tmp_args_element_value_90, tmp_args_element_value_91};
            tmp_assign_source_185 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_76, call_args);
        }

        Py_DECREF(tmp_args_element_value_91);
        if (tmp_assign_source_185 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 536;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[277], tmp_assign_source_185);
    }
    {
        PyObject *tmp_assign_source_186;
        PyObject *tmp_called_value_78;
        PyObject *tmp_args_element_value_93;
        PyObject *tmp_called_value_79;
        PyObject *tmp_args_element_value_94;
        PyObject *tmp_args_element_value_95;
        PyObject *tmp_called_value_80;
        PyObject *tmp_args_element_value_96;
        tmp_called_value_78 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[263]);

        if (unlikely(tmp_called_value_78 == NULL)) {
            tmp_called_value_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[263]);
        }

        if (tmp_called_value_78 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 537;

            goto frame_exception_exit_1;
        }
        tmp_called_value_79 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[198]);

        if (unlikely(tmp_called_value_79 == NULL)) {
            tmp_called_value_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
        }

        if (tmp_called_value_79 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 537;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_94 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_args_element_value_94 == NULL)) {
            tmp_args_element_value_94 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[27]);
        }

        if (tmp_args_element_value_94 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 537;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 537;
        tmp_args_element_value_93 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_79, tmp_args_element_value_94);
        if (tmp_args_element_value_93 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 537;

            goto frame_exception_exit_1;
        }
        tmp_called_value_80 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[198]);

        if (unlikely(tmp_called_value_80 == NULL)) {
            tmp_called_value_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
        }

        if (tmp_called_value_80 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_93);

            exception_lineno = 537;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_96 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_args_element_value_96 == NULL)) {
            tmp_args_element_value_96 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[47]);
        }

        if (tmp_args_element_value_96 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_93);

            exception_lineno = 537;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 537;
        tmp_args_element_value_95 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_80, tmp_args_element_value_96);
        if (tmp_args_element_value_95 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_93);

            exception_lineno = 537;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 537;
        {
            PyObject *call_args[] = {tmp_args_element_value_93, tmp_args_element_value_95};
            tmp_assign_source_186 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_78, call_args);
        }

        Py_DECREF(tmp_args_element_value_93);
        Py_DECREF(tmp_args_element_value_95);
        if (tmp_assign_source_186 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 537;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[278], tmp_assign_source_186);
    }
    {
        PyObject *tmp_assign_source_187;
        PyObject *tmp_called_value_81;
        PyObject *tmp_args_element_value_97;
        PyObject *tmp_args_element_value_98;
        PyObject *tmp_called_value_82;
        PyObject *tmp_args_element_value_99;
        tmp_called_value_81 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[263]);

        if (unlikely(tmp_called_value_81 == NULL)) {
            tmp_called_value_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[263]);
        }

        if (tmp_called_value_81 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 538;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_97 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_args_element_value_97 == NULL)) {
            tmp_args_element_value_97 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
        }

        if (tmp_args_element_value_97 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 538;

            goto frame_exception_exit_1;
        }
        tmp_called_value_82 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[198]);

        if (unlikely(tmp_called_value_82 == NULL)) {
            tmp_called_value_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
        }

        if (tmp_called_value_82 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 538;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_99 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_args_element_value_99 == NULL)) {
            tmp_args_element_value_99 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[47]);
        }

        if (tmp_args_element_value_99 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 538;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 538;
        tmp_args_element_value_98 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_82, tmp_args_element_value_99);
        if (tmp_args_element_value_98 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 538;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 538;
        {
            PyObject *call_args[] = {tmp_args_element_value_97, tmp_args_element_value_98};
            tmp_assign_source_187 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_81, call_args);
        }

        Py_DECREF(tmp_args_element_value_98);
        if (tmp_assign_source_187 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 538;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[279], tmp_assign_source_187);
    }
    {
        PyObject *tmp_assign_source_188;
        PyObject *tmp_called_value_83;
        PyObject *tmp_args_element_value_100;
        PyObject *tmp_args_element_value_101;
        PyObject *tmp_args_element_value_102;
        tmp_called_value_83 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[263]);

        if (unlikely(tmp_called_value_83 == NULL)) {
            tmp_called_value_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[263]);
        }

        if (tmp_called_value_83 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 539;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_100 = Py_None;
        tmp_args_element_value_101 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_args_element_value_101 == NULL)) {
            tmp_args_element_value_101 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
        }

        if (tmp_args_element_value_101 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 539;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_102 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_args_element_value_102 == NULL)) {
            tmp_args_element_value_102 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
        }

        if (tmp_args_element_value_102 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 539;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 539;
        {
            PyObject *call_args[] = {tmp_args_element_value_100, tmp_args_element_value_101, tmp_args_element_value_102};
            tmp_assign_source_188 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_83, call_args);
        }

        if (tmp_assign_source_188 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 539;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[280], tmp_assign_source_188);
    }
    {
        PyObject *tmp_assign_source_189;
        PyObject *tmp_called_value_84;
        PyObject *tmp_args_element_value_103;
        PyObject *tmp_args_element_value_104;
        PyObject *tmp_args_element_value_105;
        PyObject *tmp_args_element_value_106;
        PyObject *tmp_args_element_value_107;
        tmp_called_value_84 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[263]);

        if (unlikely(tmp_called_value_84 == NULL)) {
            tmp_called_value_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[263]);
        }

        if (tmp_called_value_84 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 540;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_103 = Py_None;
        tmp_args_element_value_104 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_args_element_value_104 == NULL)) {
            tmp_args_element_value_104 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
        }

        if (tmp_args_element_value_104 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 540;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_105 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_args_element_value_105 == NULL)) {
            tmp_args_element_value_105 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
        }

        if (tmp_args_element_value_105 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 540;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_106 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_args_element_value_106 == NULL)) {
            tmp_args_element_value_106 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
        }

        if (tmp_args_element_value_106 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 540;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_107 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_args_element_value_107 == NULL)) {
            tmp_args_element_value_107 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
        }

        if (tmp_args_element_value_107 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 540;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 540;
        {
            PyObject *call_args[] = {tmp_args_element_value_103, tmp_args_element_value_104, tmp_args_element_value_105, tmp_args_element_value_106, tmp_args_element_value_107};
            tmp_assign_source_189 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_84, call_args);
        }

        if (tmp_assign_source_189 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 540;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[281], tmp_assign_source_189);
    }
    {
        PyObject *tmp_assign_source_190;
        PyObject *tmp_called_value_85;
        PyObject *tmp_args_element_value_108;
        PyObject *tmp_args_element_value_109;
        PyObject *tmp_args_element_value_110;
        PyObject *tmp_called_value_86;
        PyObject *tmp_args_element_value_111;
        tmp_called_value_85 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[263]);

        if (unlikely(tmp_called_value_85 == NULL)) {
            tmp_called_value_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[263]);
        }

        if (tmp_called_value_85 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 541;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_108 = Py_None;
        tmp_args_element_value_109 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_args_element_value_109 == NULL)) {
            tmp_args_element_value_109 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
        }

        if (tmp_args_element_value_109 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 541;

            goto frame_exception_exit_1;
        }
        tmp_called_value_86 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[198]);

        if (unlikely(tmp_called_value_86 == NULL)) {
            tmp_called_value_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
        }

        if (tmp_called_value_86 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 541;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_111 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_args_element_value_111 == NULL)) {
            tmp_args_element_value_111 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
        }

        if (tmp_args_element_value_111 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 541;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 541;
        tmp_args_element_value_110 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_86, tmp_args_element_value_111);
        if (tmp_args_element_value_110 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 541;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 541;
        {
            PyObject *call_args[] = {tmp_args_element_value_108, tmp_args_element_value_109, tmp_args_element_value_110};
            tmp_assign_source_190 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_85, call_args);
        }

        Py_DECREF(tmp_args_element_value_110);
        if (tmp_assign_source_190 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 541;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[282], tmp_assign_source_190);
    }
    {
        PyObject *tmp_assign_source_191;
        PyObject *tmp_called_value_87;
        PyObject *tmp_args_element_value_112;
        PyObject *tmp_args_element_value_113;
        PyObject *tmp_args_element_value_114;
        tmp_called_value_87 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[263]);

        if (unlikely(tmp_called_value_87 == NULL)) {
            tmp_called_value_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[263]);
        }

        if (tmp_called_value_87 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 542;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_112 = Py_None;
        tmp_args_element_value_113 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_args_element_value_113 == NULL)) {
            tmp_args_element_value_113 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
        }

        if (tmp_args_element_value_113 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 542;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_114 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_args_element_value_114 == NULL)) {
            tmp_args_element_value_114 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
        }

        if (tmp_args_element_value_114 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 542;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 542;
        {
            PyObject *call_args[] = {tmp_args_element_value_112, tmp_args_element_value_113, tmp_args_element_value_114};
            tmp_assign_source_191 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_87, call_args);
        }

        if (tmp_assign_source_191 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 542;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[283], tmp_assign_source_191);
    }
    {
        PyObject *tmp_assign_source_192;
        PyObject *tmp_called_value_88;
        PyObject *tmp_args_element_value_115;
        PyObject *tmp_args_element_value_116;
        PyObject *tmp_args_element_value_117;
        PyObject *tmp_args_element_value_118;
        PyObject *tmp_args_element_value_119;
        tmp_called_value_88 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[263]);

        if (unlikely(tmp_called_value_88 == NULL)) {
            tmp_called_value_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[263]);
        }

        if (tmp_called_value_88 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 543;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_115 = Py_None;
        tmp_args_element_value_116 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_args_element_value_116 == NULL)) {
            tmp_args_element_value_116 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
        }

        if (tmp_args_element_value_116 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 543;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_117 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_args_element_value_117 == NULL)) {
            tmp_args_element_value_117 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
        }

        if (tmp_args_element_value_117 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 543;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_118 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_args_element_value_118 == NULL)) {
            tmp_args_element_value_118 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
        }

        if (tmp_args_element_value_118 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 543;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_119 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_args_element_value_119 == NULL)) {
            tmp_args_element_value_119 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
        }

        if (tmp_args_element_value_119 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 543;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 543;
        {
            PyObject *call_args[] = {tmp_args_element_value_115, tmp_args_element_value_116, tmp_args_element_value_117, tmp_args_element_value_118, tmp_args_element_value_119};
            tmp_assign_source_192 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_88, call_args);
        }

        if (tmp_assign_source_192 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 543;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[284], tmp_assign_source_192);
    }
    {
        PyObject *tmp_assign_source_193;
        PyObject *tmp_called_value_89;
        PyObject *tmp_args_element_value_120;
        PyObject *tmp_args_element_value_121;
        PyObject *tmp_args_element_value_122;
        PyObject *tmp_called_value_90;
        PyObject *tmp_args_element_value_123;
        tmp_called_value_89 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[263]);

        if (unlikely(tmp_called_value_89 == NULL)) {
            tmp_called_value_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[263]);
        }

        if (tmp_called_value_89 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 544;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_120 = Py_None;
        tmp_args_element_value_121 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_args_element_value_121 == NULL)) {
            tmp_args_element_value_121 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
        }

        if (tmp_args_element_value_121 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 544;

            goto frame_exception_exit_1;
        }
        tmp_called_value_90 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[198]);

        if (unlikely(tmp_called_value_90 == NULL)) {
            tmp_called_value_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
        }

        if (tmp_called_value_90 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 544;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_123 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_args_element_value_123 == NULL)) {
            tmp_args_element_value_123 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
        }

        if (tmp_args_element_value_123 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 544;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 544;
        tmp_args_element_value_122 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_90, tmp_args_element_value_123);
        if (tmp_args_element_value_122 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 544;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 544;
        {
            PyObject *call_args[] = {tmp_args_element_value_120, tmp_args_element_value_121, tmp_args_element_value_122};
            tmp_assign_source_193 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_89, call_args);
        }

        Py_DECREF(tmp_args_element_value_122);
        if (tmp_assign_source_193 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 544;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[285], tmp_assign_source_193);
    }
    {
        PyObject *tmp_assign_source_194;
        PyObject *tmp_called_value_91;
        PyObject *tmp_args_element_value_124;
        PyObject *tmp_args_element_value_125;
        PyObject *tmp_args_element_value_126;
        PyObject *tmp_called_value_92;
        PyObject *tmp_args_element_value_127;
        tmp_called_value_91 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[263]);

        if (unlikely(tmp_called_value_91 == NULL)) {
            tmp_called_value_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[263]);
        }

        if (tmp_called_value_91 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 545;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_124 = Py_None;
        tmp_args_element_value_125 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_args_element_value_125 == NULL)) {
            tmp_args_element_value_125 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
        }

        if (tmp_args_element_value_125 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 545;

            goto frame_exception_exit_1;
        }
        tmp_called_value_92 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[198]);

        if (unlikely(tmp_called_value_92 == NULL)) {
            tmp_called_value_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
        }

        if (tmp_called_value_92 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 545;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_127 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_args_element_value_127 == NULL)) {
            tmp_args_element_value_127 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
        }

        if (tmp_args_element_value_127 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 545;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 545;
        tmp_args_element_value_126 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_92, tmp_args_element_value_127);
        if (tmp_args_element_value_126 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 545;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 545;
        {
            PyObject *call_args[] = {tmp_args_element_value_124, tmp_args_element_value_125, tmp_args_element_value_126};
            tmp_assign_source_194 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_91, call_args);
        }

        Py_DECREF(tmp_args_element_value_126);
        if (tmp_assign_source_194 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 545;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[286], tmp_assign_source_194);
    }
    {
        PyObject *tmp_assign_source_195;
        PyObject *tmp_called_value_93;
        PyObject *tmp_args_element_value_128;
        PyObject *tmp_args_element_value_129;
        PyObject *tmp_args_element_value_130;
        PyObject *tmp_called_value_94;
        PyObject *tmp_args_element_value_131;
        PyObject *tmp_args_element_value_132;
        PyObject *tmp_called_value_95;
        PyObject *tmp_args_element_value_133;
        PyObject *tmp_args_element_value_134;
        PyObject *tmp_called_value_96;
        PyObject *tmp_args_element_value_135;
        tmp_called_value_93 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[263]);

        if (unlikely(tmp_called_value_93 == NULL)) {
            tmp_called_value_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[263]);
        }

        if (tmp_called_value_93 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 546;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_128 = Py_None;
        tmp_args_element_value_129 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_args_element_value_129 == NULL)) {
            tmp_args_element_value_129 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
        }

        if (tmp_args_element_value_129 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 546;

            goto frame_exception_exit_1;
        }
        tmp_called_value_94 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[198]);

        if (unlikely(tmp_called_value_94 == NULL)) {
            tmp_called_value_94 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
        }

        if (tmp_called_value_94 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 546;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_131 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_args_element_value_131 == NULL)) {
            tmp_args_element_value_131 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
        }

        if (tmp_args_element_value_131 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 546;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 546;
        tmp_args_element_value_130 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_94, tmp_args_element_value_131);
        if (tmp_args_element_value_130 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 546;

            goto frame_exception_exit_1;
        }
        tmp_called_value_95 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[198]);

        if (unlikely(tmp_called_value_95 == NULL)) {
            tmp_called_value_95 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
        }

        if (tmp_called_value_95 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_130);

            exception_lineno = 546;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_133 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_args_element_value_133 == NULL)) {
            tmp_args_element_value_133 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
        }

        if (tmp_args_element_value_133 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_130);

            exception_lineno = 546;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 546;
        tmp_args_element_value_132 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_95, tmp_args_element_value_133);
        if (tmp_args_element_value_132 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_130);

            exception_lineno = 546;

            goto frame_exception_exit_1;
        }
        tmp_called_value_96 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[198]);

        if (unlikely(tmp_called_value_96 == NULL)) {
            tmp_called_value_96 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
        }

        if (tmp_called_value_96 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_130);
            Py_DECREF(tmp_args_element_value_132);

            exception_lineno = 546;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_135 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_args_element_value_135 == NULL)) {
            tmp_args_element_value_135 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
        }

        if (tmp_args_element_value_135 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_130);
            Py_DECREF(tmp_args_element_value_132);

            exception_lineno = 546;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 546;
        tmp_args_element_value_134 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_96, tmp_args_element_value_135);
        if (tmp_args_element_value_134 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_130);
            Py_DECREF(tmp_args_element_value_132);

            exception_lineno = 546;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 546;
        {
            PyObject *call_args[] = {tmp_args_element_value_128, tmp_args_element_value_129, tmp_args_element_value_130, tmp_args_element_value_132, tmp_args_element_value_134};
            tmp_assign_source_195 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_93, call_args);
        }

        Py_DECREF(tmp_args_element_value_130);
        Py_DECREF(tmp_args_element_value_132);
        Py_DECREF(tmp_args_element_value_134);
        if (tmp_assign_source_195 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 546;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[287], tmp_assign_source_195);
    }
    {
        PyObject *tmp_assign_source_196;
        PyObject *tmp_called_value_97;
        PyObject *tmp_args_element_value_136;
        PyObject *tmp_args_element_value_137;
        PyObject *tmp_args_element_value_138;
        PyObject *tmp_called_value_98;
        PyObject *tmp_args_element_value_139;
        tmp_called_value_97 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[263]);

        if (unlikely(tmp_called_value_97 == NULL)) {
            tmp_called_value_97 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[263]);
        }

        if (tmp_called_value_97 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 547;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_136 = Py_None;
        tmp_args_element_value_137 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_args_element_value_137 == NULL)) {
            tmp_args_element_value_137 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
        }

        if (tmp_args_element_value_137 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 547;

            goto frame_exception_exit_1;
        }
        tmp_called_value_98 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[198]);

        if (unlikely(tmp_called_value_98 == NULL)) {
            tmp_called_value_98 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
        }

        if (tmp_called_value_98 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 547;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_139 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_args_element_value_139 == NULL)) {
            tmp_args_element_value_139 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
        }

        if (tmp_args_element_value_139 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 547;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 547;
        tmp_args_element_value_138 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_98, tmp_args_element_value_139);
        if (tmp_args_element_value_138 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 547;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 547;
        {
            PyObject *call_args[] = {tmp_args_element_value_136, tmp_args_element_value_137, tmp_args_element_value_138};
            tmp_assign_source_196 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_97, call_args);
        }

        Py_DECREF(tmp_args_element_value_138);
        if (tmp_assign_source_196 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 547;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[288], tmp_assign_source_196);
    }
    {
        PyObject *tmp_assign_source_197;
        PyObject *tmp_called_value_99;
        PyObject *tmp_args_element_value_140;
        PyObject *tmp_args_element_value_141;
        PyObject *tmp_args_element_value_142;
        PyObject *tmp_called_value_100;
        PyObject *tmp_args_element_value_143;
        tmp_called_value_99 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[263]);

        if (unlikely(tmp_called_value_99 == NULL)) {
            tmp_called_value_99 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[263]);
        }

        if (tmp_called_value_99 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 548;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_140 = Py_None;
        tmp_args_element_value_141 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_args_element_value_141 == NULL)) {
            tmp_args_element_value_141 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
        }

        if (tmp_args_element_value_141 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 548;

            goto frame_exception_exit_1;
        }
        tmp_called_value_100 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[198]);

        if (unlikely(tmp_called_value_100 == NULL)) {
            tmp_called_value_100 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
        }

        if (tmp_called_value_100 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 548;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_143 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_args_element_value_143 == NULL)) {
            tmp_args_element_value_143 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
        }

        if (tmp_args_element_value_143 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 548;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 548;
        tmp_args_element_value_142 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_100, tmp_args_element_value_143);
        if (tmp_args_element_value_142 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 548;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 548;
        {
            PyObject *call_args[] = {tmp_args_element_value_140, tmp_args_element_value_141, tmp_args_element_value_142};
            tmp_assign_source_197 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_99, call_args);
        }

        Py_DECREF(tmp_args_element_value_142);
        if (tmp_assign_source_197 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 548;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[289], tmp_assign_source_197);
    }
    {
        PyObject *tmp_assign_source_198;
        PyObject *tmp_called_value_101;
        PyObject *tmp_args_element_value_144;
        PyObject *tmp_args_element_value_145;
        PyObject *tmp_args_element_value_146;
        PyObject *tmp_called_value_102;
        PyObject *tmp_args_element_value_147;
        PyObject *tmp_args_element_value_148;
        PyObject *tmp_called_value_103;
        PyObject *tmp_args_element_value_149;
        PyObject *tmp_args_element_value_150;
        PyObject *tmp_called_value_104;
        PyObject *tmp_args_element_value_151;
        tmp_called_value_101 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[263]);

        if (unlikely(tmp_called_value_101 == NULL)) {
            tmp_called_value_101 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[263]);
        }

        if (tmp_called_value_101 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 549;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_144 = Py_None;
        tmp_args_element_value_145 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_args_element_value_145 == NULL)) {
            tmp_args_element_value_145 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
        }

        if (tmp_args_element_value_145 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 549;

            goto frame_exception_exit_1;
        }
        tmp_called_value_102 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[198]);

        if (unlikely(tmp_called_value_102 == NULL)) {
            tmp_called_value_102 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
        }

        if (tmp_called_value_102 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 549;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_147 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_args_element_value_147 == NULL)) {
            tmp_args_element_value_147 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
        }

        if (tmp_args_element_value_147 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 549;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 549;
        tmp_args_element_value_146 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_102, tmp_args_element_value_147);
        if (tmp_args_element_value_146 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 549;

            goto frame_exception_exit_1;
        }
        tmp_called_value_103 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[198]);

        if (unlikely(tmp_called_value_103 == NULL)) {
            tmp_called_value_103 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
        }

        if (tmp_called_value_103 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_146);

            exception_lineno = 549;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_149 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_args_element_value_149 == NULL)) {
            tmp_args_element_value_149 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
        }

        if (tmp_args_element_value_149 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_146);

            exception_lineno = 549;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 549;
        tmp_args_element_value_148 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_103, tmp_args_element_value_149);
        if (tmp_args_element_value_148 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_146);

            exception_lineno = 549;

            goto frame_exception_exit_1;
        }
        tmp_called_value_104 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[198]);

        if (unlikely(tmp_called_value_104 == NULL)) {
            tmp_called_value_104 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
        }

        if (tmp_called_value_104 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_146);
            Py_DECREF(tmp_args_element_value_148);

            exception_lineno = 549;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_151 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_args_element_value_151 == NULL)) {
            tmp_args_element_value_151 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
        }

        if (tmp_args_element_value_151 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_146);
            Py_DECREF(tmp_args_element_value_148);

            exception_lineno = 549;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 549;
        tmp_args_element_value_150 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_104, tmp_args_element_value_151);
        if (tmp_args_element_value_150 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_146);
            Py_DECREF(tmp_args_element_value_148);

            exception_lineno = 549;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 549;
        {
            PyObject *call_args[] = {tmp_args_element_value_144, tmp_args_element_value_145, tmp_args_element_value_146, tmp_args_element_value_148, tmp_args_element_value_150};
            tmp_assign_source_198 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_101, call_args);
        }

        Py_DECREF(tmp_args_element_value_146);
        Py_DECREF(tmp_args_element_value_148);
        Py_DECREF(tmp_args_element_value_150);
        if (tmp_assign_source_198 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 549;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[290], tmp_assign_source_198);
    }
    {
        PyObject *tmp_assign_source_199;
        PyObject *tmp_called_value_105;
        PyObject *tmp_args_element_value_152;
        PyObject *tmp_args_element_value_153;
        PyObject *tmp_args_element_value_154;
        PyObject *tmp_called_value_106;
        PyObject *tmp_args_element_value_155;
        tmp_called_value_105 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[263]);

        if (unlikely(tmp_called_value_105 == NULL)) {
            tmp_called_value_105 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[263]);
        }

        if (tmp_called_value_105 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 550;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_152 = Py_None;
        tmp_args_element_value_153 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_args_element_value_153 == NULL)) {
            tmp_args_element_value_153 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
        }

        if (tmp_args_element_value_153 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 550;

            goto frame_exception_exit_1;
        }
        tmp_called_value_106 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[198]);

        if (unlikely(tmp_called_value_106 == NULL)) {
            tmp_called_value_106 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
        }

        if (tmp_called_value_106 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 550;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_155 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_args_element_value_155 == NULL)) {
            tmp_args_element_value_155 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
        }

        if (tmp_args_element_value_155 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 550;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 550;
        tmp_args_element_value_154 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_106, tmp_args_element_value_155);
        if (tmp_args_element_value_154 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 550;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 550;
        {
            PyObject *call_args[] = {tmp_args_element_value_152, tmp_args_element_value_153, tmp_args_element_value_154};
            tmp_assign_source_199 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_105, call_args);
        }

        Py_DECREF(tmp_args_element_value_154);
        if (tmp_assign_source_199 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 550;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[291], tmp_assign_source_199);
    }
    {
        PyObject *tmp_assign_source_200;
        PyObject *tmp_called_value_107;
        PyObject *tmp_args_element_value_156;
        PyObject *tmp_args_element_value_157;
        PyObject *tmp_args_element_value_158;
        PyObject *tmp_called_value_108;
        PyObject *tmp_args_element_value_159;
        tmp_called_value_107 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[263]);

        if (unlikely(tmp_called_value_107 == NULL)) {
            tmp_called_value_107 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[263]);
        }

        if (tmp_called_value_107 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 551;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_156 = Py_None;
        tmp_args_element_value_157 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_args_element_value_157 == NULL)) {
            tmp_args_element_value_157 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
        }

        if (tmp_args_element_value_157 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 551;

            goto frame_exception_exit_1;
        }
        tmp_called_value_108 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[198]);

        if (unlikely(tmp_called_value_108 == NULL)) {
            tmp_called_value_108 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
        }

        if (tmp_called_value_108 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 551;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_159 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_args_element_value_159 == NULL)) {
            tmp_args_element_value_159 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
        }

        if (tmp_args_element_value_159 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 551;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 551;
        tmp_args_element_value_158 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_108, tmp_args_element_value_159);
        if (tmp_args_element_value_158 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 551;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 551;
        {
            PyObject *call_args[] = {tmp_args_element_value_156, tmp_args_element_value_157, tmp_args_element_value_158};
            tmp_assign_source_200 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_107, call_args);
        }

        Py_DECREF(tmp_args_element_value_158);
        if (tmp_assign_source_200 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 551;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[292], tmp_assign_source_200);
    }
    {
        PyObject *tmp_assign_source_201;
        PyObject *tmp_called_value_109;
        PyObject *tmp_args_element_value_160;
        PyObject *tmp_args_element_value_161;
        PyObject *tmp_args_element_value_162;
        PyObject *tmp_called_value_110;
        PyObject *tmp_args_element_value_163;
        tmp_called_value_109 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[263]);

        if (unlikely(tmp_called_value_109 == NULL)) {
            tmp_called_value_109 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[263]);
        }

        if (tmp_called_value_109 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 552;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_160 = Py_None;
        tmp_args_element_value_161 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_args_element_value_161 == NULL)) {
            tmp_args_element_value_161 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
        }

        if (tmp_args_element_value_161 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 552;

            goto frame_exception_exit_1;
        }
        tmp_called_value_110 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[198]);

        if (unlikely(tmp_called_value_110 == NULL)) {
            tmp_called_value_110 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
        }

        if (tmp_called_value_110 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 552;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_163 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_args_element_value_163 == NULL)) {
            tmp_args_element_value_163 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
        }

        if (tmp_args_element_value_163 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 552;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 552;
        tmp_args_element_value_162 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_110, tmp_args_element_value_163);
        if (tmp_args_element_value_162 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 552;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 552;
        {
            PyObject *call_args[] = {tmp_args_element_value_160, tmp_args_element_value_161, tmp_args_element_value_162};
            tmp_assign_source_201 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_109, call_args);
        }

        Py_DECREF(tmp_args_element_value_162);
        if (tmp_assign_source_201 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 552;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[293], tmp_assign_source_201);
    }
    {
        PyObject *tmp_assign_source_202;
        PyObject *tmp_called_value_111;
        PyObject *tmp_args_element_value_164;
        PyObject *tmp_args_element_value_165;
        tmp_called_value_111 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[263]);

        if (unlikely(tmp_called_value_111 == NULL)) {
            tmp_called_value_111 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[263]);
        }

        if (tmp_called_value_111 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 553;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_164 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_args_element_value_164 == NULL)) {
            tmp_args_element_value_164 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
        }

        if (tmp_args_element_value_164 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 553;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_165 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_args_element_value_165 == NULL)) {
            tmp_args_element_value_165 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
        }

        if (tmp_args_element_value_165 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 553;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 553;
        {
            PyObject *call_args[] = {tmp_args_element_value_164, tmp_args_element_value_165};
            tmp_assign_source_202 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_111, call_args);
        }

        if (tmp_assign_source_202 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 553;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[294], tmp_assign_source_202);
    }
    {
        PyObject *tmp_assign_source_203;
        PyObject *tmp_called_value_112;
        PyObject *tmp_args_element_value_166;
        PyObject *tmp_args_element_value_167;
        PyObject *tmp_args_element_value_168;
        PyObject *tmp_args_element_value_169;
        tmp_called_value_112 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[263]);

        if (unlikely(tmp_called_value_112 == NULL)) {
            tmp_called_value_112 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[263]);
        }

        if (tmp_called_value_112 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 554;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_166 = Py_None;
        tmp_args_element_value_167 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_args_element_value_167 == NULL)) {
            tmp_args_element_value_167 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
        }

        if (tmp_args_element_value_167 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 554;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_168 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_args_element_value_168 == NULL)) {
            tmp_args_element_value_168 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
        }

        if (tmp_args_element_value_168 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 554;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_169 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_args_element_value_169 == NULL)) {
            tmp_args_element_value_169 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
        }

        if (tmp_args_element_value_169 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 554;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 554;
        {
            PyObject *call_args[] = {tmp_args_element_value_166, tmp_args_element_value_167, tmp_args_element_value_168, tmp_args_element_value_169};
            tmp_assign_source_203 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_112, call_args);
        }

        if (tmp_assign_source_203 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 554;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[295], tmp_assign_source_203);
    }
    {
        PyObject *tmp_assign_source_204;
        PyObject *tmp_called_value_113;
        PyObject *tmp_args_element_value_170;
        PyObject *tmp_args_element_value_171;
        PyObject *tmp_args_element_value_172;
        PyObject *tmp_args_element_value_173;
        PyObject *tmp_args_element_value_174;
        PyObject *tmp_args_element_value_175;
        tmp_called_value_113 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[263]);

        if (unlikely(tmp_called_value_113 == NULL)) {
            tmp_called_value_113 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[263]);
        }

        if (tmp_called_value_113 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 555;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_170 = Py_None;
        tmp_args_element_value_171 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_args_element_value_171 == NULL)) {
            tmp_args_element_value_171 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
        }

        if (tmp_args_element_value_171 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 555;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_172 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_args_element_value_172 == NULL)) {
            tmp_args_element_value_172 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
        }

        if (tmp_args_element_value_172 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 555;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_173 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_args_element_value_173 == NULL)) {
            tmp_args_element_value_173 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
        }

        if (tmp_args_element_value_173 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 555;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_174 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_args_element_value_174 == NULL)) {
            tmp_args_element_value_174 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
        }

        if (tmp_args_element_value_174 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 555;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_175 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_args_element_value_175 == NULL)) {
            tmp_args_element_value_175 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
        }

        if (tmp_args_element_value_175 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 555;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 555;
        {
            PyObject *call_args[] = {tmp_args_element_value_170, tmp_args_element_value_171, tmp_args_element_value_172, tmp_args_element_value_173, tmp_args_element_value_174, tmp_args_element_value_175};
            tmp_assign_source_204 = CALL_FUNCTION_WITH_ARGS6(tstate, tmp_called_value_113, call_args);
        }

        if (tmp_assign_source_204 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 555;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[296], tmp_assign_source_204);
    }
    {
        PyObject *tmp_assign_source_205;
        PyObject *tmp_called_value_114;
        PyObject *tmp_args_element_value_176;
        PyObject *tmp_args_element_value_177;
        PyObject *tmp_args_element_value_178;
        PyObject *tmp_args_element_value_179;
        PyObject *tmp_called_value_115;
        PyObject *tmp_args_element_value_180;
        tmp_called_value_114 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[263]);

        if (unlikely(tmp_called_value_114 == NULL)) {
            tmp_called_value_114 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[263]);
        }

        if (tmp_called_value_114 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 556;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_176 = Py_None;
        tmp_args_element_value_177 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_args_element_value_177 == NULL)) {
            tmp_args_element_value_177 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
        }

        if (tmp_args_element_value_177 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 556;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_178 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_args_element_value_178 == NULL)) {
            tmp_args_element_value_178 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
        }

        if (tmp_args_element_value_178 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 556;

            goto frame_exception_exit_1;
        }
        tmp_called_value_115 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[198]);

        if (unlikely(tmp_called_value_115 == NULL)) {
            tmp_called_value_115 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
        }

        if (tmp_called_value_115 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 556;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_180 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_args_element_value_180 == NULL)) {
            tmp_args_element_value_180 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
        }

        if (tmp_args_element_value_180 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 556;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 556;
        tmp_args_element_value_179 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_115, tmp_args_element_value_180);
        if (tmp_args_element_value_179 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 556;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 556;
        {
            PyObject *call_args[] = {tmp_args_element_value_176, tmp_args_element_value_177, tmp_args_element_value_178, tmp_args_element_value_179};
            tmp_assign_source_205 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_114, call_args);
        }

        Py_DECREF(tmp_args_element_value_179);
        if (tmp_assign_source_205 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 556;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[297], tmp_assign_source_205);
    }
    {
        PyObject *tmp_assign_source_206;
        PyObject *tmp_called_value_116;
        PyObject *tmp_args_element_value_181;
        PyObject *tmp_args_element_value_182;
        PyObject *tmp_args_element_value_183;
        PyObject *tmp_args_element_value_184;
        tmp_called_value_116 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[263]);

        if (unlikely(tmp_called_value_116 == NULL)) {
            tmp_called_value_116 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[263]);
        }

        if (tmp_called_value_116 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 557;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_181 = Py_None;
        tmp_args_element_value_182 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_args_element_value_182 == NULL)) {
            tmp_args_element_value_182 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
        }

        if (tmp_args_element_value_182 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 557;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_183 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_args_element_value_183 == NULL)) {
            tmp_args_element_value_183 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
        }

        if (tmp_args_element_value_183 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 557;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_184 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_args_element_value_184 == NULL)) {
            tmp_args_element_value_184 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
        }

        if (tmp_args_element_value_184 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 557;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 557;
        {
            PyObject *call_args[] = {tmp_args_element_value_181, tmp_args_element_value_182, tmp_args_element_value_183, tmp_args_element_value_184};
            tmp_assign_source_206 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_116, call_args);
        }

        if (tmp_assign_source_206 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 557;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[298], tmp_assign_source_206);
    }
    {
        PyObject *tmp_assign_source_207;
        PyObject *tmp_called_value_117;
        PyObject *tmp_args_element_value_185;
        PyObject *tmp_args_element_value_186;
        PyObject *tmp_args_element_value_187;
        PyObject *tmp_args_element_value_188;
        PyObject *tmp_args_element_value_189;
        PyObject *tmp_args_element_value_190;
        tmp_called_value_117 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[263]);

        if (unlikely(tmp_called_value_117 == NULL)) {
            tmp_called_value_117 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[263]);
        }

        if (tmp_called_value_117 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 558;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_185 = Py_None;
        tmp_args_element_value_186 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_args_element_value_186 == NULL)) {
            tmp_args_element_value_186 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
        }

        if (tmp_args_element_value_186 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 558;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_187 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_args_element_value_187 == NULL)) {
            tmp_args_element_value_187 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
        }

        if (tmp_args_element_value_187 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 558;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_188 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_args_element_value_188 == NULL)) {
            tmp_args_element_value_188 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
        }

        if (tmp_args_element_value_188 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 558;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_189 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_args_element_value_189 == NULL)) {
            tmp_args_element_value_189 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
        }

        if (tmp_args_element_value_189 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 558;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_190 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_args_element_value_190 == NULL)) {
            tmp_args_element_value_190 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
        }

        if (tmp_args_element_value_190 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 558;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 558;
        {
            PyObject *call_args[] = {tmp_args_element_value_185, tmp_args_element_value_186, tmp_args_element_value_187, tmp_args_element_value_188, tmp_args_element_value_189, tmp_args_element_value_190};
            tmp_assign_source_207 = CALL_FUNCTION_WITH_ARGS6(tstate, tmp_called_value_117, call_args);
        }

        if (tmp_assign_source_207 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 558;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[299], tmp_assign_source_207);
    }
    {
        PyObject *tmp_assign_source_208;
        PyObject *tmp_called_value_118;
        PyObject *tmp_args_element_value_191;
        PyObject *tmp_args_element_value_192;
        PyObject *tmp_args_element_value_193;
        PyObject *tmp_args_element_value_194;
        PyObject *tmp_called_value_119;
        PyObject *tmp_args_element_value_195;
        tmp_called_value_118 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[263]);

        if (unlikely(tmp_called_value_118 == NULL)) {
            tmp_called_value_118 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[263]);
        }

        if (tmp_called_value_118 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 559;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_191 = Py_None;
        tmp_args_element_value_192 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_args_element_value_192 == NULL)) {
            tmp_args_element_value_192 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
        }

        if (tmp_args_element_value_192 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 559;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_193 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_args_element_value_193 == NULL)) {
            tmp_args_element_value_193 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
        }

        if (tmp_args_element_value_193 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 559;

            goto frame_exception_exit_1;
        }
        tmp_called_value_119 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[198]);

        if (unlikely(tmp_called_value_119 == NULL)) {
            tmp_called_value_119 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
        }

        if (tmp_called_value_119 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 559;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_195 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_args_element_value_195 == NULL)) {
            tmp_args_element_value_195 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
        }

        if (tmp_args_element_value_195 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 559;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 559;
        tmp_args_element_value_194 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_119, tmp_args_element_value_195);
        if (tmp_args_element_value_194 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 559;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 559;
        {
            PyObject *call_args[] = {tmp_args_element_value_191, tmp_args_element_value_192, tmp_args_element_value_193, tmp_args_element_value_194};
            tmp_assign_source_208 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_118, call_args);
        }

        Py_DECREF(tmp_args_element_value_194);
        if (tmp_assign_source_208 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 559;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[300], tmp_assign_source_208);
    }
    {
        PyObject *tmp_assign_source_209;
        PyObject *tmp_called_value_120;
        PyObject *tmp_args_element_value_196;
        PyObject *tmp_args_element_value_197;
        PyObject *tmp_args_element_value_198;
        PyObject *tmp_args_element_value_199;
        PyObject *tmp_called_value_121;
        PyObject *tmp_args_element_value_200;
        tmp_called_value_120 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[263]);

        if (unlikely(tmp_called_value_120 == NULL)) {
            tmp_called_value_120 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[263]);
        }

        if (tmp_called_value_120 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 560;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_196 = Py_None;
        tmp_args_element_value_197 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_args_element_value_197 == NULL)) {
            tmp_args_element_value_197 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
        }

        if (tmp_args_element_value_197 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 560;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_198 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_args_element_value_198 == NULL)) {
            tmp_args_element_value_198 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
        }

        if (tmp_args_element_value_198 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 560;

            goto frame_exception_exit_1;
        }
        tmp_called_value_121 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[198]);

        if (unlikely(tmp_called_value_121 == NULL)) {
            tmp_called_value_121 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
        }

        if (tmp_called_value_121 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 560;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_200 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_args_element_value_200 == NULL)) {
            tmp_args_element_value_200 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
        }

        if (tmp_args_element_value_200 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 560;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 560;
        tmp_args_element_value_199 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_121, tmp_args_element_value_200);
        if (tmp_args_element_value_199 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 560;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 560;
        {
            PyObject *call_args[] = {tmp_args_element_value_196, tmp_args_element_value_197, tmp_args_element_value_198, tmp_args_element_value_199};
            tmp_assign_source_209 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_120, call_args);
        }

        Py_DECREF(tmp_args_element_value_199);
        if (tmp_assign_source_209 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 560;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[301], tmp_assign_source_209);
    }
    {
        PyObject *tmp_assign_source_210;
        PyObject *tmp_called_value_122;
        PyObject *tmp_args_element_value_201;
        PyObject *tmp_args_element_value_202;
        PyObject *tmp_args_element_value_203;
        PyObject *tmp_args_element_value_204;
        PyObject *tmp_called_value_123;
        PyObject *tmp_args_element_value_205;
        PyObject *tmp_args_element_value_206;
        PyObject *tmp_called_value_124;
        PyObject *tmp_args_element_value_207;
        PyObject *tmp_args_element_value_208;
        PyObject *tmp_called_value_125;
        PyObject *tmp_args_element_value_209;
        tmp_called_value_122 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[263]);

        if (unlikely(tmp_called_value_122 == NULL)) {
            tmp_called_value_122 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[263]);
        }

        if (tmp_called_value_122 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 561;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_201 = Py_None;
        tmp_args_element_value_202 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_args_element_value_202 == NULL)) {
            tmp_args_element_value_202 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
        }

        if (tmp_args_element_value_202 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 561;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_203 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_args_element_value_203 == NULL)) {
            tmp_args_element_value_203 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
        }

        if (tmp_args_element_value_203 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 561;

            goto frame_exception_exit_1;
        }
        tmp_called_value_123 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[198]);

        if (unlikely(tmp_called_value_123 == NULL)) {
            tmp_called_value_123 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
        }

        if (tmp_called_value_123 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 561;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_205 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_args_element_value_205 == NULL)) {
            tmp_args_element_value_205 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
        }

        if (tmp_args_element_value_205 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 561;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 561;
        tmp_args_element_value_204 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_123, tmp_args_element_value_205);
        if (tmp_args_element_value_204 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 561;

            goto frame_exception_exit_1;
        }
        tmp_called_value_124 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[198]);

        if (unlikely(tmp_called_value_124 == NULL)) {
            tmp_called_value_124 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
        }

        if (tmp_called_value_124 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_204);

            exception_lineno = 561;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_207 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_args_element_value_207 == NULL)) {
            tmp_args_element_value_207 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
        }

        if (tmp_args_element_value_207 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_204);

            exception_lineno = 561;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 561;
        tmp_args_element_value_206 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_124, tmp_args_element_value_207);
        if (tmp_args_element_value_206 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_204);

            exception_lineno = 561;

            goto frame_exception_exit_1;
        }
        tmp_called_value_125 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[198]);

        if (unlikely(tmp_called_value_125 == NULL)) {
            tmp_called_value_125 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
        }

        if (tmp_called_value_125 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_204);
            Py_DECREF(tmp_args_element_value_206);

            exception_lineno = 561;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_209 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_args_element_value_209 == NULL)) {
            tmp_args_element_value_209 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
        }

        if (tmp_args_element_value_209 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_204);
            Py_DECREF(tmp_args_element_value_206);

            exception_lineno = 561;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 561;
        tmp_args_element_value_208 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_125, tmp_args_element_value_209);
        if (tmp_args_element_value_208 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_204);
            Py_DECREF(tmp_args_element_value_206);

            exception_lineno = 561;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 561;
        {
            PyObject *call_args[] = {tmp_args_element_value_201, tmp_args_element_value_202, tmp_args_element_value_203, tmp_args_element_value_204, tmp_args_element_value_206, tmp_args_element_value_208};
            tmp_assign_source_210 = CALL_FUNCTION_WITH_ARGS6(tstate, tmp_called_value_122, call_args);
        }

        Py_DECREF(tmp_args_element_value_204);
        Py_DECREF(tmp_args_element_value_206);
        Py_DECREF(tmp_args_element_value_208);
        if (tmp_assign_source_210 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 561;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[302], tmp_assign_source_210);
    }
    {
        PyObject *tmp_assign_source_211;
        PyObject *tmp_called_value_126;
        PyObject *tmp_args_element_value_210;
        PyObject *tmp_args_element_value_211;
        PyObject *tmp_args_element_value_212;
        PyObject *tmp_args_element_value_213;
        PyObject *tmp_called_value_127;
        PyObject *tmp_args_element_value_214;
        tmp_called_value_126 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[263]);

        if (unlikely(tmp_called_value_126 == NULL)) {
            tmp_called_value_126 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[263]);
        }

        if (tmp_called_value_126 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 562;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_210 = Py_None;
        tmp_args_element_value_211 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_args_element_value_211 == NULL)) {
            tmp_args_element_value_211 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
        }

        if (tmp_args_element_value_211 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 562;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_212 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_args_element_value_212 == NULL)) {
            tmp_args_element_value_212 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
        }

        if (tmp_args_element_value_212 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 562;

            goto frame_exception_exit_1;
        }
        tmp_called_value_127 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[198]);

        if (unlikely(tmp_called_value_127 == NULL)) {
            tmp_called_value_127 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
        }

        if (tmp_called_value_127 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 562;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_214 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_args_element_value_214 == NULL)) {
            tmp_args_element_value_214 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
        }

        if (tmp_args_element_value_214 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 562;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 562;
        tmp_args_element_value_213 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_127, tmp_args_element_value_214);
        if (tmp_args_element_value_213 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 562;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 562;
        {
            PyObject *call_args[] = {tmp_args_element_value_210, tmp_args_element_value_211, tmp_args_element_value_212, tmp_args_element_value_213};
            tmp_assign_source_211 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_126, call_args);
        }

        Py_DECREF(tmp_args_element_value_213);
        if (tmp_assign_source_211 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 562;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[303], tmp_assign_source_211);
    }
    {
        PyObject *tmp_assign_source_212;
        PyObject *tmp_called_value_128;
        PyObject *tmp_args_element_value_215;
        PyObject *tmp_args_element_value_216;
        PyObject *tmp_args_element_value_217;
        PyObject *tmp_args_element_value_218;
        PyObject *tmp_called_value_129;
        PyObject *tmp_args_element_value_219;
        tmp_called_value_128 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[263]);

        if (unlikely(tmp_called_value_128 == NULL)) {
            tmp_called_value_128 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[263]);
        }

        if (tmp_called_value_128 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 563;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_215 = Py_None;
        tmp_args_element_value_216 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_args_element_value_216 == NULL)) {
            tmp_args_element_value_216 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
        }

        if (tmp_args_element_value_216 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 563;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_217 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_args_element_value_217 == NULL)) {
            tmp_args_element_value_217 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
        }

        if (tmp_args_element_value_217 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 563;

            goto frame_exception_exit_1;
        }
        tmp_called_value_129 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[198]);

        if (unlikely(tmp_called_value_129 == NULL)) {
            tmp_called_value_129 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
        }

        if (tmp_called_value_129 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 563;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_219 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_args_element_value_219 == NULL)) {
            tmp_args_element_value_219 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
        }

        if (tmp_args_element_value_219 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 563;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 563;
        tmp_args_element_value_218 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_129, tmp_args_element_value_219);
        if (tmp_args_element_value_218 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 563;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 563;
        {
            PyObject *call_args[] = {tmp_args_element_value_215, tmp_args_element_value_216, tmp_args_element_value_217, tmp_args_element_value_218};
            tmp_assign_source_212 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_128, call_args);
        }

        Py_DECREF(tmp_args_element_value_218);
        if (tmp_assign_source_212 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 563;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[304], tmp_assign_source_212);
    }
    {
        PyObject *tmp_assign_source_213;
        PyObject *tmp_called_value_130;
        PyObject *tmp_args_element_value_220;
        PyObject *tmp_args_element_value_221;
        PyObject *tmp_args_element_value_222;
        PyObject *tmp_args_element_value_223;
        PyObject *tmp_called_value_131;
        PyObject *tmp_args_element_value_224;
        PyObject *tmp_args_element_value_225;
        PyObject *tmp_called_value_132;
        PyObject *tmp_args_element_value_226;
        PyObject *tmp_args_element_value_227;
        PyObject *tmp_called_value_133;
        PyObject *tmp_args_element_value_228;
        tmp_called_value_130 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[263]);

        if (unlikely(tmp_called_value_130 == NULL)) {
            tmp_called_value_130 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[263]);
        }

        if (tmp_called_value_130 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 564;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_220 = Py_None;
        tmp_args_element_value_221 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_args_element_value_221 == NULL)) {
            tmp_args_element_value_221 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
        }

        if (tmp_args_element_value_221 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 564;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_222 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_args_element_value_222 == NULL)) {
            tmp_args_element_value_222 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
        }

        if (tmp_args_element_value_222 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 564;

            goto frame_exception_exit_1;
        }
        tmp_called_value_131 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[198]);

        if (unlikely(tmp_called_value_131 == NULL)) {
            tmp_called_value_131 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
        }

        if (tmp_called_value_131 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 564;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_224 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_args_element_value_224 == NULL)) {
            tmp_args_element_value_224 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
        }

        if (tmp_args_element_value_224 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 564;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 564;
        tmp_args_element_value_223 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_131, tmp_args_element_value_224);
        if (tmp_args_element_value_223 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 564;

            goto frame_exception_exit_1;
        }
        tmp_called_value_132 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[198]);

        if (unlikely(tmp_called_value_132 == NULL)) {
            tmp_called_value_132 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
        }

        if (tmp_called_value_132 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_223);

            exception_lineno = 564;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_226 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_args_element_value_226 == NULL)) {
            tmp_args_element_value_226 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
        }

        if (tmp_args_element_value_226 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_223);

            exception_lineno = 564;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 564;
        tmp_args_element_value_225 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_132, tmp_args_element_value_226);
        if (tmp_args_element_value_225 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_223);

            exception_lineno = 564;

            goto frame_exception_exit_1;
        }
        tmp_called_value_133 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[198]);

        if (unlikely(tmp_called_value_133 == NULL)) {
            tmp_called_value_133 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
        }

        if (tmp_called_value_133 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_223);
            Py_DECREF(tmp_args_element_value_225);

            exception_lineno = 564;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_228 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_args_element_value_228 == NULL)) {
            tmp_args_element_value_228 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
        }

        if (tmp_args_element_value_228 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_223);
            Py_DECREF(tmp_args_element_value_225);

            exception_lineno = 564;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 564;
        tmp_args_element_value_227 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_133, tmp_args_element_value_228);
        if (tmp_args_element_value_227 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_223);
            Py_DECREF(tmp_args_element_value_225);

            exception_lineno = 564;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 564;
        {
            PyObject *call_args[] = {tmp_args_element_value_220, tmp_args_element_value_221, tmp_args_element_value_222, tmp_args_element_value_223, tmp_args_element_value_225, tmp_args_element_value_227};
            tmp_assign_source_213 = CALL_FUNCTION_WITH_ARGS6(tstate, tmp_called_value_130, call_args);
        }

        Py_DECREF(tmp_args_element_value_223);
        Py_DECREF(tmp_args_element_value_225);
        Py_DECREF(tmp_args_element_value_227);
        if (tmp_assign_source_213 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 564;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[305], tmp_assign_source_213);
    }
    {
        PyObject *tmp_assign_source_214;
        PyObject *tmp_called_value_134;
        PyObject *tmp_args_element_value_229;
        PyObject *tmp_args_element_value_230;
        PyObject *tmp_args_element_value_231;
        PyObject *tmp_args_element_value_232;
        PyObject *tmp_called_value_135;
        PyObject *tmp_args_element_value_233;
        tmp_called_value_134 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[263]);

        if (unlikely(tmp_called_value_134 == NULL)) {
            tmp_called_value_134 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[263]);
        }

        if (tmp_called_value_134 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 565;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_229 = Py_None;
        tmp_args_element_value_230 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_args_element_value_230 == NULL)) {
            tmp_args_element_value_230 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
        }

        if (tmp_args_element_value_230 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 565;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_231 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_args_element_value_231 == NULL)) {
            tmp_args_element_value_231 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
        }

        if (tmp_args_element_value_231 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 565;

            goto frame_exception_exit_1;
        }
        tmp_called_value_135 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[198]);

        if (unlikely(tmp_called_value_135 == NULL)) {
            tmp_called_value_135 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
        }

        if (tmp_called_value_135 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 565;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_233 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_args_element_value_233 == NULL)) {
            tmp_args_element_value_233 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
        }

        if (tmp_args_element_value_233 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 565;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 565;
        tmp_args_element_value_232 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_135, tmp_args_element_value_233);
        if (tmp_args_element_value_232 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 565;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 565;
        {
            PyObject *call_args[] = {tmp_args_element_value_229, tmp_args_element_value_230, tmp_args_element_value_231, tmp_args_element_value_232};
            tmp_assign_source_214 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_134, call_args);
        }

        Py_DECREF(tmp_args_element_value_232);
        if (tmp_assign_source_214 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 565;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[306], tmp_assign_source_214);
    }
    {
        PyObject *tmp_assign_source_215;
        PyObject *tmp_called_value_136;
        PyObject *tmp_args_element_value_234;
        PyObject *tmp_args_element_value_235;
        PyObject *tmp_args_element_value_236;
        PyObject *tmp_called_value_137;
        PyObject *tmp_args_element_value_237;
        tmp_called_value_136 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[263]);

        if (unlikely(tmp_called_value_136 == NULL)) {
            tmp_called_value_136 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[263]);
        }

        if (tmp_called_value_136 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 566;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_234 = Py_None;
        tmp_args_element_value_235 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_args_element_value_235 == NULL)) {
            tmp_args_element_value_235 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
        }

        if (tmp_args_element_value_235 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 566;

            goto frame_exception_exit_1;
        }
        tmp_called_value_137 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[198]);

        if (unlikely(tmp_called_value_137 == NULL)) {
            tmp_called_value_137 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
        }

        if (tmp_called_value_137 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 566;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_237 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_args_element_value_237 == NULL)) {
            tmp_args_element_value_237 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
        }

        if (tmp_args_element_value_237 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 566;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 566;
        tmp_args_element_value_236 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_137, tmp_args_element_value_237);
        if (tmp_args_element_value_236 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 566;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 566;
        {
            PyObject *call_args[] = {tmp_args_element_value_234, tmp_args_element_value_235, tmp_args_element_value_236};
            tmp_assign_source_215 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_136, call_args);
        }

        Py_DECREF(tmp_args_element_value_236);
        if (tmp_assign_source_215 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 566;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[307], tmp_assign_source_215);
    }
    {
        PyObject *tmp_assign_source_216;
        PyObject *tmp_called_value_138;
        PyObject *tmp_args_element_value_238;
        PyObject *tmp_args_element_value_239;
        PyObject *tmp_args_element_value_240;
        PyObject *tmp_called_value_139;
        PyObject *tmp_args_element_value_241;
        tmp_called_value_138 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[263]);

        if (unlikely(tmp_called_value_138 == NULL)) {
            tmp_called_value_138 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[263]);
        }

        if (tmp_called_value_138 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 567;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_238 = Py_None;
        tmp_args_element_value_239 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_args_element_value_239 == NULL)) {
            tmp_args_element_value_239 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
        }

        if (tmp_args_element_value_239 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 567;

            goto frame_exception_exit_1;
        }
        tmp_called_value_139 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[198]);

        if (unlikely(tmp_called_value_139 == NULL)) {
            tmp_called_value_139 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
        }

        if (tmp_called_value_139 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 567;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_241 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_args_element_value_241 == NULL)) {
            tmp_args_element_value_241 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
        }

        if (tmp_args_element_value_241 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 567;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 567;
        tmp_args_element_value_240 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_139, tmp_args_element_value_241);
        if (tmp_args_element_value_240 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 567;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 567;
        {
            PyObject *call_args[] = {tmp_args_element_value_238, tmp_args_element_value_239, tmp_args_element_value_240};
            tmp_assign_source_216 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_138, call_args);
        }

        Py_DECREF(tmp_args_element_value_240);
        if (tmp_assign_source_216 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 567;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[308], tmp_assign_source_216);
    }
    {
        PyObject *tmp_assign_source_217;
        PyObject *tmp_called_value_140;
        PyObject *tmp_args_element_value_242;
        PyObject *tmp_args_element_value_243;
        PyObject *tmp_args_element_value_244;
        PyObject *tmp_called_value_141;
        PyObject *tmp_args_element_value_245;
        tmp_called_value_140 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[263]);

        if (unlikely(tmp_called_value_140 == NULL)) {
            tmp_called_value_140 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[263]);
        }

        if (tmp_called_value_140 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 568;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_242 = Py_None;
        tmp_args_element_value_243 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_args_element_value_243 == NULL)) {
            tmp_args_element_value_243 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
        }

        if (tmp_args_element_value_243 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 568;

            goto frame_exception_exit_1;
        }
        tmp_called_value_141 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[198]);

        if (unlikely(tmp_called_value_141 == NULL)) {
            tmp_called_value_141 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
        }

        if (tmp_called_value_141 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 568;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_245 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_args_element_value_245 == NULL)) {
            tmp_args_element_value_245 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
        }

        if (tmp_args_element_value_245 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 568;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 568;
        tmp_args_element_value_244 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_141, tmp_args_element_value_245);
        if (tmp_args_element_value_244 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 568;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 568;
        {
            PyObject *call_args[] = {tmp_args_element_value_242, tmp_args_element_value_243, tmp_args_element_value_244};
            tmp_assign_source_217 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_140, call_args);
        }

        Py_DECREF(tmp_args_element_value_244);
        if (tmp_assign_source_217 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 568;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[309], tmp_assign_source_217);
    }
    {
        PyObject *tmp_assign_source_218;
        PyObject *tmp_called_value_142;
        PyObject *tmp_args_element_value_246;
        PyObject *tmp_args_element_value_247;
        PyObject *tmp_args_element_value_248;
        PyObject *tmp_called_value_143;
        PyObject *tmp_args_element_value_249;
        tmp_called_value_142 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[263]);

        if (unlikely(tmp_called_value_142 == NULL)) {
            tmp_called_value_142 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[263]);
        }

        if (tmp_called_value_142 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 569;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_246 = Py_None;
        tmp_args_element_value_247 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_args_element_value_247 == NULL)) {
            tmp_args_element_value_247 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
        }

        if (tmp_args_element_value_247 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 569;

            goto frame_exception_exit_1;
        }
        tmp_called_value_143 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[198]);

        if (unlikely(tmp_called_value_143 == NULL)) {
            tmp_called_value_143 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
        }

        if (tmp_called_value_143 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 569;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_249 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_args_element_value_249 == NULL)) {
            tmp_args_element_value_249 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
        }

        if (tmp_args_element_value_249 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 569;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 569;
        tmp_args_element_value_248 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_143, tmp_args_element_value_249);
        if (tmp_args_element_value_248 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 569;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 569;
        {
            PyObject *call_args[] = {tmp_args_element_value_246, tmp_args_element_value_247, tmp_args_element_value_248};
            tmp_assign_source_218 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_142, call_args);
        }

        Py_DECREF(tmp_args_element_value_248);
        if (tmp_assign_source_218 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 569;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[310], tmp_assign_source_218);
    }
    {
        PyObject *tmp_assign_source_219;
        PyObject *tmp_called_value_144;
        PyObject *tmp_args_element_value_250;
        PyObject *tmp_args_element_value_251;
        tmp_called_value_144 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[263]);

        if (unlikely(tmp_called_value_144 == NULL)) {
            tmp_called_value_144 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[263]);
        }

        if (tmp_called_value_144 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 570;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_250 = Py_None;
        tmp_args_element_value_251 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_args_element_value_251 == NULL)) {
            tmp_args_element_value_251 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
        }

        if (tmp_args_element_value_251 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 570;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 570;
        {
            PyObject *call_args[] = {tmp_args_element_value_250, tmp_args_element_value_251};
            tmp_assign_source_219 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_144, call_args);
        }

        if (tmp_assign_source_219 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 570;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[311], tmp_assign_source_219);
    }
    {
        PyObject *tmp_assign_source_220;
        PyObject *tmp_called_value_145;
        PyObject *tmp_args_element_value_252;
        PyObject *tmp_args_element_value_253;
        tmp_called_value_145 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[263]);

        if (unlikely(tmp_called_value_145 == NULL)) {
            tmp_called_value_145 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[263]);
        }

        if (tmp_called_value_145 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 571;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_252 = Py_None;
        tmp_args_element_value_253 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_args_element_value_253 == NULL)) {
            tmp_args_element_value_253 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
        }

        if (tmp_args_element_value_253 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 571;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 571;
        {
            PyObject *call_args[] = {tmp_args_element_value_252, tmp_args_element_value_253};
            tmp_assign_source_220 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_145, call_args);
        }

        if (tmp_assign_source_220 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 571;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[312], tmp_assign_source_220);
    }
    {
        PyObject *tmp_assign_source_221;
        PyObject *tmp_called_value_146;
        PyObject *tmp_args_element_value_254;
        PyObject *tmp_args_element_value_255;
        tmp_called_value_146 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[263]);

        if (unlikely(tmp_called_value_146 == NULL)) {
            tmp_called_value_146 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[263]);
        }

        if (tmp_called_value_146 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 572;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_254 = Py_None;
        tmp_args_element_value_255 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_args_element_value_255 == NULL)) {
            tmp_args_element_value_255 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
        }

        if (tmp_args_element_value_255 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 572;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 572;
        {
            PyObject *call_args[] = {tmp_args_element_value_254, tmp_args_element_value_255};
            tmp_assign_source_221 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_146, call_args);
        }

        if (tmp_assign_source_221 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 572;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[313], tmp_assign_source_221);
    }
    {
        PyObject *tmp_assign_source_222;
        PyObject *tmp_called_value_147;
        PyObject *tmp_args_element_value_256;
        PyObject *tmp_args_element_value_257;
        tmp_called_value_147 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[263]);

        if (unlikely(tmp_called_value_147 == NULL)) {
            tmp_called_value_147 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[263]);
        }

        if (tmp_called_value_147 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 573;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_256 = Py_None;
        tmp_args_element_value_257 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_args_element_value_257 == NULL)) {
            tmp_args_element_value_257 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
        }

        if (tmp_args_element_value_257 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 573;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 573;
        {
            PyObject *call_args[] = {tmp_args_element_value_256, tmp_args_element_value_257};
            tmp_assign_source_222 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_147, call_args);
        }

        if (tmp_assign_source_222 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 573;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[314], tmp_assign_source_222);
    }
    {
        PyObject *tmp_assign_source_223;
        PyObject *tmp_called_value_148;
        PyObject *tmp_args_element_value_258;
        PyObject *tmp_args_element_value_259;
        PyObject *tmp_args_element_value_260;
        PyObject *tmp_args_element_value_261;
        PyObject *tmp_called_value_149;
        PyObject *tmp_args_element_value_262;
        tmp_called_value_148 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[263]);

        if (unlikely(tmp_called_value_148 == NULL)) {
            tmp_called_value_148 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[263]);
        }

        if (tmp_called_value_148 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 574;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_258 = Py_None;
        tmp_args_element_value_259 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_args_element_value_259 == NULL)) {
            tmp_args_element_value_259 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
        }

        if (tmp_args_element_value_259 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 574;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_260 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_args_element_value_260 == NULL)) {
            tmp_args_element_value_260 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
        }

        if (tmp_args_element_value_260 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 574;

            goto frame_exception_exit_1;
        }
        tmp_called_value_149 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[198]);

        if (unlikely(tmp_called_value_149 == NULL)) {
            tmp_called_value_149 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
        }

        if (tmp_called_value_149 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 574;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_262 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_args_element_value_262 == NULL)) {
            tmp_args_element_value_262 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
        }

        if (tmp_args_element_value_262 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 574;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 574;
        tmp_args_element_value_261 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_149, tmp_args_element_value_262);
        if (tmp_args_element_value_261 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 574;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 574;
        {
            PyObject *call_args[] = {tmp_args_element_value_258, tmp_args_element_value_259, tmp_args_element_value_260, tmp_args_element_value_261};
            tmp_assign_source_223 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_148, call_args);
        }

        Py_DECREF(tmp_args_element_value_261);
        if (tmp_assign_source_223 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 574;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[315], tmp_assign_source_223);
    }
    {
        PyObject *tmp_assign_source_224;
        PyObject *tmp_called_value_150;
        PyObject *tmp_args_element_value_263;
        PyObject *tmp_args_element_value_264;
        PyObject *tmp_args_element_value_265;
        PyObject *tmp_args_element_value_266;
        PyObject *tmp_called_value_151;
        PyObject *tmp_args_element_value_267;
        tmp_called_value_150 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[263]);

        if (unlikely(tmp_called_value_150 == NULL)) {
            tmp_called_value_150 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[263]);
        }

        if (tmp_called_value_150 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 575;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_263 = Py_None;
        tmp_args_element_value_264 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_args_element_value_264 == NULL)) {
            tmp_args_element_value_264 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
        }

        if (tmp_args_element_value_264 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 575;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_265 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_args_element_value_265 == NULL)) {
            tmp_args_element_value_265 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
        }

        if (tmp_args_element_value_265 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 575;

            goto frame_exception_exit_1;
        }
        tmp_called_value_151 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[198]);

        if (unlikely(tmp_called_value_151 == NULL)) {
            tmp_called_value_151 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
        }

        if (tmp_called_value_151 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 575;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_267 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_args_element_value_267 == NULL)) {
            tmp_args_element_value_267 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
        }

        if (tmp_args_element_value_267 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 575;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 575;
        tmp_args_element_value_266 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_151, tmp_args_element_value_267);
        if (tmp_args_element_value_266 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 575;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 575;
        {
            PyObject *call_args[] = {tmp_args_element_value_263, tmp_args_element_value_264, tmp_args_element_value_265, tmp_args_element_value_266};
            tmp_assign_source_224 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_150, call_args);
        }

        Py_DECREF(tmp_args_element_value_266);
        if (tmp_assign_source_224 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 575;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[316], tmp_assign_source_224);
    }
    {
        PyObject *tmp_assign_source_225;
        PyObject *tmp_called_value_152;
        PyObject *tmp_args_element_value_268;
        PyObject *tmp_args_element_value_269;
        PyObject *tmp_args_element_value_270;
        PyObject *tmp_called_value_153;
        PyObject *tmp_args_element_value_271;
        tmp_called_value_152 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[263]);

        if (unlikely(tmp_called_value_152 == NULL)) {
            tmp_called_value_152 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[263]);
        }

        if (tmp_called_value_152 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 576;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_268 = Py_None;
        tmp_args_element_value_269 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_args_element_value_269 == NULL)) {
            tmp_args_element_value_269 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
        }

        if (tmp_args_element_value_269 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 576;

            goto frame_exception_exit_1;
        }
        tmp_called_value_153 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[198]);

        if (unlikely(tmp_called_value_153 == NULL)) {
            tmp_called_value_153 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
        }

        if (tmp_called_value_153 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 576;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_271 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_args_element_value_271 == NULL)) {
            tmp_args_element_value_271 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
        }

        if (tmp_args_element_value_271 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 576;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 576;
        tmp_args_element_value_270 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_153, tmp_args_element_value_271);
        if (tmp_args_element_value_270 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 576;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 576;
        {
            PyObject *call_args[] = {tmp_args_element_value_268, tmp_args_element_value_269, tmp_args_element_value_270};
            tmp_assign_source_225 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_152, call_args);
        }

        Py_DECREF(tmp_args_element_value_270);
        if (tmp_assign_source_225 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 576;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[317], tmp_assign_source_225);
    }
    {
        PyObject *tmp_assign_source_226;
        PyObject *tmp_called_value_154;
        PyObject *tmp_args_element_value_272;
        PyObject *tmp_args_element_value_273;
        PyObject *tmp_args_element_value_274;
        PyObject *tmp_called_value_155;
        PyObject *tmp_args_element_value_275;
        tmp_called_value_154 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[263]);

        if (unlikely(tmp_called_value_154 == NULL)) {
            tmp_called_value_154 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[263]);
        }

        if (tmp_called_value_154 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 577;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_272 = Py_None;
        tmp_args_element_value_273 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_args_element_value_273 == NULL)) {
            tmp_args_element_value_273 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
        }

        if (tmp_args_element_value_273 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 577;

            goto frame_exception_exit_1;
        }
        tmp_called_value_155 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[198]);

        if (unlikely(tmp_called_value_155 == NULL)) {
            tmp_called_value_155 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
        }

        if (tmp_called_value_155 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 577;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_275 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_args_element_value_275 == NULL)) {
            tmp_args_element_value_275 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
        }

        if (tmp_args_element_value_275 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 577;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 577;
        tmp_args_element_value_274 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_155, tmp_args_element_value_275);
        if (tmp_args_element_value_274 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 577;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 577;
        {
            PyObject *call_args[] = {tmp_args_element_value_272, tmp_args_element_value_273, tmp_args_element_value_274};
            tmp_assign_source_226 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_154, call_args);
        }

        Py_DECREF(tmp_args_element_value_274);
        if (tmp_assign_source_226 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 577;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[318], tmp_assign_source_226);
    }
    {
        PyObject *tmp_assign_source_227;
        PyObject *tmp_called_value_156;
        PyObject *tmp_args_element_value_276;
        PyObject *tmp_args_element_value_277;
        tmp_called_value_156 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[263]);

        if (unlikely(tmp_called_value_156 == NULL)) {
            tmp_called_value_156 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[263]);
        }

        if (tmp_called_value_156 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 578;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_276 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_args_element_value_276 == NULL)) {
            tmp_args_element_value_276 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
        }

        if (tmp_args_element_value_276 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 578;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_277 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_args_element_value_277 == NULL)) {
            tmp_args_element_value_277 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
        }

        if (tmp_args_element_value_277 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 578;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 578;
        {
            PyObject *call_args[] = {tmp_args_element_value_276, tmp_args_element_value_277};
            tmp_assign_source_227 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_156, call_args);
        }

        if (tmp_assign_source_227 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 578;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[319], tmp_assign_source_227);
    }
    {
        PyObject *tmp_assign_source_228;
        PyObject *tmp_called_value_157;
        PyObject *tmp_args_element_value_278;
        PyObject *tmp_args_element_value_279;
        PyObject *tmp_args_element_value_280;
        PyObject *tmp_args_element_value_281;
        PyObject *tmp_called_value_158;
        PyObject *tmp_args_element_value_282;
        PyObject *tmp_args_element_value_283;
        PyObject *tmp_args_element_value_284;
        tmp_called_value_157 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[263]);

        if (unlikely(tmp_called_value_157 == NULL)) {
            tmp_called_value_157 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[263]);
        }

        if (tmp_called_value_157 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 579;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_278 = Py_None;
        tmp_args_element_value_279 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_args_element_value_279 == NULL)) {
            tmp_args_element_value_279 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
        }

        if (tmp_args_element_value_279 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 579;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_280 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_args_element_value_280 == NULL)) {
            tmp_args_element_value_280 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
        }

        if (tmp_args_element_value_280 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 579;

            goto frame_exception_exit_1;
        }
        tmp_called_value_158 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[198]);

        if (unlikely(tmp_called_value_158 == NULL)) {
            tmp_called_value_158 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
        }

        if (tmp_called_value_158 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 579;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_282 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_args_element_value_282 == NULL)) {
            tmp_args_element_value_282 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[64]);
        }

        if (tmp_args_element_value_282 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 579;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 579;
        tmp_args_element_value_281 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_158, tmp_args_element_value_282);
        if (tmp_args_element_value_281 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 579;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_283 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_args_element_value_283 == NULL)) {
            tmp_args_element_value_283 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
        }

        if (tmp_args_element_value_283 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_281);

            exception_lineno = 579;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_284 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_args_element_value_284 == NULL)) {
            tmp_args_element_value_284 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
        }

        if (tmp_args_element_value_284 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_281);

            exception_lineno = 579;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 579;
        {
            PyObject *call_args[] = {tmp_args_element_value_278, tmp_args_element_value_279, tmp_args_element_value_280, tmp_args_element_value_281, tmp_args_element_value_283, tmp_args_element_value_284};
            tmp_assign_source_228 = CALL_FUNCTION_WITH_ARGS6(tstate, tmp_called_value_157, call_args);
        }

        Py_DECREF(tmp_args_element_value_281);
        if (tmp_assign_source_228 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 579;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[320], tmp_assign_source_228);
    }
    {
        PyObject *tmp_assign_source_229;
        PyObject *tmp_called_value_159;
        PyObject *tmp_args_element_value_285;
        PyObject *tmp_args_element_value_286;
        PyObject *tmp_args_element_value_287;
        PyObject *tmp_args_element_value_288;
        tmp_called_value_159 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[263]);

        if (unlikely(tmp_called_value_159 == NULL)) {
            tmp_called_value_159 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[263]);
        }

        if (tmp_called_value_159 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 580;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_285 = Py_None;
        tmp_args_element_value_286 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_args_element_value_286 == NULL)) {
            tmp_args_element_value_286 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
        }

        if (tmp_args_element_value_286 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 580;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_287 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_args_element_value_287 == NULL)) {
            tmp_args_element_value_287 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
        }

        if (tmp_args_element_value_287 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 580;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_288 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_args_element_value_288 == NULL)) {
            tmp_args_element_value_288 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
        }

        if (tmp_args_element_value_288 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 580;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 580;
        {
            PyObject *call_args[] = {tmp_args_element_value_285, tmp_args_element_value_286, tmp_args_element_value_287, tmp_args_element_value_288};
            tmp_assign_source_229 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_159, call_args);
        }

        if (tmp_assign_source_229 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 580;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[321], tmp_assign_source_229);
    }
    {
        PyObject *tmp_assign_source_230;
        PyObject *tmp_called_value_160;
        PyObject *tmp_args_element_value_289;
        PyObject *tmp_args_element_value_290;
        PyObject *tmp_args_element_value_291;
        PyObject *tmp_args_element_value_292;
        PyObject *tmp_args_element_value_293;
        PyObject *tmp_args_element_value_294;
        tmp_called_value_160 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[263]);

        if (unlikely(tmp_called_value_160 == NULL)) {
            tmp_called_value_160 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[263]);
        }

        if (tmp_called_value_160 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 581;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_289 = Py_None;
        tmp_args_element_value_290 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_args_element_value_290 == NULL)) {
            tmp_args_element_value_290 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
        }

        if (tmp_args_element_value_290 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 581;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_291 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_args_element_value_291 == NULL)) {
            tmp_args_element_value_291 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
        }

        if (tmp_args_element_value_291 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 581;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_292 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_args_element_value_292 == NULL)) {
            tmp_args_element_value_292 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
        }

        if (tmp_args_element_value_292 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 581;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_293 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_args_element_value_293 == NULL)) {
            tmp_args_element_value_293 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
        }

        if (tmp_args_element_value_293 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 581;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_294 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_args_element_value_294 == NULL)) {
            tmp_args_element_value_294 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
        }

        if (tmp_args_element_value_294 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 581;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 581;
        {
            PyObject *call_args[] = {tmp_args_element_value_289, tmp_args_element_value_290, tmp_args_element_value_291, tmp_args_element_value_292, tmp_args_element_value_293, tmp_args_element_value_294};
            tmp_assign_source_230 = CALL_FUNCTION_WITH_ARGS6(tstate, tmp_called_value_160, call_args);
        }

        if (tmp_assign_source_230 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 581;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[322], tmp_assign_source_230);
    }
    {
        PyObject *tmp_assign_source_231;
        PyObject *tmp_called_value_161;
        PyObject *tmp_args_element_value_295;
        PyObject *tmp_args_element_value_296;
        PyObject *tmp_args_element_value_297;
        PyObject *tmp_args_element_value_298;
        PyObject *tmp_called_value_162;
        PyObject *tmp_args_element_value_299;
        tmp_called_value_161 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[263]);

        if (unlikely(tmp_called_value_161 == NULL)) {
            tmp_called_value_161 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[263]);
        }

        if (tmp_called_value_161 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 582;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_295 = Py_None;
        tmp_args_element_value_296 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_args_element_value_296 == NULL)) {
            tmp_args_element_value_296 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
        }

        if (tmp_args_element_value_296 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 582;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_297 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_args_element_value_297 == NULL)) {
            tmp_args_element_value_297 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
        }

        if (tmp_args_element_value_297 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 582;

            goto frame_exception_exit_1;
        }
        tmp_called_value_162 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[198]);

        if (unlikely(tmp_called_value_162 == NULL)) {
            tmp_called_value_162 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
        }

        if (tmp_called_value_162 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 582;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_299 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_args_element_value_299 == NULL)) {
            tmp_args_element_value_299 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
        }

        if (tmp_args_element_value_299 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 582;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 582;
        tmp_args_element_value_298 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_162, tmp_args_element_value_299);
        if (tmp_args_element_value_298 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 582;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 582;
        {
            PyObject *call_args[] = {tmp_args_element_value_295, tmp_args_element_value_296, tmp_args_element_value_297, tmp_args_element_value_298};
            tmp_assign_source_231 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_161, call_args);
        }

        Py_DECREF(tmp_args_element_value_298);
        if (tmp_assign_source_231 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 582;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[323], tmp_assign_source_231);
    }
    {
        PyObject *tmp_assign_source_232;
        PyObject *tmp_called_value_163;
        PyObject *tmp_args_element_value_300;
        PyObject *tmp_args_element_value_301;
        PyObject *tmp_args_element_value_302;
        PyObject *tmp_args_element_value_303;
        tmp_called_value_163 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[263]);

        if (unlikely(tmp_called_value_163 == NULL)) {
            tmp_called_value_163 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[263]);
        }

        if (tmp_called_value_163 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 583;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_300 = Py_None;
        tmp_args_element_value_301 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_args_element_value_301 == NULL)) {
            tmp_args_element_value_301 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
        }

        if (tmp_args_element_value_301 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 583;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_302 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_args_element_value_302 == NULL)) {
            tmp_args_element_value_302 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
        }

        if (tmp_args_element_value_302 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 583;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_303 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_args_element_value_303 == NULL)) {
            tmp_args_element_value_303 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
        }

        if (tmp_args_element_value_303 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 583;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 583;
        {
            PyObject *call_args[] = {tmp_args_element_value_300, tmp_args_element_value_301, tmp_args_element_value_302, tmp_args_element_value_303};
            tmp_assign_source_232 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_163, call_args);
        }

        if (tmp_assign_source_232 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 583;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[324], tmp_assign_source_232);
    }
    {
        PyObject *tmp_assign_source_233;
        PyObject *tmp_called_value_164;
        PyObject *tmp_args_element_value_304;
        PyObject *tmp_args_element_value_305;
        PyObject *tmp_args_element_value_306;
        PyObject *tmp_args_element_value_307;
        PyObject *tmp_args_element_value_308;
        PyObject *tmp_args_element_value_309;
        tmp_called_value_164 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[263]);

        if (unlikely(tmp_called_value_164 == NULL)) {
            tmp_called_value_164 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[263]);
        }

        if (tmp_called_value_164 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 584;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_304 = Py_None;
        tmp_args_element_value_305 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_args_element_value_305 == NULL)) {
            tmp_args_element_value_305 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
        }

        if (tmp_args_element_value_305 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 584;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_306 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_args_element_value_306 == NULL)) {
            tmp_args_element_value_306 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
        }

        if (tmp_args_element_value_306 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 584;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_307 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_args_element_value_307 == NULL)) {
            tmp_args_element_value_307 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
        }

        if (tmp_args_element_value_307 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 584;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_308 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_args_element_value_308 == NULL)) {
            tmp_args_element_value_308 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
        }

        if (tmp_args_element_value_308 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 584;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_309 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_args_element_value_309 == NULL)) {
            tmp_args_element_value_309 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
        }

        if (tmp_args_element_value_309 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 584;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 584;
        {
            PyObject *call_args[] = {tmp_args_element_value_304, tmp_args_element_value_305, tmp_args_element_value_306, tmp_args_element_value_307, tmp_args_element_value_308, tmp_args_element_value_309};
            tmp_assign_source_233 = CALL_FUNCTION_WITH_ARGS6(tstate, tmp_called_value_164, call_args);
        }

        if (tmp_assign_source_233 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 584;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[325], tmp_assign_source_233);
    }
    {
        PyObject *tmp_assign_source_234;
        PyObject *tmp_called_value_165;
        PyObject *tmp_args_element_value_310;
        PyObject *tmp_args_element_value_311;
        PyObject *tmp_args_element_value_312;
        PyObject *tmp_args_element_value_313;
        PyObject *tmp_called_value_166;
        PyObject *tmp_args_element_value_314;
        tmp_called_value_165 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[263]);

        if (unlikely(tmp_called_value_165 == NULL)) {
            tmp_called_value_165 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[263]);
        }

        if (tmp_called_value_165 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 585;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_310 = Py_None;
        tmp_args_element_value_311 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_args_element_value_311 == NULL)) {
            tmp_args_element_value_311 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
        }

        if (tmp_args_element_value_311 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 585;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_312 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_args_element_value_312 == NULL)) {
            tmp_args_element_value_312 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
        }

        if (tmp_args_element_value_312 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 585;

            goto frame_exception_exit_1;
        }
        tmp_called_value_166 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[198]);

        if (unlikely(tmp_called_value_166 == NULL)) {
            tmp_called_value_166 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
        }

        if (tmp_called_value_166 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 585;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_314 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_args_element_value_314 == NULL)) {
            tmp_args_element_value_314 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
        }

        if (tmp_args_element_value_314 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 585;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 585;
        tmp_args_element_value_313 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_166, tmp_args_element_value_314);
        if (tmp_args_element_value_313 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 585;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 585;
        {
            PyObject *call_args[] = {tmp_args_element_value_310, tmp_args_element_value_311, tmp_args_element_value_312, tmp_args_element_value_313};
            tmp_assign_source_234 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_165, call_args);
        }

        Py_DECREF(tmp_args_element_value_313);
        if (tmp_assign_source_234 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 585;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[326], tmp_assign_source_234);
    }
    {
        PyObject *tmp_assign_source_235;
        PyObject *tmp_called_value_167;
        PyObject *tmp_args_element_value_315;
        PyObject *tmp_args_element_value_316;
        PyObject *tmp_args_element_value_317;
        PyObject *tmp_args_element_value_318;
        PyObject *tmp_called_value_168;
        PyObject *tmp_args_element_value_319;
        tmp_called_value_167 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[263]);

        if (unlikely(tmp_called_value_167 == NULL)) {
            tmp_called_value_167 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[263]);
        }

        if (tmp_called_value_167 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 586;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_315 = Py_None;
        tmp_args_element_value_316 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_args_element_value_316 == NULL)) {
            tmp_args_element_value_316 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
        }

        if (tmp_args_element_value_316 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 586;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_317 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_args_element_value_317 == NULL)) {
            tmp_args_element_value_317 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
        }

        if (tmp_args_element_value_317 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 586;

            goto frame_exception_exit_1;
        }
        tmp_called_value_168 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[198]);

        if (unlikely(tmp_called_value_168 == NULL)) {
            tmp_called_value_168 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
        }

        if (tmp_called_value_168 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 586;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_319 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_args_element_value_319 == NULL)) {
            tmp_args_element_value_319 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
        }

        if (tmp_args_element_value_319 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 586;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 586;
        tmp_args_element_value_318 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_168, tmp_args_element_value_319);
        if (tmp_args_element_value_318 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 586;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 586;
        {
            PyObject *call_args[] = {tmp_args_element_value_315, tmp_args_element_value_316, tmp_args_element_value_317, tmp_args_element_value_318};
            tmp_assign_source_235 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_167, call_args);
        }

        Py_DECREF(tmp_args_element_value_318);
        if (tmp_assign_source_235 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 586;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[327], tmp_assign_source_235);
    }
    {
        PyObject *tmp_assign_source_236;
        PyObject *tmp_called_value_169;
        PyObject *tmp_args_element_value_320;
        PyObject *tmp_args_element_value_321;
        PyObject *tmp_args_element_value_322;
        PyObject *tmp_args_element_value_323;
        PyObject *tmp_called_value_170;
        PyObject *tmp_args_element_value_324;
        PyObject *tmp_args_element_value_325;
        PyObject *tmp_called_value_171;
        PyObject *tmp_args_element_value_326;
        PyObject *tmp_args_element_value_327;
        PyObject *tmp_called_value_172;
        PyObject *tmp_args_element_value_328;
        tmp_called_value_169 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[263]);

        if (unlikely(tmp_called_value_169 == NULL)) {
            tmp_called_value_169 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[263]);
        }

        if (tmp_called_value_169 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 587;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_320 = Py_None;
        tmp_args_element_value_321 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_args_element_value_321 == NULL)) {
            tmp_args_element_value_321 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
        }

        if (tmp_args_element_value_321 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 587;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_322 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_args_element_value_322 == NULL)) {
            tmp_args_element_value_322 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
        }

        if (tmp_args_element_value_322 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 587;

            goto frame_exception_exit_1;
        }
        tmp_called_value_170 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[198]);

        if (unlikely(tmp_called_value_170 == NULL)) {
            tmp_called_value_170 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
        }

        if (tmp_called_value_170 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 587;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_324 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_args_element_value_324 == NULL)) {
            tmp_args_element_value_324 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
        }

        if (tmp_args_element_value_324 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 587;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 587;
        tmp_args_element_value_323 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_170, tmp_args_element_value_324);
        if (tmp_args_element_value_323 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 587;

            goto frame_exception_exit_1;
        }
        tmp_called_value_171 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[198]);

        if (unlikely(tmp_called_value_171 == NULL)) {
            tmp_called_value_171 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
        }

        if (tmp_called_value_171 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_323);

            exception_lineno = 587;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_326 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_args_element_value_326 == NULL)) {
            tmp_args_element_value_326 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
        }

        if (tmp_args_element_value_326 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_323);

            exception_lineno = 587;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 587;
        tmp_args_element_value_325 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_171, tmp_args_element_value_326);
        if (tmp_args_element_value_325 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_323);

            exception_lineno = 587;

            goto frame_exception_exit_1;
        }
        tmp_called_value_172 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[198]);

        if (unlikely(tmp_called_value_172 == NULL)) {
            tmp_called_value_172 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
        }

        if (tmp_called_value_172 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_323);
            Py_DECREF(tmp_args_element_value_325);

            exception_lineno = 587;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_328 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_args_element_value_328 == NULL)) {
            tmp_args_element_value_328 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
        }

        if (tmp_args_element_value_328 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_323);
            Py_DECREF(tmp_args_element_value_325);

            exception_lineno = 587;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 587;
        tmp_args_element_value_327 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_172, tmp_args_element_value_328);
        if (tmp_args_element_value_327 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_323);
            Py_DECREF(tmp_args_element_value_325);

            exception_lineno = 587;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 587;
        {
            PyObject *call_args[] = {tmp_args_element_value_320, tmp_args_element_value_321, tmp_args_element_value_322, tmp_args_element_value_323, tmp_args_element_value_325, tmp_args_element_value_327};
            tmp_assign_source_236 = CALL_FUNCTION_WITH_ARGS6(tstate, tmp_called_value_169, call_args);
        }

        Py_DECREF(tmp_args_element_value_323);
        Py_DECREF(tmp_args_element_value_325);
        Py_DECREF(tmp_args_element_value_327);
        if (tmp_assign_source_236 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 587;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[328], tmp_assign_source_236);
    }
    {
        PyObject *tmp_assign_source_237;
        PyObject *tmp_called_value_173;
        PyObject *tmp_args_element_value_329;
        PyObject *tmp_args_element_value_330;
        PyObject *tmp_args_element_value_331;
        PyObject *tmp_args_element_value_332;
        PyObject *tmp_called_value_174;
        PyObject *tmp_args_element_value_333;
        tmp_called_value_173 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[263]);

        if (unlikely(tmp_called_value_173 == NULL)) {
            tmp_called_value_173 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[263]);
        }

        if (tmp_called_value_173 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 588;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_329 = Py_None;
        tmp_args_element_value_330 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_args_element_value_330 == NULL)) {
            tmp_args_element_value_330 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
        }

        if (tmp_args_element_value_330 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 588;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_331 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_args_element_value_331 == NULL)) {
            tmp_args_element_value_331 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
        }

        if (tmp_args_element_value_331 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 588;

            goto frame_exception_exit_1;
        }
        tmp_called_value_174 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[198]);

        if (unlikely(tmp_called_value_174 == NULL)) {
            tmp_called_value_174 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
        }

        if (tmp_called_value_174 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 588;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_333 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_args_element_value_333 == NULL)) {
            tmp_args_element_value_333 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
        }

        if (tmp_args_element_value_333 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 588;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 588;
        tmp_args_element_value_332 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_174, tmp_args_element_value_333);
        if (tmp_args_element_value_332 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 588;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 588;
        {
            PyObject *call_args[] = {tmp_args_element_value_329, tmp_args_element_value_330, tmp_args_element_value_331, tmp_args_element_value_332};
            tmp_assign_source_237 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_173, call_args);
        }

        Py_DECREF(tmp_args_element_value_332);
        if (tmp_assign_source_237 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 588;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[329], tmp_assign_source_237);
    }
    {
        PyObject *tmp_assign_source_238;
        PyObject *tmp_called_value_175;
        PyObject *tmp_args_element_value_334;
        PyObject *tmp_args_element_value_335;
        PyObject *tmp_args_element_value_336;
        PyObject *tmp_args_element_value_337;
        PyObject *tmp_called_value_176;
        PyObject *tmp_args_element_value_338;
        tmp_called_value_175 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[263]);

        if (unlikely(tmp_called_value_175 == NULL)) {
            tmp_called_value_175 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[263]);
        }

        if (tmp_called_value_175 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 589;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_334 = Py_None;
        tmp_args_element_value_335 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_args_element_value_335 == NULL)) {
            tmp_args_element_value_335 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
        }

        if (tmp_args_element_value_335 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 589;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_336 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_args_element_value_336 == NULL)) {
            tmp_args_element_value_336 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
        }

        if (tmp_args_element_value_336 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 589;

            goto frame_exception_exit_1;
        }
        tmp_called_value_176 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[198]);

        if (unlikely(tmp_called_value_176 == NULL)) {
            tmp_called_value_176 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
        }

        if (tmp_called_value_176 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 589;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_338 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_args_element_value_338 == NULL)) {
            tmp_args_element_value_338 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
        }

        if (tmp_args_element_value_338 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 589;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 589;
        tmp_args_element_value_337 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_176, tmp_args_element_value_338);
        if (tmp_args_element_value_337 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 589;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 589;
        {
            PyObject *call_args[] = {tmp_args_element_value_334, tmp_args_element_value_335, tmp_args_element_value_336, tmp_args_element_value_337};
            tmp_assign_source_238 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_175, call_args);
        }

        Py_DECREF(tmp_args_element_value_337);
        if (tmp_assign_source_238 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 589;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[330], tmp_assign_source_238);
    }
    {
        PyObject *tmp_assign_source_239;
        PyObject *tmp_called_value_177;
        PyObject *tmp_args_element_value_339;
        PyObject *tmp_args_element_value_340;
        PyObject *tmp_args_element_value_341;
        PyObject *tmp_args_element_value_342;
        PyObject *tmp_called_value_178;
        PyObject *tmp_args_element_value_343;
        PyObject *tmp_args_element_value_344;
        PyObject *tmp_called_value_179;
        PyObject *tmp_args_element_value_345;
        PyObject *tmp_args_element_value_346;
        PyObject *tmp_called_value_180;
        PyObject *tmp_args_element_value_347;
        tmp_called_value_177 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[263]);

        if (unlikely(tmp_called_value_177 == NULL)) {
            tmp_called_value_177 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[263]);
        }

        if (tmp_called_value_177 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 590;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_339 = Py_None;
        tmp_args_element_value_340 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_args_element_value_340 == NULL)) {
            tmp_args_element_value_340 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
        }

        if (tmp_args_element_value_340 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 590;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_341 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_args_element_value_341 == NULL)) {
            tmp_args_element_value_341 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
        }

        if (tmp_args_element_value_341 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 590;

            goto frame_exception_exit_1;
        }
        tmp_called_value_178 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[198]);

        if (unlikely(tmp_called_value_178 == NULL)) {
            tmp_called_value_178 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
        }

        if (tmp_called_value_178 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 590;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_343 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_args_element_value_343 == NULL)) {
            tmp_args_element_value_343 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
        }

        if (tmp_args_element_value_343 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 590;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 590;
        tmp_args_element_value_342 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_178, tmp_args_element_value_343);
        if (tmp_args_element_value_342 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 590;

            goto frame_exception_exit_1;
        }
        tmp_called_value_179 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[198]);

        if (unlikely(tmp_called_value_179 == NULL)) {
            tmp_called_value_179 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
        }

        if (tmp_called_value_179 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_342);

            exception_lineno = 590;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_345 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_args_element_value_345 == NULL)) {
            tmp_args_element_value_345 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
        }

        if (tmp_args_element_value_345 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_342);

            exception_lineno = 590;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 590;
        tmp_args_element_value_344 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_179, tmp_args_element_value_345);
        if (tmp_args_element_value_344 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_342);

            exception_lineno = 590;

            goto frame_exception_exit_1;
        }
        tmp_called_value_180 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[198]);

        if (unlikely(tmp_called_value_180 == NULL)) {
            tmp_called_value_180 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
        }

        if (tmp_called_value_180 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_342);
            Py_DECREF(tmp_args_element_value_344);

            exception_lineno = 590;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_347 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_args_element_value_347 == NULL)) {
            tmp_args_element_value_347 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
        }

        if (tmp_args_element_value_347 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_342);
            Py_DECREF(tmp_args_element_value_344);

            exception_lineno = 590;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 590;
        tmp_args_element_value_346 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_180, tmp_args_element_value_347);
        if (tmp_args_element_value_346 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_342);
            Py_DECREF(tmp_args_element_value_344);

            exception_lineno = 590;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 590;
        {
            PyObject *call_args[] = {tmp_args_element_value_339, tmp_args_element_value_340, tmp_args_element_value_341, tmp_args_element_value_342, tmp_args_element_value_344, tmp_args_element_value_346};
            tmp_assign_source_239 = CALL_FUNCTION_WITH_ARGS6(tstate, tmp_called_value_177, call_args);
        }

        Py_DECREF(tmp_args_element_value_342);
        Py_DECREF(tmp_args_element_value_344);
        Py_DECREF(tmp_args_element_value_346);
        if (tmp_assign_source_239 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 590;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[331], tmp_assign_source_239);
    }
    {
        PyObject *tmp_assign_source_240;
        PyObject *tmp_called_value_181;
        PyObject *tmp_args_element_value_348;
        PyObject *tmp_args_element_value_349;
        PyObject *tmp_args_element_value_350;
        PyObject *tmp_args_element_value_351;
        PyObject *tmp_called_value_182;
        PyObject *tmp_args_element_value_352;
        tmp_called_value_181 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[263]);

        if (unlikely(tmp_called_value_181 == NULL)) {
            tmp_called_value_181 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[263]);
        }

        if (tmp_called_value_181 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 591;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_348 = Py_None;
        tmp_args_element_value_349 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_args_element_value_349 == NULL)) {
            tmp_args_element_value_349 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
        }

        if (tmp_args_element_value_349 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 591;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_350 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_args_element_value_350 == NULL)) {
            tmp_args_element_value_350 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
        }

        if (tmp_args_element_value_350 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 591;

            goto frame_exception_exit_1;
        }
        tmp_called_value_182 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[198]);

        if (unlikely(tmp_called_value_182 == NULL)) {
            tmp_called_value_182 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
        }

        if (tmp_called_value_182 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 591;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_352 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_args_element_value_352 == NULL)) {
            tmp_args_element_value_352 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
        }

        if (tmp_args_element_value_352 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 591;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 591;
        tmp_args_element_value_351 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_182, tmp_args_element_value_352);
        if (tmp_args_element_value_351 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 591;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 591;
        {
            PyObject *call_args[] = {tmp_args_element_value_348, tmp_args_element_value_349, tmp_args_element_value_350, tmp_args_element_value_351};
            tmp_assign_source_240 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_181, call_args);
        }

        Py_DECREF(tmp_args_element_value_351);
        if (tmp_assign_source_240 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 591;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[332], tmp_assign_source_240);
    }
    {
        PyObject *tmp_assign_source_241;
        PyObject *tmp_called_value_183;
        PyObject *tmp_args_element_value_353;
        PyObject *tmp_args_element_value_354;
        tmp_called_value_183 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[263]);

        if (unlikely(tmp_called_value_183 == NULL)) {
            tmp_called_value_183 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[263]);
        }

        if (tmp_called_value_183 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 592;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_353 = Py_None;
        tmp_args_element_value_354 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_args_element_value_354 == NULL)) {
            tmp_args_element_value_354 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
        }

        if (tmp_args_element_value_354 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 592;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 592;
        {
            PyObject *call_args[] = {tmp_args_element_value_353, tmp_args_element_value_354};
            tmp_assign_source_241 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_183, call_args);
        }

        if (tmp_assign_source_241 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 592;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[333], tmp_assign_source_241);
    }
    {
        PyObject *tmp_assign_source_242;
        PyObject *tmp_called_value_184;
        PyObject *tmp_args_element_value_355;
        PyObject *tmp_args_element_value_356;
        tmp_called_value_184 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[263]);

        if (unlikely(tmp_called_value_184 == NULL)) {
            tmp_called_value_184 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[263]);
        }

        if (tmp_called_value_184 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 593;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_355 = Py_None;
        tmp_args_element_value_356 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_args_element_value_356 == NULL)) {
            tmp_args_element_value_356 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
        }

        if (tmp_args_element_value_356 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 593;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 593;
        {
            PyObject *call_args[] = {tmp_args_element_value_355, tmp_args_element_value_356};
            tmp_assign_source_242 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_184, call_args);
        }

        if (tmp_assign_source_242 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 593;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[334], tmp_assign_source_242);
    }
    {
        PyObject *tmp_assign_source_243;
        PyObject *tmp_called_value_185;
        PyObject *tmp_args_element_value_357;
        PyObject *tmp_args_element_value_358;
        tmp_called_value_185 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[263]);

        if (unlikely(tmp_called_value_185 == NULL)) {
            tmp_called_value_185 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[263]);
        }

        if (tmp_called_value_185 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 594;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_357 = Py_None;
        tmp_args_element_value_358 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_args_element_value_358 == NULL)) {
            tmp_args_element_value_358 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
        }

        if (tmp_args_element_value_358 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 594;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 594;
        {
            PyObject *call_args[] = {tmp_args_element_value_357, tmp_args_element_value_358};
            tmp_assign_source_243 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_185, call_args);
        }

        if (tmp_assign_source_243 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 594;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[335], tmp_assign_source_243);
    }
    {
        PyObject *tmp_assign_source_244;
        PyObject *tmp_called_value_186;
        PyObject *tmp_args_element_value_359;
        PyObject *tmp_args_element_value_360;
        tmp_called_value_186 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[263]);

        if (unlikely(tmp_called_value_186 == NULL)) {
            tmp_called_value_186 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[263]);
        }

        if (tmp_called_value_186 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 595;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_359 = Py_None;
        tmp_args_element_value_360 = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_args_element_value_360 == NULL)) {
            tmp_args_element_value_360 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
        }

        if (tmp_args_element_value_360 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 595;

            goto frame_exception_exit_1;
        }
        frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame.f_lineno = 595;
        {
            PyObject *call_args[] = {tmp_args_element_value_359, tmp_args_element_value_360};
            tmp_assign_source_244 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_186, call_args);
        }

        if (tmp_assign_source_244 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 595;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[336], tmp_assign_source_244);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_2;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8036f46be8fa35fb2f4ca3d8ab98b9a1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8036f46be8fa35fb2f4ca3d8ab98b9a1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8036f46be8fa35fb2f4ca3d8ab98b9a1, exception_lineno);
    }



    assertFrameObject(frame_8036f46be8fa35fb2f4ca3d8ab98b9a1);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_2:;
    {
        PyObject *tmp_assign_source_245;
        tmp_assign_source_245 = LIST_COPY(mod_consts[337]);
        UPDATE_STRING_DICT1(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)mod_consts[338], tmp_assign_source_245);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("pyglet.media.drivers.openal.lib_openal", false);

    Py_INCREF(module_pyglet$media$drivers$openal$lib_openal);
    return module_pyglet$media$drivers$openal$lib_openal;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyglet$media$drivers$openal$lib_openal, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("pyglet$media$drivers$openal$lib_openal", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
