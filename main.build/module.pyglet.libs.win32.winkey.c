/* Generated code for Python module 'pyglet.libs.win32.winkey'
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

/* The "module_pyglet$libs$win32$winkey" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pyglet$libs$win32$winkey;
PyDictObject *moduledict_pyglet$libs$win32$winkey;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[282];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[282];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("pyglet.libs.win32.winkey"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 282; i++) {
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
void checkModuleConstants_pyglet$libs$win32$winkey(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 282; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_b9e6f1d6e13f118788beac7e1594940d;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[279]); CHECK_OBJECT(module_filename_obj);
    codeobj_b9e6f1d6e13f118788beac7e1594940d = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[280], mod_consts[280], NULL, NULL, 0, 0, 0);
}

// The module function declarations.


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

function_impl_code functable_pyglet$libs$win32$winkey[] = {

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

    function_impl_code *current = functable_pyglet$libs$win32$winkey;
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

    if (offset > sizeof(functable_pyglet$libs$win32$winkey) || offset < 0) {
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
        functable_pyglet$libs$win32$winkey[offset],
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
        module_pyglet$libs$win32$winkey,
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
PyObject *modulecode_pyglet$libs$win32$winkey(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("pyglet.libs.win32.winkey");

    // Store the module for future use.
    module_pyglet$libs$win32$winkey = module;

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
        PRINT_STRING("pyglet.libs.win32.winkey: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("pyglet.libs.win32.winkey: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initpyglet$libs$win32$winkey\n");

    moduledict_pyglet$libs$win32$winkey = MODULE_DICT(module_pyglet$libs$win32$winkey);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(tstate, loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_pyglet$libs$win32$winkey,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_pyglet$libs$win32$winkey,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[281]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_pyglet$libs$win32$winkey,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_pyglet$libs$win32$winkey,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_pyglet$libs$win32$winkey,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_pyglet$libs$win32$winkey);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_pyglet$libs$win32$winkey);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_b9e6f1d6e13f118788beac7e1594940d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_2);
    }
    frame_b9e6f1d6e13f118788beac7e1594940d = MAKE_MODULE_FRAME(codeobj_b9e6f1d6e13f118788beac7e1594940d, module_pyglet$libs$win32$winkey);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_b9e6f1d6e13f118788beac7e1594940d);
    assert(Py_REFCNT(frame_b9e6f1d6e13f118788beac7e1594940d) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[3], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[4], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[5], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[6];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_pyglet$libs$win32$winkey;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[7];
        tmp_level_value_1 = mod_consts[8];
        frame_b9e6f1d6e13f118788beac7e1594940d->m_frame.f_lineno = 36;
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
                (PyObject *)moduledict_pyglet$libs$win32$winkey,
                mod_consts[9],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_4 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[9]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9], tmp_assign_source_4);
    }
    {
        PyObject *tmp_star_imported_1;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[10];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_pyglet$libs$win32$winkey;
        tmp_locals_arg_value_2 = (PyObject *)moduledict_pyglet$libs$win32$winkey;
        tmp_fromlist_value_2 = mod_consts[11];
        tmp_level_value_2 = mod_consts[12];
        frame_b9e6f1d6e13f118788beac7e1594940d->m_frame.f_lineno = 37;
        tmp_star_imported_1 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_star_imported_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        tmp_result = IMPORT_MODULE_STAR(tstate, module_pyglet$libs$win32$winkey, true, tmp_star_imported_1);
        Py_DECREF(tmp_star_imported_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        frame_b9e6f1d6e13f118788beac7e1594940d->m_frame.f_lineno = 40;
        tmp_dict_key_1 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_1, mod_consts[14]);

        if (tmp_dict_key_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dict_key_1);

            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[15]);
        if (tmp_dict_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dict_key_1);

            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = _PyDict_NewPresized( 101 );
        {
            PyObject *tmp_called_value_2;
            PyObject *tmp_expression_value_2;
            PyObject *tmp_called_value_3;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_called_value_4;
            PyObject *tmp_expression_value_4;
            PyObject *tmp_called_value_5;
            PyObject *tmp_expression_value_5;
            PyObject *tmp_called_value_6;
            PyObject *tmp_expression_value_6;
            PyObject *tmp_called_value_7;
            PyObject *tmp_expression_value_7;
            PyObject *tmp_called_value_8;
            PyObject *tmp_expression_value_8;
            PyObject *tmp_called_value_9;
            PyObject *tmp_expression_value_9;
            PyObject *tmp_called_value_10;
            PyObject *tmp_expression_value_10;
            PyObject *tmp_called_value_11;
            PyObject *tmp_expression_value_11;
            PyObject *tmp_called_value_12;
            PyObject *tmp_expression_value_12;
            PyObject *tmp_called_value_13;
            PyObject *tmp_expression_value_13;
            PyObject *tmp_called_value_14;
            PyObject *tmp_expression_value_14;
            PyObject *tmp_called_value_15;
            PyObject *tmp_expression_value_15;
            PyObject *tmp_called_value_16;
            PyObject *tmp_expression_value_16;
            PyObject *tmp_called_value_17;
            PyObject *tmp_expression_value_17;
            PyObject *tmp_called_value_18;
            PyObject *tmp_expression_value_18;
            PyObject *tmp_called_value_19;
            PyObject *tmp_expression_value_19;
            PyObject *tmp_called_value_20;
            PyObject *tmp_expression_value_20;
            PyObject *tmp_called_value_21;
            PyObject *tmp_expression_value_21;
            PyObject *tmp_called_value_22;
            PyObject *tmp_expression_value_22;
            PyObject *tmp_called_value_23;
            PyObject *tmp_expression_value_23;
            PyObject *tmp_called_value_24;
            PyObject *tmp_expression_value_24;
            PyObject *tmp_called_value_25;
            PyObject *tmp_expression_value_25;
            PyObject *tmp_called_value_26;
            PyObject *tmp_expression_value_26;
            PyObject *tmp_called_value_27;
            PyObject *tmp_expression_value_27;
            PyObject *tmp_called_value_28;
            PyObject *tmp_expression_value_28;
            PyObject *tmp_called_value_29;
            PyObject *tmp_expression_value_29;
            PyObject *tmp_called_value_30;
            PyObject *tmp_expression_value_30;
            PyObject *tmp_called_value_31;
            PyObject *tmp_expression_value_31;
            PyObject *tmp_called_value_32;
            PyObject *tmp_expression_value_32;
            PyObject *tmp_called_value_33;
            PyObject *tmp_expression_value_33;
            PyObject *tmp_called_value_34;
            PyObject *tmp_expression_value_34;
            PyObject *tmp_called_value_35;
            PyObject *tmp_expression_value_35;
            PyObject *tmp_called_value_36;
            PyObject *tmp_expression_value_36;
            PyObject *tmp_called_value_37;
            PyObject *tmp_expression_value_37;
            PyObject *tmp_expression_value_38;
            PyObject *tmp_expression_value_39;
            PyObject *tmp_expression_value_40;
            PyObject *tmp_expression_value_41;
            PyObject *tmp_expression_value_42;
            PyObject *tmp_expression_value_43;
            PyObject *tmp_expression_value_44;
            PyObject *tmp_expression_value_45;
            PyObject *tmp_expression_value_46;
            PyObject *tmp_expression_value_47;
            PyObject *tmp_expression_value_48;
            PyObject *tmp_expression_value_49;
            PyObject *tmp_expression_value_50;
            PyObject *tmp_expression_value_51;
            PyObject *tmp_expression_value_52;
            PyObject *tmp_expression_value_53;
            PyObject *tmp_expression_value_54;
            PyObject *tmp_expression_value_55;
            PyObject *tmp_expression_value_56;
            PyObject *tmp_expression_value_57;
            PyObject *tmp_expression_value_58;
            PyObject *tmp_expression_value_59;
            PyObject *tmp_expression_value_60;
            PyObject *tmp_expression_value_61;
            PyObject *tmp_expression_value_62;
            PyObject *tmp_expression_value_63;
            PyObject *tmp_expression_value_64;
            PyObject *tmp_expression_value_65;
            PyObject *tmp_expression_value_66;
            PyObject *tmp_expression_value_67;
            PyObject *tmp_expression_value_68;
            PyObject *tmp_expression_value_69;
            PyObject *tmp_expression_value_70;
            PyObject *tmp_expression_value_71;
            PyObject *tmp_expression_value_72;
            PyObject *tmp_expression_value_73;
            PyObject *tmp_expression_value_74;
            PyObject *tmp_expression_value_75;
            PyObject *tmp_expression_value_76;
            PyObject *tmp_expression_value_77;
            PyObject *tmp_expression_value_78;
            PyObject *tmp_expression_value_79;
            PyObject *tmp_expression_value_80;
            PyObject *tmp_expression_value_81;
            PyObject *tmp_expression_value_82;
            PyObject *tmp_expression_value_83;
            PyObject *tmp_expression_value_84;
            PyObject *tmp_expression_value_85;
            PyObject *tmp_expression_value_86;
            PyObject *tmp_expression_value_87;
            PyObject *tmp_expression_value_88;
            PyObject *tmp_expression_value_89;
            PyObject *tmp_expression_value_90;
            PyObject *tmp_expression_value_91;
            PyObject *tmp_expression_value_92;
            PyObject *tmp_expression_value_93;
            PyObject *tmp_expression_value_94;
            PyObject *tmp_expression_value_95;
            PyObject *tmp_expression_value_96;
            PyObject *tmp_expression_value_97;
            PyObject *tmp_expression_value_98;
            PyObject *tmp_expression_value_99;
            PyObject *tmp_expression_value_100;
            PyObject *tmp_expression_value_101;
            tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 40;

                goto dict_build_exception_1;
            }
            tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_called_value_2 == NULL)) {
                tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
            }

            if (tmp_called_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 41;

                goto dict_build_exception_1;
            }
            frame_b9e6f1d6e13f118788beac7e1594940d->m_frame.f_lineno = 41;
            tmp_dict_key_1 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_2, mod_consts[16]);

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 41;

                goto dict_build_exception_1;
            }
            tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_2 == NULL)) {
                tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 41;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[17]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 41;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 41;

                goto dict_build_exception_1;
            }
            tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_called_value_3 == NULL)) {
                tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
            }

            if (tmp_called_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 42;

                goto dict_build_exception_1;
            }
            frame_b9e6f1d6e13f118788beac7e1594940d->m_frame.f_lineno = 42;
            tmp_dict_key_1 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_3, mod_consts[18]);

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 42;

                goto dict_build_exception_1;
            }
            tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_3 == NULL)) {
                tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 42;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[19]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 42;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 42;

                goto dict_build_exception_1;
            }
            tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_called_value_4 == NULL)) {
                tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
            }

            if (tmp_called_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 43;

                goto dict_build_exception_1;
            }
            frame_b9e6f1d6e13f118788beac7e1594940d->m_frame.f_lineno = 43;
            tmp_dict_key_1 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_4, mod_consts[20]);

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 43;

                goto dict_build_exception_1;
            }
            tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_4 == NULL)) {
                tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 43;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[21]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 43;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 43;

                goto dict_build_exception_1;
            }
            tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_called_value_5 == NULL)) {
                tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
            }

            if (tmp_called_value_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 44;

                goto dict_build_exception_1;
            }
            frame_b9e6f1d6e13f118788beac7e1594940d->m_frame.f_lineno = 44;
            tmp_dict_key_1 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_5, mod_consts[22]);

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 44;

                goto dict_build_exception_1;
            }
            tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_5 == NULL)) {
                tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 44;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[23]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 44;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 44;

                goto dict_build_exception_1;
            }
            tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_called_value_6 == NULL)) {
                tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
            }

            if (tmp_called_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 45;

                goto dict_build_exception_1;
            }
            frame_b9e6f1d6e13f118788beac7e1594940d->m_frame.f_lineno = 45;
            tmp_dict_key_1 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_6, mod_consts[24]);

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 45;

                goto dict_build_exception_1;
            }
            tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_6 == NULL)) {
                tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 45;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[25]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 45;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 45;

                goto dict_build_exception_1;
            }
            tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_called_value_7 == NULL)) {
                tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
            }

            if (tmp_called_value_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;

                goto dict_build_exception_1;
            }
            frame_b9e6f1d6e13f118788beac7e1594940d->m_frame.f_lineno = 46;
            tmp_dict_key_1 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_7, mod_consts[26]);

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;

                goto dict_build_exception_1;
            }
            tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_7 == NULL)) {
                tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 46;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[27]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 46;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;

                goto dict_build_exception_1;
            }
            tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_called_value_8 == NULL)) {
                tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
            }

            if (tmp_called_value_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 47;

                goto dict_build_exception_1;
            }
            frame_b9e6f1d6e13f118788beac7e1594940d->m_frame.f_lineno = 47;
            tmp_dict_key_1 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_8, mod_consts[28]);

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 47;

                goto dict_build_exception_1;
            }
            tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_8 == NULL)) {
                tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 47;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[29]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 47;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 47;

                goto dict_build_exception_1;
            }
            tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_called_value_9 == NULL)) {
                tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
            }

            if (tmp_called_value_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 48;

                goto dict_build_exception_1;
            }
            frame_b9e6f1d6e13f118788beac7e1594940d->m_frame.f_lineno = 48;
            tmp_dict_key_1 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_9, mod_consts[30]);

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 48;

                goto dict_build_exception_1;
            }
            tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_9 == NULL)) {
                tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 48;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[31]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 48;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 48;

                goto dict_build_exception_1;
            }
            tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_called_value_10 == NULL)) {
                tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
            }

            if (tmp_called_value_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 49;

                goto dict_build_exception_1;
            }
            frame_b9e6f1d6e13f118788beac7e1594940d->m_frame.f_lineno = 49;
            tmp_dict_key_1 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_10, mod_consts[32]);

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 49;

                goto dict_build_exception_1;
            }
            tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_10 == NULL)) {
                tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 49;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[33]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 49;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 49;

                goto dict_build_exception_1;
            }
            tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_called_value_11 == NULL)) {
                tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
            }

            if (tmp_called_value_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 50;

                goto dict_build_exception_1;
            }
            frame_b9e6f1d6e13f118788beac7e1594940d->m_frame.f_lineno = 50;
            tmp_dict_key_1 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_11, mod_consts[34]);

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 50;

                goto dict_build_exception_1;
            }
            tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_11 == NULL)) {
                tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 50;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[35]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 50;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 50;

                goto dict_build_exception_1;
            }
            tmp_called_value_12 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_called_value_12 == NULL)) {
                tmp_called_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
            }

            if (tmp_called_value_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 51;

                goto dict_build_exception_1;
            }
            frame_b9e6f1d6e13f118788beac7e1594940d->m_frame.f_lineno = 51;
            tmp_dict_key_1 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_12, mod_consts[36]);

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 51;

                goto dict_build_exception_1;
            }
            tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_12 == NULL)) {
                tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 51;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[37]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 51;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 51;

                goto dict_build_exception_1;
            }
            tmp_called_value_13 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_called_value_13 == NULL)) {
                tmp_called_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
            }

            if (tmp_called_value_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 52;

                goto dict_build_exception_1;
            }
            frame_b9e6f1d6e13f118788beac7e1594940d->m_frame.f_lineno = 52;
            tmp_dict_key_1 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_13, mod_consts[38]);

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 52;

                goto dict_build_exception_1;
            }
            tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_13 == NULL)) {
                tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 52;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[39]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 52;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 52;

                goto dict_build_exception_1;
            }
            tmp_called_value_14 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_called_value_14 == NULL)) {
                tmp_called_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
            }

            if (tmp_called_value_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;

                goto dict_build_exception_1;
            }
            frame_b9e6f1d6e13f118788beac7e1594940d->m_frame.f_lineno = 53;
            tmp_dict_key_1 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_14, mod_consts[40]);

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;

                goto dict_build_exception_1;
            }
            tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_14 == NULL)) {
                tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 53;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[41]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 53;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;

                goto dict_build_exception_1;
            }
            tmp_called_value_15 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_called_value_15 == NULL)) {
                tmp_called_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
            }

            if (tmp_called_value_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 54;

                goto dict_build_exception_1;
            }
            frame_b9e6f1d6e13f118788beac7e1594940d->m_frame.f_lineno = 54;
            tmp_dict_key_1 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_15, mod_consts[42]);

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 54;

                goto dict_build_exception_1;
            }
            tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_15 == NULL)) {
                tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 54;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[43]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 54;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 54;

                goto dict_build_exception_1;
            }
            tmp_called_value_16 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_called_value_16 == NULL)) {
                tmp_called_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
            }

            if (tmp_called_value_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 55;

                goto dict_build_exception_1;
            }
            frame_b9e6f1d6e13f118788beac7e1594940d->m_frame.f_lineno = 55;
            tmp_dict_key_1 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_16, mod_consts[44]);

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 55;

                goto dict_build_exception_1;
            }
            tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_16 == NULL)) {
                tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 55;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[45]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 55;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 55;

                goto dict_build_exception_1;
            }
            tmp_called_value_17 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_called_value_17 == NULL)) {
                tmp_called_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
            }

            if (tmp_called_value_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 56;

                goto dict_build_exception_1;
            }
            frame_b9e6f1d6e13f118788beac7e1594940d->m_frame.f_lineno = 56;
            tmp_dict_key_1 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_17, mod_consts[46]);

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 56;

                goto dict_build_exception_1;
            }
            tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_17 == NULL)) {
                tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 56;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts[47]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 56;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 56;

                goto dict_build_exception_1;
            }
            tmp_called_value_18 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_called_value_18 == NULL)) {
                tmp_called_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
            }

            if (tmp_called_value_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 57;

                goto dict_build_exception_1;
            }
            frame_b9e6f1d6e13f118788beac7e1594940d->m_frame.f_lineno = 57;
            tmp_dict_key_1 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_18, mod_consts[48]);

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 57;

                goto dict_build_exception_1;
            }
            tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_18 == NULL)) {
                tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 57;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts[49]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 57;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 57;

                goto dict_build_exception_1;
            }
            tmp_called_value_19 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_called_value_19 == NULL)) {
                tmp_called_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
            }

            if (tmp_called_value_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 58;

                goto dict_build_exception_1;
            }
            frame_b9e6f1d6e13f118788beac7e1594940d->m_frame.f_lineno = 58;
            tmp_dict_key_1 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_19, mod_consts[50]);

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 58;

                goto dict_build_exception_1;
            }
            tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_19 == NULL)) {
                tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 58;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts[51]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 58;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 58;

                goto dict_build_exception_1;
            }
            tmp_called_value_20 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_called_value_20 == NULL)) {
                tmp_called_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
            }

            if (tmp_called_value_20 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 59;

                goto dict_build_exception_1;
            }
            frame_b9e6f1d6e13f118788beac7e1594940d->m_frame.f_lineno = 59;
            tmp_dict_key_1 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_20, mod_consts[52]);

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 59;

                goto dict_build_exception_1;
            }
            tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_20 == NULL)) {
                tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_20 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 59;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts[53]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 59;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 59;

                goto dict_build_exception_1;
            }
            tmp_called_value_21 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_called_value_21 == NULL)) {
                tmp_called_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
            }

            if (tmp_called_value_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;

                goto dict_build_exception_1;
            }
            frame_b9e6f1d6e13f118788beac7e1594940d->m_frame.f_lineno = 60;
            tmp_dict_key_1 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_21, mod_consts[54]);

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;

                goto dict_build_exception_1;
            }
            tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_21 == NULL)) {
                tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 60;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts[55]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 60;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;

                goto dict_build_exception_1;
            }
            tmp_called_value_22 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_called_value_22 == NULL)) {
                tmp_called_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
            }

            if (tmp_called_value_22 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;

                goto dict_build_exception_1;
            }
            frame_b9e6f1d6e13f118788beac7e1594940d->m_frame.f_lineno = 61;
            tmp_dict_key_1 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_22, mod_consts[56]);

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;

                goto dict_build_exception_1;
            }
            tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_22 == NULL)) {
                tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_22 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 61;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts[57]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 61;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;

                goto dict_build_exception_1;
            }
            tmp_called_value_23 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_called_value_23 == NULL)) {
                tmp_called_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
            }

            if (tmp_called_value_23 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 62;

                goto dict_build_exception_1;
            }
            frame_b9e6f1d6e13f118788beac7e1594940d->m_frame.f_lineno = 62;
            tmp_dict_key_1 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_23, mod_consts[58]);

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 62;

                goto dict_build_exception_1;
            }
            tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_23 == NULL)) {
                tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_23 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 62;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts[59]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 62;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 62;

                goto dict_build_exception_1;
            }
            tmp_called_value_24 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_called_value_24 == NULL)) {
                tmp_called_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
            }

            if (tmp_called_value_24 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;

                goto dict_build_exception_1;
            }
            frame_b9e6f1d6e13f118788beac7e1594940d->m_frame.f_lineno = 63;
            tmp_dict_key_1 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_24, mod_consts[60]);

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;

                goto dict_build_exception_1;
            }
            tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_24 == NULL)) {
                tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_24 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 63;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts[61]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 63;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;

                goto dict_build_exception_1;
            }
            tmp_called_value_25 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_called_value_25 == NULL)) {
                tmp_called_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
            }

            if (tmp_called_value_25 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 64;

                goto dict_build_exception_1;
            }
            frame_b9e6f1d6e13f118788beac7e1594940d->m_frame.f_lineno = 64;
            tmp_dict_key_1 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_25, mod_consts[62]);

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 64;

                goto dict_build_exception_1;
            }
            tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_25 == NULL)) {
                tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_25 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 64;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts[63]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 64;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 64;

                goto dict_build_exception_1;
            }
            tmp_called_value_26 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_called_value_26 == NULL)) {
                tmp_called_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
            }

            if (tmp_called_value_26 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 65;

                goto dict_build_exception_1;
            }
            frame_b9e6f1d6e13f118788beac7e1594940d->m_frame.f_lineno = 65;
            tmp_dict_key_1 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_26, mod_consts[64]);

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 65;

                goto dict_build_exception_1;
            }
            tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_26 == NULL)) {
                tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_26 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 65;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts[65]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 65;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 65;

                goto dict_build_exception_1;
            }
            tmp_called_value_27 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_called_value_27 == NULL)) {
                tmp_called_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
            }

            if (tmp_called_value_27 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;

                goto dict_build_exception_1;
            }
            frame_b9e6f1d6e13f118788beac7e1594940d->m_frame.f_lineno = 66;
            tmp_dict_key_1 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_27, mod_consts[66]);

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;

                goto dict_build_exception_1;
            }
            tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_27 == NULL)) {
                tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_27 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 66;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts[67]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 66;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;

                goto dict_build_exception_1;
            }
            tmp_called_value_28 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_called_value_28 == NULL)) {
                tmp_called_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
            }

            if (tmp_called_value_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 67;

                goto dict_build_exception_1;
            }
            frame_b9e6f1d6e13f118788beac7e1594940d->m_frame.f_lineno = 67;
            tmp_dict_key_1 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_28, mod_consts[68]);

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 67;

                goto dict_build_exception_1;
            }
            tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_28 == NULL)) {
                tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 67;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts[69]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 67;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 67;

                goto dict_build_exception_1;
            }
            tmp_called_value_29 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_called_value_29 == NULL)) {
                tmp_called_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
            }

            if (tmp_called_value_29 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 68;

                goto dict_build_exception_1;
            }
            frame_b9e6f1d6e13f118788beac7e1594940d->m_frame.f_lineno = 68;
            tmp_dict_key_1 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_29, mod_consts[70]);

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 68;

                goto dict_build_exception_1;
            }
            tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_29 == NULL)) {
                tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_29 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 68;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts[71]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 68;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 68;

                goto dict_build_exception_1;
            }
            tmp_called_value_30 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_called_value_30 == NULL)) {
                tmp_called_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
            }

            if (tmp_called_value_30 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;

                goto dict_build_exception_1;
            }
            frame_b9e6f1d6e13f118788beac7e1594940d->m_frame.f_lineno = 69;
            tmp_dict_key_1 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_30, mod_consts[72]);

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;

                goto dict_build_exception_1;
            }
            tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_30 == NULL)) {
                tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_30 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 69;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts[73]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 69;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;

                goto dict_build_exception_1;
            }
            tmp_called_value_31 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_called_value_31 == NULL)) {
                tmp_called_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
            }

            if (tmp_called_value_31 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 70;

                goto dict_build_exception_1;
            }
            frame_b9e6f1d6e13f118788beac7e1594940d->m_frame.f_lineno = 70;
            tmp_dict_key_1 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_31, mod_consts[74]);

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 70;

                goto dict_build_exception_1;
            }
            tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_31 == NULL)) {
                tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_31 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 70;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts[75]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 70;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 70;

                goto dict_build_exception_1;
            }
            tmp_called_value_32 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_called_value_32 == NULL)) {
                tmp_called_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
            }

            if (tmp_called_value_32 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;

                goto dict_build_exception_1;
            }
            frame_b9e6f1d6e13f118788beac7e1594940d->m_frame.f_lineno = 71;
            tmp_dict_key_1 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_32, mod_consts[76]);

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;

                goto dict_build_exception_1;
            }
            tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_32 == NULL)) {
                tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_32 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 71;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts[77]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 71;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;

                goto dict_build_exception_1;
            }
            tmp_called_value_33 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_called_value_33 == NULL)) {
                tmp_called_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
            }

            if (tmp_called_value_33 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;

                goto dict_build_exception_1;
            }
            frame_b9e6f1d6e13f118788beac7e1594940d->m_frame.f_lineno = 72;
            tmp_dict_key_1 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_33, mod_consts[78]);

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;

                goto dict_build_exception_1;
            }
            tmp_expression_value_33 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_33 == NULL)) {
                tmp_expression_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_33 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 72;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts[79]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 72;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;

                goto dict_build_exception_1;
            }
            tmp_called_value_34 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_called_value_34 == NULL)) {
                tmp_called_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
            }

            if (tmp_called_value_34 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;

                goto dict_build_exception_1;
            }
            frame_b9e6f1d6e13f118788beac7e1594940d->m_frame.f_lineno = 73;
            tmp_dict_key_1 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_34, mod_consts[80]);

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;

                goto dict_build_exception_1;
            }
            tmp_expression_value_34 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_34 == NULL)) {
                tmp_expression_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_34 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 73;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts[81]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 73;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;

                goto dict_build_exception_1;
            }
            tmp_called_value_35 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_called_value_35 == NULL)) {
                tmp_called_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
            }

            if (tmp_called_value_35 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;

                goto dict_build_exception_1;
            }
            frame_b9e6f1d6e13f118788beac7e1594940d->m_frame.f_lineno = 74;
            tmp_dict_key_1 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_35, mod_consts[82]);

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;

                goto dict_build_exception_1;
            }
            tmp_expression_value_35 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_35 == NULL)) {
                tmp_expression_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_35 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 74;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, mod_consts[83]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 74;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;

                goto dict_build_exception_1;
            }
            tmp_called_value_36 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_called_value_36 == NULL)) {
                tmp_called_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
            }

            if (tmp_called_value_36 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 75;

                goto dict_build_exception_1;
            }
            frame_b9e6f1d6e13f118788beac7e1594940d->m_frame.f_lineno = 75;
            tmp_dict_key_1 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_36, mod_consts[84]);

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 75;

                goto dict_build_exception_1;
            }
            tmp_expression_value_36 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_36 == NULL)) {
                tmp_expression_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_36 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 75;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, mod_consts[85]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 75;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 75;

                goto dict_build_exception_1;
            }
            tmp_called_value_37 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_called_value_37 == NULL)) {
                tmp_called_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
            }

            if (tmp_called_value_37 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 76;

                goto dict_build_exception_1;
            }
            frame_b9e6f1d6e13f118788beac7e1594940d->m_frame.f_lineno = 76;
            tmp_dict_key_1 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_37, mod_consts[86]);

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 76;

                goto dict_build_exception_1;
            }
            tmp_expression_value_37 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_37 == NULL)) {
                tmp_expression_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_37 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 76;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_37, mod_consts[87]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 76;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 76;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = mod_consts[88];
            tmp_expression_value_38 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_38 == NULL)) {
                tmp_expression_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_38 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 79;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_38, mod_consts[89]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 79;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[90];
            tmp_expression_value_39 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_39 == NULL)) {
                tmp_expression_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_39 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 80;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, mod_consts[91]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 80;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[92]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[92]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 84;

                goto dict_build_exception_1;
            }
            tmp_expression_value_40 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_40 == NULL)) {
                tmp_expression_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_40 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 84;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_40, mod_consts[93]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 84;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 84;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[94]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[94]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 87;

                goto dict_build_exception_1;
            }
            tmp_expression_value_41 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_41 == NULL)) {
                tmp_expression_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_41 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 87;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_41, mod_consts[95]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 87;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 87;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[96]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[96]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 89;

                goto dict_build_exception_1;
            }
            tmp_expression_value_42 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_42 == NULL)) {
                tmp_expression_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_42 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 89;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_42, mod_consts[97]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 89;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 89;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[98]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[98]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 90;

                goto dict_build_exception_1;
            }
            tmp_expression_value_43 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_43 == NULL)) {
                tmp_expression_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_43 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 90;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_43, mod_consts[99]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 90;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 90;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[100]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[100]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;

                goto dict_build_exception_1;
            }
            tmp_expression_value_44 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_44 == NULL)) {
                tmp_expression_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_44 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_44, mod_consts[101]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[102]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[102]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 92;

                goto dict_build_exception_1;
            }
            tmp_expression_value_45 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_45 == NULL)) {
                tmp_expression_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_45 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 92;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_45, mod_consts[103]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 92;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 92;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[104]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[104]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 93;

                goto dict_build_exception_1;
            }
            tmp_expression_value_46 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_46 == NULL)) {
                tmp_expression_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_46 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 93;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_46, mod_consts[105]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 93;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 93;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[106]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[106]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 102;

                goto dict_build_exception_1;
            }
            tmp_expression_value_47 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_47 == NULL)) {
                tmp_expression_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_47 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 102;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_47, mod_consts[107]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 102;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 102;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[108]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[108]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 107;

                goto dict_build_exception_1;
            }
            tmp_expression_value_48 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_48 == NULL)) {
                tmp_expression_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_48 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 107;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_48, mod_consts[109]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 107;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 107;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[110]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[110]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;

                goto dict_build_exception_1;
            }
            tmp_expression_value_49 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_49 == NULL)) {
                tmp_expression_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_49 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_49, mod_consts[111]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[112]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;

                goto dict_build_exception_1;
            }
            tmp_expression_value_50 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_50 == NULL)) {
                tmp_expression_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_50 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_50, mod_consts[113]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[114]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[114]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;

                goto dict_build_exception_1;
            }
            tmp_expression_value_51 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_51 == NULL)) {
                tmp_expression_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_51 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_51, mod_consts[115]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[116]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[116]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;

                goto dict_build_exception_1;
            }
            tmp_expression_value_52 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_52 == NULL)) {
                tmp_expression_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_52 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_52, mod_consts[117]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[118]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[118]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 112;

                goto dict_build_exception_1;
            }
            tmp_expression_value_53 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_53 == NULL)) {
                tmp_expression_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_53 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 112;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_53, mod_consts[119]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 112;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 112;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[120]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[120]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 113;

                goto dict_build_exception_1;
            }
            tmp_expression_value_54 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_54 == NULL)) {
                tmp_expression_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_54 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 113;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_54, mod_consts[121]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 113;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 113;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[122]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[122]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 114;

                goto dict_build_exception_1;
            }
            tmp_expression_value_55 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_55 == NULL)) {
                tmp_expression_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_55 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 114;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_55, mod_consts[123]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 114;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 114;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[124]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[124]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 115;

                goto dict_build_exception_1;
            }
            tmp_expression_value_56 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_56 == NULL)) {
                tmp_expression_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_56 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 115;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_56, mod_consts[125]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 115;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 115;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[126]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[126]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 117;

                goto dict_build_exception_1;
            }
            tmp_expression_value_57 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_57 == NULL)) {
                tmp_expression_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_57 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 117;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_57, mod_consts[127]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 117;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 117;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[128]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[128]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 120;

                goto dict_build_exception_1;
            }
            tmp_expression_value_58 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_58 == NULL)) {
                tmp_expression_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_58 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 120;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_58, mod_consts[129]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 120;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 120;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[130]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[130]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 121;

                goto dict_build_exception_1;
            }
            tmp_expression_value_59 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_59 == NULL)) {
                tmp_expression_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_59 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 121;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_59, mod_consts[131]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 121;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 121;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[132]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[132]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 122;

                goto dict_build_exception_1;
            }
            tmp_expression_value_60 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_60 == NULL)) {
                tmp_expression_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_60 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 122;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_60, mod_consts[133]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 122;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 122;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[134]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[134]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 123;

                goto dict_build_exception_1;
            }
            tmp_expression_value_61 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_61 == NULL)) {
                tmp_expression_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_61 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 123;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_61, mod_consts[135]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 123;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 123;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[136]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[136]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 124;

                goto dict_build_exception_1;
            }
            tmp_expression_value_62 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_62 == NULL)) {
                tmp_expression_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_62 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 124;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_62, mod_consts[137]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 124;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 124;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[138]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[138]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 126;

                goto dict_build_exception_1;
            }
            tmp_expression_value_63 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_63 == NULL)) {
                tmp_expression_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_63 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 126;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_63, mod_consts[139]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 126;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 126;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[140]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[140]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 127;

                goto dict_build_exception_1;
            }
            tmp_expression_value_64 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_64 == NULL)) {
                tmp_expression_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_64 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 127;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_64, mod_consts[141]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 127;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 127;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[142]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[142]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 128;

                goto dict_build_exception_1;
            }
            tmp_expression_value_65 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_65 == NULL)) {
                tmp_expression_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_65 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 128;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_65, mod_consts[143]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 128;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 128;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[144]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[144]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 129;

                goto dict_build_exception_1;
            }
            tmp_expression_value_66 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_66 == NULL)) {
                tmp_expression_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_66 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 129;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_66, mod_consts[145]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 129;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 129;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[146]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[146]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 130;

                goto dict_build_exception_1;
            }
            tmp_expression_value_67 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_67 == NULL)) {
                tmp_expression_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_67 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 130;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_67, mod_consts[147]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 130;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 130;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[148]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[148]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 131;

                goto dict_build_exception_1;
            }
            tmp_expression_value_68 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_68 == NULL)) {
                tmp_expression_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_68 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 131;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_68, mod_consts[149]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 131;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 131;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[150]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[150]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 132;

                goto dict_build_exception_1;
            }
            tmp_expression_value_69 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_69 == NULL)) {
                tmp_expression_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_69 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 132;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_69, mod_consts[151]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 132;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 132;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[152]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[152]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 133;

                goto dict_build_exception_1;
            }
            tmp_expression_value_70 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_70 == NULL)) {
                tmp_expression_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_70 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 133;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_70, mod_consts[153]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 133;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 133;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[154]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[154]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 134;

                goto dict_build_exception_1;
            }
            tmp_expression_value_71 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_71 == NULL)) {
                tmp_expression_value_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_71 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 134;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_71, mod_consts[155]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 134;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 134;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[156]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[156]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 135;

                goto dict_build_exception_1;
            }
            tmp_expression_value_72 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_72 == NULL)) {
                tmp_expression_value_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_72 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 135;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_72, mod_consts[157]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 135;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 135;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[158]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[158]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 136;

                goto dict_build_exception_1;
            }
            tmp_expression_value_73 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_73 == NULL)) {
                tmp_expression_value_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_73 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 136;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_73, mod_consts[159]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 136;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 136;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[160]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[160]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 137;

                goto dict_build_exception_1;
            }
            tmp_expression_value_74 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_74 == NULL)) {
                tmp_expression_value_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_74 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 137;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_74, mod_consts[161]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 137;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 137;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[162]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[162]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 139;

                goto dict_build_exception_1;
            }
            tmp_expression_value_75 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_75 == NULL)) {
                tmp_expression_value_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_75 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 139;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_75, mod_consts[163]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 139;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 139;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[164]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[164]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 140;

                goto dict_build_exception_1;
            }
            tmp_expression_value_76 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_76 == NULL)) {
                tmp_expression_value_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_76 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 140;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_76, mod_consts[165]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 140;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 140;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[166]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[166]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 141;

                goto dict_build_exception_1;
            }
            tmp_expression_value_77 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_77 == NULL)) {
                tmp_expression_value_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_77 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 141;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_77, mod_consts[167]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 141;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 141;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[168]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[168]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 142;

                goto dict_build_exception_1;
            }
            tmp_expression_value_78 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_78 == NULL)) {
                tmp_expression_value_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_78 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 142;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_78, mod_consts[169]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 142;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 142;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[170]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[170]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 143;

                goto dict_build_exception_1;
            }
            tmp_expression_value_79 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_79 == NULL)) {
                tmp_expression_value_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_79 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 143;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_79, mod_consts[171]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 143;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 143;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[172]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[172]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;

                goto dict_build_exception_1;
            }
            tmp_expression_value_80 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_80 == NULL)) {
                tmp_expression_value_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_80 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_80, mod_consts[173]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[174]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[174]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 145;

                goto dict_build_exception_1;
            }
            tmp_expression_value_81 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_81 == NULL)) {
                tmp_expression_value_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_81 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 145;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_81, mod_consts[175]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 145;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 145;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[176]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[176]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;

                goto dict_build_exception_1;
            }
            tmp_expression_value_82 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_82 == NULL)) {
                tmp_expression_value_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_82 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_82, mod_consts[177]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[178]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[178]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 147;

                goto dict_build_exception_1;
            }
            tmp_expression_value_83 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_83 == NULL)) {
                tmp_expression_value_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_83 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 147;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_83, mod_consts[179]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 147;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 147;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[180]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[180]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 148;

                goto dict_build_exception_1;
            }
            tmp_expression_value_84 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_84 == NULL)) {
                tmp_expression_value_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_84 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 148;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_84, mod_consts[181]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 148;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 148;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[182]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[182]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 149;

                goto dict_build_exception_1;
            }
            tmp_expression_value_85 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_85 == NULL)) {
                tmp_expression_value_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_85 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 149;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_85, mod_consts[183]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 149;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 149;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[184]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[184]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 150;

                goto dict_build_exception_1;
            }
            tmp_expression_value_86 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_86 == NULL)) {
                tmp_expression_value_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_86 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 150;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_86, mod_consts[185]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 150;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 150;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[186]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[186]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 151;

                goto dict_build_exception_1;
            }
            tmp_expression_value_87 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_87 == NULL)) {
                tmp_expression_value_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_87 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 151;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_87, mod_consts[187]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 151;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 151;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[188]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[188]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 152;

                goto dict_build_exception_1;
            }
            tmp_expression_value_88 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_88 == NULL)) {
                tmp_expression_value_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_88 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 152;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_88, mod_consts[189]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 152;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 152;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[190]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[190]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 153;

                goto dict_build_exception_1;
            }
            tmp_expression_value_89 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_89 == NULL)) {
                tmp_expression_value_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_89 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 153;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_89, mod_consts[191]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 153;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 153;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[192]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[192]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 154;

                goto dict_build_exception_1;
            }
            tmp_expression_value_90 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_90 == NULL)) {
                tmp_expression_value_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_90 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 154;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_90, mod_consts[193]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 154;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 154;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[194]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[194]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 155;

                goto dict_build_exception_1;
            }
            tmp_expression_value_91 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_91 == NULL)) {
                tmp_expression_value_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_91 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 155;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_91, mod_consts[195]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 155;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 155;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[196]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[196]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 156;

                goto dict_build_exception_1;
            }
            tmp_expression_value_92 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_92 == NULL)) {
                tmp_expression_value_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_92 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 156;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_92, mod_consts[197]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 156;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 156;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[198]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 157;

                goto dict_build_exception_1;
            }
            tmp_expression_value_93 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_93 == NULL)) {
                tmp_expression_value_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_93 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 157;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_93, mod_consts[199]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 157;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 157;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[200]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[200]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 166;

                goto dict_build_exception_1;
            }
            tmp_expression_value_94 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_94 == NULL)) {
                tmp_expression_value_94 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_94 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 166;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_94, mod_consts[201]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 166;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 166;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[202]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[202]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 167;

                goto dict_build_exception_1;
            }
            tmp_expression_value_95 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_95 == NULL)) {
                tmp_expression_value_95 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_95 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 167;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_95, mod_consts[203]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 167;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 167;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[204]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[204]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 168;

                goto dict_build_exception_1;
            }
            tmp_expression_value_96 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_96 == NULL)) {
                tmp_expression_value_96 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_96 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 168;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_96, mod_consts[99]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 168;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 168;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[205]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[205]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 169;

                goto dict_build_exception_1;
            }
            tmp_expression_value_97 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_97 == NULL)) {
                tmp_expression_value_97 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_97 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 169;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_97, mod_consts[206]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 169;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 169;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[207]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[207]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 170;

                goto dict_build_exception_1;
            }
            tmp_expression_value_98 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_98 == NULL)) {
                tmp_expression_value_98 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_98 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 170;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_98, mod_consts[101]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 170;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 170;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[208]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[208]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 171;

                goto dict_build_exception_1;
            }
            tmp_expression_value_99 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_99 == NULL)) {
                tmp_expression_value_99 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_99 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 171;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_99, mod_consts[209]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 171;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 171;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[210]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[210]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 172;

                goto dict_build_exception_1;
            }
            tmp_expression_value_100 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_100 == NULL)) {
                tmp_expression_value_100 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_100 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 172;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_100, mod_consts[103]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 172;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 172;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[211]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[211]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 173;

                goto dict_build_exception_1;
            }
            tmp_expression_value_101 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_101 == NULL)) {
                tmp_expression_value_101 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_101 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 173;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_101, mod_consts[212]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 173;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 173;

                goto dict_build_exception_1;
            }
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_assign_source_5);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[213], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_called_value_38;
        PyObject *tmp_expression_value_102;
        tmp_called_value_38 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_38 == NULL)) {
            tmp_called_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_value_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;

            goto frame_exception_exit_1;
        }
        frame_b9e6f1d6e13f118788beac7e1594940d->m_frame.f_lineno = 199;
        tmp_dict_key_2 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_38, mod_consts[214]);

        if (tmp_dict_key_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_102 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_expression_value_102 == NULL)) {
            tmp_expression_value_102 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        if (tmp_expression_value_102 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dict_key_2);

            exception_lineno = 199;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_102, mod_consts[215]);
        if (tmp_dict_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dict_key_2);

            exception_lineno = 199;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_6 = _PyDict_NewPresized( 33 );
        {
            PyObject *tmp_called_value_39;
            PyObject *tmp_expression_value_103;
            PyObject *tmp_called_value_40;
            PyObject *tmp_expression_value_104;
            PyObject *tmp_called_value_41;
            PyObject *tmp_expression_value_105;
            PyObject *tmp_called_value_42;
            PyObject *tmp_expression_value_106;
            PyObject *tmp_called_value_43;
            PyObject *tmp_expression_value_107;
            PyObject *tmp_called_value_44;
            PyObject *tmp_expression_value_108;
            PyObject *tmp_called_value_45;
            PyObject *tmp_expression_value_109;
            PyObject *tmp_called_value_46;
            PyObject *tmp_expression_value_110;
            PyObject *tmp_called_value_47;
            PyObject *tmp_expression_value_111;
            PyObject *tmp_called_value_48;
            PyObject *tmp_expression_value_112;
            PyObject *tmp_called_value_49;
            PyObject *tmp_expression_value_113;
            PyObject *tmp_called_value_50;
            PyObject *tmp_expression_value_114;
            PyObject *tmp_called_value_51;
            PyObject *tmp_expression_value_115;
            PyObject *tmp_called_value_52;
            PyObject *tmp_expression_value_116;
            PyObject *tmp_called_value_53;
            PyObject *tmp_expression_value_117;
            PyObject *tmp_called_value_54;
            PyObject *tmp_expression_value_118;
            PyObject *tmp_called_value_55;
            PyObject *tmp_expression_value_119;
            PyObject *tmp_called_value_56;
            PyObject *tmp_expression_value_120;
            PyObject *tmp_called_value_57;
            PyObject *tmp_expression_value_121;
            PyObject *tmp_called_value_58;
            PyObject *tmp_expression_value_122;
            PyObject *tmp_called_value_59;
            PyObject *tmp_expression_value_123;
            PyObject *tmp_called_value_60;
            PyObject *tmp_expression_value_124;
            PyObject *tmp_called_value_61;
            PyObject *tmp_expression_value_125;
            PyObject *tmp_called_value_62;
            PyObject *tmp_expression_value_126;
            PyObject *tmp_called_value_63;
            PyObject *tmp_expression_value_127;
            PyObject *tmp_called_value_64;
            PyObject *tmp_expression_value_128;
            PyObject *tmp_called_value_65;
            PyObject *tmp_expression_value_129;
            PyObject *tmp_called_value_66;
            PyObject *tmp_expression_value_130;
            PyObject *tmp_called_value_67;
            PyObject *tmp_expression_value_131;
            PyObject *tmp_called_value_68;
            PyObject *tmp_expression_value_132;
            PyObject *tmp_called_value_69;
            PyObject *tmp_expression_value_133;
            PyObject *tmp_called_value_70;
            PyObject *tmp_expression_value_134;
            tmp_res = PyDict_SetItem(tmp_assign_source_6, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 199;

                goto dict_build_exception_2;
            }
            tmp_called_value_39 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_called_value_39 == NULL)) {
                tmp_called_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
            }

            if (tmp_called_value_39 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 200;

                goto dict_build_exception_2;
            }
            frame_b9e6f1d6e13f118788beac7e1594940d->m_frame.f_lineno = 200;
            tmp_dict_key_2 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_39, mod_consts[216]);

            if (tmp_dict_key_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 200;

                goto dict_build_exception_2;
            }
            tmp_expression_value_103 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_103 == NULL)) {
                tmp_expression_value_103 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_103 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 200;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_103, mod_consts[217]);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 200;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_6, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 200;

                goto dict_build_exception_2;
            }
            tmp_called_value_40 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_called_value_40 == NULL)) {
                tmp_called_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
            }

            if (tmp_called_value_40 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 201;

                goto dict_build_exception_2;
            }
            frame_b9e6f1d6e13f118788beac7e1594940d->m_frame.f_lineno = 201;
            tmp_dict_key_2 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_40, mod_consts[218]);

            if (tmp_dict_key_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 201;

                goto dict_build_exception_2;
            }
            tmp_expression_value_104 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_104 == NULL)) {
                tmp_expression_value_104 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_104 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 201;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_104, mod_consts[219]);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 201;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_6, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 201;

                goto dict_build_exception_2;
            }
            tmp_called_value_41 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_called_value_41 == NULL)) {
                tmp_called_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
            }

            if (tmp_called_value_41 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 202;

                goto dict_build_exception_2;
            }
            frame_b9e6f1d6e13f118788beac7e1594940d->m_frame.f_lineno = 202;
            tmp_dict_key_2 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_41, mod_consts[220]);

            if (tmp_dict_key_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 202;

                goto dict_build_exception_2;
            }
            tmp_expression_value_105 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_105 == NULL)) {
                tmp_expression_value_105 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_105 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 202;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_105, mod_consts[221]);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 202;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_6, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 202;

                goto dict_build_exception_2;
            }
            tmp_called_value_42 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_called_value_42 == NULL)) {
                tmp_called_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
            }

            if (tmp_called_value_42 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 203;

                goto dict_build_exception_2;
            }
            frame_b9e6f1d6e13f118788beac7e1594940d->m_frame.f_lineno = 203;
            tmp_dict_key_2 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_42, mod_consts[222]);

            if (tmp_dict_key_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 203;

                goto dict_build_exception_2;
            }
            tmp_expression_value_106 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_106 == NULL)) {
                tmp_expression_value_106 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_106 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 203;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_106, mod_consts[223]);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 203;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_6, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 203;

                goto dict_build_exception_2;
            }
            tmp_called_value_43 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_called_value_43 == NULL)) {
                tmp_called_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
            }

            if (tmp_called_value_43 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 204;

                goto dict_build_exception_2;
            }
            frame_b9e6f1d6e13f118788beac7e1594940d->m_frame.f_lineno = 204;
            tmp_dict_key_2 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_43, mod_consts[224]);

            if (tmp_dict_key_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 204;

                goto dict_build_exception_2;
            }
            tmp_expression_value_107 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_107 == NULL)) {
                tmp_expression_value_107 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_107 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 204;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_107, mod_consts[225]);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 204;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_6, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 204;

                goto dict_build_exception_2;
            }
            tmp_called_value_44 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_called_value_44 == NULL)) {
                tmp_called_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
            }

            if (tmp_called_value_44 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 205;

                goto dict_build_exception_2;
            }
            frame_b9e6f1d6e13f118788beac7e1594940d->m_frame.f_lineno = 205;
            tmp_dict_key_2 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_44, mod_consts[226]);

            if (tmp_dict_key_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 205;

                goto dict_build_exception_2;
            }
            tmp_expression_value_108 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_108 == NULL)) {
                tmp_expression_value_108 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_108 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 205;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_108, mod_consts[227]);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 205;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_6, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 205;

                goto dict_build_exception_2;
            }
            tmp_called_value_45 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_called_value_45 == NULL)) {
                tmp_called_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
            }

            if (tmp_called_value_45 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 206;

                goto dict_build_exception_2;
            }
            frame_b9e6f1d6e13f118788beac7e1594940d->m_frame.f_lineno = 206;
            tmp_dict_key_2 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_45, mod_consts[228]);

            if (tmp_dict_key_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 206;

                goto dict_build_exception_2;
            }
            tmp_expression_value_109 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_109 == NULL)) {
                tmp_expression_value_109 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_109 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 206;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_109, mod_consts[229]);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 206;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_6, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 206;

                goto dict_build_exception_2;
            }
            tmp_called_value_46 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_called_value_46 == NULL)) {
                tmp_called_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
            }

            if (tmp_called_value_46 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 207;

                goto dict_build_exception_2;
            }
            frame_b9e6f1d6e13f118788beac7e1594940d->m_frame.f_lineno = 207;
            tmp_dict_key_2 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_46, mod_consts[230]);

            if (tmp_dict_key_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 207;

                goto dict_build_exception_2;
            }
            tmp_expression_value_110 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_110 == NULL)) {
                tmp_expression_value_110 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_110 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 207;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_110, mod_consts[231]);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 207;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_6, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 207;

                goto dict_build_exception_2;
            }
            tmp_called_value_47 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_called_value_47 == NULL)) {
                tmp_called_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
            }

            if (tmp_called_value_47 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 208;

                goto dict_build_exception_2;
            }
            frame_b9e6f1d6e13f118788beac7e1594940d->m_frame.f_lineno = 208;
            tmp_dict_key_2 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_47, mod_consts[11]);

            if (tmp_dict_key_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 208;

                goto dict_build_exception_2;
            }
            tmp_expression_value_111 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_111 == NULL)) {
                tmp_expression_value_111 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_111 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 208;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_111, mod_consts[232]);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 208;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_6, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 208;

                goto dict_build_exception_2;
            }
            tmp_called_value_48 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_called_value_48 == NULL)) {
                tmp_called_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
            }

            if (tmp_called_value_48 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 209;

                goto dict_build_exception_2;
            }
            frame_b9e6f1d6e13f118788beac7e1594940d->m_frame.f_lineno = 209;
            tmp_dict_key_2 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_48, mod_consts[233]);

            if (tmp_dict_key_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 209;

                goto dict_build_exception_2;
            }
            tmp_expression_value_112 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_112 == NULL)) {
                tmp_expression_value_112 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_112 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 209;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_112, mod_consts[234]);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 209;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_6, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 209;

                goto dict_build_exception_2;
            }
            tmp_called_value_49 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_called_value_49 == NULL)) {
                tmp_called_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
            }

            if (tmp_called_value_49 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 210;

                goto dict_build_exception_2;
            }
            frame_b9e6f1d6e13f118788beac7e1594940d->m_frame.f_lineno = 210;
            tmp_dict_key_2 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_49, mod_consts[235]);

            if (tmp_dict_key_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 210;

                goto dict_build_exception_2;
            }
            tmp_expression_value_113 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_113 == NULL)) {
                tmp_expression_value_113 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_113 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 210;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_113, mod_consts[236]);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 210;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_6, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 210;

                goto dict_build_exception_2;
            }
            tmp_called_value_50 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_called_value_50 == NULL)) {
                tmp_called_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
            }

            if (tmp_called_value_50 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 211;

                goto dict_build_exception_2;
            }
            frame_b9e6f1d6e13f118788beac7e1594940d->m_frame.f_lineno = 211;
            tmp_dict_key_2 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_50, mod_consts[237]);

            if (tmp_dict_key_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 211;

                goto dict_build_exception_2;
            }
            tmp_expression_value_114 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_114 == NULL)) {
                tmp_expression_value_114 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_114 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 211;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_114, mod_consts[238]);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 211;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_6, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 211;

                goto dict_build_exception_2;
            }
            tmp_called_value_51 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_called_value_51 == NULL)) {
                tmp_called_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
            }

            if (tmp_called_value_51 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 212;

                goto dict_build_exception_2;
            }
            frame_b9e6f1d6e13f118788beac7e1594940d->m_frame.f_lineno = 212;
            tmp_dict_key_2 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_51, mod_consts[239]);

            if (tmp_dict_key_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 212;

                goto dict_build_exception_2;
            }
            tmp_expression_value_115 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_115 == NULL)) {
                tmp_expression_value_115 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_115 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 212;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_115, mod_consts[240]);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 212;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_6, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 212;

                goto dict_build_exception_2;
            }
            tmp_called_value_52 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_called_value_52 == NULL)) {
                tmp_called_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
            }

            if (tmp_called_value_52 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 213;

                goto dict_build_exception_2;
            }
            frame_b9e6f1d6e13f118788beac7e1594940d->m_frame.f_lineno = 213;
            tmp_dict_key_2 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_52, mod_consts[241]);

            if (tmp_dict_key_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 213;

                goto dict_build_exception_2;
            }
            tmp_expression_value_116 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_116 == NULL)) {
                tmp_expression_value_116 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_116 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 213;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_116, mod_consts[242]);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 213;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_6, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 213;

                goto dict_build_exception_2;
            }
            tmp_called_value_53 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_called_value_53 == NULL)) {
                tmp_called_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
            }

            if (tmp_called_value_53 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 214;

                goto dict_build_exception_2;
            }
            frame_b9e6f1d6e13f118788beac7e1594940d->m_frame.f_lineno = 214;
            tmp_dict_key_2 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_53, mod_consts[243]);

            if (tmp_dict_key_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 214;

                goto dict_build_exception_2;
            }
            tmp_expression_value_117 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_117 == NULL)) {
                tmp_expression_value_117 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_117 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 214;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_117, mod_consts[244]);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 214;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_6, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 214;

                goto dict_build_exception_2;
            }
            tmp_called_value_54 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_called_value_54 == NULL)) {
                tmp_called_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
            }

            if (tmp_called_value_54 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 215;

                goto dict_build_exception_2;
            }
            frame_b9e6f1d6e13f118788beac7e1594940d->m_frame.f_lineno = 215;
            tmp_dict_key_2 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_54, mod_consts[245]);

            if (tmp_dict_key_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 215;

                goto dict_build_exception_2;
            }
            tmp_expression_value_118 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_118 == NULL)) {
                tmp_expression_value_118 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_118 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 215;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_118, mod_consts[246]);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 215;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_6, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 215;

                goto dict_build_exception_2;
            }
            tmp_called_value_55 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_called_value_55 == NULL)) {
                tmp_called_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
            }

            if (tmp_called_value_55 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 216;

                goto dict_build_exception_2;
            }
            frame_b9e6f1d6e13f118788beac7e1594940d->m_frame.f_lineno = 216;
            tmp_dict_key_2 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_55, mod_consts[247]);

            if (tmp_dict_key_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 216;

                goto dict_build_exception_2;
            }
            tmp_expression_value_119 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_119 == NULL)) {
                tmp_expression_value_119 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_119 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 216;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_119, mod_consts[248]);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 216;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_6, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 216;

                goto dict_build_exception_2;
            }
            tmp_called_value_56 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_called_value_56 == NULL)) {
                tmp_called_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
            }

            if (tmp_called_value_56 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 217;

                goto dict_build_exception_2;
            }
            frame_b9e6f1d6e13f118788beac7e1594940d->m_frame.f_lineno = 217;
            tmp_dict_key_2 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_56, mod_consts[249]);

            if (tmp_dict_key_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 217;

                goto dict_build_exception_2;
            }
            tmp_expression_value_120 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_120 == NULL)) {
                tmp_expression_value_120 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_120 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 217;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_120, mod_consts[250]);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 217;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_6, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 217;

                goto dict_build_exception_2;
            }
            tmp_called_value_57 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_called_value_57 == NULL)) {
                tmp_called_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
            }

            if (tmp_called_value_57 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 218;

                goto dict_build_exception_2;
            }
            frame_b9e6f1d6e13f118788beac7e1594940d->m_frame.f_lineno = 218;
            tmp_dict_key_2 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_57, mod_consts[251]);

            if (tmp_dict_key_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 218;

                goto dict_build_exception_2;
            }
            tmp_expression_value_121 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_121 == NULL)) {
                tmp_expression_value_121 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_121 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 218;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_121, mod_consts[252]);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 218;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_6, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 218;

                goto dict_build_exception_2;
            }
            tmp_called_value_58 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_called_value_58 == NULL)) {
                tmp_called_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
            }

            if (tmp_called_value_58 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 219;

                goto dict_build_exception_2;
            }
            frame_b9e6f1d6e13f118788beac7e1594940d->m_frame.f_lineno = 219;
            tmp_dict_key_2 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_58, mod_consts[253]);

            if (tmp_dict_key_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 219;

                goto dict_build_exception_2;
            }
            tmp_expression_value_122 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_122 == NULL)) {
                tmp_expression_value_122 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_122 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 219;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_122, mod_consts[254]);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 219;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_6, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 219;

                goto dict_build_exception_2;
            }
            tmp_called_value_59 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_called_value_59 == NULL)) {
                tmp_called_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
            }

            if (tmp_called_value_59 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 220;

                goto dict_build_exception_2;
            }
            frame_b9e6f1d6e13f118788beac7e1594940d->m_frame.f_lineno = 220;
            tmp_dict_key_2 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_59, mod_consts[255]);

            if (tmp_dict_key_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 220;

                goto dict_build_exception_2;
            }
            tmp_expression_value_123 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_123 == NULL)) {
                tmp_expression_value_123 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_123 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 220;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_123, mod_consts[256]);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 220;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_6, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 220;

                goto dict_build_exception_2;
            }
            tmp_called_value_60 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_called_value_60 == NULL)) {
                tmp_called_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
            }

            if (tmp_called_value_60 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 221;

                goto dict_build_exception_2;
            }
            frame_b9e6f1d6e13f118788beac7e1594940d->m_frame.f_lineno = 221;
            tmp_dict_key_2 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_60, mod_consts[257]);

            if (tmp_dict_key_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 221;

                goto dict_build_exception_2;
            }
            tmp_expression_value_124 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_124 == NULL)) {
                tmp_expression_value_124 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_124 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 221;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_124, mod_consts[258]);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 221;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_6, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 221;

                goto dict_build_exception_2;
            }
            tmp_called_value_61 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_called_value_61 == NULL)) {
                tmp_called_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
            }

            if (tmp_called_value_61 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 222;

                goto dict_build_exception_2;
            }
            frame_b9e6f1d6e13f118788beac7e1594940d->m_frame.f_lineno = 222;
            tmp_dict_key_2 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_61, mod_consts[259]);

            if (tmp_dict_key_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 222;

                goto dict_build_exception_2;
            }
            tmp_expression_value_125 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_125 == NULL)) {
                tmp_expression_value_125 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_125 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 222;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_125, mod_consts[260]);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 222;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_6, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 222;

                goto dict_build_exception_2;
            }
            tmp_called_value_62 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_called_value_62 == NULL)) {
                tmp_called_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
            }

            if (tmp_called_value_62 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 223;

                goto dict_build_exception_2;
            }
            frame_b9e6f1d6e13f118788beac7e1594940d->m_frame.f_lineno = 223;
            tmp_dict_key_2 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_62, mod_consts[261]);

            if (tmp_dict_key_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 223;

                goto dict_build_exception_2;
            }
            tmp_expression_value_126 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_126 == NULL)) {
                tmp_expression_value_126 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_126 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 223;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_126, mod_consts[262]);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 223;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_6, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 223;

                goto dict_build_exception_2;
            }
            tmp_called_value_63 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_called_value_63 == NULL)) {
                tmp_called_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
            }

            if (tmp_called_value_63 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 224;

                goto dict_build_exception_2;
            }
            frame_b9e6f1d6e13f118788beac7e1594940d->m_frame.f_lineno = 224;
            tmp_dict_key_2 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_63, mod_consts[263]);

            if (tmp_dict_key_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 224;

                goto dict_build_exception_2;
            }
            tmp_expression_value_127 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_127 == NULL)) {
                tmp_expression_value_127 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_127 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 224;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_127, mod_consts[264]);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 224;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_6, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 224;

                goto dict_build_exception_2;
            }
            tmp_called_value_64 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_called_value_64 == NULL)) {
                tmp_called_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
            }

            if (tmp_called_value_64 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 225;

                goto dict_build_exception_2;
            }
            frame_b9e6f1d6e13f118788beac7e1594940d->m_frame.f_lineno = 225;
            tmp_dict_key_2 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_64, mod_consts[265]);

            if (tmp_dict_key_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 225;

                goto dict_build_exception_2;
            }
            tmp_expression_value_128 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_128 == NULL)) {
                tmp_expression_value_128 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_128 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 225;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_128, mod_consts[266]);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 225;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_6, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 225;

                goto dict_build_exception_2;
            }
            tmp_called_value_65 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_called_value_65 == NULL)) {
                tmp_called_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
            }

            if (tmp_called_value_65 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 226;

                goto dict_build_exception_2;
            }
            frame_b9e6f1d6e13f118788beac7e1594940d->m_frame.f_lineno = 226;
            tmp_dict_key_2 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_65, mod_consts[267]);

            if (tmp_dict_key_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 226;

                goto dict_build_exception_2;
            }
            tmp_expression_value_129 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_129 == NULL)) {
                tmp_expression_value_129 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_129 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 226;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_129, mod_consts[268]);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 226;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_6, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 226;

                goto dict_build_exception_2;
            }
            tmp_called_value_66 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_called_value_66 == NULL)) {
                tmp_called_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
            }

            if (tmp_called_value_66 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 227;

                goto dict_build_exception_2;
            }
            frame_b9e6f1d6e13f118788beac7e1594940d->m_frame.f_lineno = 227;
            tmp_dict_key_2 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_66, mod_consts[267]);

            if (tmp_dict_key_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 227;

                goto dict_build_exception_2;
            }
            tmp_expression_value_130 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_130 == NULL)) {
                tmp_expression_value_130 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_130 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 227;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_130, mod_consts[269]);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 227;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_6, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 227;

                goto dict_build_exception_2;
            }
            tmp_called_value_67 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_called_value_67 == NULL)) {
                tmp_called_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
            }

            if (tmp_called_value_67 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 228;

                goto dict_build_exception_2;
            }
            frame_b9e6f1d6e13f118788beac7e1594940d->m_frame.f_lineno = 228;
            tmp_dict_key_2 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_67, mod_consts[270]);

            if (tmp_dict_key_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 228;

                goto dict_build_exception_2;
            }
            tmp_expression_value_131 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_131 == NULL)) {
                tmp_expression_value_131 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_131 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 228;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_131, mod_consts[271]);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 228;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_6, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 228;

                goto dict_build_exception_2;
            }
            tmp_called_value_68 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_called_value_68 == NULL)) {
                tmp_called_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
            }

            if (tmp_called_value_68 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 229;

                goto dict_build_exception_2;
            }
            frame_b9e6f1d6e13f118788beac7e1594940d->m_frame.f_lineno = 229;
            tmp_dict_key_2 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_68, mod_consts[272]);

            if (tmp_dict_key_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 229;

                goto dict_build_exception_2;
            }
            tmp_expression_value_132 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_132 == NULL)) {
                tmp_expression_value_132 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_132 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 229;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_132, mod_consts[273]);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 229;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_6, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 229;

                goto dict_build_exception_2;
            }
            tmp_called_value_69 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_called_value_69 == NULL)) {
                tmp_called_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
            }

            if (tmp_called_value_69 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 230;

                goto dict_build_exception_2;
            }
            frame_b9e6f1d6e13f118788beac7e1594940d->m_frame.f_lineno = 230;
            tmp_dict_key_2 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_69, mod_consts[274]);

            if (tmp_dict_key_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 230;

                goto dict_build_exception_2;
            }
            tmp_expression_value_133 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_133 == NULL)) {
                tmp_expression_value_133 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_133 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 230;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_133, mod_consts[275]);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 230;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_6, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 230;

                goto dict_build_exception_2;
            }
            tmp_called_value_70 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_called_value_70 == NULL)) {
                tmp_called_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
            }

            if (tmp_called_value_70 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 231;

                goto dict_build_exception_2;
            }
            frame_b9e6f1d6e13f118788beac7e1594940d->m_frame.f_lineno = 231;
            tmp_dict_key_2 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_70, mod_consts[276]);

            if (tmp_dict_key_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 231;

                goto dict_build_exception_2;
            }
            tmp_expression_value_134 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_134 == NULL)) {
                tmp_expression_value_134 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
            }

            if (tmp_expression_value_134 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 231;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_134, mod_consts[277]);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 231;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_6, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 231;

                goto dict_build_exception_2;
            }
        }
        goto dict_build_noexception_2;
        // Exception handling pass through code for dict_build:
        dict_build_exception_2:;
        Py_DECREF(tmp_assign_source_6);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_2:;
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)mod_consts[278], tmp_assign_source_6);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b9e6f1d6e13f118788beac7e1594940d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b9e6f1d6e13f118788beac7e1594940d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b9e6f1d6e13f118788beac7e1594940d, exception_lineno);
    }



    assertFrameObject(frame_b9e6f1d6e13f118788beac7e1594940d);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("pyglet.libs.win32.winkey", false);

    Py_INCREF(module_pyglet$libs$win32$winkey);
    return module_pyglet$libs$win32$winkey;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$win32$winkey, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("pyglet$libs$win32$winkey", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
