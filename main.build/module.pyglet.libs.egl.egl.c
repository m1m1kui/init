/* Generated code for Python module 'pyglet.libs.egl.egl'
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

/* The "module_pyglet$libs$egl$egl" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pyglet$libs$egl$egl;
PyDictObject *moduledict_pyglet$libs$egl$egl;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[462];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[462];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("pyglet.libs.egl.egl"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 462; i++) {
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
void checkModuleConstants_pyglet$libs$egl$egl(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 462; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_b732d78f929796a32e47289708183a77;
static PyCodeObject *codeobj_46af44d0ac154d2412de022c374babf2;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[458]); CHECK_OBJECT(module_filename_obj);
    codeobj_b732d78f929796a32e47289708183a77 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[459], mod_consts[459], NULL, NULL, 0, 0, 0);
    codeobj_46af44d0ac154d2412de022c374babf2 = MAKE_CODE_OBJECT(module_filename_obj, 99, CO_NOFREE, mod_consts[158], mod_consts[158], mod_consts[460], NULL, 0, 0, 0);
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

function_impl_code functable_pyglet$libs$egl$egl[] = {

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

    function_impl_code *current = functable_pyglet$libs$egl$egl;
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

    if (offset > sizeof(functable_pyglet$libs$egl$egl) || offset < 0) {
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
        functable_pyglet$libs$egl$egl[offset],
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
        module_pyglet$libs$egl$egl,
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
PyObject *modulecode_pyglet$libs$egl$egl(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("pyglet.libs.egl.egl");

    // Store the module for future use.
    module_pyglet$libs$egl$egl = module;

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
        PRINT_STRING("pyglet.libs.egl.egl: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("pyglet.libs.egl.egl: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initpyglet$libs$egl$egl\n");

    moduledict_pyglet$libs$egl$egl = MODULE_DICT(module_pyglet$libs$egl$egl);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(tstate, loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_pyglet$libs$egl$egl,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_pyglet$libs$egl$egl,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[461]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_pyglet$libs$egl$egl,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_pyglet$libs$egl$egl,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_pyglet$libs$egl$egl,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_pyglet$libs$egl$egl);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_pyglet$libs$egl$egl);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
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
    struct Nuitka_FrameObject *frame_b732d78f929796a32e47289708183a77;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *locals_pyglet$libs$egl$egl$$$class__1_struct__XDisplay_99 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_46af44d0ac154d2412de022c374babf2_2;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[0];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_2);
    }
    frame_b732d78f929796a32e47289708183a77 = MAKE_MODULE_FRAME(codeobj_b732d78f929796a32e47289708183a77, module_pyglet$libs$egl$egl);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_b732d78f929796a32e47289708183a77);
    assert(Py_REFCNT(frame_b732d78f929796a32e47289708183a77) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[3]);

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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[3]);

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
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_3);
    }
    {
        PyObject *tmp_star_imported_1;
        tmp_star_imported_1 = IMPORT_HARD_CTYPES();
        assert(!(tmp_star_imported_1 == NULL));
        tmp_result = IMPORT_MODULE_STAR(tstate, module_pyglet$libs$egl$egl, true, tmp_star_imported_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[7];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_pyglet$libs$egl$egl;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[8];
        frame_b732d78f929796a32e47289708183a77->m_frame.f_lineno = 10;
        tmp_assign_source_4 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[9], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        assert(!(tmp_expression_value_1 == NULL));
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[10]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        frame_b732d78f929796a32e47289708183a77->m_frame.f_lineno = 12;
        tmp_assign_source_5 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_1,
            mod_consts[11],
            PyTuple_GET_ITEM(mod_consts[12], 0)
        );

        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[13], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = mod_consts[14];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = mod_consts[14];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[16], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = mod_consts[14];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_assign_source_9 == NULL)) {
            tmp_assign_source_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        frame_b732d78f929796a32e47289708183a77->m_frame.f_lineno = 19;
        tmp_assign_source_10 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_1, mod_consts[21]);

        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_value_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        frame_b732d78f929796a32e47289708183a77->m_frame.f_lineno = 20;
        tmp_assign_source_11 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_2, mod_consts[21]);

        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_value_3;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        frame_b732d78f929796a32e47289708183a77->m_frame.f_lineno = 21;
        tmp_assign_source_12 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_3, mod_consts[21]);

        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[24], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_value_4;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        frame_b732d78f929796a32e47289708183a77->m_frame.f_lineno = 22;
        tmp_assign_source_13 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_4, mod_consts[21]);

        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[25], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_value_5;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        frame_b732d78f929796a32e47289708183a77->m_frame.f_lineno = 23;
        tmp_assign_source_14 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_5, mod_consts[21]);

        if (tmp_assign_source_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[27], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = mod_consts[28];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[29], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = mod_consts[30];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = mod_consts[32];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = mod_consts[34];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[35], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = mod_consts[36];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = mod_consts[38];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = mod_consts[40];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = mod_consts[42];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = mod_consts[44];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        tmp_assign_source_24 = mod_consts[46];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[47], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        tmp_assign_source_25 = mod_consts[48];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = mod_consts[50];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[51], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = mod_consts[52];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        tmp_assign_source_28 = mod_consts[54];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        tmp_assign_source_29 = mod_consts[56];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[57], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = mod_consts[58];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        tmp_assign_source_31 = mod_consts[60];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[61], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        tmp_assign_source_32 = mod_consts[62];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        tmp_assign_source_33 = mod_consts[64];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[65], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = mod_consts[66];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        tmp_assign_source_35 = mod_consts[68];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[69], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        tmp_assign_source_36 = mod_consts[8];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[70], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;
        tmp_assign_source_37 = mod_consts[71];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[72], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;
        tmp_assign_source_38 = mod_consts[73];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[74], tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;
        tmp_assign_source_39 = mod_consts[75];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;
        tmp_assign_source_40 = mod_consts[77];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[78], tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_41;
        tmp_assign_source_41 = mod_consts[79];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[80], tmp_assign_source_41);
    }
    {
        PyObject *tmp_assign_source_42;
        tmp_assign_source_42 = mod_consts[81];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[82], tmp_assign_source_42);
    }
    {
        PyObject *tmp_assign_source_43;
        tmp_assign_source_43 = mod_consts[83];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[84], tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;
        tmp_assign_source_44 = mod_consts[85];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[86], tmp_assign_source_44);
    }
    {
        PyObject *tmp_assign_source_45;
        tmp_assign_source_45 = mod_consts[87];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[88], tmp_assign_source_45);
    }
    {
        PyObject *tmp_assign_source_46;
        tmp_assign_source_46 = mod_consts[89];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[90], tmp_assign_source_46);
    }
    {
        PyObject *tmp_assign_source_47;
        tmp_assign_source_47 = mod_consts[91];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[92], tmp_assign_source_47);
    }
    {
        PyObject *tmp_assign_source_48;
        tmp_assign_source_48 = mod_consts[93];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[94], tmp_assign_source_48);
    }
    {
        PyObject *tmp_assign_source_49;
        tmp_assign_source_49 = mod_consts[95];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[96], tmp_assign_source_49);
    }
    {
        PyObject *tmp_assign_source_50;
        tmp_assign_source_50 = mod_consts[14];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[97], tmp_assign_source_50);
    }
    {
        PyObject *tmp_assign_source_51;
        tmp_assign_source_51 = mod_consts[98];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[99], tmp_assign_source_51);
    }
    {
        PyObject *tmp_assign_source_52;
        tmp_assign_source_52 = mod_consts[100];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[101], tmp_assign_source_52);
    }
    {
        PyObject *tmp_assign_source_53;
        tmp_assign_source_53 = mod_consts[102];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[103], tmp_assign_source_53);
    }
    {
        PyObject *tmp_assign_source_54;
        tmp_assign_source_54 = mod_consts[104];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[105], tmp_assign_source_54);
    }
    {
        PyObject *tmp_assign_source_55;
        tmp_assign_source_55 = mod_consts[106];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[107], tmp_assign_source_55);
    }
    {
        PyObject *tmp_assign_source_56;
        tmp_assign_source_56 = mod_consts[108];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[109], tmp_assign_source_56);
    }
    {
        PyObject *tmp_assign_source_57;
        tmp_assign_source_57 = mod_consts[110];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[111], tmp_assign_source_57);
    }
    {
        PyObject *tmp_assign_source_58;
        tmp_assign_source_58 = mod_consts[112];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[113], tmp_assign_source_58);
    }
    {
        PyObject *tmp_assign_source_59;
        tmp_assign_source_59 = mod_consts[114];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[115], tmp_assign_source_59);
    }
    {
        PyObject *tmp_assign_source_60;
        tmp_assign_source_60 = mod_consts[116];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[117], tmp_assign_source_60);
    }
    {
        PyObject *tmp_assign_source_61;
        tmp_assign_source_61 = mod_consts[118];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[119], tmp_assign_source_61);
    }
    {
        PyObject *tmp_assign_source_62;
        tmp_assign_source_62 = mod_consts[120];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[121], tmp_assign_source_62);
    }
    {
        PyObject *tmp_assign_source_63;
        tmp_assign_source_63 = mod_consts[122];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[123], tmp_assign_source_63);
    }
    {
        PyObject *tmp_assign_source_64;
        tmp_assign_source_64 = mod_consts[124];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[125], tmp_assign_source_64);
    }
    {
        PyObject *tmp_assign_source_65;
        tmp_assign_source_65 = mod_consts[14];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[126], tmp_assign_source_65);
    }
    {
        PyObject *tmp_assign_source_66;
        tmp_assign_source_66 = mod_consts[127];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[128], tmp_assign_source_66);
    }
    {
        PyObject *tmp_assign_source_67;
        tmp_assign_source_67 = mod_consts[129];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[130], tmp_assign_source_67);
    }
    {
        PyObject *tmp_assign_source_68;
        tmp_assign_source_68 = mod_consts[131];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[132], tmp_assign_source_68);
    }
    {
        PyObject *tmp_assign_source_69;
        tmp_assign_source_69 = mod_consts[133];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[134], tmp_assign_source_69);
    }
    {
        PyObject *tmp_assign_source_70;
        tmp_assign_source_70 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[135]);

        if (unlikely(tmp_assign_source_70 == NULL)) {
            tmp_assign_source_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[135]);
        }

        if (tmp_assign_source_70 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[136], tmp_assign_source_70);
    }
    {
        PyObject *tmp_assign_source_71;
        tmp_assign_source_71 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[136]);

        if (unlikely(tmp_assign_source_71 == NULL)) {
            tmp_assign_source_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[136]);
        }

        assert(!(tmp_assign_source_71 == NULL));
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[137], tmp_assign_source_71);
    }
    {
        PyObject *tmp_assign_source_72;
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_called_value_7;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_called_value_8;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_called_value_9;
        PyObject *tmp_args_element_value_9;
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_args_element_value_2 == NULL)) {
            tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto frame_exception_exit_1;
        }
        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_7 == NULL)) {
            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[137]);

        if (unlikely(tmp_args_element_value_4 == NULL)) {
            tmp_args_element_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[137]);
        }

        assert(!(tmp_args_element_value_4 == NULL));
        frame_b732d78f929796a32e47289708183a77->m_frame.f_lineno = 81;
        tmp_args_element_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_4);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto frame_exception_exit_1;
        }
        tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_8 == NULL)) {
            tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        if (tmp_called_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_3);

            exception_lineno = 81;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_6 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_args_element_value_6 == NULL)) {
            tmp_args_element_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
        }

        if (tmp_args_element_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_3);

            exception_lineno = 81;

            goto frame_exception_exit_1;
        }
        frame_b732d78f929796a32e47289708183a77->m_frame.f_lineno = 81;
        tmp_args_element_value_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_6);
        if (tmp_args_element_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_3);

            exception_lineno = 81;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_7 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[137]);

        if (unlikely(tmp_args_element_value_7 == NULL)) {
            tmp_args_element_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[137]);
        }

        if (tmp_args_element_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_5);

            exception_lineno = 81;

            goto frame_exception_exit_1;
        }
        tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_9 == NULL)) {
            tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        if (tmp_called_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_5);

            exception_lineno = 81;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_9 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[137]);

        if (unlikely(tmp_args_element_value_9 == NULL)) {
            tmp_args_element_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[137]);
        }

        if (tmp_args_element_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_5);

            exception_lineno = 81;

            goto frame_exception_exit_1;
        }
        frame_b732d78f929796a32e47289708183a77->m_frame.f_lineno = 81;
        tmp_args_element_value_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_9);
        if (tmp_args_element_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_5);

            exception_lineno = 81;

            goto frame_exception_exit_1;
        }
        frame_b732d78f929796a32e47289708183a77->m_frame.f_lineno = 81;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_5, tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_assign_source_72 = CALL_FUNCTION_WITH_ARGS6(tstate, tmp_called_value_6, call_args);
        }

        Py_DECREF(tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_5);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_assign_source_72 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[138], tmp_assign_source_72);
    }
    {
        PyObject *tmp_assign_source_73;
        tmp_assign_source_73 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[139]);

        if (unlikely(tmp_assign_source_73 == NULL)) {
            tmp_assign_source_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[139]);
        }

        if (tmp_assign_source_73 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[140], tmp_assign_source_73);
    }
    {
        PyObject *tmp_assign_source_74;
        tmp_assign_source_74 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[140]);

        if (unlikely(tmp_assign_source_74 == NULL)) {
            tmp_assign_source_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[140]);
        }

        assert(!(tmp_assign_source_74 == NULL));
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[141], tmp_assign_source_74);
    }
    {
        PyObject *tmp_assign_source_75;
        tmp_assign_source_75 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[141]);

        if (unlikely(tmp_assign_source_75 == NULL)) {
            tmp_assign_source_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[141]);
        }

        assert(!(tmp_assign_source_75 == NULL));
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[142], tmp_assign_source_75);
    }
    {
        PyObject *tmp_assign_source_76;
        PyObject *tmp_called_value_10;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_args_element_value_13;
        tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_10 == NULL)) {
            tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_called_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_10 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_args_element_value_10 == NULL)) {
            tmp_args_element_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
        }

        if (tmp_args_element_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_11 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_args_element_value_11 == NULL)) {
            tmp_args_element_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_args_element_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_12 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_args_element_value_12 == NULL)) {
            tmp_args_element_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
        }

        if (tmp_args_element_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_13 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[142]);

        if (unlikely(tmp_args_element_value_13 == NULL)) {
            tmp_args_element_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[142]);
        }

        assert(!(tmp_args_element_value_13 == NULL));
        frame_b732d78f929796a32e47289708183a77->m_frame.f_lineno = 85;
        {
            PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13};
            tmp_assign_source_76 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_10, call_args);
        }

        if (tmp_assign_source_76 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[143], tmp_assign_source_76);
    }
    {
        PyObject *tmp_assign_source_77;
        PyObject *tmp_called_value_11;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_called_value_12;
        PyObject *tmp_args_element_value_19;
        tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_11 == NULL)) {
            tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_called_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_14 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_args_element_value_14 == NULL)) {
            tmp_args_element_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
        }

        if (tmp_args_element_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_15 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_args_element_value_15 == NULL)) {
            tmp_args_element_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_args_element_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_16 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_args_element_value_16 == NULL)) {
            tmp_args_element_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
        }

        if (tmp_args_element_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_17 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_args_element_value_17 == NULL)) {
            tmp_args_element_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
        }

        if (tmp_args_element_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;

            goto frame_exception_exit_1;
        }
        tmp_called_value_12 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_12 == NULL)) {
            tmp_called_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        if (tmp_called_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_19 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[137]);

        if (unlikely(tmp_args_element_value_19 == NULL)) {
            tmp_args_element_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[137]);
        }

        if (tmp_args_element_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;

            goto frame_exception_exit_1;
        }
        frame_b732d78f929796a32e47289708183a77->m_frame.f_lineno = 86;
        tmp_args_element_value_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_19);
        if (tmp_args_element_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;

            goto frame_exception_exit_1;
        }
        frame_b732d78f929796a32e47289708183a77->m_frame.f_lineno = 86;
        {
            PyObject *call_args[] = {tmp_args_element_value_14, tmp_args_element_value_15, tmp_args_element_value_16, tmp_args_element_value_17, tmp_args_element_value_18};
            tmp_assign_source_77 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_11, call_args);
        }

        Py_DECREF(tmp_args_element_value_18);
        if (tmp_assign_source_77 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[144], tmp_assign_source_77);
    }
    {
        PyObject *tmp_assign_source_78;
        PyObject *tmp_called_value_13;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_args_element_value_22;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_called_value_14;
        PyObject *tmp_args_element_value_24;
        tmp_called_value_13 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_13 == NULL)) {
            tmp_called_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_called_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_20 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_args_element_value_20 == NULL)) {
            tmp_args_element_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
        }

        if (tmp_args_element_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_21 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_args_element_value_21 == NULL)) {
            tmp_args_element_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_args_element_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_22 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_args_element_value_22 == NULL)) {
            tmp_args_element_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
        }

        if (tmp_args_element_value_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto frame_exception_exit_1;
        }
        tmp_called_value_14 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_14 == NULL)) {
            tmp_called_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        if (tmp_called_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_24 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[137]);

        if (unlikely(tmp_args_element_value_24 == NULL)) {
            tmp_args_element_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[137]);
        }

        if (tmp_args_element_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto frame_exception_exit_1;
        }
        frame_b732d78f929796a32e47289708183a77->m_frame.f_lineno = 87;
        tmp_args_element_value_23 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_14, tmp_args_element_value_24);
        if (tmp_args_element_value_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto frame_exception_exit_1;
        }
        frame_b732d78f929796a32e47289708183a77->m_frame.f_lineno = 87;
        {
            PyObject *call_args[] = {tmp_args_element_value_20, tmp_args_element_value_21, tmp_args_element_value_22, tmp_args_element_value_23};
            tmp_assign_source_78 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_13, call_args);
        }

        Py_DECREF(tmp_args_element_value_23);
        if (tmp_assign_source_78 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[145], tmp_assign_source_78);
    }
    {
        PyObject *tmp_assign_source_79;
        PyObject *tmp_called_value_15;
        PyObject *tmp_args_element_value_25;
        PyObject *tmp_args_element_value_26;
        PyObject *tmp_args_element_value_27;
        PyObject *tmp_args_element_value_28;
        PyObject *tmp_args_element_value_29;
        PyObject *tmp_called_value_16;
        PyObject *tmp_args_element_value_30;
        tmp_called_value_15 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_15 == NULL)) {
            tmp_called_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_called_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_25 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_args_element_value_25 == NULL)) {
            tmp_args_element_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
        }

        if (tmp_args_element_value_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_26 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_args_element_value_26 == NULL)) {
            tmp_args_element_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_args_element_value_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_27 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_args_element_value_27 == NULL)) {
            tmp_args_element_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
        }

        if (tmp_args_element_value_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_28 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[142]);

        if (unlikely(tmp_args_element_value_28 == NULL)) {
            tmp_args_element_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[142]);
        }

        if (tmp_args_element_value_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto frame_exception_exit_1;
        }
        tmp_called_value_16 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_16 == NULL)) {
            tmp_called_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        if (tmp_called_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_30 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[137]);

        if (unlikely(tmp_args_element_value_30 == NULL)) {
            tmp_args_element_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[137]);
        }

        if (tmp_args_element_value_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto frame_exception_exit_1;
        }
        frame_b732d78f929796a32e47289708183a77->m_frame.f_lineno = 88;
        tmp_args_element_value_29 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_16, tmp_args_element_value_30);
        if (tmp_args_element_value_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto frame_exception_exit_1;
        }
        frame_b732d78f929796a32e47289708183a77->m_frame.f_lineno = 88;
        {
            PyObject *call_args[] = {tmp_args_element_value_25, tmp_args_element_value_26, tmp_args_element_value_27, tmp_args_element_value_28, tmp_args_element_value_29};
            tmp_assign_source_79 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_15, call_args);
        }

        Py_DECREF(tmp_args_element_value_29);
        if (tmp_assign_source_79 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[146], tmp_assign_source_79);
    }
    {
        PyObject *tmp_assign_source_80;
        tmp_assign_source_80 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[140]);

        if (unlikely(tmp_assign_source_80 == NULL)) {
            tmp_assign_source_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[140]);
        }

        if (tmp_assign_source_80 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[147], tmp_assign_source_80);
    }
    {
        PyObject *tmp_assign_source_81;
        tmp_assign_source_81 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[147]);

        if (unlikely(tmp_assign_source_81 == NULL)) {
            tmp_assign_source_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[147]);
        }

        assert(!(tmp_assign_source_81 == NULL));
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[148], tmp_assign_source_81);
    }
    {
        PyObject *tmp_assign_source_82;
        PyObject *tmp_called_value_17;
        PyObject *tmp_args_element_value_31;
        PyObject *tmp_args_element_value_32;
        PyObject *tmp_args_element_value_33;
        PyObject *tmp_args_element_value_34;
        PyObject *tmp_args_element_value_35;
        PyObject *tmp_called_value_18;
        PyObject *tmp_args_element_value_36;
        tmp_called_value_17 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_17 == NULL)) {
            tmp_called_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_called_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_31 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_args_element_value_31 == NULL)) {
            tmp_args_element_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
        }

        if (tmp_args_element_value_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_32 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_args_element_value_32 == NULL)) {
            tmp_args_element_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_args_element_value_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_33 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_args_element_value_33 == NULL)) {
            tmp_args_element_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
        }

        if (tmp_args_element_value_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_34 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[148]);

        if (unlikely(tmp_args_element_value_34 == NULL)) {
            tmp_args_element_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[148]);
        }

        assert(!(tmp_args_element_value_34 == NULL));
        tmp_called_value_18 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_18 == NULL)) {
            tmp_called_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        if (tmp_called_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_36 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[137]);

        if (unlikely(tmp_args_element_value_36 == NULL)) {
            tmp_args_element_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[137]);
        }

        if (tmp_args_element_value_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto frame_exception_exit_1;
        }
        frame_b732d78f929796a32e47289708183a77->m_frame.f_lineno = 91;
        tmp_args_element_value_35 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_18, tmp_args_element_value_36);
        if (tmp_args_element_value_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto frame_exception_exit_1;
        }
        frame_b732d78f929796a32e47289708183a77->m_frame.f_lineno = 91;
        {
            PyObject *call_args[] = {tmp_args_element_value_31, tmp_args_element_value_32, tmp_args_element_value_33, tmp_args_element_value_34, tmp_args_element_value_35};
            tmp_assign_source_82 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_17, call_args);
        }

        Py_DECREF(tmp_args_element_value_35);
        if (tmp_assign_source_82 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[149], tmp_assign_source_82);
    }
    {
        PyObject *tmp_assign_source_83;
        PyObject *tmp_called_value_19;
        PyObject *tmp_args_element_value_37;
        PyObject *tmp_args_element_value_38;
        PyObject *tmp_args_element_value_39;
        tmp_called_value_19 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_19 == NULL)) {
            tmp_called_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_called_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_37 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_args_element_value_37 == NULL)) {
            tmp_args_element_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
        }

        if (tmp_args_element_value_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_38 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_args_element_value_38 == NULL)) {
            tmp_args_element_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_args_element_value_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_39 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_args_element_value_39 == NULL)) {
            tmp_args_element_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
        }

        if (tmp_args_element_value_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;

            goto frame_exception_exit_1;
        }
        frame_b732d78f929796a32e47289708183a77->m_frame.f_lineno = 92;
        {
            PyObject *call_args[] = {tmp_args_element_value_37, tmp_args_element_value_38, tmp_args_element_value_39};
            tmp_assign_source_83 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_19, call_args);
        }

        if (tmp_assign_source_83 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[150], tmp_assign_source_83);
    }
    {
        PyObject *tmp_assign_source_84;
        PyObject *tmp_called_value_20;
        PyObject *tmp_args_element_value_40;
        PyObject *tmp_args_element_value_41;
        PyObject *tmp_args_element_value_42;
        tmp_called_value_20 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_20 == NULL)) {
            tmp_called_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_called_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_40 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_args_element_value_40 == NULL)) {
            tmp_args_element_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
        }

        if (tmp_args_element_value_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_41 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_args_element_value_41 == NULL)) {
            tmp_args_element_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_args_element_value_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_42 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_args_element_value_42 == NULL)) {
            tmp_args_element_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
        }

        if (tmp_args_element_value_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;

            goto frame_exception_exit_1;
        }
        frame_b732d78f929796a32e47289708183a77->m_frame.f_lineno = 93;
        {
            PyObject *call_args[] = {tmp_args_element_value_40, tmp_args_element_value_41, tmp_args_element_value_42};
            tmp_assign_source_84 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_20, call_args);
        }

        if (tmp_assign_source_84 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[151], tmp_assign_source_84);
    }
    {
        PyObject *tmp_assign_source_85;
        PyObject *tmp_called_value_21;
        PyObject *tmp_args_element_value_43;
        PyObject *tmp_args_element_value_44;
        PyObject *tmp_args_element_value_45;
        PyObject *tmp_args_element_value_46;
        PyObject *tmp_args_element_value_47;
        PyObject *tmp_called_value_22;
        PyObject *tmp_args_element_value_48;
        tmp_called_value_21 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_21 == NULL)) {
            tmp_called_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_called_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_43 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_args_element_value_43 == NULL)) {
            tmp_args_element_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
        }

        if (tmp_args_element_value_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_44 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_args_element_value_44 == NULL)) {
            tmp_args_element_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_args_element_value_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_45 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_args_element_value_45 == NULL)) {
            tmp_args_element_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
        }

        if (tmp_args_element_value_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_46 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[137]);

        if (unlikely(tmp_args_element_value_46 == NULL)) {
            tmp_args_element_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[137]);
        }

        if (tmp_args_element_value_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;

            goto frame_exception_exit_1;
        }
        tmp_called_value_22 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_22 == NULL)) {
            tmp_called_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        if (tmp_called_value_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_48 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[137]);

        if (unlikely(tmp_args_element_value_48 == NULL)) {
            tmp_args_element_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[137]);
        }

        if (tmp_args_element_value_48 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;

            goto frame_exception_exit_1;
        }
        frame_b732d78f929796a32e47289708183a77->m_frame.f_lineno = 94;
        tmp_args_element_value_47 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_22, tmp_args_element_value_48);
        if (tmp_args_element_value_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;

            goto frame_exception_exit_1;
        }
        frame_b732d78f929796a32e47289708183a77->m_frame.f_lineno = 94;
        {
            PyObject *call_args[] = {tmp_args_element_value_43, tmp_args_element_value_44, tmp_args_element_value_45, tmp_args_element_value_46, tmp_args_element_value_47};
            tmp_assign_source_85 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_21, call_args);
        }

        Py_DECREF(tmp_args_element_value_47);
        if (tmp_assign_source_85 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[152], tmp_assign_source_85);
    }
    {
        PyObject *tmp_assign_source_86;
        PyObject *tmp_called_value_23;
        PyObject *tmp_args_element_value_49;
        PyObject *tmp_args_element_value_50;
        PyObject *tmp_args_element_value_51;
        PyObject *tmp_called_value_24;
        PyObject *tmp_args_element_value_52;
        PyObject *tmp_args_element_value_53;
        PyObject *tmp_args_element_value_54;
        PyObject *tmp_called_value_25;
        PyObject *tmp_args_element_value_55;
        tmp_called_value_23 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_23 == NULL)) {
            tmp_called_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_called_value_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_49 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_args_element_value_49 == NULL)) {
            tmp_args_element_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
        }

        if (tmp_args_element_value_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_50 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_args_element_value_50 == NULL)) {
            tmp_args_element_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_args_element_value_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;

            goto frame_exception_exit_1;
        }
        tmp_called_value_24 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_24 == NULL)) {
            tmp_called_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        if (tmp_called_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_52 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_args_element_value_52 == NULL)) {
            tmp_args_element_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
        }

        if (tmp_args_element_value_52 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;

            goto frame_exception_exit_1;
        }
        frame_b732d78f929796a32e47289708183a77->m_frame.f_lineno = 95;
        tmp_args_element_value_51 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_24, tmp_args_element_value_52);
        if (tmp_args_element_value_51 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_53 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[137]);

        if (unlikely(tmp_args_element_value_53 == NULL)) {
            tmp_args_element_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[137]);
        }

        if (tmp_args_element_value_53 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_51);

            exception_lineno = 95;

            goto frame_exception_exit_1;
        }
        tmp_called_value_25 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_25 == NULL)) {
            tmp_called_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        if (tmp_called_value_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_51);

            exception_lineno = 95;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_55 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[137]);

        if (unlikely(tmp_args_element_value_55 == NULL)) {
            tmp_args_element_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[137]);
        }

        if (tmp_args_element_value_55 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_51);

            exception_lineno = 95;

            goto frame_exception_exit_1;
        }
        frame_b732d78f929796a32e47289708183a77->m_frame.f_lineno = 95;
        tmp_args_element_value_54 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_25, tmp_args_element_value_55);
        if (tmp_args_element_value_54 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_51);

            exception_lineno = 95;

            goto frame_exception_exit_1;
        }
        frame_b732d78f929796a32e47289708183a77->m_frame.f_lineno = 95;
        {
            PyObject *call_args[] = {tmp_args_element_value_49, tmp_args_element_value_50, tmp_args_element_value_51, tmp_args_element_value_53, tmp_args_element_value_54};
            tmp_assign_source_86 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_23, call_args);
        }

        Py_DECREF(tmp_args_element_value_51);
        Py_DECREF(tmp_args_element_value_54);
        if (tmp_assign_source_86 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[153], tmp_assign_source_86);
    }
    {
        PyObject *tmp_assign_source_87;
        PyObject *tmp_called_value_26;
        PyObject *tmp_args_element_value_56;
        tmp_called_value_26 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_26 == NULL)) {
            tmp_called_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_called_value_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_56 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_args_element_value_56 == NULL)) {
            tmp_args_element_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_args_element_value_56 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;

            goto frame_exception_exit_1;
        }
        frame_b732d78f929796a32e47289708183a77->m_frame.f_lineno = 96;
        tmp_assign_source_87 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_26, tmp_args_element_value_56);
        if (tmp_assign_source_87 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[154], tmp_assign_source_87);
    }
    {
        PyObject *tmp_assign_source_88;
        PyObject *tmp_called_value_27;
        PyObject *tmp_args_element_value_57;
        PyObject *tmp_args_element_value_58;
        tmp_called_value_27 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_27 == NULL)) {
            tmp_called_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_called_value_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_57 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_args_element_value_57 == NULL)) {
            tmp_args_element_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
        }

        if (tmp_args_element_value_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_58 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[137]);

        if (unlikely(tmp_args_element_value_58 == NULL)) {
            tmp_args_element_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[137]);
        }

        if (tmp_args_element_value_58 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;

            goto frame_exception_exit_1;
        }
        frame_b732d78f929796a32e47289708183a77->m_frame.f_lineno = 97;
        {
            PyObject *call_args[] = {tmp_args_element_value_57, tmp_args_element_value_58};
            tmp_assign_source_88 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_27, call_args);
        }

        if (tmp_assign_source_88 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[155], tmp_assign_source_88);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_89;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[156]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[156]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto try_except_handler_1;
        }
        tmp_assign_source_89 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_89, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_89;
    }
    {
        PyObject *tmp_assign_source_90;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_90 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_90 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_90;
    }
    {
        PyObject *tmp_assign_source_91;
        tmp_assign_source_91 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_91;
    }
    {
        PyObject *tmp_assign_source_92;
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


            exception_lineno = 99;

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
        tmp_subscript_value_1 = mod_consts[8];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto try_except_handler_1;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto try_except_handler_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_92 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_92 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_92;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_3 = tmp_class_creation_1__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_3, mod_consts[157]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

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
        PyObject *tmp_assign_source_93;
        PyObject *tmp_called_value_28;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_4 = tmp_class_creation_1__metaclass;
        tmp_called_value_28 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[157]);
        if (tmp_called_value_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto try_except_handler_1;
        }
        tmp_tuple_element_2 = mod_consts[158];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_b732d78f929796a32e47289708183a77->m_frame.f_lineno = 99;
        tmp_assign_source_93 = CALL_FUNCTION(tstate, tmp_called_value_28, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_28);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_93 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_93;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_5 = tmp_class_creation_1__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_5, mod_consts[159]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

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
        PyObject *tmp_name_value_2;
        PyObject *tmp_default_value_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[160];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_6 = tmp_class_creation_1__metaclass;
        tmp_name_value_2 = mod_consts[161];
        tmp_default_value_1 = mod_consts[162];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_6, tmp_name_value_2, tmp_default_value_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

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
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[161]);
            Py_DECREF(tmp_expression_value_7);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 99;

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


            exception_lineno = 99;

            goto try_except_handler_1;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 99;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_1;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_94;
        tmp_assign_source_94 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_94;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_95;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_pyglet$libs$egl$egl$$$class__1_struct__XDisplay_99 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[163];
        tmp_res = PyObject_SetItem(locals_pyglet$libs$egl$egl$$$class__1_struct__XDisplay_99, mod_consts[164], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto try_except_handler_3;
        }
        tmp_dictset_value = mod_consts[158];
        tmp_res = PyObject_SetItem(locals_pyglet$libs$egl$egl$$$class__1_struct__XDisplay_99, mod_consts[165], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto try_except_handler_3;
        }
        frame_46af44d0ac154d2412de022c374babf2_2 = MAKE_CLASS_FRAME(tstate, codeobj_46af44d0ac154d2412de022c374babf2, module_pyglet$libs$egl$egl, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_46af44d0ac154d2412de022c374babf2_2);
        assert(Py_REFCNT(frame_46af44d0ac154d2412de022c374babf2_2) == 2);

        // Framed code:
        tmp_dictset_value = MAKE_LIST_EMPTY(0);
        tmp_res = PyObject_SetItem(locals_pyglet$libs$egl$egl$$$class__1_struct__XDisplay_99, mod_consts[166], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_46af44d0ac154d2412de022c374babf2_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_46af44d0ac154d2412de022c374babf2_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_46af44d0ac154d2412de022c374babf2_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_46af44d0ac154d2412de022c374babf2_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_46af44d0ac154d2412de022c374babf2_2);

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


                exception_lineno = 99;

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
        tmp_res = PyObject_SetItem(locals_pyglet$libs$egl$egl$$$class__1_struct__XDisplay_99, mod_consts[167], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto try_except_handler_3;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_96;
            PyObject *tmp_called_value_29;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_29 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_4 = mod_consts[158];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_4 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = locals_pyglet$libs$egl$egl$$$class__1_struct__XDisplay_99;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_b732d78f929796a32e47289708183a77->m_frame.f_lineno = 99;
            tmp_assign_source_96 = CALL_FUNCTION(tstate, tmp_called_value_29, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_96 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 99;

                goto try_except_handler_3;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_96;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_95 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_95);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF(locals_pyglet$libs$egl$egl$$$class__1_struct__XDisplay_99);
        locals_pyglet$libs$egl$egl$$$class__1_struct__XDisplay_99 = NULL;
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

        Py_DECREF(locals_pyglet$libs$egl$egl$$$class__1_struct__XDisplay_99);
        locals_pyglet$libs$egl$egl$$$class__1_struct__XDisplay_99 = NULL;
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
        exception_lineno = 99;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[158], tmp_assign_source_95);
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
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_list_element_1;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_assattr_target_3;
        tmp_tuple_element_5 = mod_consts[168];
        tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_5);
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[169]);

        if (unlikely(tmp_tuple_element_5 == NULL)) {
            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[169]);
        }

        if (tmp_tuple_element_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;

            goto tuple_build_exception_2;
        }
        PyTuple_SET_ITEM0(tmp_list_element_1, 1, tmp_tuple_element_5);
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_list_element_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_assattr_value_3 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM(tmp_assattr_value_3, 0, tmp_list_element_1);
        tmp_assattr_target_3 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[158]);

        if (unlikely(tmp_assattr_target_3 == NULL)) {
            tmp_assattr_target_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[158]);
        }

        if (tmp_assattr_target_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_3);

            exception_lineno = 102;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[170], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_97;
        tmp_assign_source_97 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[158]);

        if (unlikely(tmp_assign_source_97 == NULL)) {
            tmp_assign_source_97 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[158]);
        }

        if (tmp_assign_source_97 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[171], tmp_assign_source_97);
    }
    {
        PyObject *tmp_assign_source_98;
        PyObject *tmp_called_value_30;
        PyObject *tmp_args_element_value_59;
        tmp_called_value_30 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_30 == NULL)) {
            tmp_called_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        if (tmp_called_value_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_59 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[171]);

        if (unlikely(tmp_args_element_value_59 == NULL)) {
            tmp_args_element_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[171]);
        }

        assert(!(tmp_args_element_value_59 == NULL));
        frame_b732d78f929796a32e47289708183a77->m_frame.f_lineno = 107;
        tmp_assign_source_98 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_30, tmp_args_element_value_59);
        if (tmp_assign_source_98 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[172], tmp_assign_source_98);
    }
    {
        PyObject *tmp_assign_source_99;
        PyObject *tmp_called_value_31;
        PyObject *tmp_args_element_value_60;
        PyObject *tmp_args_element_value_61;
        tmp_called_value_31 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_31 == NULL)) {
            tmp_called_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_called_value_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_60 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_args_element_value_60 == NULL)) {
            tmp_args_element_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_args_element_value_60 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_61 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[172]);

        if (unlikely(tmp_args_element_value_61 == NULL)) {
            tmp_args_element_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[172]);
        }

        assert(!(tmp_args_element_value_61 == NULL));
        frame_b732d78f929796a32e47289708183a77->m_frame.f_lineno = 108;
        {
            PyObject *call_args[] = {tmp_args_element_value_60, tmp_args_element_value_61};
            tmp_assign_source_99 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_31, call_args);
        }

        if (tmp_assign_source_99 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[173], tmp_assign_source_99);
    }
    {
        PyObject *tmp_assign_source_100;
        PyObject *tmp_called_value_32;
        PyObject *tmp_args_element_value_62;
        tmp_called_value_32 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_32 == NULL)) {
            tmp_called_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_called_value_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_62 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[137]);

        if (unlikely(tmp_args_element_value_62 == NULL)) {
            tmp_args_element_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[137]);
        }

        if (tmp_args_element_value_62 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto frame_exception_exit_1;
        }
        frame_b732d78f929796a32e47289708183a77->m_frame.f_lineno = 109;
        tmp_assign_source_100 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_32, tmp_args_element_value_62);
        if (tmp_assign_source_100 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[174], tmp_assign_source_100);
    }
    {
        PyObject *tmp_assign_source_101;
        PyObject *tmp_called_value_33;
        PyObject *tmp_args_element_value_63;
        PyObject *tmp_args_element_value_64;
        tmp_called_value_33 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_33 == NULL)) {
            tmp_called_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_called_value_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_63 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_args_element_value_63 == NULL)) {
            tmp_args_element_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[27]);
        }

        if (tmp_args_element_value_63 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_64 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[175]);

        if (unlikely(tmp_args_element_value_64 == NULL)) {
            tmp_args_element_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[175]);
        }

        if (tmp_args_element_value_64 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto frame_exception_exit_1;
        }
        frame_b732d78f929796a32e47289708183a77->m_frame.f_lineno = 110;
        {
            PyObject *call_args[] = {tmp_args_element_value_63, tmp_args_element_value_64};
            tmp_assign_source_101 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_33, call_args);
        }

        if (tmp_assign_source_101 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[176], tmp_assign_source_101);
    }
    {
        PyObject *tmp_assign_source_102;
        PyObject *tmp_called_value_34;
        PyObject *tmp_args_element_value_65;
        PyObject *tmp_args_element_value_66;
        PyObject *tmp_args_element_value_67;
        PyObject *tmp_called_value_35;
        PyObject *tmp_args_element_value_68;
        PyObject *tmp_args_element_value_69;
        PyObject *tmp_called_value_36;
        PyObject *tmp_args_element_value_70;
        tmp_called_value_34 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_34 == NULL)) {
            tmp_called_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_called_value_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_65 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_args_element_value_65 == NULL)) {
            tmp_args_element_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
        }

        if (tmp_args_element_value_65 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_66 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_args_element_value_66 == NULL)) {
            tmp_args_element_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_args_element_value_66 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto frame_exception_exit_1;
        }
        tmp_called_value_35 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_35 == NULL)) {
            tmp_called_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        if (tmp_called_value_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_68 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[137]);

        if (unlikely(tmp_args_element_value_68 == NULL)) {
            tmp_args_element_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[137]);
        }

        if (tmp_args_element_value_68 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto frame_exception_exit_1;
        }
        frame_b732d78f929796a32e47289708183a77->m_frame.f_lineno = 111;
        tmp_args_element_value_67 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_35, tmp_args_element_value_68);
        if (tmp_args_element_value_67 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto frame_exception_exit_1;
        }
        tmp_called_value_36 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_36 == NULL)) {
            tmp_called_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        if (tmp_called_value_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_67);

            exception_lineno = 111;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_70 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[137]);

        if (unlikely(tmp_args_element_value_70 == NULL)) {
            tmp_args_element_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[137]);
        }

        if (tmp_args_element_value_70 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_67);

            exception_lineno = 111;

            goto frame_exception_exit_1;
        }
        frame_b732d78f929796a32e47289708183a77->m_frame.f_lineno = 111;
        tmp_args_element_value_69 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_36, tmp_args_element_value_70);
        if (tmp_args_element_value_69 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_67);

            exception_lineno = 111;

            goto frame_exception_exit_1;
        }
        frame_b732d78f929796a32e47289708183a77->m_frame.f_lineno = 111;
        {
            PyObject *call_args[] = {tmp_args_element_value_65, tmp_args_element_value_66, tmp_args_element_value_67, tmp_args_element_value_69};
            tmp_assign_source_102 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_34, call_args);
        }

        Py_DECREF(tmp_args_element_value_67);
        Py_DECREF(tmp_args_element_value_69);
        if (tmp_assign_source_102 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[177], tmp_assign_source_102);
    }
    {
        PyObject *tmp_assign_source_103;
        PyObject *tmp_called_value_37;
        PyObject *tmp_args_element_value_71;
        PyObject *tmp_args_element_value_72;
        PyObject *tmp_args_element_value_73;
        PyObject *tmp_args_element_value_74;
        PyObject *tmp_args_element_value_75;
        tmp_called_value_37 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_37 == NULL)) {
            tmp_called_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_called_value_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_71 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_args_element_value_71 == NULL)) {
            tmp_args_element_value_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
        }

        if (tmp_args_element_value_71 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_72 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_args_element_value_72 == NULL)) {
            tmp_args_element_value_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_args_element_value_72 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_73 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_args_element_value_73 == NULL)) {
            tmp_args_element_value_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
        }

        if (tmp_args_element_value_73 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_74 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_args_element_value_74 == NULL)) {
            tmp_args_element_value_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
        }

        if (tmp_args_element_value_74 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_75 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_args_element_value_75 == NULL)) {
            tmp_args_element_value_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
        }

        if (tmp_args_element_value_75 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;

            goto frame_exception_exit_1;
        }
        frame_b732d78f929796a32e47289708183a77->m_frame.f_lineno = 112;
        {
            PyObject *call_args[] = {tmp_args_element_value_71, tmp_args_element_value_72, tmp_args_element_value_73, tmp_args_element_value_74, tmp_args_element_value_75};
            tmp_assign_source_103 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_37, call_args);
        }

        if (tmp_assign_source_103 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[178], tmp_assign_source_103);
    }
    {
        PyObject *tmp_assign_source_104;
        PyObject *tmp_called_value_38;
        PyObject *tmp_args_element_value_76;
        PyObject *tmp_args_element_value_77;
        PyObject *tmp_args_element_value_78;
        PyObject *tmp_args_element_value_79;
        PyObject *tmp_args_element_value_80;
        PyObject *tmp_called_value_39;
        PyObject *tmp_args_element_value_81;
        tmp_called_value_38 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_38 == NULL)) {
            tmp_called_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_called_value_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_76 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_args_element_value_76 == NULL)) {
            tmp_args_element_value_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
        }

        if (tmp_args_element_value_76 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_77 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_args_element_value_77 == NULL)) {
            tmp_args_element_value_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_args_element_value_77 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_78 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_args_element_value_78 == NULL)) {
            tmp_args_element_value_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
        }

        if (tmp_args_element_value_78 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_79 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[137]);

        if (unlikely(tmp_args_element_value_79 == NULL)) {
            tmp_args_element_value_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[137]);
        }

        if (tmp_args_element_value_79 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;

            goto frame_exception_exit_1;
        }
        tmp_called_value_39 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_39 == NULL)) {
            tmp_called_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        if (tmp_called_value_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_81 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[137]);

        if (unlikely(tmp_args_element_value_81 == NULL)) {
            tmp_args_element_value_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[137]);
        }

        if (tmp_args_element_value_81 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;

            goto frame_exception_exit_1;
        }
        frame_b732d78f929796a32e47289708183a77->m_frame.f_lineno = 113;
        tmp_args_element_value_80 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_39, tmp_args_element_value_81);
        if (tmp_args_element_value_80 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;

            goto frame_exception_exit_1;
        }
        frame_b732d78f929796a32e47289708183a77->m_frame.f_lineno = 113;
        {
            PyObject *call_args[] = {tmp_args_element_value_76, tmp_args_element_value_77, tmp_args_element_value_78, tmp_args_element_value_79, tmp_args_element_value_80};
            tmp_assign_source_104 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_38, call_args);
        }

        Py_DECREF(tmp_args_element_value_80);
        if (tmp_assign_source_104 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[179], tmp_assign_source_104);
    }
    {
        PyObject *tmp_assign_source_105;
        PyObject *tmp_called_value_40;
        PyObject *tmp_args_element_value_82;
        PyObject *tmp_args_element_value_83;
        PyObject *tmp_args_element_value_84;
        tmp_called_value_40 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_40 == NULL)) {
            tmp_called_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_called_value_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_82 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[175]);

        if (unlikely(tmp_args_element_value_82 == NULL)) {
            tmp_args_element_value_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[175]);
        }

        if (tmp_args_element_value_82 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_83 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_args_element_value_83 == NULL)) {
            tmp_args_element_value_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_args_element_value_83 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_84 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[137]);

        if (unlikely(tmp_args_element_value_84 == NULL)) {
            tmp_args_element_value_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[137]);
        }

        if (tmp_args_element_value_84 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto frame_exception_exit_1;
        }
        frame_b732d78f929796a32e47289708183a77->m_frame.f_lineno = 114;
        {
            PyObject *call_args[] = {tmp_args_element_value_82, tmp_args_element_value_83, tmp_args_element_value_84};
            tmp_assign_source_105 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_40, call_args);
        }

        if (tmp_assign_source_105 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[180], tmp_assign_source_105);
    }
    {
        PyObject *tmp_assign_source_106;
        PyObject *tmp_called_value_41;
        PyObject *tmp_args_element_value_85;
        PyObject *tmp_args_element_value_86;
        PyObject *tmp_args_element_value_87;
        PyObject *tmp_args_element_value_88;
        PyObject *tmp_args_element_value_89;
        PyObject *tmp_called_value_42;
        PyObject *tmp_args_element_value_90;
        tmp_called_value_41 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_41 == NULL)) {
            tmp_called_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_called_value_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_85 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_args_element_value_85 == NULL)) {
            tmp_args_element_value_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
        }

        if (tmp_args_element_value_85 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_86 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_args_element_value_86 == NULL)) {
            tmp_args_element_value_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_args_element_value_86 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_87 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_args_element_value_87 == NULL)) {
            tmp_args_element_value_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
        }

        if (tmp_args_element_value_87 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_88 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[137]);

        if (unlikely(tmp_args_element_value_88 == NULL)) {
            tmp_args_element_value_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[137]);
        }

        if (tmp_args_element_value_88 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;

            goto frame_exception_exit_1;
        }
        tmp_called_value_42 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_42 == NULL)) {
            tmp_called_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        if (tmp_called_value_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_90 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[137]);

        if (unlikely(tmp_args_element_value_90 == NULL)) {
            tmp_args_element_value_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[137]);
        }

        if (tmp_args_element_value_90 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;

            goto frame_exception_exit_1;
        }
        frame_b732d78f929796a32e47289708183a77->m_frame.f_lineno = 115;
        tmp_args_element_value_89 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_42, tmp_args_element_value_90);
        if (tmp_args_element_value_89 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;

            goto frame_exception_exit_1;
        }
        frame_b732d78f929796a32e47289708183a77->m_frame.f_lineno = 115;
        {
            PyObject *call_args[] = {tmp_args_element_value_85, tmp_args_element_value_86, tmp_args_element_value_87, tmp_args_element_value_88, tmp_args_element_value_89};
            tmp_assign_source_106 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_41, call_args);
        }

        Py_DECREF(tmp_args_element_value_89);
        if (tmp_assign_source_106 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[181], tmp_assign_source_106);
    }
    {
        PyObject *tmp_assign_source_107;
        PyObject *tmp_called_value_43;
        PyObject *tmp_args_element_value_91;
        PyObject *tmp_args_element_value_92;
        PyObject *tmp_args_element_value_93;
        tmp_called_value_43 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_43 == NULL)) {
            tmp_called_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_called_value_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_91 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_args_element_value_91 == NULL)) {
            tmp_args_element_value_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
        }

        if (tmp_args_element_value_91 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_92 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_args_element_value_92 == NULL)) {
            tmp_args_element_value_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_args_element_value_92 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_93 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_args_element_value_93 == NULL)) {
            tmp_args_element_value_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
        }

        if (tmp_args_element_value_93 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;

            goto frame_exception_exit_1;
        }
        frame_b732d78f929796a32e47289708183a77->m_frame.f_lineno = 116;
        {
            PyObject *call_args[] = {tmp_args_element_value_91, tmp_args_element_value_92, tmp_args_element_value_93};
            tmp_assign_source_107 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_43, call_args);
        }

        if (tmp_assign_source_107 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[182], tmp_assign_source_107);
    }
    {
        PyObject *tmp_assign_source_108;
        PyObject *tmp_called_value_44;
        PyObject *tmp_args_element_value_94;
        PyObject *tmp_args_element_value_95;
        tmp_called_value_44 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_44 == NULL)) {
            tmp_called_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_called_value_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_94 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_args_element_value_94 == NULL)) {
            tmp_args_element_value_94 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
        }

        if (tmp_args_element_value_94 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_95 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_args_element_value_95 == NULL)) {
            tmp_args_element_value_95 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_args_element_value_95 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto frame_exception_exit_1;
        }
        frame_b732d78f929796a32e47289708183a77->m_frame.f_lineno = 117;
        {
            PyObject *call_args[] = {tmp_args_element_value_94, tmp_args_element_value_95};
            tmp_assign_source_108 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_44, call_args);
        }

        if (tmp_assign_source_108 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[183], tmp_assign_source_108);
    }
    {
        PyObject *tmp_assign_source_109;
        PyObject *tmp_called_value_45;
        PyObject *tmp_args_element_value_96;
        tmp_called_value_45 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_45 == NULL)) {
            tmp_called_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_called_value_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_96 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_args_element_value_96 == NULL)) {
            tmp_args_element_value_96 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
        }

        if (tmp_args_element_value_96 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto frame_exception_exit_1;
        }
        frame_b732d78f929796a32e47289708183a77->m_frame.f_lineno = 118;
        tmp_assign_source_109 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_45, tmp_args_element_value_96);
        if (tmp_assign_source_109 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[184], tmp_assign_source_109);
    }
    {
        PyObject *tmp_assign_source_110;
        PyObject *tmp_called_value_46;
        PyObject *tmp_args_element_value_97;
        PyObject *tmp_args_element_value_98;
        tmp_called_value_46 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_46 == NULL)) {
            tmp_called_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_called_value_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_97 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_args_element_value_97 == NULL)) {
            tmp_args_element_value_97 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
        }

        if (tmp_args_element_value_97 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_98 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[137]);

        if (unlikely(tmp_args_element_value_98 == NULL)) {
            tmp_args_element_value_98 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[137]);
        }

        if (tmp_args_element_value_98 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;

            goto frame_exception_exit_1;
        }
        frame_b732d78f929796a32e47289708183a77->m_frame.f_lineno = 119;
        {
            PyObject *call_args[] = {tmp_args_element_value_97, tmp_args_element_value_98};
            tmp_assign_source_110 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_46, call_args);
        }

        if (tmp_assign_source_110 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[185], tmp_assign_source_110);
    }
    {
        PyObject *tmp_assign_source_111;
        PyObject *tmp_expression_value_8;
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_111 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[186]);
        if (tmp_assign_source_111 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[186], tmp_assign_source_111);
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        tmp_assattr_value_4 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_assattr_value_4 == NULL)) {
            tmp_assattr_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
        }

        if (tmp_assattr_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_4 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[186]);

        if (unlikely(tmp_assattr_target_4 == NULL)) {
            tmp_assattr_target_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[186]);
        }

        assert(!(tmp_assattr_target_4 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts[187], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_list_element_2;
        PyObject *tmp_assattr_target_5;
        tmp_list_element_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_list_element_2 == NULL)) {
            tmp_list_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_list_element_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_5 = MAKE_LIST_EMPTY(5);
        {
            PyObject *tmp_called_value_47;
            PyObject *tmp_args_element_value_99;
            PyObject *tmp_called_value_48;
            PyObject *tmp_args_element_value_100;
            PyObject *tmp_called_value_49;
            PyObject *tmp_args_element_value_101;
            PyList_SET_ITEM0(tmp_assattr_value_5, 0, tmp_list_element_2);
            tmp_called_value_47 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_called_value_47 == NULL)) {
                tmp_called_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
            }

            if (tmp_called_value_47 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 123;

                goto list_build_exception_1;
            }
            tmp_args_element_value_99 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[137]);

            if (unlikely(tmp_args_element_value_99 == NULL)) {
                tmp_args_element_value_99 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[137]);
            }

            if (tmp_args_element_value_99 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 123;

                goto list_build_exception_1;
            }
            frame_b732d78f929796a32e47289708183a77->m_frame.f_lineno = 123;
            tmp_list_element_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_47, tmp_args_element_value_99);
            if (tmp_list_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 123;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assattr_value_5, 1, tmp_list_element_2);
            tmp_called_value_48 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_called_value_48 == NULL)) {
                tmp_called_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
            }

            if (tmp_called_value_48 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 123;

                goto list_build_exception_1;
            }
            tmp_args_element_value_100 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_args_element_value_100 == NULL)) {
                tmp_args_element_value_100 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_args_element_value_100 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 123;

                goto list_build_exception_1;
            }
            frame_b732d78f929796a32e47289708183a77->m_frame.f_lineno = 123;
            tmp_list_element_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_48, tmp_args_element_value_100);
            if (tmp_list_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 123;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assattr_value_5, 2, tmp_list_element_2);
            tmp_list_element_2 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[137]);

            if (unlikely(tmp_list_element_2 == NULL)) {
                tmp_list_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[137]);
            }

            if (tmp_list_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 123;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM0(tmp_assattr_value_5, 3, tmp_list_element_2);
            tmp_called_value_49 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_called_value_49 == NULL)) {
                tmp_called_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
            }

            if (tmp_called_value_49 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 123;

                goto list_build_exception_1;
            }
            tmp_args_element_value_101 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[137]);

            if (unlikely(tmp_args_element_value_101 == NULL)) {
                tmp_args_element_value_101 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[137]);
            }

            if (tmp_args_element_value_101 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 123;

                goto list_build_exception_1;
            }
            frame_b732d78f929796a32e47289708183a77->m_frame.f_lineno = 123;
            tmp_list_element_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_49, tmp_args_element_value_101);
            if (tmp_list_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 123;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assattr_value_5, 4, tmp_list_element_2);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_assattr_value_5);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        tmp_assattr_target_5 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[186]);

        if (unlikely(tmp_assattr_target_5 == NULL)) {
            tmp_assattr_target_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[186]);
        }

        if (tmp_assattr_target_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_5);

            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts[188], tmp_assattr_value_5);
        Py_DECREF(tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_112;
        PyObject *tmp_expression_value_9;
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_112 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[189]);
        if (tmp_assign_source_112 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[189], tmp_assign_source_112);
    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_assattr_target_6;
        tmp_assattr_value_6 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_assattr_value_6 == NULL)) {
            tmp_assattr_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
        }

        if (tmp_assattr_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_6 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[189]);

        if (unlikely(tmp_assattr_target_6 == NULL)) {
            tmp_assattr_target_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[189]);
        }

        assert(!(tmp_assattr_target_6 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts[187], tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_7;
        PyObject *tmp_list_element_3;
        PyObject *tmp_assattr_target_7;
        tmp_list_element_3 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_list_element_3 == NULL)) {
            tmp_list_element_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_list_element_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_7 = MAKE_LIST_EMPTY(3);
        PyList_SET_ITEM0(tmp_assattr_value_7, 0, tmp_list_element_3);
        tmp_list_element_3 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_list_element_3 == NULL)) {
            tmp_list_element_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
        }

        if (tmp_list_element_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;

            goto list_build_exception_2;
        }
        PyList_SET_ITEM0(tmp_assattr_value_7, 1, tmp_list_element_3);
        tmp_list_element_3 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[142]);

        if (unlikely(tmp_list_element_3 == NULL)) {
            tmp_list_element_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[142]);
        }

        if (tmp_list_element_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;

            goto list_build_exception_2;
        }
        PyList_SET_ITEM0(tmp_assattr_value_7, 2, tmp_list_element_3);
        goto list_build_noexception_2;
        // Exception handling pass through code for list_build:
        list_build_exception_2:;
        Py_DECREF(tmp_assattr_value_7);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_2:;
        tmp_assattr_target_7 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[189]);

        if (unlikely(tmp_assattr_target_7 == NULL)) {
            tmp_assattr_target_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[189]);
        }

        if (tmp_assattr_target_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_7);

            exception_lineno = 128;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_7, mod_consts[188], tmp_assattr_value_7);
        Py_DECREF(tmp_assattr_value_7);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_113;
        PyObject *tmp_expression_value_10;
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_113 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[190]);
        if (tmp_assign_source_113 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[190], tmp_assign_source_113);
    }
    {
        PyObject *tmp_assattr_value_8;
        PyObject *tmp_assattr_target_8;
        tmp_assattr_value_8 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_assattr_value_8 == NULL)) {
            tmp_assattr_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
        }

        if (tmp_assattr_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_8 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[190]);

        if (unlikely(tmp_assattr_target_8 == NULL)) {
            tmp_assattr_target_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[190]);
        }

        assert(!(tmp_assattr_target_8 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_8, mod_consts[187], tmp_assattr_value_8);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_9;
        PyObject *tmp_list_element_4;
        PyObject *tmp_assattr_target_9;
        tmp_list_element_4 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_list_element_4 == NULL)) {
            tmp_list_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_list_element_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_9 = MAKE_LIST_EMPTY(4);
        {
            PyObject *tmp_called_value_50;
            PyObject *tmp_args_element_value_102;
            PyList_SET_ITEM0(tmp_assattr_value_9, 0, tmp_list_element_4);
            tmp_list_element_4 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_list_element_4 == NULL)) {
                tmp_list_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_list_element_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 133;

                goto list_build_exception_3;
            }
            PyList_SET_ITEM0(tmp_assattr_value_9, 1, tmp_list_element_4);
            tmp_list_element_4 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_list_element_4 == NULL)) {
                tmp_list_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
            }

            if (tmp_list_element_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 133;

                goto list_build_exception_3;
            }
            PyList_SET_ITEM0(tmp_assattr_value_9, 2, tmp_list_element_4);
            tmp_called_value_50 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_called_value_50 == NULL)) {
                tmp_called_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
            }

            if (tmp_called_value_50 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 133;

                goto list_build_exception_3;
            }
            tmp_args_element_value_102 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[137]);

            if (unlikely(tmp_args_element_value_102 == NULL)) {
                tmp_args_element_value_102 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[137]);
            }

            if (tmp_args_element_value_102 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 133;

                goto list_build_exception_3;
            }
            frame_b732d78f929796a32e47289708183a77->m_frame.f_lineno = 133;
            tmp_list_element_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_50, tmp_args_element_value_102);
            if (tmp_list_element_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 133;

                goto list_build_exception_3;
            }
            PyList_SET_ITEM(tmp_assattr_value_9, 3, tmp_list_element_4);
        }
        goto list_build_noexception_3;
        // Exception handling pass through code for list_build:
        list_build_exception_3:;
        Py_DECREF(tmp_assattr_value_9);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_3:;
        tmp_assattr_target_9 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[190]);

        if (unlikely(tmp_assattr_target_9 == NULL)) {
            tmp_assattr_target_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[190]);
        }

        if (tmp_assattr_target_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_9);

            exception_lineno = 133;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_9, mod_consts[188], tmp_assattr_value_9);
        Py_DECREF(tmp_assattr_value_9);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_114;
        PyObject *tmp_expression_value_11;
        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_11 == NULL)) {
            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_expression_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_114 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[191]);
        if (tmp_assign_source_114 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[191], tmp_assign_source_114);
    }
    {
        PyObject *tmp_assattr_value_10;
        PyObject *tmp_assattr_target_10;
        tmp_assattr_value_10 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_assattr_value_10 == NULL)) {
            tmp_assattr_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
        }

        if (tmp_assattr_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_10 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[191]);

        if (unlikely(tmp_assattr_target_10 == NULL)) {
            tmp_assattr_target_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[191]);
        }

        assert(!(tmp_assattr_target_10 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_10, mod_consts[187], tmp_assattr_value_10);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_11;
        PyObject *tmp_list_element_5;
        PyObject *tmp_assattr_target_11;
        tmp_list_element_5 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_list_element_5 == NULL)) {
            tmp_list_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_list_element_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_11 = MAKE_LIST_EMPTY(3);
        {
            PyObject *tmp_called_value_51;
            PyObject *tmp_args_element_value_103;
            PyList_SET_ITEM0(tmp_assattr_value_11, 0, tmp_list_element_5);
            tmp_list_element_5 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_list_element_5 == NULL)) {
                tmp_list_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_list_element_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;

                goto list_build_exception_4;
            }
            PyList_SET_ITEM0(tmp_assattr_value_11, 1, tmp_list_element_5);
            tmp_called_value_51 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_called_value_51 == NULL)) {
                tmp_called_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
            }

            if (tmp_called_value_51 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;

                goto list_build_exception_4;
            }
            tmp_args_element_value_103 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[137]);

            if (unlikely(tmp_args_element_value_103 == NULL)) {
                tmp_args_element_value_103 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[137]);
            }

            if (tmp_args_element_value_103 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;

                goto list_build_exception_4;
            }
            frame_b732d78f929796a32e47289708183a77->m_frame.f_lineno = 138;
            tmp_list_element_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_51, tmp_args_element_value_103);
            if (tmp_list_element_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;

                goto list_build_exception_4;
            }
            PyList_SET_ITEM(tmp_assattr_value_11, 2, tmp_list_element_5);
        }
        goto list_build_noexception_4;
        // Exception handling pass through code for list_build:
        list_build_exception_4:;
        Py_DECREF(tmp_assattr_value_11);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_4:;
        tmp_assattr_target_11 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[191]);

        if (unlikely(tmp_assattr_target_11 == NULL)) {
            tmp_assattr_target_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[191]);
        }

        if (tmp_assattr_target_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_11);

            exception_lineno = 138;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_11, mod_consts[188], tmp_assattr_value_11);
        Py_DECREF(tmp_assattr_value_11);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_115;
        PyObject *tmp_expression_value_12;
        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_12 == NULL)) {
            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_expression_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_115 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[192]);
        if (tmp_assign_source_115 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[192], tmp_assign_source_115);
    }
    {
        PyObject *tmp_assattr_value_12;
        PyObject *tmp_assattr_target_12;
        tmp_assattr_value_12 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_assattr_value_12 == NULL)) {
            tmp_assattr_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
        }

        if (tmp_assattr_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_12 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[192]);

        if (unlikely(tmp_assattr_target_12 == NULL)) {
            tmp_assattr_target_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[192]);
        }

        assert(!(tmp_assattr_target_12 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_12, mod_consts[187], tmp_assattr_value_12);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_13;
        PyObject *tmp_list_element_6;
        PyObject *tmp_assattr_target_13;
        tmp_list_element_6 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_list_element_6 == NULL)) {
            tmp_list_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_list_element_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_13 = MAKE_LIST_EMPTY(4);
        {
            PyObject *tmp_called_value_52;
            PyObject *tmp_args_element_value_104;
            PyList_SET_ITEM0(tmp_assattr_value_13, 0, tmp_list_element_6);
            tmp_list_element_6 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_list_element_6 == NULL)) {
                tmp_list_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_list_element_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 143;

                goto list_build_exception_5;
            }
            PyList_SET_ITEM0(tmp_assattr_value_13, 1, tmp_list_element_6);
            tmp_list_element_6 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[142]);

            if (unlikely(tmp_list_element_6 == NULL)) {
                tmp_list_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[142]);
            }

            if (tmp_list_element_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 143;

                goto list_build_exception_5;
            }
            PyList_SET_ITEM0(tmp_assattr_value_13, 2, tmp_list_element_6);
            tmp_called_value_52 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_called_value_52 == NULL)) {
                tmp_called_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
            }

            if (tmp_called_value_52 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 143;

                goto list_build_exception_5;
            }
            tmp_args_element_value_104 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[137]);

            if (unlikely(tmp_args_element_value_104 == NULL)) {
                tmp_args_element_value_104 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[137]);
            }

            if (tmp_args_element_value_104 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 143;

                goto list_build_exception_5;
            }
            frame_b732d78f929796a32e47289708183a77->m_frame.f_lineno = 143;
            tmp_list_element_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_52, tmp_args_element_value_104);
            if (tmp_list_element_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 143;

                goto list_build_exception_5;
            }
            PyList_SET_ITEM(tmp_assattr_value_13, 3, tmp_list_element_6);
        }
        goto list_build_noexception_5;
        // Exception handling pass through code for list_build:
        list_build_exception_5:;
        Py_DECREF(tmp_assattr_value_13);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_5:;
        tmp_assattr_target_13 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[192]);

        if (unlikely(tmp_assattr_target_13 == NULL)) {
            tmp_assattr_target_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[192]);
        }

        if (tmp_assattr_target_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_13);

            exception_lineno = 143;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_13, mod_consts[188], tmp_assattr_value_13);
        Py_DECREF(tmp_assattr_value_13);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_116;
        PyObject *tmp_expression_value_13;
        tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_13 == NULL)) {
            tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_expression_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_116 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[193]);
        if (tmp_assign_source_116 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[193], tmp_assign_source_116);
    }
    {
        PyObject *tmp_assattr_value_14;
        PyObject *tmp_assattr_target_14;
        tmp_assattr_value_14 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_assattr_value_14 == NULL)) {
            tmp_assattr_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
        }

        if (tmp_assattr_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_14 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[193]);

        if (unlikely(tmp_assattr_target_14 == NULL)) {
            tmp_assattr_target_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[193]);
        }

        assert(!(tmp_assattr_target_14 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_14, mod_consts[187], tmp_assattr_value_14);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_15;
        PyObject *tmp_list_element_7;
        PyObject *tmp_assattr_target_15;
        tmp_list_element_7 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_list_element_7 == NULL)) {
            tmp_list_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_list_element_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_15 = MAKE_LIST_EMPTY(4);
        {
            PyObject *tmp_called_value_53;
            PyObject *tmp_args_element_value_105;
            PyList_SET_ITEM0(tmp_assattr_value_15, 0, tmp_list_element_7);
            tmp_list_element_7 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_list_element_7 == NULL)) {
                tmp_list_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_list_element_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 148;

                goto list_build_exception_6;
            }
            PyList_SET_ITEM0(tmp_assattr_value_15, 1, tmp_list_element_7);
            tmp_list_element_7 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[148]);

            if (unlikely(tmp_list_element_7 == NULL)) {
                tmp_list_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[148]);
            }

            if (tmp_list_element_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 148;

                goto list_build_exception_6;
            }
            PyList_SET_ITEM0(tmp_assattr_value_15, 2, tmp_list_element_7);
            tmp_called_value_53 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_called_value_53 == NULL)) {
                tmp_called_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
            }

            if (tmp_called_value_53 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 148;

                goto list_build_exception_6;
            }
            tmp_args_element_value_105 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[137]);

            if (unlikely(tmp_args_element_value_105 == NULL)) {
                tmp_args_element_value_105 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[137]);
            }

            if (tmp_args_element_value_105 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 148;

                goto list_build_exception_6;
            }
            frame_b732d78f929796a32e47289708183a77->m_frame.f_lineno = 148;
            tmp_list_element_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_53, tmp_args_element_value_105);
            if (tmp_list_element_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 148;

                goto list_build_exception_6;
            }
            PyList_SET_ITEM(tmp_assattr_value_15, 3, tmp_list_element_7);
        }
        goto list_build_noexception_6;
        // Exception handling pass through code for list_build:
        list_build_exception_6:;
        Py_DECREF(tmp_assattr_value_15);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_6:;
        tmp_assattr_target_15 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[193]);

        if (unlikely(tmp_assattr_target_15 == NULL)) {
            tmp_assattr_target_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[193]);
        }

        if (tmp_assattr_target_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_15);

            exception_lineno = 148;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_15, mod_consts[188], tmp_assattr_value_15);
        Py_DECREF(tmp_assattr_value_15);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_117;
        PyObject *tmp_expression_value_14;
        tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_14 == NULL)) {
            tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_expression_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_117 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[194]);
        if (tmp_assign_source_117 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[194], tmp_assign_source_117);
    }
    {
        PyObject *tmp_assattr_value_16;
        PyObject *tmp_assattr_target_16;
        tmp_assattr_value_16 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_assattr_value_16 == NULL)) {
            tmp_assattr_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
        }

        if (tmp_assattr_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_16 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[194]);

        if (unlikely(tmp_assattr_target_16 == NULL)) {
            tmp_assattr_target_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[194]);
        }

        assert(!(tmp_assattr_target_16 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_16, mod_consts[187], tmp_assattr_value_16);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_17;
        PyObject *tmp_list_element_8;
        PyObject *tmp_assattr_target_17;
        tmp_list_element_8 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_list_element_8 == NULL)) {
            tmp_list_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_list_element_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_17 = MAKE_LIST_EMPTY(2);
        PyList_SET_ITEM0(tmp_assattr_value_17, 0, tmp_list_element_8);
        tmp_list_element_8 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_list_element_8 == NULL)) {
            tmp_list_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
        }

        if (tmp_list_element_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;

            goto list_build_exception_7;
        }
        PyList_SET_ITEM0(tmp_assattr_value_17, 1, tmp_list_element_8);
        goto list_build_noexception_7;
        // Exception handling pass through code for list_build:
        list_build_exception_7:;
        Py_DECREF(tmp_assattr_value_17);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_7:;
        tmp_assattr_target_17 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[194]);

        if (unlikely(tmp_assattr_target_17 == NULL)) {
            tmp_assattr_target_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[194]);
        }

        if (tmp_assattr_target_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_17);

            exception_lineno = 153;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_17, mod_consts[188], tmp_assattr_value_17);
        Py_DECREF(tmp_assattr_value_17);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_118;
        PyObject *tmp_expression_value_15;
        tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_15 == NULL)) {
            tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_expression_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_118 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[195]);
        if (tmp_assign_source_118 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[195], tmp_assign_source_118);
    }
    {
        PyObject *tmp_assattr_value_18;
        PyObject *tmp_assattr_target_18;
        tmp_assattr_value_18 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_assattr_value_18 == NULL)) {
            tmp_assattr_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
        }

        if (tmp_assattr_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_18 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[195]);

        if (unlikely(tmp_assattr_target_18 == NULL)) {
            tmp_assattr_target_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[195]);
        }

        assert(!(tmp_assattr_target_18 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_18, mod_consts[187], tmp_assattr_value_18);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_19;
        PyObject *tmp_list_element_9;
        PyObject *tmp_assattr_target_19;
        tmp_list_element_9 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_list_element_9 == NULL)) {
            tmp_list_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_list_element_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_19 = MAKE_LIST_EMPTY(2);
        PyList_SET_ITEM0(tmp_assattr_value_19, 0, tmp_list_element_9);
        tmp_list_element_9 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_list_element_9 == NULL)) {
            tmp_list_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
        }

        if (tmp_list_element_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;

            goto list_build_exception_8;
        }
        PyList_SET_ITEM0(tmp_assattr_value_19, 1, tmp_list_element_9);
        goto list_build_noexception_8;
        // Exception handling pass through code for list_build:
        list_build_exception_8:;
        Py_DECREF(tmp_assattr_value_19);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_8:;
        tmp_assattr_target_19 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[195]);

        if (unlikely(tmp_assattr_target_19 == NULL)) {
            tmp_assattr_target_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[195]);
        }

        if (tmp_assattr_target_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_19);

            exception_lineno = 158;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_19, mod_consts[188], tmp_assattr_value_19);
        Py_DECREF(tmp_assattr_value_19);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_119;
        PyObject *tmp_expression_value_16;
        tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_16 == NULL)) {
            tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_expression_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_119 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[196]);
        if (tmp_assign_source_119 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[196], tmp_assign_source_119);
    }
    {
        PyObject *tmp_assattr_value_20;
        PyObject *tmp_assattr_target_20;
        tmp_assattr_value_20 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_assattr_value_20 == NULL)) {
            tmp_assattr_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
        }

        if (tmp_assattr_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_20 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[196]);

        if (unlikely(tmp_assattr_target_20 == NULL)) {
            tmp_assattr_target_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[196]);
        }

        assert(!(tmp_assattr_target_20 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_20, mod_consts[187], tmp_assattr_value_20);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_21;
        PyObject *tmp_list_element_10;
        PyObject *tmp_assattr_target_21;
        tmp_list_element_10 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_list_element_10 == NULL)) {
            tmp_list_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_list_element_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_21 = MAKE_LIST_EMPTY(4);
        {
            PyObject *tmp_called_value_54;
            PyObject *tmp_args_element_value_106;
            PyList_SET_ITEM0(tmp_assattr_value_21, 0, tmp_list_element_10);
            tmp_list_element_10 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_list_element_10 == NULL)) {
                tmp_list_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_list_element_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 163;

                goto list_build_exception_9;
            }
            PyList_SET_ITEM0(tmp_assattr_value_21, 1, tmp_list_element_10);
            tmp_list_element_10 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[137]);

            if (unlikely(tmp_list_element_10 == NULL)) {
                tmp_list_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[137]);
            }

            if (tmp_list_element_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 163;

                goto list_build_exception_9;
            }
            PyList_SET_ITEM0(tmp_assattr_value_21, 2, tmp_list_element_10);
            tmp_called_value_54 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_called_value_54 == NULL)) {
                tmp_called_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
            }

            if (tmp_called_value_54 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 163;

                goto list_build_exception_9;
            }
            tmp_args_element_value_106 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[137]);

            if (unlikely(tmp_args_element_value_106 == NULL)) {
                tmp_args_element_value_106 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[137]);
            }

            if (tmp_args_element_value_106 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 163;

                goto list_build_exception_9;
            }
            frame_b732d78f929796a32e47289708183a77->m_frame.f_lineno = 163;
            tmp_list_element_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_54, tmp_args_element_value_106);
            if (tmp_list_element_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 163;

                goto list_build_exception_9;
            }
            PyList_SET_ITEM(tmp_assattr_value_21, 3, tmp_list_element_10);
        }
        goto list_build_noexception_9;
        // Exception handling pass through code for list_build:
        list_build_exception_9:;
        Py_DECREF(tmp_assattr_value_21);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_9:;
        tmp_assattr_target_21 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[196]);

        if (unlikely(tmp_assattr_target_21 == NULL)) {
            tmp_assattr_target_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[196]);
        }

        if (tmp_assattr_target_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_21);

            exception_lineno = 163;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_21, mod_consts[188], tmp_assattr_value_21);
        Py_DECREF(tmp_assattr_value_21);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_120;
        PyObject *tmp_expression_value_17;
        tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_17 == NULL)) {
            tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_expression_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_120 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts[197]);
        if (tmp_assign_source_120 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[197], tmp_assign_source_120);
    }
    {
        PyObject *tmp_assattr_value_22;
        PyObject *tmp_assattr_target_22;
        tmp_assattr_value_22 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_assattr_value_22 == NULL)) {
            tmp_assattr_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
        }

        if (tmp_assattr_value_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_22 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[197]);

        if (unlikely(tmp_assattr_target_22 == NULL)) {
            tmp_assattr_target_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[197]);
        }

        assert(!(tmp_assattr_target_22 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_22, mod_consts[187], tmp_assattr_value_22);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_23;
        PyObject *tmp_list_element_11;
        PyObject *tmp_assattr_target_23;
        tmp_list_element_11 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_list_element_11 == NULL)) {
            tmp_list_element_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_list_element_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_23 = MAKE_LIST_EMPTY(4);
        {
            PyObject *tmp_called_value_55;
            PyObject *tmp_args_element_value_107;
            PyObject *tmp_called_value_56;
            PyObject *tmp_args_element_value_108;
            PyList_SET_ITEM0(tmp_assattr_value_23, 0, tmp_list_element_11);
            tmp_called_value_55 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_called_value_55 == NULL)) {
                tmp_called_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
            }

            if (tmp_called_value_55 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 168;

                goto list_build_exception_10;
            }
            tmp_args_element_value_107 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_args_element_value_107 == NULL)) {
                tmp_args_element_value_107 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_args_element_value_107 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 168;

                goto list_build_exception_10;
            }
            frame_b732d78f929796a32e47289708183a77->m_frame.f_lineno = 168;
            tmp_list_element_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_55, tmp_args_element_value_107);
            if (tmp_list_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 168;

                goto list_build_exception_10;
            }
            PyList_SET_ITEM(tmp_assattr_value_23, 1, tmp_list_element_11);
            tmp_list_element_11 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[137]);

            if (unlikely(tmp_list_element_11 == NULL)) {
                tmp_list_element_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[137]);
            }

            if (tmp_list_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 168;

                goto list_build_exception_10;
            }
            PyList_SET_ITEM0(tmp_assattr_value_23, 2, tmp_list_element_11);
            tmp_called_value_56 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_called_value_56 == NULL)) {
                tmp_called_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
            }

            if (tmp_called_value_56 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 168;

                goto list_build_exception_10;
            }
            tmp_args_element_value_108 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[137]);

            if (unlikely(tmp_args_element_value_108 == NULL)) {
                tmp_args_element_value_108 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[137]);
            }

            if (tmp_args_element_value_108 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 168;

                goto list_build_exception_10;
            }
            frame_b732d78f929796a32e47289708183a77->m_frame.f_lineno = 168;
            tmp_list_element_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_56, tmp_args_element_value_108);
            if (tmp_list_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 168;

                goto list_build_exception_10;
            }
            PyList_SET_ITEM(tmp_assattr_value_23, 3, tmp_list_element_11);
        }
        goto list_build_noexception_10;
        // Exception handling pass through code for list_build:
        list_build_exception_10:;
        Py_DECREF(tmp_assattr_value_23);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_10:;
        tmp_assattr_target_23 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[197]);

        if (unlikely(tmp_assattr_target_23 == NULL)) {
            tmp_assattr_target_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[197]);
        }

        if (tmp_assattr_target_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_23);

            exception_lineno = 168;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_23, mod_consts[188], tmp_assattr_value_23);
        Py_DECREF(tmp_assattr_value_23);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_121;
        PyObject *tmp_expression_value_18;
        tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_18 == NULL)) {
            tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_expression_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_121 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts[198]);
        if (tmp_assign_source_121 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[198], tmp_assign_source_121);
    }
    {
        PyObject *tmp_assattr_value_24;
        PyObject *tmp_assattr_target_24;
        tmp_assattr_value_24 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_assattr_value_24 == NULL)) {
            tmp_assattr_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_assattr_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_24 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[198]);

        if (unlikely(tmp_assattr_target_24 == NULL)) {
            tmp_assattr_target_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
        }

        assert(!(tmp_assattr_target_24 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_24, mod_consts[187], tmp_assattr_value_24);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_25;
        PyObject *tmp_assattr_target_25;
        tmp_assattr_value_25 = MAKE_LIST_EMPTY(0);
        tmp_assattr_target_25 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[198]);

        if (unlikely(tmp_assattr_target_25 == NULL)) {
            tmp_assattr_target_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[198]);
        }

        if (tmp_assattr_target_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_25);

            exception_lineno = 173;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_25, mod_consts[188], tmp_assattr_value_25);
        Py_DECREF(tmp_assattr_value_25);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_122;
        PyObject *tmp_expression_value_19;
        tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_19 == NULL)) {
            tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_expression_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_122 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts[199]);
        if (tmp_assign_source_122 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[199], tmp_assign_source_122);
    }
    {
        PyObject *tmp_assattr_value_26;
        PyObject *tmp_assattr_target_26;
        tmp_assattr_value_26 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_assattr_value_26 == NULL)) {
            tmp_assattr_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
        }

        if (tmp_assattr_value_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_26 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[199]);

        if (unlikely(tmp_assattr_target_26 == NULL)) {
            tmp_assattr_target_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[199]);
        }

        assert(!(tmp_assattr_target_26 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_26, mod_consts[187], tmp_assattr_value_26);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_27;
        PyObject *tmp_list_element_12;
        PyObject *tmp_assattr_target_27;
        tmp_list_element_12 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[137]);

        if (unlikely(tmp_list_element_12 == NULL)) {
            tmp_list_element_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[137]);
        }

        if (tmp_list_element_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_27 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_27, 0, tmp_list_element_12);
        tmp_assattr_target_27 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[199]);

        if (unlikely(tmp_assattr_target_27 == NULL)) {
            tmp_assattr_target_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[199]);
        }

        if (tmp_assattr_target_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_27);

            exception_lineno = 178;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_27, mod_consts[188], tmp_assattr_value_27);
        Py_DECREF(tmp_assattr_value_27);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_123;
        PyObject *tmp_expression_value_20;
        tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_20 == NULL)) {
            tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_expression_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_123 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts[200]);
        if (tmp_assign_source_123 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[200], tmp_assign_source_123);
    }
    {
        PyObject *tmp_assattr_value_28;
        PyObject *tmp_assattr_target_28;
        tmp_assattr_value_28 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_assattr_value_28 == NULL)) {
            tmp_assattr_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_assattr_value_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_28 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[200]);

        if (unlikely(tmp_assattr_target_28 == NULL)) {
            tmp_assattr_target_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[200]);
        }

        assert(!(tmp_assattr_target_28 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_28, mod_consts[187], tmp_assattr_value_28);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_29;
        PyObject *tmp_list_element_13;
        PyObject *tmp_assattr_target_29;
        tmp_list_element_13 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[172]);

        if (unlikely(tmp_list_element_13 == NULL)) {
            tmp_list_element_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[172]);
        }

        if (tmp_list_element_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_29 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_29, 0, tmp_list_element_13);
        tmp_assattr_target_29 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[200]);

        if (unlikely(tmp_assattr_target_29 == NULL)) {
            tmp_assattr_target_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[200]);
        }

        if (tmp_assattr_target_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_29);

            exception_lineno = 183;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_29, mod_consts[188], tmp_assattr_value_29);
        Py_DECREF(tmp_assattr_value_29);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_124;
        PyObject *tmp_expression_value_21;
        tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_21 == NULL)) {
            tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_expression_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_124 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts[201]);
        if (tmp_assign_source_124 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[201], tmp_assign_source_124);
    }
    {
        PyObject *tmp_assattr_value_30;
        PyObject *tmp_assattr_target_30;
        tmp_assattr_value_30 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[137]);

        if (unlikely(tmp_assattr_value_30 == NULL)) {
            tmp_assattr_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[137]);
        }

        if (tmp_assattr_value_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_30 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[201]);

        if (unlikely(tmp_assattr_target_30 == NULL)) {
            tmp_assattr_target_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[201]);
        }

        assert(!(tmp_assattr_target_30 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_30, mod_consts[187], tmp_assattr_value_30);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_31;
        PyObject *tmp_assattr_target_31;
        tmp_assattr_value_31 = MAKE_LIST_EMPTY(0);
        tmp_assattr_target_31 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[201]);

        if (unlikely(tmp_assattr_target_31 == NULL)) {
            tmp_assattr_target_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[201]);
        }

        if (tmp_assattr_target_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_31);

            exception_lineno = 188;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_31, mod_consts[188], tmp_assattr_value_31);
        Py_DECREF(tmp_assattr_value_31);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_125;
        PyObject *tmp_expression_value_22;
        tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_22 == NULL)) {
            tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_expression_value_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_125 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts[202]);
        if (tmp_assign_source_125 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[202], tmp_assign_source_125);
    }
    {
        PyObject *tmp_assattr_value_32;
        PyObject *tmp_assattr_target_32;
        tmp_assattr_value_32 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_assattr_value_32 == NULL)) {
            tmp_assattr_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[27]);
        }

        if (tmp_assattr_value_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_32 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[202]);

        if (unlikely(tmp_assattr_target_32 == NULL)) {
            tmp_assattr_target_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[202]);
        }

        assert(!(tmp_assattr_target_32 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_32, mod_consts[187], tmp_assattr_value_32);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_33;
        PyObject *tmp_list_element_14;
        PyObject *tmp_assattr_target_33;
        tmp_list_element_14 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[175]);

        if (unlikely(tmp_list_element_14 == NULL)) {
            tmp_list_element_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[175]);
        }

        if (tmp_list_element_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_33 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_33, 0, tmp_list_element_14);
        tmp_assattr_target_33 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[202]);

        if (unlikely(tmp_assattr_target_33 == NULL)) {
            tmp_assattr_target_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[202]);
        }

        if (tmp_assattr_target_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_33);

            exception_lineno = 193;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_33, mod_consts[188], tmp_assattr_value_33);
        Py_DECREF(tmp_assattr_value_33);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_126;
        PyObject *tmp_expression_value_23;
        tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_23 == NULL)) {
            tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_expression_value_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_126 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts[203]);
        if (tmp_assign_source_126 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[203], tmp_assign_source_126);
    }
    {
        PyObject *tmp_assattr_value_34;
        PyObject *tmp_assattr_target_34;
        tmp_assattr_value_34 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_assattr_value_34 == NULL)) {
            tmp_assattr_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
        }

        if (tmp_assattr_value_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_34 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[203]);

        if (unlikely(tmp_assattr_target_34 == NULL)) {
            tmp_assattr_target_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[203]);
        }

        assert(!(tmp_assattr_target_34 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_34, mod_consts[187], tmp_assattr_value_34);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_35;
        PyObject *tmp_list_element_15;
        PyObject *tmp_assattr_target_35;
        tmp_list_element_15 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_list_element_15 == NULL)) {
            tmp_list_element_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_list_element_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_35 = MAKE_LIST_EMPTY(3);
        {
            PyObject *tmp_called_value_57;
            PyObject *tmp_args_element_value_109;
            PyObject *tmp_called_value_58;
            PyObject *tmp_args_element_value_110;
            PyList_SET_ITEM0(tmp_assattr_value_35, 0, tmp_list_element_15);
            tmp_called_value_57 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_called_value_57 == NULL)) {
                tmp_called_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
            }

            if (tmp_called_value_57 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 198;

                goto list_build_exception_11;
            }
            tmp_args_element_value_109 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[137]);

            if (unlikely(tmp_args_element_value_109 == NULL)) {
                tmp_args_element_value_109 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[137]);
            }

            if (tmp_args_element_value_109 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 198;

                goto list_build_exception_11;
            }
            frame_b732d78f929796a32e47289708183a77->m_frame.f_lineno = 198;
            tmp_list_element_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_57, tmp_args_element_value_109);
            if (tmp_list_element_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 198;

                goto list_build_exception_11;
            }
            PyList_SET_ITEM(tmp_assattr_value_35, 1, tmp_list_element_15);
            tmp_called_value_58 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_called_value_58 == NULL)) {
                tmp_called_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
            }

            if (tmp_called_value_58 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 198;

                goto list_build_exception_11;
            }
            tmp_args_element_value_110 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[137]);

            if (unlikely(tmp_args_element_value_110 == NULL)) {
                tmp_args_element_value_110 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[137]);
            }

            if (tmp_args_element_value_110 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 198;

                goto list_build_exception_11;
            }
            frame_b732d78f929796a32e47289708183a77->m_frame.f_lineno = 198;
            tmp_list_element_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_58, tmp_args_element_value_110);
            if (tmp_list_element_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 198;

                goto list_build_exception_11;
            }
            PyList_SET_ITEM(tmp_assattr_value_35, 2, tmp_list_element_15);
        }
        goto list_build_noexception_11;
        // Exception handling pass through code for list_build:
        list_build_exception_11:;
        Py_DECREF(tmp_assattr_value_35);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_11:;
        tmp_assattr_target_35 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[203]);

        if (unlikely(tmp_assattr_target_35 == NULL)) {
            tmp_assattr_target_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[203]);
        }

        if (tmp_assattr_target_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_35);

            exception_lineno = 198;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_35, mod_consts[188], tmp_assattr_value_35);
        Py_DECREF(tmp_assattr_value_35);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_127;
        PyObject *tmp_expression_value_24;
        tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_24 == NULL)) {
            tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_expression_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_127 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts[204]);
        if (tmp_assign_source_127 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[204], tmp_assign_source_127);
    }
    {
        PyObject *tmp_assattr_value_36;
        PyObject *tmp_assattr_target_36;
        tmp_assattr_value_36 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_assattr_value_36 == NULL)) {
            tmp_assattr_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
        }

        if (tmp_assattr_value_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_36 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[204]);

        if (unlikely(tmp_assattr_target_36 == NULL)) {
            tmp_assattr_target_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[204]);
        }

        assert(!(tmp_assattr_target_36 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_36, mod_consts[187], tmp_assattr_value_36);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_37;
        PyObject *tmp_list_element_16;
        PyObject *tmp_assattr_target_37;
        tmp_list_element_16 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_list_element_16 == NULL)) {
            tmp_list_element_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_list_element_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_37 = MAKE_LIST_EMPTY(4);
        PyList_SET_ITEM0(tmp_assattr_value_37, 0, tmp_list_element_16);
        tmp_list_element_16 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_list_element_16 == NULL)) {
            tmp_list_element_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
        }

        if (tmp_list_element_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;

            goto list_build_exception_12;
        }
        PyList_SET_ITEM0(tmp_assattr_value_37, 1, tmp_list_element_16);
        tmp_list_element_16 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_list_element_16 == NULL)) {
            tmp_list_element_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
        }

        if (tmp_list_element_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;

            goto list_build_exception_12;
        }
        PyList_SET_ITEM0(tmp_assattr_value_37, 2, tmp_list_element_16);
        tmp_list_element_16 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_list_element_16 == NULL)) {
            tmp_list_element_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
        }

        if (tmp_list_element_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;

            goto list_build_exception_12;
        }
        PyList_SET_ITEM0(tmp_assattr_value_37, 3, tmp_list_element_16);
        goto list_build_noexception_12;
        // Exception handling pass through code for list_build:
        list_build_exception_12:;
        Py_DECREF(tmp_assattr_value_37);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_12:;
        tmp_assattr_target_37 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[204]);

        if (unlikely(tmp_assattr_target_37 == NULL)) {
            tmp_assattr_target_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[204]);
        }

        if (tmp_assattr_target_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_37);

            exception_lineno = 203;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_37, mod_consts[188], tmp_assattr_value_37);
        Py_DECREF(tmp_assattr_value_37);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_128;
        PyObject *tmp_expression_value_25;
        tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_25 == NULL)) {
            tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_expression_value_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_128 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts[205]);
        if (tmp_assign_source_128 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[205], tmp_assign_source_128);
    }
    {
        PyObject *tmp_assattr_value_38;
        PyObject *tmp_assattr_target_38;
        tmp_assattr_value_38 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_assattr_value_38 == NULL)) {
            tmp_assattr_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
        }

        if (tmp_assattr_value_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_38 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[205]);

        if (unlikely(tmp_assattr_target_38 == NULL)) {
            tmp_assattr_target_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[205]);
        }

        assert(!(tmp_assattr_target_38 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_38, mod_consts[187], tmp_assattr_value_38);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_39;
        PyObject *tmp_list_element_17;
        PyObject *tmp_assattr_target_39;
        tmp_list_element_17 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_list_element_17 == NULL)) {
            tmp_list_element_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_list_element_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_39 = MAKE_LIST_EMPTY(4);
        {
            PyObject *tmp_called_value_59;
            PyObject *tmp_args_element_value_111;
            PyList_SET_ITEM0(tmp_assattr_value_39, 0, tmp_list_element_17);
            tmp_list_element_17 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_list_element_17 == NULL)) {
                tmp_list_element_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
            }

            if (tmp_list_element_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 208;

                goto list_build_exception_13;
            }
            PyList_SET_ITEM0(tmp_assattr_value_39, 1, tmp_list_element_17);
            tmp_list_element_17 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[137]);

            if (unlikely(tmp_list_element_17 == NULL)) {
                tmp_list_element_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[137]);
            }

            if (tmp_list_element_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 208;

                goto list_build_exception_13;
            }
            PyList_SET_ITEM0(tmp_assattr_value_39, 2, tmp_list_element_17);
            tmp_called_value_59 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_called_value_59 == NULL)) {
                tmp_called_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
            }

            if (tmp_called_value_59 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 208;

                goto list_build_exception_13;
            }
            tmp_args_element_value_111 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[137]);

            if (unlikely(tmp_args_element_value_111 == NULL)) {
                tmp_args_element_value_111 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[137]);
            }

            if (tmp_args_element_value_111 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 208;

                goto list_build_exception_13;
            }
            frame_b732d78f929796a32e47289708183a77->m_frame.f_lineno = 208;
            tmp_list_element_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_59, tmp_args_element_value_111);
            if (tmp_list_element_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 208;

                goto list_build_exception_13;
            }
            PyList_SET_ITEM(tmp_assattr_value_39, 3, tmp_list_element_17);
        }
        goto list_build_noexception_13;
        // Exception handling pass through code for list_build:
        list_build_exception_13:;
        Py_DECREF(tmp_assattr_value_39);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_13:;
        tmp_assattr_target_39 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[205]);

        if (unlikely(tmp_assattr_target_39 == NULL)) {
            tmp_assattr_target_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[205]);
        }

        if (tmp_assattr_target_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_39);

            exception_lineno = 208;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_39, mod_consts[188], tmp_assattr_value_39);
        Py_DECREF(tmp_assattr_value_39);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_129;
        PyObject *tmp_expression_value_26;
        tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_26 == NULL)) {
            tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_expression_value_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_129 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts[206]);
        if (tmp_assign_source_129 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[206], tmp_assign_source_129);
    }
    {
        PyObject *tmp_assattr_value_40;
        PyObject *tmp_assattr_target_40;
        tmp_assattr_value_40 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[175]);

        if (unlikely(tmp_assattr_value_40 == NULL)) {
            tmp_assattr_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[175]);
        }

        if (tmp_assattr_value_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_40 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[206]);

        if (unlikely(tmp_assattr_target_40 == NULL)) {
            tmp_assattr_target_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[206]);
        }

        assert(!(tmp_assattr_target_40 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_40, mod_consts[187], tmp_assattr_value_40);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_41;
        PyObject *tmp_list_element_18;
        PyObject *tmp_assattr_target_41;
        tmp_list_element_18 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_list_element_18 == NULL)) {
            tmp_list_element_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_list_element_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_41 = MAKE_LIST_EMPTY(2);
        PyList_SET_ITEM0(tmp_assattr_value_41, 0, tmp_list_element_18);
        tmp_list_element_18 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[137]);

        if (unlikely(tmp_list_element_18 == NULL)) {
            tmp_list_element_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[137]);
        }

        if (tmp_list_element_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;

            goto list_build_exception_14;
        }
        PyList_SET_ITEM0(tmp_assattr_value_41, 1, tmp_list_element_18);
        goto list_build_noexception_14;
        // Exception handling pass through code for list_build:
        list_build_exception_14:;
        Py_DECREF(tmp_assattr_value_41);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_14:;
        tmp_assattr_target_41 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[206]);

        if (unlikely(tmp_assattr_target_41 == NULL)) {
            tmp_assattr_target_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[206]);
        }

        if (tmp_assattr_target_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_41);

            exception_lineno = 213;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_41, mod_consts[188], tmp_assattr_value_41);
        Py_DECREF(tmp_assattr_value_41);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_130;
        PyObject *tmp_expression_value_27;
        tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_27 == NULL)) {
            tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_expression_value_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_130 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts[207]);
        if (tmp_assign_source_130 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[207], tmp_assign_source_130);
    }
    {
        PyObject *tmp_assattr_value_42;
        PyObject *tmp_assattr_target_42;
        tmp_assattr_value_42 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_assattr_value_42 == NULL)) {
            tmp_assattr_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
        }

        if (tmp_assattr_value_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_42 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[207]);

        if (unlikely(tmp_assattr_target_42 == NULL)) {
            tmp_assattr_target_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[207]);
        }

        assert(!(tmp_assattr_target_42 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_42, mod_consts[187], tmp_assattr_value_42);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_43;
        PyObject *tmp_list_element_19;
        PyObject *tmp_assattr_target_43;
        tmp_list_element_19 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_list_element_19 == NULL)) {
            tmp_list_element_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_list_element_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_43 = MAKE_LIST_EMPTY(4);
        {
            PyObject *tmp_called_value_60;
            PyObject *tmp_args_element_value_112;
            PyList_SET_ITEM0(tmp_assattr_value_43, 0, tmp_list_element_19);
            tmp_list_element_19 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[24]);

            if (unlikely(tmp_list_element_19 == NULL)) {
                tmp_list_element_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
            }

            if (tmp_list_element_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 218;

                goto list_build_exception_15;
            }
            PyList_SET_ITEM0(tmp_assattr_value_43, 1, tmp_list_element_19);
            tmp_list_element_19 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[137]);

            if (unlikely(tmp_list_element_19 == NULL)) {
                tmp_list_element_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[137]);
            }

            if (tmp_list_element_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 218;

                goto list_build_exception_15;
            }
            PyList_SET_ITEM0(tmp_assattr_value_43, 2, tmp_list_element_19);
            tmp_called_value_60 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_called_value_60 == NULL)) {
                tmp_called_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
            }

            if (tmp_called_value_60 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 218;

                goto list_build_exception_15;
            }
            tmp_args_element_value_112 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[137]);

            if (unlikely(tmp_args_element_value_112 == NULL)) {
                tmp_args_element_value_112 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[137]);
            }

            if (tmp_args_element_value_112 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 218;

                goto list_build_exception_15;
            }
            frame_b732d78f929796a32e47289708183a77->m_frame.f_lineno = 218;
            tmp_list_element_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_60, tmp_args_element_value_112);
            if (tmp_list_element_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 218;

                goto list_build_exception_15;
            }
            PyList_SET_ITEM(tmp_assattr_value_43, 3, tmp_list_element_19);
        }
        goto list_build_noexception_15;
        // Exception handling pass through code for list_build:
        list_build_exception_15:;
        Py_DECREF(tmp_assattr_value_43);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_15:;
        tmp_assattr_target_43 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[207]);

        if (unlikely(tmp_assattr_target_43 == NULL)) {
            tmp_assattr_target_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[207]);
        }

        if (tmp_assattr_target_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_43);

            exception_lineno = 218;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_43, mod_consts[188], tmp_assattr_value_43);
        Py_DECREF(tmp_assattr_value_43);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_131;
        PyObject *tmp_expression_value_28;
        tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_28 == NULL)) {
            tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_expression_value_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_131 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts[208]);
        if (tmp_assign_source_131 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[208], tmp_assign_source_131);
    }
    {
        PyObject *tmp_assattr_value_44;
        PyObject *tmp_assattr_target_44;
        tmp_assattr_value_44 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_assattr_value_44 == NULL)) {
            tmp_assattr_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
        }

        if (tmp_assattr_value_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_44 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[208]);

        if (unlikely(tmp_assattr_target_44 == NULL)) {
            tmp_assattr_target_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[208]);
        }

        assert(!(tmp_assattr_target_44 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_44, mod_consts[187], tmp_assattr_value_44);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_45;
        PyObject *tmp_list_element_20;
        PyObject *tmp_assattr_target_45;
        tmp_list_element_20 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_list_element_20 == NULL)) {
            tmp_list_element_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_list_element_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_45 = MAKE_LIST_EMPTY(2);
        PyList_SET_ITEM0(tmp_assattr_value_45, 0, tmp_list_element_20);
        tmp_list_element_20 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_list_element_20 == NULL)) {
            tmp_list_element_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
        }

        if (tmp_list_element_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;

            goto list_build_exception_16;
        }
        PyList_SET_ITEM0(tmp_assattr_value_45, 1, tmp_list_element_20);
        goto list_build_noexception_16;
        // Exception handling pass through code for list_build:
        list_build_exception_16:;
        Py_DECREF(tmp_assattr_value_45);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_16:;
        tmp_assattr_target_45 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[208]);

        if (unlikely(tmp_assattr_target_45 == NULL)) {
            tmp_assattr_target_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[208]);
        }

        if (tmp_assattr_target_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_45);

            exception_lineno = 223;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_45, mod_consts[188], tmp_assattr_value_45);
        Py_DECREF(tmp_assattr_value_45);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_132;
        PyObject *tmp_expression_value_29;
        tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_29 == NULL)) {
            tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_expression_value_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_132 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts[209]);
        if (tmp_assign_source_132 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[209], tmp_assign_source_132);
    }
    {
        PyObject *tmp_assattr_value_46;
        PyObject *tmp_assattr_target_46;
        tmp_assattr_value_46 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_assattr_value_46 == NULL)) {
            tmp_assattr_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
        }

        if (tmp_assattr_value_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_46 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[209]);

        if (unlikely(tmp_assattr_target_46 == NULL)) {
            tmp_assattr_target_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[209]);
        }

        assert(!(tmp_assattr_target_46 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_46, mod_consts[187], tmp_assattr_value_46);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_47;
        PyObject *tmp_list_element_21;
        PyObject *tmp_assattr_target_47;
        tmp_list_element_21 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_list_element_21 == NULL)) {
            tmp_list_element_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_list_element_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_47 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_47, 0, tmp_list_element_21);
        tmp_assattr_target_47 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[209]);

        if (unlikely(tmp_assattr_target_47 == NULL)) {
            tmp_assattr_target_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[209]);
        }

        if (tmp_assattr_target_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_47);

            exception_lineno = 228;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_47, mod_consts[188], tmp_assattr_value_47);
        Py_DECREF(tmp_assattr_value_47);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_133;
        PyObject *tmp_expression_value_30;
        tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_30 == NULL)) {
            tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_expression_value_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_133 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts[210]);
        if (tmp_assign_source_133 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[210], tmp_assign_source_133);
    }
    {
        PyObject *tmp_assattr_value_48;
        PyObject *tmp_assattr_target_48;
        tmp_assattr_value_48 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_assattr_value_48 == NULL)) {
            tmp_assattr_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
        }

        if (tmp_assattr_value_48 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_48 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[210]);

        if (unlikely(tmp_assattr_target_48 == NULL)) {
            tmp_assattr_target_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[210]);
        }

        assert(!(tmp_assattr_target_48 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_48, mod_consts[187], tmp_assattr_value_48);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_49;
        PyObject *tmp_assattr_target_49;
        tmp_assattr_value_49 = MAKE_LIST_EMPTY(0);
        tmp_assattr_target_49 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[210]);

        if (unlikely(tmp_assattr_target_49 == NULL)) {
            tmp_assattr_target_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[210]);
        }

        if (tmp_assattr_target_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_49);

            exception_lineno = 233;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_49, mod_consts[188], tmp_assattr_value_49);
        Py_DECREF(tmp_assattr_value_49);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_134;
        PyObject *tmp_expression_value_31;
        tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_31 == NULL)) {
            tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_expression_value_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_134 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts[211]);
        if (tmp_assign_source_134 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[211], tmp_assign_source_134);
    }
    {
        PyObject *tmp_assattr_value_50;
        PyObject *tmp_assattr_target_50;
        tmp_assattr_value_50 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_assattr_value_50 == NULL)) {
            tmp_assattr_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
        }

        if (tmp_assattr_value_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_50 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[211]);

        if (unlikely(tmp_assattr_target_50 == NULL)) {
            tmp_assattr_target_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[211]);
        }

        assert(!(tmp_assattr_target_50 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_50, mod_consts[187], tmp_assattr_value_50);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_51;
        PyObject *tmp_list_element_22;
        PyObject *tmp_assattr_target_51;
        tmp_list_element_22 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[137]);

        if (unlikely(tmp_list_element_22 == NULL)) {
            tmp_list_element_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[137]);
        }

        if (tmp_list_element_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_51 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_51, 0, tmp_list_element_22);
        tmp_assattr_target_51 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[211]);

        if (unlikely(tmp_assattr_target_51 == NULL)) {
            tmp_assattr_target_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[211]);
        }

        if (tmp_assattr_target_51 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_51);

            exception_lineno = 238;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_51, mod_consts[188], tmp_assattr_value_51);
        Py_DECREF(tmp_assattr_value_51);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_135;
        tmp_assign_source_135 = mod_consts[14];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[212], tmp_assign_source_135);
    }
    {
        PyObject *tmp_assign_source_136;
        tmp_assign_source_136 = mod_consts[213];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[214], tmp_assign_source_136);
    }
    {
        PyObject *tmp_assign_source_137;
        tmp_assign_source_137 = mod_consts[215];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[216], tmp_assign_source_137);
    }
    {
        PyObject *tmp_assign_source_138;
        tmp_assign_source_138 = mod_consts[217];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[218], tmp_assign_source_138);
    }
    {
        PyObject *tmp_assign_source_139;
        tmp_assign_source_139 = mod_consts[219];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[220], tmp_assign_source_139);
    }
    {
        PyObject *tmp_assign_source_140;
        tmp_assign_source_140 = mod_consts[221];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[222], tmp_assign_source_140);
    }
    {
        PyObject *tmp_assign_source_141;
        tmp_assign_source_141 = mod_consts[223];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[224], tmp_assign_source_141);
    }
    {
        PyObject *tmp_assign_source_142;
        tmp_assign_source_142 = mod_consts[225];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[226], tmp_assign_source_142);
    }
    {
        PyObject *tmp_assign_source_143;
        tmp_assign_source_143 = mod_consts[227];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[228], tmp_assign_source_143);
    }
    {
        PyObject *tmp_assign_source_144;
        tmp_assign_source_144 = mod_consts[229];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[230], tmp_assign_source_144);
    }
    {
        PyObject *tmp_assign_source_145;
        tmp_assign_source_145 = mod_consts[231];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[232], tmp_assign_source_145);
    }
    {
        PyObject *tmp_assign_source_146;
        tmp_assign_source_146 = mod_consts[233];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[234], tmp_assign_source_146);
    }
    {
        PyObject *tmp_assign_source_147;
        tmp_assign_source_147 = mod_consts[235];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[236], tmp_assign_source_147);
    }
    {
        PyObject *tmp_assign_source_148;
        tmp_assign_source_148 = mod_consts[237];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[238], tmp_assign_source_148);
    }
    {
        PyObject *tmp_assign_source_149;
        tmp_assign_source_149 = mod_consts[239];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[240], tmp_assign_source_149);
    }
    {
        PyObject *tmp_assign_source_150;
        PyObject *tmp_called_value_61;
        PyObject *tmp_args_element_value_113;
        PyObject *tmp_args_element_value_114;
        PyObject *tmp_args_element_value_115;
        PyObject *tmp_args_element_value_116;
        tmp_called_value_61 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_61 == NULL)) {
            tmp_called_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_called_value_61 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_113 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_args_element_value_113 == NULL)) {
            tmp_args_element_value_113 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
        }

        if (tmp_args_element_value_113 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_114 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_args_element_value_114 == NULL)) {
            tmp_args_element_value_114 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_args_element_value_114 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_115 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_args_element_value_115 == NULL)) {
            tmp_args_element_value_115 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
        }

        if (tmp_args_element_value_115 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_116 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[137]);

        if (unlikely(tmp_args_element_value_116 == NULL)) {
            tmp_args_element_value_116 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[137]);
        }

        if (tmp_args_element_value_116 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;

            goto frame_exception_exit_1;
        }
        frame_b732d78f929796a32e47289708183a77->m_frame.f_lineno = 255;
        {
            PyObject *call_args[] = {tmp_args_element_value_113, tmp_args_element_value_114, tmp_args_element_value_115, tmp_args_element_value_116};
            tmp_assign_source_150 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_61, call_args);
        }

        if (tmp_assign_source_150 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[241], tmp_assign_source_150);
    }
    {
        PyObject *tmp_assign_source_151;
        PyObject *tmp_called_value_62;
        PyObject *tmp_args_element_value_117;
        PyObject *tmp_args_element_value_118;
        PyObject *tmp_args_element_value_119;
        PyObject *tmp_args_element_value_120;
        tmp_called_value_62 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_62 == NULL)) {
            tmp_called_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_called_value_62 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_117 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_args_element_value_117 == NULL)) {
            tmp_args_element_value_117 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
        }

        if (tmp_args_element_value_117 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_118 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_args_element_value_118 == NULL)) {
            tmp_args_element_value_118 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_args_element_value_118 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_119 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_args_element_value_119 == NULL)) {
            tmp_args_element_value_119 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
        }

        if (tmp_args_element_value_119 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_120 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[137]);

        if (unlikely(tmp_args_element_value_120 == NULL)) {
            tmp_args_element_value_120 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[137]);
        }

        if (tmp_args_element_value_120 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;

            goto frame_exception_exit_1;
        }
        frame_b732d78f929796a32e47289708183a77->m_frame.f_lineno = 256;
        {
            PyObject *call_args[] = {tmp_args_element_value_117, tmp_args_element_value_118, tmp_args_element_value_119, tmp_args_element_value_120};
            tmp_assign_source_151 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_62, call_args);
        }

        if (tmp_assign_source_151 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[242], tmp_assign_source_151);
    }
    {
        PyObject *tmp_assign_source_152;
        PyObject *tmp_called_value_63;
        PyObject *tmp_args_element_value_121;
        PyObject *tmp_args_element_value_122;
        PyObject *tmp_args_element_value_123;
        PyObject *tmp_args_element_value_124;
        PyObject *tmp_args_element_value_125;
        tmp_called_value_63 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_63 == NULL)) {
            tmp_called_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_called_value_63 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_121 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_args_element_value_121 == NULL)) {
            tmp_args_element_value_121 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
        }

        if (tmp_args_element_value_121 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_122 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_args_element_value_122 == NULL)) {
            tmp_args_element_value_122 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_args_element_value_122 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_123 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_args_element_value_123 == NULL)) {
            tmp_args_element_value_123 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
        }

        if (tmp_args_element_value_123 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_124 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[137]);

        if (unlikely(tmp_args_element_value_124 == NULL)) {
            tmp_args_element_value_124 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[137]);
        }

        if (tmp_args_element_value_124 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_125 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[137]);

        if (unlikely(tmp_args_element_value_125 == NULL)) {
            tmp_args_element_value_125 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[137]);
        }

        if (tmp_args_element_value_125 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;

            goto frame_exception_exit_1;
        }
        frame_b732d78f929796a32e47289708183a77->m_frame.f_lineno = 257;
        {
            PyObject *call_args[] = {tmp_args_element_value_121, tmp_args_element_value_122, tmp_args_element_value_123, tmp_args_element_value_124, tmp_args_element_value_125};
            tmp_assign_source_152 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_63, call_args);
        }

        if (tmp_assign_source_152 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[243], tmp_assign_source_152);
    }
    {
        PyObject *tmp_assign_source_153;
        PyObject *tmp_called_value_64;
        PyObject *tmp_args_element_value_126;
        PyObject *tmp_args_element_value_127;
        PyObject *tmp_args_element_value_128;
        tmp_called_value_64 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_64 == NULL)) {
            tmp_called_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_called_value_64 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_126 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_args_element_value_126 == NULL)) {
            tmp_args_element_value_126 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
        }

        if (tmp_args_element_value_126 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_127 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_args_element_value_127 == NULL)) {
            tmp_args_element_value_127 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_args_element_value_127 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_128 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[137]);

        if (unlikely(tmp_args_element_value_128 == NULL)) {
            tmp_args_element_value_128 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[137]);
        }

        if (tmp_args_element_value_128 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;

            goto frame_exception_exit_1;
        }
        frame_b732d78f929796a32e47289708183a77->m_frame.f_lineno = 258;
        {
            PyObject *call_args[] = {tmp_args_element_value_126, tmp_args_element_value_127, tmp_args_element_value_128};
            tmp_assign_source_153 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_64, call_args);
        }

        if (tmp_assign_source_153 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[244], tmp_assign_source_153);
    }
    {
        PyObject *tmp_assign_source_154;
        PyObject *tmp_expression_value_32;
        tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_32 == NULL)) {
            tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_expression_value_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_154 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts[245]);
        if (tmp_assign_source_154 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[245], tmp_assign_source_154);
    }
    {
        PyObject *tmp_assattr_value_52;
        PyObject *tmp_assattr_target_52;
        tmp_assattr_value_52 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_assattr_value_52 == NULL)) {
            tmp_assattr_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
        }

        if (tmp_assattr_value_52 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_52 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[245]);

        if (unlikely(tmp_assattr_target_52 == NULL)) {
            tmp_assattr_target_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[245]);
        }

        assert(!(tmp_assattr_target_52 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_52, mod_consts[187], tmp_assattr_value_52);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_53;
        PyObject *tmp_list_element_23;
        PyObject *tmp_assattr_target_53;
        tmp_list_element_23 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_list_element_23 == NULL)) {
            tmp_list_element_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_list_element_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_53 = MAKE_LIST_EMPTY(3);
        PyList_SET_ITEM0(tmp_assattr_value_53, 0, tmp_list_element_23);
        tmp_list_element_23 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_list_element_23 == NULL)) {
            tmp_list_element_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
        }

        if (tmp_list_element_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;

            goto list_build_exception_17;
        }
        PyList_SET_ITEM0(tmp_assattr_value_53, 1, tmp_list_element_23);
        tmp_list_element_23 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[137]);

        if (unlikely(tmp_list_element_23 == NULL)) {
            tmp_list_element_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[137]);
        }

        if (tmp_list_element_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;

            goto list_build_exception_17;
        }
        PyList_SET_ITEM0(tmp_assattr_value_53, 2, tmp_list_element_23);
        goto list_build_noexception_17;
        // Exception handling pass through code for list_build:
        list_build_exception_17:;
        Py_DECREF(tmp_assattr_value_53);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_17:;
        tmp_assattr_target_53 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[245]);

        if (unlikely(tmp_assattr_target_53 == NULL)) {
            tmp_assattr_target_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[245]);
        }

        if (tmp_assattr_target_53 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_53);

            exception_lineno = 262;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_53, mod_consts[188], tmp_assattr_value_53);
        Py_DECREF(tmp_assattr_value_53);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_155;
        PyObject *tmp_expression_value_33;
        tmp_expression_value_33 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_33 == NULL)) {
            tmp_expression_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_expression_value_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_155 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts[246]);
        if (tmp_assign_source_155 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[246], tmp_assign_source_155);
    }
    {
        PyObject *tmp_assattr_value_54;
        PyObject *tmp_assattr_target_54;
        tmp_assattr_value_54 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_assattr_value_54 == NULL)) {
            tmp_assattr_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
        }

        if (tmp_assattr_value_54 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_54 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[246]);

        if (unlikely(tmp_assattr_target_54 == NULL)) {
            tmp_assattr_target_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[246]);
        }

        assert(!(tmp_assattr_target_54 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_54, mod_consts[187], tmp_assattr_value_54);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_55;
        PyObject *tmp_list_element_24;
        PyObject *tmp_assattr_target_55;
        tmp_list_element_24 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_list_element_24 == NULL)) {
            tmp_list_element_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_list_element_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_55 = MAKE_LIST_EMPTY(3);
        PyList_SET_ITEM0(tmp_assattr_value_55, 0, tmp_list_element_24);
        tmp_list_element_24 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_list_element_24 == NULL)) {
            tmp_list_element_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
        }

        if (tmp_list_element_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;

            goto list_build_exception_18;
        }
        PyList_SET_ITEM0(tmp_assattr_value_55, 1, tmp_list_element_24);
        tmp_list_element_24 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[137]);

        if (unlikely(tmp_list_element_24 == NULL)) {
            tmp_list_element_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[137]);
        }

        if (tmp_list_element_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;

            goto list_build_exception_18;
        }
        PyList_SET_ITEM0(tmp_assattr_value_55, 2, tmp_list_element_24);
        goto list_build_noexception_18;
        // Exception handling pass through code for list_build:
        list_build_exception_18:;
        Py_DECREF(tmp_assattr_value_55);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_18:;
        tmp_assattr_target_55 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[246]);

        if (unlikely(tmp_assattr_target_55 == NULL)) {
            tmp_assattr_target_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[246]);
        }

        if (tmp_assattr_target_55 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_55);

            exception_lineno = 267;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_55, mod_consts[188], tmp_assattr_value_55);
        Py_DECREF(tmp_assattr_value_55);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_156;
        PyObject *tmp_expression_value_34;
        tmp_expression_value_34 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_34 == NULL)) {
            tmp_expression_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_expression_value_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_156 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts[247]);
        if (tmp_assign_source_156 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[247], tmp_assign_source_156);
    }
    {
        PyObject *tmp_assattr_value_56;
        PyObject *tmp_assattr_target_56;
        tmp_assattr_value_56 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_assattr_value_56 == NULL)) {
            tmp_assattr_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
        }

        if (tmp_assattr_value_56 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_56 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[247]);

        if (unlikely(tmp_assattr_target_56 == NULL)) {
            tmp_assattr_target_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[247]);
        }

        assert(!(tmp_assattr_target_56 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_56, mod_consts[187], tmp_assattr_value_56);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_57;
        PyObject *tmp_list_element_25;
        PyObject *tmp_assattr_target_57;
        tmp_list_element_25 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_list_element_25 == NULL)) {
            tmp_list_element_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_list_element_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_57 = MAKE_LIST_EMPTY(4);
        PyList_SET_ITEM0(tmp_assattr_value_57, 0, tmp_list_element_25);
        tmp_list_element_25 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_list_element_25 == NULL)) {
            tmp_list_element_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
        }

        if (tmp_list_element_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;

            goto list_build_exception_19;
        }
        PyList_SET_ITEM0(tmp_assattr_value_57, 1, tmp_list_element_25);
        tmp_list_element_25 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[137]);

        if (unlikely(tmp_list_element_25 == NULL)) {
            tmp_list_element_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[137]);
        }

        if (tmp_list_element_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;

            goto list_build_exception_19;
        }
        PyList_SET_ITEM0(tmp_assattr_value_57, 2, tmp_list_element_25);
        tmp_list_element_25 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[137]);

        if (unlikely(tmp_list_element_25 == NULL)) {
            tmp_list_element_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[137]);
        }

        if (tmp_list_element_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;

            goto list_build_exception_19;
        }
        PyList_SET_ITEM0(tmp_assattr_value_57, 3, tmp_list_element_25);
        goto list_build_noexception_19;
        // Exception handling pass through code for list_build:
        list_build_exception_19:;
        Py_DECREF(tmp_assattr_value_57);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_19:;
        tmp_assattr_target_57 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[247]);

        if (unlikely(tmp_assattr_target_57 == NULL)) {
            tmp_assattr_target_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[247]);
        }

        if (tmp_assattr_target_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_57);

            exception_lineno = 272;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_57, mod_consts[188], tmp_assattr_value_57);
        Py_DECREF(tmp_assattr_value_57);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_157;
        PyObject *tmp_expression_value_35;
        tmp_expression_value_35 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_35 == NULL)) {
            tmp_expression_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_expression_value_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_157 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, mod_consts[248]);
        if (tmp_assign_source_157 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[248], tmp_assign_source_157);
    }
    {
        PyObject *tmp_assattr_value_58;
        PyObject *tmp_assattr_target_58;
        tmp_assattr_value_58 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_assattr_value_58 == NULL)) {
            tmp_assattr_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
        }

        if (tmp_assattr_value_58 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_58 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[248]);

        if (unlikely(tmp_assattr_target_58 == NULL)) {
            tmp_assattr_target_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[248]);
        }

        assert(!(tmp_assattr_target_58 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_58, mod_consts[187], tmp_assattr_value_58);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_59;
        PyObject *tmp_list_element_26;
        PyObject *tmp_assattr_target_59;
        tmp_list_element_26 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_list_element_26 == NULL)) {
            tmp_list_element_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_list_element_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_59 = MAKE_LIST_EMPTY(2);
        PyList_SET_ITEM0(tmp_assattr_value_59, 0, tmp_list_element_26);
        tmp_list_element_26 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[137]);

        if (unlikely(tmp_list_element_26 == NULL)) {
            tmp_list_element_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[137]);
        }

        if (tmp_list_element_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;

            goto list_build_exception_20;
        }
        PyList_SET_ITEM0(tmp_assattr_value_59, 1, tmp_list_element_26);
        goto list_build_noexception_20;
        // Exception handling pass through code for list_build:
        list_build_exception_20:;
        Py_DECREF(tmp_assattr_value_59);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_20:;
        tmp_assattr_target_59 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[248]);

        if (unlikely(tmp_assattr_target_59 == NULL)) {
            tmp_assattr_target_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[248]);
        }

        if (tmp_assattr_target_59 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_59);

            exception_lineno = 277;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_59, mod_consts[188], tmp_assattr_value_59);
        Py_DECREF(tmp_assattr_value_59);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_158;
        tmp_assign_source_158 = mod_consts[14];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[249], tmp_assign_source_158);
    }
    {
        PyObject *tmp_assign_source_159;
        tmp_assign_source_159 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_assign_source_159 == NULL)) {
            tmp_assign_source_159 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
        }

        if (tmp_assign_source_159 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[250], tmp_assign_source_159);
    }
    {
        PyObject *tmp_assign_source_160;
        PyObject *tmp_called_value_65;
        tmp_called_value_65 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_65 == NULL)) {
            tmp_called_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        if (tmp_called_value_65 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;

            goto frame_exception_exit_1;
        }
        frame_b732d78f929796a32e47289708183a77->m_frame.f_lineno = 281;
        tmp_assign_source_160 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_65, mod_consts[21]);

        if (tmp_assign_source_160 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[251], tmp_assign_source_160);
    }
    {
        PyObject *tmp_assign_source_161;
        tmp_assign_source_161 = mod_consts[252];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[253], tmp_assign_source_161);
    }
    {
        PyObject *tmp_assign_source_162;
        tmp_assign_source_162 = mod_consts[254];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[255], tmp_assign_source_162);
    }
    {
        PyObject *tmp_assign_source_163;
        tmp_assign_source_163 = mod_consts[256];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[257], tmp_assign_source_163);
    }
    {
        PyObject *tmp_assign_source_164;
        tmp_assign_source_164 = mod_consts[258];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[259], tmp_assign_source_164);
    }
    {
        PyObject *tmp_assign_source_165;
        tmp_assign_source_165 = mod_consts[260];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[261], tmp_assign_source_165);
    }
    {
        PyObject *tmp_assign_source_166;
        tmp_assign_source_166 = mod_consts[262];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[263], tmp_assign_source_166);
    }
    {
        PyObject *tmp_assign_source_167;
        tmp_assign_source_167 = mod_consts[264];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[265], tmp_assign_source_167);
    }
    {
        PyObject *tmp_assign_source_168;
        tmp_assign_source_168 = mod_consts[266];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[267], tmp_assign_source_168);
    }
    {
        PyObject *tmp_assign_source_169;
        tmp_assign_source_169 = mod_consts[268];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[269], tmp_assign_source_169);
    }
    {
        PyObject *tmp_assign_source_170;
        tmp_assign_source_170 = mod_consts[270];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[271], tmp_assign_source_170);
    }
    {
        PyObject *tmp_assign_source_171;
        tmp_assign_source_171 = mod_consts[272];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[273], tmp_assign_source_171);
    }
    {
        PyObject *tmp_assign_source_172;
        tmp_assign_source_172 = mod_consts[274];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[275], tmp_assign_source_172);
    }
    {
        PyObject *tmp_assign_source_173;
        tmp_assign_source_173 = mod_consts[276];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[277], tmp_assign_source_173);
    }
    {
        PyObject *tmp_assign_source_174;
        tmp_assign_source_174 = mod_consts[278];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[279], tmp_assign_source_174);
    }
    {
        PyObject *tmp_assign_source_175;
        tmp_assign_source_175 = mod_consts[280];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[281], tmp_assign_source_175);
    }
    {
        PyObject *tmp_assign_source_176;
        tmp_assign_source_176 = mod_consts[282];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[283], tmp_assign_source_176);
    }
    {
        PyObject *tmp_assign_source_177;
        tmp_assign_source_177 = mod_consts[14];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[284], tmp_assign_source_177);
    }
    {
        PyObject *tmp_assign_source_178;
        tmp_assign_source_178 = mod_consts[98];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[285], tmp_assign_source_178);
    }
    {
        PyObject *tmp_assign_source_179;
        tmp_assign_source_179 = mod_consts[286];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[287], tmp_assign_source_179);
    }
    {
        PyObject *tmp_assign_source_180;
        tmp_assign_source_180 = mod_consts[288];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[289], tmp_assign_source_180);
    }
    {
        PyObject *tmp_assign_source_181;
        tmp_assign_source_181 = mod_consts[290];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[291], tmp_assign_source_181);
    }
    {
        PyObject *tmp_assign_source_182;
        tmp_assign_source_182 = mod_consts[292];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[293], tmp_assign_source_182);
    }
    {
        PyObject *tmp_assign_source_183;
        tmp_assign_source_183 = mod_consts[294];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[295], tmp_assign_source_183);
    }
    {
        PyObject *tmp_assign_source_184;
        tmp_assign_source_184 = mod_consts[296];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[297], tmp_assign_source_184);
    }
    {
        PyObject *tmp_assign_source_185;
        tmp_assign_source_185 = mod_consts[298];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[299], tmp_assign_source_185);
    }
    {
        PyObject *tmp_assign_source_186;
        tmp_assign_source_186 = mod_consts[300];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[301], tmp_assign_source_186);
    }
    {
        PyObject *tmp_assign_source_187;
        tmp_assign_source_187 = mod_consts[302];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[303], tmp_assign_source_187);
    }
    {
        PyObject *tmp_assign_source_188;
        tmp_assign_source_188 = mod_consts[304];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[305], tmp_assign_source_188);
    }
    {
        PyObject *tmp_assign_source_189;
        PyObject *tmp_called_value_66;
        PyObject *tmp_args_element_value_129;
        PyObject *tmp_args_element_value_130;
        tmp_called_value_66 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_66 == NULL)) {
            tmp_called_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_called_value_66 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_129 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_args_element_value_129 == NULL)) {
            tmp_args_element_value_129 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
        }

        if (tmp_args_element_value_129 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_130 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[250]);

        if (unlikely(tmp_args_element_value_130 == NULL)) {
            tmp_args_element_value_130 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[250]);
        }

        if (tmp_args_element_value_130 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;

            goto frame_exception_exit_1;
        }
        frame_b732d78f929796a32e47289708183a77->m_frame.f_lineno = 310;
        {
            PyObject *call_args[] = {tmp_args_element_value_129, tmp_args_element_value_130};
            tmp_assign_source_189 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_66, call_args);
        }

        if (tmp_assign_source_189 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[306], tmp_assign_source_189);
    }
    {
        PyObject *tmp_assign_source_190;
        PyObject *tmp_called_value_67;
        PyObject *tmp_args_element_value_131;
        tmp_called_value_67 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_67 == NULL)) {
            tmp_called_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_called_value_67 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_131 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[250]);

        if (unlikely(tmp_args_element_value_131 == NULL)) {
            tmp_args_element_value_131 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[250]);
        }

        if (tmp_args_element_value_131 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;

            goto frame_exception_exit_1;
        }
        frame_b732d78f929796a32e47289708183a77->m_frame.f_lineno = 311;
        tmp_assign_source_190 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_67, tmp_args_element_value_131);
        if (tmp_assign_source_190 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[307], tmp_assign_source_190);
    }
    {
        PyObject *tmp_assign_source_191;
        PyObject *tmp_called_value_68;
        PyObject *tmp_args_element_value_132;
        PyObject *tmp_args_element_value_133;
        PyObject *tmp_args_element_value_134;
        PyObject *tmp_args_element_value_135;
        PyObject *tmp_args_element_value_136;
        PyObject *tmp_args_element_value_137;
        PyObject *tmp_called_value_69;
        PyObject *tmp_args_element_value_138;
        tmp_called_value_68 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_68 == NULL)) {
            tmp_called_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_called_value_68 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_132 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_args_element_value_132 == NULL)) {
            tmp_args_element_value_132 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
        }

        if (tmp_args_element_value_132 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_133 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_args_element_value_133 == NULL)) {
            tmp_args_element_value_133 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_args_element_value_133 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_134 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[250]);

        if (unlikely(tmp_args_element_value_134 == NULL)) {
            tmp_args_element_value_134 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[250]);
        }

        if (tmp_args_element_value_134 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_135 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[251]);

        if (unlikely(tmp_args_element_value_135 == NULL)) {
            tmp_args_element_value_135 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[251]);
        }

        if (tmp_args_element_value_135 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_136 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_args_element_value_136 == NULL)) {
            tmp_args_element_value_136 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
        }

        if (tmp_args_element_value_136 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;

            goto frame_exception_exit_1;
        }
        tmp_called_value_69 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_69 == NULL)) {
            tmp_called_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        if (tmp_called_value_69 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_138 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[137]);

        if (unlikely(tmp_args_element_value_138 == NULL)) {
            tmp_args_element_value_138 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[137]);
        }

        if (tmp_args_element_value_138 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;

            goto frame_exception_exit_1;
        }
        frame_b732d78f929796a32e47289708183a77->m_frame.f_lineno = 312;
        tmp_args_element_value_137 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_69, tmp_args_element_value_138);
        if (tmp_args_element_value_137 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;

            goto frame_exception_exit_1;
        }
        frame_b732d78f929796a32e47289708183a77->m_frame.f_lineno = 312;
        {
            PyObject *call_args[] = {tmp_args_element_value_132, tmp_args_element_value_133, tmp_args_element_value_134, tmp_args_element_value_135, tmp_args_element_value_136, tmp_args_element_value_137};
            tmp_assign_source_191 = CALL_FUNCTION_WITH_ARGS6(tstate, tmp_called_value_68, call_args);
        }

        Py_DECREF(tmp_args_element_value_137);
        if (tmp_assign_source_191 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[308], tmp_assign_source_191);
    }
    {
        PyObject *tmp_assign_source_192;
        PyObject *tmp_called_value_70;
        PyObject *tmp_args_element_value_139;
        tmp_called_value_70 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_70 == NULL)) {
            tmp_called_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_called_value_70 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_139 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_args_element_value_139 == NULL)) {
            tmp_args_element_value_139 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
        }

        if (tmp_args_element_value_139 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;

            goto frame_exception_exit_1;
        }
        frame_b732d78f929796a32e47289708183a77->m_frame.f_lineno = 313;
        tmp_assign_source_192 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_70, tmp_args_element_value_139);
        if (tmp_assign_source_192 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[309], tmp_assign_source_192);
    }
    {
        PyObject *tmp_assign_source_193;
        PyObject *tmp_called_value_71;
        PyObject *tmp_args_element_value_140;
        tmp_called_value_71 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_71 == NULL)) {
            tmp_called_value_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_called_value_71 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_140 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_args_element_value_140 == NULL)) {
            tmp_args_element_value_140 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
        }

        if (tmp_args_element_value_140 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;

            goto frame_exception_exit_1;
        }
        frame_b732d78f929796a32e47289708183a77->m_frame.f_lineno = 314;
        tmp_assign_source_193 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_71, tmp_args_element_value_140);
        if (tmp_assign_source_193 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[310], tmp_assign_source_193);
    }
    {
        PyObject *tmp_assign_source_194;
        PyObject *tmp_expression_value_36;
        tmp_expression_value_36 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_36 == NULL)) {
            tmp_expression_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_expression_value_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_194 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, mod_consts[311]);
        if (tmp_assign_source_194 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[311], tmp_assign_source_194);
    }
    {
        PyObject *tmp_assattr_value_60;
        PyObject *tmp_assattr_target_60;
        tmp_assattr_value_60 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_assattr_value_60 == NULL)) {
            tmp_assattr_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
        }

        if (tmp_assattr_value_60 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_60 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[311]);

        if (unlikely(tmp_assattr_target_60 == NULL)) {
            tmp_assattr_target_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[311]);
        }

        assert(!(tmp_assattr_target_60 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_60, mod_consts[187], tmp_assattr_value_60);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_61;
        PyObject *tmp_list_element_27;
        PyObject *tmp_assattr_target_61;
        tmp_list_element_27 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[250]);

        if (unlikely(tmp_list_element_27 == NULL)) {
            tmp_list_element_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[250]);
        }

        if (tmp_list_element_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_61 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_61, 0, tmp_list_element_27);
        tmp_assattr_target_61 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[311]);

        if (unlikely(tmp_assattr_target_61 == NULL)) {
            tmp_assattr_target_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[311]);
        }

        if (tmp_assattr_target_61 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_61);

            exception_lineno = 318;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_61, mod_consts[188], tmp_assattr_value_61);
        Py_DECREF(tmp_assattr_value_61);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_195;
        PyObject *tmp_expression_value_37;
        tmp_expression_value_37 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_37 == NULL)) {
            tmp_expression_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_expression_value_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_195 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_37, mod_consts[312]);
        if (tmp_assign_source_195 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[312], tmp_assign_source_195);
    }
    {
        PyObject *tmp_assattr_value_62;
        PyObject *tmp_assattr_target_62;
        tmp_assattr_value_62 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[250]);

        if (unlikely(tmp_assattr_value_62 == NULL)) {
            tmp_assattr_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[250]);
        }

        if (tmp_assattr_value_62 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_62 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[312]);

        if (unlikely(tmp_assattr_target_62 == NULL)) {
            tmp_assattr_target_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[312]);
        }

        assert(!(tmp_assattr_target_62 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_62, mod_consts[187], tmp_assattr_value_62);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_63;
        PyObject *tmp_assattr_target_63;
        tmp_assattr_value_63 = MAKE_LIST_EMPTY(0);
        tmp_assattr_target_63 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[312]);

        if (unlikely(tmp_assattr_target_63 == NULL)) {
            tmp_assattr_target_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[312]);
        }

        if (tmp_assattr_target_63 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_63);

            exception_lineno = 323;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_63, mod_consts[188], tmp_assattr_value_63);
        Py_DECREF(tmp_assattr_value_63);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_196;
        PyObject *tmp_expression_value_38;
        tmp_expression_value_38 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_38 == NULL)) {
            tmp_expression_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_expression_value_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_196 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_38, mod_consts[313]);
        if (tmp_assign_source_196 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[313], tmp_assign_source_196);
    }
    {
        PyObject *tmp_assattr_value_64;
        PyObject *tmp_assattr_target_64;
        tmp_assattr_value_64 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_assattr_value_64 == NULL)) {
            tmp_assattr_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
        }

        if (tmp_assattr_value_64 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_64 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[313]);

        if (unlikely(tmp_assattr_target_64 == NULL)) {
            tmp_assattr_target_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[313]);
        }

        assert(!(tmp_assattr_target_64 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_64, mod_consts[187], tmp_assattr_value_64);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_65;
        PyObject *tmp_list_element_28;
        PyObject *tmp_assattr_target_65;
        tmp_list_element_28 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_list_element_28 == NULL)) {
            tmp_list_element_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_list_element_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_65 = MAKE_LIST_EMPTY(5);
        {
            PyObject *tmp_called_value_72;
            PyObject *tmp_args_element_value_141;
            PyList_SET_ITEM0(tmp_assattr_value_65, 0, tmp_list_element_28);
            tmp_list_element_28 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[250]);

            if (unlikely(tmp_list_element_28 == NULL)) {
                tmp_list_element_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[250]);
            }

            if (tmp_list_element_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 328;

                goto list_build_exception_21;
            }
            PyList_SET_ITEM0(tmp_assattr_value_65, 1, tmp_list_element_28);
            tmp_list_element_28 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[251]);

            if (unlikely(tmp_list_element_28 == NULL)) {
                tmp_list_element_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[251]);
            }

            if (tmp_list_element_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 328;

                goto list_build_exception_21;
            }
            PyList_SET_ITEM0(tmp_assattr_value_65, 2, tmp_list_element_28);
            tmp_list_element_28 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_list_element_28 == NULL)) {
                tmp_list_element_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_list_element_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 328;

                goto list_build_exception_21;
            }
            PyList_SET_ITEM0(tmp_assattr_value_65, 3, tmp_list_element_28);
            tmp_called_value_72 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_called_value_72 == NULL)) {
                tmp_called_value_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
            }

            if (tmp_called_value_72 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 328;

                goto list_build_exception_21;
            }
            tmp_args_element_value_141 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[137]);

            if (unlikely(tmp_args_element_value_141 == NULL)) {
                tmp_args_element_value_141 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[137]);
            }

            if (tmp_args_element_value_141 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 328;

                goto list_build_exception_21;
            }
            frame_b732d78f929796a32e47289708183a77->m_frame.f_lineno = 328;
            tmp_list_element_28 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_72, tmp_args_element_value_141);
            if (tmp_list_element_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 328;

                goto list_build_exception_21;
            }
            PyList_SET_ITEM(tmp_assattr_value_65, 4, tmp_list_element_28);
        }
        goto list_build_noexception_21;
        // Exception handling pass through code for list_build:
        list_build_exception_21:;
        Py_DECREF(tmp_assattr_value_65);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_21:;
        tmp_assattr_target_65 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[313]);

        if (unlikely(tmp_assattr_target_65 == NULL)) {
            tmp_assattr_target_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[313]);
        }

        if (tmp_assattr_target_65 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_65);

            exception_lineno = 328;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_65, mod_consts[188], tmp_assattr_value_65);
        Py_DECREF(tmp_assattr_value_65);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_197;
        PyObject *tmp_expression_value_39;
        tmp_expression_value_39 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_39 == NULL)) {
            tmp_expression_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_expression_value_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_197 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, mod_consts[314]);
        if (tmp_assign_source_197 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[314], tmp_assign_source_197);
    }
    {
        PyObject *tmp_assattr_value_66;
        PyObject *tmp_assattr_target_66;
        tmp_assattr_value_66 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_assattr_value_66 == NULL)) {
            tmp_assattr_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
        }

        if (tmp_assattr_value_66 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_66 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[314]);

        if (unlikely(tmp_assattr_target_66 == NULL)) {
            tmp_assattr_target_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[314]);
        }

        assert(!(tmp_assattr_target_66 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_66, mod_consts[187], tmp_assattr_value_66);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_67;
        PyObject *tmp_assattr_target_67;
        tmp_assattr_value_67 = MAKE_LIST_EMPTY(0);
        tmp_assattr_target_67 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[314]);

        if (unlikely(tmp_assattr_target_67 == NULL)) {
            tmp_assattr_target_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[314]);
        }

        if (tmp_assattr_target_67 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_67);

            exception_lineno = 333;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_67, mod_consts[188], tmp_assattr_value_67);
        Py_DECREF(tmp_assattr_value_67);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_198;
        PyObject *tmp_expression_value_40;
        tmp_expression_value_40 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_40 == NULL)) {
            tmp_expression_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_expression_value_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_198 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_40, mod_consts[315]);
        if (tmp_assign_source_198 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[315], tmp_assign_source_198);
    }
    {
        PyObject *tmp_assattr_value_68;
        PyObject *tmp_assattr_target_68;
        tmp_assattr_value_68 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_assattr_value_68 == NULL)) {
            tmp_assattr_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
        }

        if (tmp_assattr_value_68 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_68 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[315]);

        if (unlikely(tmp_assattr_target_68 == NULL)) {
            tmp_assattr_target_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[315]);
        }

        assert(!(tmp_assattr_target_68 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_68, mod_consts[187], tmp_assattr_value_68);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_69;
        PyObject *tmp_assattr_target_69;
        tmp_assattr_value_69 = MAKE_LIST_EMPTY(0);
        tmp_assattr_target_69 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[315]);

        if (unlikely(tmp_assattr_target_69 == NULL)) {
            tmp_assattr_target_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[315]);
        }

        if (tmp_assattr_target_69 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_69);

            exception_lineno = 338;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_69, mod_consts[188], tmp_assattr_value_69);
        Py_DECREF(tmp_assattr_value_69);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_199;
        tmp_assign_source_199 = mod_consts[14];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[316], tmp_assign_source_199);
    }
    {
        PyObject *tmp_assign_source_200;
        tmp_assign_source_200 = mod_consts[317];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[318], tmp_assign_source_200);
    }
    {
        PyObject *tmp_assign_source_201;
        tmp_assign_source_201 = mod_consts[319];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[320], tmp_assign_source_201);
    }
    {
        PyObject *tmp_assign_source_202;
        tmp_assign_source_202 = mod_consts[321];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[322], tmp_assign_source_202);
    }
    {
        PyObject *tmp_assign_source_203;
        tmp_assign_source_203 = mod_consts[133];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[323], tmp_assign_source_203);
    }
    {
        PyObject *tmp_assign_source_204;
        tmp_assign_source_204 = mod_consts[252];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[324], tmp_assign_source_204);
    }
    {
        PyObject *tmp_assign_source_205;
        tmp_assign_source_205 = mod_consts[254];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[325], tmp_assign_source_205);
    }
    {
        PyObject *tmp_assign_source_206;
        tmp_assign_source_206 = mod_consts[256];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[326], tmp_assign_source_206);
    }
    {
        PyObject *tmp_assign_source_207;
        tmp_assign_source_207 = mod_consts[327];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[328], tmp_assign_source_207);
    }
    {
        PyObject *tmp_assign_source_208;
        tmp_assign_source_208 = mod_consts[266];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[329], tmp_assign_source_208);
    }
    {
        PyObject *tmp_assign_source_209;
        tmp_assign_source_209 = mod_consts[268];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[330], tmp_assign_source_209);
    }
    {
        PyObject *tmp_assign_source_210;
        tmp_assign_source_210 = mod_consts[270];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[331], tmp_assign_source_210);
    }
    {
        PyObject *tmp_assign_source_211;
        tmp_assign_source_211 = mod_consts[332];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[333], tmp_assign_source_211);
    }
    {
        PyObject *tmp_assign_source_212;
        tmp_assign_source_212 = mod_consts[14];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[334], tmp_assign_source_212);
    }
    {
        PyObject *tmp_assign_source_213;
        tmp_assign_source_213 = mod_consts[335];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[336], tmp_assign_source_213);
    }
    {
        PyObject *tmp_assign_source_214;
        tmp_assign_source_214 = mod_consts[337];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[338], tmp_assign_source_214);
    }
    {
        PyObject *tmp_assign_source_215;
        tmp_assign_source_215 = mod_consts[339];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[340], tmp_assign_source_215);
    }
    {
        PyObject *tmp_assign_source_216;
        tmp_assign_source_216 = mod_consts[341];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[342], tmp_assign_source_216);
    }
    {
        PyObject *tmp_assign_source_217;
        tmp_assign_source_217 = mod_consts[343];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[344], tmp_assign_source_217);
    }
    {
        PyObject *tmp_assign_source_218;
        tmp_assign_source_218 = mod_consts[345];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[346], tmp_assign_source_218);
    }
    {
        PyObject *tmp_assign_source_219;
        tmp_assign_source_219 = mod_consts[347];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[348], tmp_assign_source_219);
    }
    {
        PyObject *tmp_assign_source_220;
        PyObject *tmp_called_value_73;
        PyObject *tmp_args_element_value_142;
        tmp_called_value_73 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_73 == NULL)) {
            tmp_called_value_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_called_value_73 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 361;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_142 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_args_element_value_142 == NULL)) {
            tmp_args_element_value_142 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
        }

        if (tmp_args_element_value_142 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 361;

            goto frame_exception_exit_1;
        }
        frame_b732d78f929796a32e47289708183a77->m_frame.f_lineno = 361;
        tmp_assign_source_220 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_73, tmp_args_element_value_142);
        if (tmp_assign_source_220 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 361;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[349], tmp_assign_source_220);
    }
    {
        PyObject *tmp_assign_source_221;
        PyObject *tmp_expression_value_41;
        tmp_expression_value_41 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_41 == NULL)) {
            tmp_expression_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_expression_value_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 363;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_221 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_41, mod_consts[350]);
        if (tmp_assign_source_221 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 363;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[350], tmp_assign_source_221);
    }
    {
        PyObject *tmp_assattr_value_70;
        PyObject *tmp_assattr_target_70;
        tmp_assattr_value_70 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_assattr_value_70 == NULL)) {
            tmp_assattr_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
        }

        if (tmp_assattr_value_70 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_70 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[350]);

        if (unlikely(tmp_assattr_target_70 == NULL)) {
            tmp_assattr_target_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[350]);
        }

        assert(!(tmp_assattr_target_70 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_70, mod_consts[187], tmp_assattr_value_70);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_71;
        PyObject *tmp_assattr_target_71;
        tmp_assattr_value_71 = MAKE_LIST_EMPTY(0);
        tmp_assattr_target_71 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[350]);

        if (unlikely(tmp_assattr_target_71 == NULL)) {
            tmp_assattr_target_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[350]);
        }

        if (tmp_assattr_target_71 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_71);

            exception_lineno = 365;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_71, mod_consts[188], tmp_assattr_value_71);
        Py_DECREF(tmp_assattr_value_71);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 365;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_222;
        tmp_assign_source_222 = mod_consts[14];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[351], tmp_assign_source_222);
    }
    {
        PyObject *tmp_assign_source_223;
        PyObject *tmp_called_value_74;
        tmp_called_value_74 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_74 == NULL)) {
            tmp_called_value_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        if (tmp_called_value_74 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 368;

            goto frame_exception_exit_1;
        }
        frame_b732d78f929796a32e47289708183a77->m_frame.f_lineno = 368;
        tmp_assign_source_223 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_74, mod_consts[21]);

        if (tmp_assign_source_223 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 368;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[352], tmp_assign_source_223);
    }
    {
        PyObject *tmp_assign_source_224;
        tmp_assign_source_224 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[353]);

        if (unlikely(tmp_assign_source_224 == NULL)) {
            tmp_assign_source_224 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[353]);
        }

        if (tmp_assign_source_224 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 369;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[354], tmp_assign_source_224);
    }
    {
        PyObject *tmp_assign_source_225;
        tmp_assign_source_225 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[354]);

        if (unlikely(tmp_assign_source_225 == NULL)) {
            tmp_assign_source_225 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[354]);
        }

        assert(!(tmp_assign_source_225 == NULL));
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[355], tmp_assign_source_225);
    }
    {
        PyObject *tmp_assign_source_226;
        tmp_assign_source_226 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[356]);

        if (unlikely(tmp_assign_source_226 == NULL)) {
            tmp_assign_source_226 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[356]);
        }

        if (tmp_assign_source_226 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[357], tmp_assign_source_226);
    }
    {
        PyObject *tmp_assign_source_227;
        tmp_assign_source_227 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[357]);

        if (unlikely(tmp_assign_source_227 == NULL)) {
            tmp_assign_source_227 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[357]);
        }

        assert(!(tmp_assign_source_227 == NULL));
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[358], tmp_assign_source_227);
    }
    {
        PyObject *tmp_assign_source_228;
        tmp_assign_source_228 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[358]);

        if (unlikely(tmp_assign_source_228 == NULL)) {
            tmp_assign_source_228 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[358]);
        }

        assert(!(tmp_assign_source_228 == NULL));
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[359], tmp_assign_source_228);
    }
    {
        PyObject *tmp_assign_source_229;
        PyObject *tmp_called_value_75;
        tmp_called_value_75 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_75 == NULL)) {
            tmp_called_value_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        if (tmp_called_value_75 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;

            goto frame_exception_exit_1;
        }
        frame_b732d78f929796a32e47289708183a77->m_frame.f_lineno = 374;
        tmp_assign_source_229 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_75, mod_consts[21]);

        if (tmp_assign_source_229 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[360], tmp_assign_source_229);
    }
    {
        PyObject *tmp_assign_source_230;
        tmp_assign_source_230 = mod_consts[319];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[361], tmp_assign_source_230);
    }
    {
        PyObject *tmp_assign_source_231;
        tmp_assign_source_231 = mod_consts[362];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[363], tmp_assign_source_231);
    }
    {
        PyObject *tmp_assign_source_232;
        tmp_assign_source_232 = mod_consts[364];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[365], tmp_assign_source_232);
    }
    {
        PyObject *tmp_assign_source_233;
        tmp_assign_source_233 = mod_consts[366];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[367], tmp_assign_source_233);
    }
    {
        PyObject *tmp_assign_source_234;
        tmp_assign_source_234 = mod_consts[368];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[369], tmp_assign_source_234);
    }
    {
        PyObject *tmp_assign_source_235;
        tmp_assign_source_235 = mod_consts[370];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[371], tmp_assign_source_235);
    }
    {
        PyObject *tmp_assign_source_236;
        tmp_assign_source_236 = mod_consts[14];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[372], tmp_assign_source_236);
    }
    {
        PyObject *tmp_assign_source_237;
        tmp_assign_source_237 = mod_consts[98];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[373], tmp_assign_source_237);
    }
    {
        PyObject *tmp_assign_source_238;
        tmp_assign_source_238 = mod_consts[374];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[375], tmp_assign_source_238);
    }
    {
        PyObject *tmp_assign_source_239;
        tmp_assign_source_239 = mod_consts[376];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[377], tmp_assign_source_239);
    }
    {
        PyObject *tmp_assign_source_240;
        tmp_assign_source_240 = mod_consts[378];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[379], tmp_assign_source_240);
    }
    {
        PyObject *tmp_assign_source_241;
        tmp_assign_source_241 = mod_consts[327];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[380], tmp_assign_source_241);
    }
    {
        PyObject *tmp_assign_source_242;
        tmp_assign_source_242 = mod_consts[381];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[382], tmp_assign_source_242);
    }
    {
        PyObject *tmp_assign_source_243;
        tmp_assign_source_243 = mod_consts[383];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[384], tmp_assign_source_243);
    }
    {
        PyObject *tmp_assign_source_244;
        tmp_assign_source_244 = mod_consts[385];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[386], tmp_assign_source_244);
    }
    {
        PyObject *tmp_assign_source_245;
        tmp_assign_source_245 = mod_consts[387];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[388], tmp_assign_source_245);
    }
    {
        PyObject *tmp_assign_source_246;
        tmp_assign_source_246 = mod_consts[389];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[390], tmp_assign_source_246);
    }
    {
        PyObject *tmp_assign_source_247;
        tmp_assign_source_247 = mod_consts[391];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[392], tmp_assign_source_247);
    }
    {
        PyObject *tmp_assign_source_248;
        tmp_assign_source_248 = mod_consts[393];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[394], tmp_assign_source_248);
    }
    {
        PyObject *tmp_assign_source_249;
        tmp_assign_source_249 = mod_consts[395];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[396], tmp_assign_source_249);
    }
    {
        PyObject *tmp_assign_source_250;
        tmp_assign_source_250 = mod_consts[397];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[398], tmp_assign_source_250);
    }
    {
        PyObject *tmp_assign_source_251;
        tmp_assign_source_251 = mod_consts[14];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[399], tmp_assign_source_251);
    }
    {
        PyObject *tmp_assign_source_252;
        tmp_assign_source_252 = mod_consts[400];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[401], tmp_assign_source_252);
    }
    {
        PyObject *tmp_assign_source_253;
        tmp_assign_source_253 = mod_consts[402];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[403], tmp_assign_source_253);
    }
    {
        PyObject *tmp_assign_source_254;
        tmp_assign_source_254 = mod_consts[404];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[405], tmp_assign_source_254);
    }
    {
        PyObject *tmp_assign_source_255;
        tmp_assign_source_255 = mod_consts[406];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[407], tmp_assign_source_255);
    }
    {
        PyObject *tmp_assign_source_256;
        tmp_assign_source_256 = mod_consts[408];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[409], tmp_assign_source_256);
    }
    {
        PyObject *tmp_assign_source_257;
        tmp_assign_source_257 = mod_consts[268];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[410], tmp_assign_source_257);
    }
    {
        PyObject *tmp_assign_source_258;
        tmp_assign_source_258 = mod_consts[270];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[411], tmp_assign_source_258);
    }
    {
        PyObject *tmp_assign_source_259;
        tmp_assign_source_259 = mod_consts[412];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[413], tmp_assign_source_259);
    }
    {
        PyObject *tmp_assign_source_260;
        tmp_assign_source_260 = mod_consts[414];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[415], tmp_assign_source_260);
    }
    {
        PyObject *tmp_assign_source_261;
        tmp_assign_source_261 = mod_consts[416];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[417], tmp_assign_source_261);
    }
    {
        PyObject *tmp_assign_source_262;
        tmp_assign_source_262 = mod_consts[418];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[419], tmp_assign_source_262);
    }
    {
        PyObject *tmp_assign_source_263;
        tmp_assign_source_263 = mod_consts[420];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[421], tmp_assign_source_263);
    }
    {
        PyObject *tmp_assign_source_264;
        tmp_assign_source_264 = mod_consts[422];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[423], tmp_assign_source_264);
    }
    {
        PyObject *tmp_assign_source_265;
        tmp_assign_source_265 = mod_consts[424];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[425], tmp_assign_source_265);
    }
    {
        PyObject *tmp_assign_source_266;
        tmp_assign_source_266 = mod_consts[426];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[427], tmp_assign_source_266);
    }
    {
        PyObject *tmp_assign_source_267;
        tmp_assign_source_267 = mod_consts[428];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[429], tmp_assign_source_267);
    }
    {
        PyObject *tmp_assign_source_268;
        tmp_assign_source_268 = mod_consts[430];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[431], tmp_assign_source_268);
    }
    {
        PyObject *tmp_assign_source_269;
        tmp_assign_source_269 = mod_consts[432];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[433], tmp_assign_source_269);
    }
    {
        PyObject *tmp_assign_source_270;
        tmp_assign_source_270 = mod_consts[434];
        UPDATE_STRING_DICT0(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[435], tmp_assign_source_270);
    }
    {
        PyObject *tmp_assign_source_271;
        PyObject *tmp_called_value_76;
        PyObject *tmp_args_element_value_143;
        PyObject *tmp_args_element_value_144;
        PyObject *tmp_args_element_value_145;
        PyObject *tmp_args_element_value_146;
        PyObject *tmp_called_value_77;
        PyObject *tmp_args_element_value_147;
        tmp_called_value_76 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_76 == NULL)) {
            tmp_called_value_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_called_value_76 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_143 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[352]);

        if (unlikely(tmp_args_element_value_143 == NULL)) {
            tmp_args_element_value_143 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[352]);
        }

        if (tmp_args_element_value_143 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_144 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_args_element_value_144 == NULL)) {
            tmp_args_element_value_144 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_args_element_value_144 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_145 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[250]);

        if (unlikely(tmp_args_element_value_145 == NULL)) {
            tmp_args_element_value_145 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[250]);
        }

        if (tmp_args_element_value_145 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;

            goto frame_exception_exit_1;
        }
        tmp_called_value_77 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_77 == NULL)) {
            tmp_called_value_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        if (tmp_called_value_77 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_147 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[355]);

        if (unlikely(tmp_args_element_value_147 == NULL)) {
            tmp_args_element_value_147 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[355]);
        }

        if (tmp_args_element_value_147 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;

            goto frame_exception_exit_1;
        }
        frame_b732d78f929796a32e47289708183a77->m_frame.f_lineno = 416;
        tmp_args_element_value_146 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_77, tmp_args_element_value_147);
        if (tmp_args_element_value_146 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;

            goto frame_exception_exit_1;
        }
        frame_b732d78f929796a32e47289708183a77->m_frame.f_lineno = 416;
        {
            PyObject *call_args[] = {tmp_args_element_value_143, tmp_args_element_value_144, tmp_args_element_value_145, tmp_args_element_value_146};
            tmp_assign_source_271 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_76, call_args);
        }

        Py_DECREF(tmp_args_element_value_146);
        if (tmp_assign_source_271 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[436], tmp_assign_source_271);
    }
    {
        PyObject *tmp_assign_source_272;
        PyObject *tmp_called_value_78;
        PyObject *tmp_args_element_value_148;
        PyObject *tmp_args_element_value_149;
        PyObject *tmp_args_element_value_150;
        tmp_called_value_78 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_78 == NULL)) {
            tmp_called_value_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_called_value_78 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 417;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_148 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_args_element_value_148 == NULL)) {
            tmp_args_element_value_148 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
        }

        if (tmp_args_element_value_148 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 417;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_149 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_args_element_value_149 == NULL)) {
            tmp_args_element_value_149 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_args_element_value_149 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 417;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_150 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[352]);

        if (unlikely(tmp_args_element_value_150 == NULL)) {
            tmp_args_element_value_150 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[352]);
        }

        if (tmp_args_element_value_150 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 417;

            goto frame_exception_exit_1;
        }
        frame_b732d78f929796a32e47289708183a77->m_frame.f_lineno = 417;
        {
            PyObject *call_args[] = {tmp_args_element_value_148, tmp_args_element_value_149, tmp_args_element_value_150};
            tmp_assign_source_272 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_78, call_args);
        }

        if (tmp_assign_source_272 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 417;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[437], tmp_assign_source_272);
    }
    {
        PyObject *tmp_assign_source_273;
        PyObject *tmp_called_value_79;
        PyObject *tmp_args_element_value_151;
        PyObject *tmp_args_element_value_152;
        PyObject *tmp_args_element_value_153;
        PyObject *tmp_args_element_value_154;
        PyObject *tmp_args_element_value_155;
        tmp_called_value_79 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_79 == NULL)) {
            tmp_called_value_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_called_value_79 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 418;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_151 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[137]);

        if (unlikely(tmp_args_element_value_151 == NULL)) {
            tmp_args_element_value_151 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[137]);
        }

        if (tmp_args_element_value_151 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 418;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_152 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_args_element_value_152 == NULL)) {
            tmp_args_element_value_152 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_args_element_value_152 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 418;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_153 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[352]);

        if (unlikely(tmp_args_element_value_153 == NULL)) {
            tmp_args_element_value_153 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[352]);
        }

        if (tmp_args_element_value_153 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 418;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_154 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[137]);

        if (unlikely(tmp_args_element_value_154 == NULL)) {
            tmp_args_element_value_154 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[137]);
        }

        if (tmp_args_element_value_154 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 418;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_155 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[359]);

        if (unlikely(tmp_args_element_value_155 == NULL)) {
            tmp_args_element_value_155 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[359]);
        }

        if (tmp_args_element_value_155 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 418;

            goto frame_exception_exit_1;
        }
        frame_b732d78f929796a32e47289708183a77->m_frame.f_lineno = 418;
        {
            PyObject *call_args[] = {tmp_args_element_value_151, tmp_args_element_value_152, tmp_args_element_value_153, tmp_args_element_value_154, tmp_args_element_value_155};
            tmp_assign_source_273 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_79, call_args);
        }

        if (tmp_assign_source_273 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 418;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[438], tmp_assign_source_273);
    }
    {
        PyObject *tmp_assign_source_274;
        PyObject *tmp_called_value_80;
        PyObject *tmp_args_element_value_156;
        PyObject *tmp_args_element_value_157;
        PyObject *tmp_args_element_value_158;
        PyObject *tmp_args_element_value_159;
        PyObject *tmp_args_element_value_160;
        PyObject *tmp_called_value_81;
        PyObject *tmp_args_element_value_161;
        tmp_called_value_80 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_80 == NULL)) {
            tmp_called_value_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_called_value_80 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 419;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_156 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_args_element_value_156 == NULL)) {
            tmp_args_element_value_156 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
        }

        if (tmp_args_element_value_156 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 419;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_157 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_args_element_value_157 == NULL)) {
            tmp_args_element_value_157 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_args_element_value_157 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 419;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_158 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[352]);

        if (unlikely(tmp_args_element_value_158 == NULL)) {
            tmp_args_element_value_158 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[352]);
        }

        if (tmp_args_element_value_158 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 419;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_159 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[137]);

        if (unlikely(tmp_args_element_value_159 == NULL)) {
            tmp_args_element_value_159 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[137]);
        }

        if (tmp_args_element_value_159 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 419;

            goto frame_exception_exit_1;
        }
        tmp_called_value_81 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_81 == NULL)) {
            tmp_called_value_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        if (tmp_called_value_81 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 419;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_161 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[355]);

        if (unlikely(tmp_args_element_value_161 == NULL)) {
            tmp_args_element_value_161 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[355]);
        }

        if (tmp_args_element_value_161 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 419;

            goto frame_exception_exit_1;
        }
        frame_b732d78f929796a32e47289708183a77->m_frame.f_lineno = 419;
        tmp_args_element_value_160 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_81, tmp_args_element_value_161);
        if (tmp_args_element_value_160 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 419;

            goto frame_exception_exit_1;
        }
        frame_b732d78f929796a32e47289708183a77->m_frame.f_lineno = 419;
        {
            PyObject *call_args[] = {tmp_args_element_value_156, tmp_args_element_value_157, tmp_args_element_value_158, tmp_args_element_value_159, tmp_args_element_value_160};
            tmp_assign_source_274 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_80, call_args);
        }

        Py_DECREF(tmp_args_element_value_160);
        if (tmp_assign_source_274 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 419;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[439], tmp_assign_source_274);
    }
    {
        PyObject *tmp_assign_source_275;
        PyObject *tmp_called_value_82;
        PyObject *tmp_args_element_value_162;
        PyObject *tmp_args_element_value_163;
        PyObject *tmp_args_element_value_164;
        PyObject *tmp_args_element_value_165;
        PyObject *tmp_args_element_value_166;
        PyObject *tmp_args_element_value_167;
        PyObject *tmp_called_value_83;
        PyObject *tmp_args_element_value_168;
        tmp_called_value_82 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_82 == NULL)) {
            tmp_called_value_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_called_value_82 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 420;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_162 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[360]);

        if (unlikely(tmp_args_element_value_162 == NULL)) {
            tmp_args_element_value_162 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[360]);
        }

        if (tmp_args_element_value_162 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 420;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_163 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_args_element_value_163 == NULL)) {
            tmp_args_element_value_163 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_args_element_value_163 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 420;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_164 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_args_element_value_164 == NULL)) {
            tmp_args_element_value_164 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
        }

        if (tmp_args_element_value_164 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 420;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_165 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[250]);

        if (unlikely(tmp_args_element_value_165 == NULL)) {
            tmp_args_element_value_165 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[250]);
        }

        if (tmp_args_element_value_165 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 420;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_166 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[251]);

        if (unlikely(tmp_args_element_value_166 == NULL)) {
            tmp_args_element_value_166 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[251]);
        }

        if (tmp_args_element_value_166 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 420;

            goto frame_exception_exit_1;
        }
        tmp_called_value_83 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_83 == NULL)) {
            tmp_called_value_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        if (tmp_called_value_83 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 420;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_168 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[355]);

        if (unlikely(tmp_args_element_value_168 == NULL)) {
            tmp_args_element_value_168 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[355]);
        }

        if (tmp_args_element_value_168 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 420;

            goto frame_exception_exit_1;
        }
        frame_b732d78f929796a32e47289708183a77->m_frame.f_lineno = 420;
        tmp_args_element_value_167 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_83, tmp_args_element_value_168);
        if (tmp_args_element_value_167 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 420;

            goto frame_exception_exit_1;
        }
        frame_b732d78f929796a32e47289708183a77->m_frame.f_lineno = 420;
        {
            PyObject *call_args[] = {tmp_args_element_value_162, tmp_args_element_value_163, tmp_args_element_value_164, tmp_args_element_value_165, tmp_args_element_value_166, tmp_args_element_value_167};
            tmp_assign_source_275 = CALL_FUNCTION_WITH_ARGS6(tstate, tmp_called_value_82, call_args);
        }

        Py_DECREF(tmp_args_element_value_167);
        if (tmp_assign_source_275 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 420;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[440], tmp_assign_source_275);
    }
    {
        PyObject *tmp_assign_source_276;
        PyObject *tmp_called_value_84;
        PyObject *tmp_args_element_value_169;
        PyObject *tmp_args_element_value_170;
        PyObject *tmp_args_element_value_171;
        tmp_called_value_84 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_84 == NULL)) {
            tmp_called_value_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_called_value_84 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 421;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_169 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_args_element_value_169 == NULL)) {
            tmp_args_element_value_169 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
        }

        if (tmp_args_element_value_169 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 421;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_170 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_args_element_value_170 == NULL)) {
            tmp_args_element_value_170 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_args_element_value_170 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 421;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_171 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[360]);

        if (unlikely(tmp_args_element_value_171 == NULL)) {
            tmp_args_element_value_171 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[360]);
        }

        if (tmp_args_element_value_171 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 421;

            goto frame_exception_exit_1;
        }
        frame_b732d78f929796a32e47289708183a77->m_frame.f_lineno = 421;
        {
            PyObject *call_args[] = {tmp_args_element_value_169, tmp_args_element_value_170, tmp_args_element_value_171};
            tmp_assign_source_276 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_84, call_args);
        }

        if (tmp_assign_source_276 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 421;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[441], tmp_assign_source_276);
    }
    {
        PyObject *tmp_assign_source_277;
        PyObject *tmp_called_value_85;
        PyObject *tmp_args_element_value_172;
        PyObject *tmp_args_element_value_173;
        PyObject *tmp_args_element_value_174;
        PyObject *tmp_called_value_86;
        PyObject *tmp_args_element_value_175;
        PyObject *tmp_called_value_87;
        PyObject *tmp_args_element_value_176;
        tmp_called_value_85 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_85 == NULL)) {
            tmp_called_value_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_called_value_85 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 422;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_172 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_args_element_value_172 == NULL)) {
            tmp_args_element_value_172 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_args_element_value_172 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 422;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_173 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[250]);

        if (unlikely(tmp_args_element_value_173 == NULL)) {
            tmp_args_element_value_173 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[250]);
        }

        if (tmp_args_element_value_173 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 422;

            goto frame_exception_exit_1;
        }
        tmp_called_value_86 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_86 == NULL)) {
            tmp_called_value_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        if (tmp_called_value_86 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 422;

            goto frame_exception_exit_1;
        }
        frame_b732d78f929796a32e47289708183a77->m_frame.f_lineno = 422;
        tmp_args_element_value_174 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_86, mod_consts[21]);

        if (tmp_args_element_value_174 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 422;

            goto frame_exception_exit_1;
        }
        tmp_called_value_87 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_87 == NULL)) {
            tmp_called_value_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        if (tmp_called_value_87 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_174);

            exception_lineno = 422;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_176 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[355]);

        if (unlikely(tmp_args_element_value_176 == NULL)) {
            tmp_args_element_value_176 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[355]);
        }

        if (tmp_args_element_value_176 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_174);

            exception_lineno = 422;

            goto frame_exception_exit_1;
        }
        frame_b732d78f929796a32e47289708183a77->m_frame.f_lineno = 422;
        tmp_args_element_value_175 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_87, tmp_args_element_value_176);
        if (tmp_args_element_value_175 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_174);

            exception_lineno = 422;

            goto frame_exception_exit_1;
        }
        frame_b732d78f929796a32e47289708183a77->m_frame.f_lineno = 422;
        {
            PyObject *call_args[] = {tmp_args_element_value_172, tmp_args_element_value_173, tmp_args_element_value_174, tmp_args_element_value_175};
            tmp_assign_source_277 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_85, call_args);
        }

        Py_DECREF(tmp_args_element_value_174);
        Py_DECREF(tmp_args_element_value_175);
        if (tmp_assign_source_277 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 422;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[442], tmp_assign_source_277);
    }
    {
        PyObject *tmp_assign_source_278;
        PyObject *tmp_called_value_88;
        PyObject *tmp_args_element_value_177;
        PyObject *tmp_args_element_value_178;
        PyObject *tmp_args_element_value_179;
        PyObject *tmp_args_element_value_180;
        PyObject *tmp_called_value_89;
        PyObject *tmp_args_element_value_181;
        PyObject *tmp_called_value_90;
        PyObject *tmp_args_element_value_182;
        tmp_called_value_88 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_88 == NULL)) {
            tmp_called_value_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_called_value_88 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 423;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_177 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_args_element_value_177 == NULL)) {
            tmp_args_element_value_177 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
        }

        if (tmp_args_element_value_177 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 423;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_178 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_args_element_value_178 == NULL)) {
            tmp_args_element_value_178 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_args_element_value_178 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 423;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_179 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_args_element_value_179 == NULL)) {
            tmp_args_element_value_179 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
        }

        if (tmp_args_element_value_179 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 423;

            goto frame_exception_exit_1;
        }
        tmp_called_value_89 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_89 == NULL)) {
            tmp_called_value_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        if (tmp_called_value_89 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 423;

            goto frame_exception_exit_1;
        }
        frame_b732d78f929796a32e47289708183a77->m_frame.f_lineno = 423;
        tmp_args_element_value_180 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_89, mod_consts[21]);

        if (tmp_args_element_value_180 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 423;

            goto frame_exception_exit_1;
        }
        tmp_called_value_90 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_90 == NULL)) {
            tmp_called_value_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        if (tmp_called_value_90 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_180);

            exception_lineno = 423;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_182 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[355]);

        if (unlikely(tmp_args_element_value_182 == NULL)) {
            tmp_args_element_value_182 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[355]);
        }

        if (tmp_args_element_value_182 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_180);

            exception_lineno = 423;

            goto frame_exception_exit_1;
        }
        frame_b732d78f929796a32e47289708183a77->m_frame.f_lineno = 423;
        tmp_args_element_value_181 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_90, tmp_args_element_value_182);
        if (tmp_args_element_value_181 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_180);

            exception_lineno = 423;

            goto frame_exception_exit_1;
        }
        frame_b732d78f929796a32e47289708183a77->m_frame.f_lineno = 423;
        {
            PyObject *call_args[] = {tmp_args_element_value_177, tmp_args_element_value_178, tmp_args_element_value_179, tmp_args_element_value_180, tmp_args_element_value_181};
            tmp_assign_source_278 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_88, call_args);
        }

        Py_DECREF(tmp_args_element_value_180);
        Py_DECREF(tmp_args_element_value_181);
        if (tmp_assign_source_278 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 423;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[443], tmp_assign_source_278);
    }
    {
        PyObject *tmp_assign_source_279;
        PyObject *tmp_called_value_91;
        PyObject *tmp_args_element_value_183;
        PyObject *tmp_args_element_value_184;
        PyObject *tmp_args_element_value_185;
        PyObject *tmp_args_element_value_186;
        PyObject *tmp_called_value_92;
        PyObject *tmp_args_element_value_187;
        PyObject *tmp_called_value_93;
        PyObject *tmp_args_element_value_188;
        tmp_called_value_91 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_91 == NULL)) {
            tmp_called_value_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_called_value_91 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 424;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_183 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_args_element_value_183 == NULL)) {
            tmp_args_element_value_183 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
        }

        if (tmp_args_element_value_183 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 424;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_184 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_args_element_value_184 == NULL)) {
            tmp_args_element_value_184 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_args_element_value_184 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 424;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_185 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_args_element_value_185 == NULL)) {
            tmp_args_element_value_185 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
        }

        if (tmp_args_element_value_185 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 424;

            goto frame_exception_exit_1;
        }
        tmp_called_value_92 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_92 == NULL)) {
            tmp_called_value_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        if (tmp_called_value_92 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 424;

            goto frame_exception_exit_1;
        }
        frame_b732d78f929796a32e47289708183a77->m_frame.f_lineno = 424;
        tmp_args_element_value_186 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_92, mod_consts[21]);

        if (tmp_args_element_value_186 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 424;

            goto frame_exception_exit_1;
        }
        tmp_called_value_93 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_93 == NULL)) {
            tmp_called_value_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        if (tmp_called_value_93 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_186);

            exception_lineno = 424;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_188 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[355]);

        if (unlikely(tmp_args_element_value_188 == NULL)) {
            tmp_args_element_value_188 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[355]);
        }

        if (tmp_args_element_value_188 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_186);

            exception_lineno = 424;

            goto frame_exception_exit_1;
        }
        frame_b732d78f929796a32e47289708183a77->m_frame.f_lineno = 424;
        tmp_args_element_value_187 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_93, tmp_args_element_value_188);
        if (tmp_args_element_value_187 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_186);

            exception_lineno = 424;

            goto frame_exception_exit_1;
        }
        frame_b732d78f929796a32e47289708183a77->m_frame.f_lineno = 424;
        {
            PyObject *call_args[] = {tmp_args_element_value_183, tmp_args_element_value_184, tmp_args_element_value_185, tmp_args_element_value_186, tmp_args_element_value_187};
            tmp_assign_source_279 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_91, call_args);
        }

        Py_DECREF(tmp_args_element_value_186);
        Py_DECREF(tmp_args_element_value_187);
        if (tmp_assign_source_279 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 424;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[444], tmp_assign_source_279);
    }
    {
        PyObject *tmp_assign_source_280;
        PyObject *tmp_called_value_94;
        PyObject *tmp_args_element_value_189;
        PyObject *tmp_args_element_value_190;
        PyObject *tmp_args_element_value_191;
        PyObject *tmp_args_element_value_192;
        tmp_called_value_94 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_94 == NULL)) {
            tmp_called_value_94 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_called_value_94 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 425;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_189 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_args_element_value_189 == NULL)) {
            tmp_args_element_value_189 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
        }

        if (tmp_args_element_value_189 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 425;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_190 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_args_element_value_190 == NULL)) {
            tmp_args_element_value_190 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_args_element_value_190 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 425;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_191 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[352]);

        if (unlikely(tmp_args_element_value_191 == NULL)) {
            tmp_args_element_value_191 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[352]);
        }

        if (tmp_args_element_value_191 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 425;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_192 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[137]);

        if (unlikely(tmp_args_element_value_192 == NULL)) {
            tmp_args_element_value_192 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[137]);
        }

        if (tmp_args_element_value_192 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 425;

            goto frame_exception_exit_1;
        }
        frame_b732d78f929796a32e47289708183a77->m_frame.f_lineno = 425;
        {
            PyObject *call_args[] = {tmp_args_element_value_189, tmp_args_element_value_190, tmp_args_element_value_191, tmp_args_element_value_192};
            tmp_assign_source_280 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_94, call_args);
        }

        if (tmp_assign_source_280 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 425;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[445], tmp_assign_source_280);
    }
    {
        PyObject *tmp_assign_source_281;
        PyObject *tmp_expression_value_42;
        tmp_expression_value_42 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_42 == NULL)) {
            tmp_expression_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_expression_value_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 427;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_281 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_42, mod_consts[446]);
        if (tmp_assign_source_281 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 427;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[446], tmp_assign_source_281);
    }
    {
        PyObject *tmp_assattr_value_72;
        PyObject *tmp_assattr_target_72;
        tmp_assattr_value_72 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[352]);

        if (unlikely(tmp_assattr_value_72 == NULL)) {
            tmp_assattr_value_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[352]);
        }

        if (tmp_assattr_value_72 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 428;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_72 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[446]);

        if (unlikely(tmp_assattr_target_72 == NULL)) {
            tmp_assattr_target_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[446]);
        }

        assert(!(tmp_assattr_target_72 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_72, mod_consts[187], tmp_assattr_value_72);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 428;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_73;
        PyObject *tmp_list_element_29;
        PyObject *tmp_assattr_target_73;
        tmp_list_element_29 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_list_element_29 == NULL)) {
            tmp_list_element_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_list_element_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 429;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_73 = MAKE_LIST_EMPTY(3);
        {
            PyObject *tmp_called_value_95;
            PyObject *tmp_args_element_value_193;
            PyList_SET_ITEM0(tmp_assattr_value_73, 0, tmp_list_element_29);
            tmp_list_element_29 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[250]);

            if (unlikely(tmp_list_element_29 == NULL)) {
                tmp_list_element_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[250]);
            }

            if (tmp_list_element_29 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 429;

                goto list_build_exception_22;
            }
            PyList_SET_ITEM0(tmp_assattr_value_73, 1, tmp_list_element_29);
            tmp_called_value_95 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_called_value_95 == NULL)) {
                tmp_called_value_95 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
            }

            if (tmp_called_value_95 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 429;

                goto list_build_exception_22;
            }
            tmp_args_element_value_193 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[355]);

            if (unlikely(tmp_args_element_value_193 == NULL)) {
                tmp_args_element_value_193 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[355]);
            }

            if (tmp_args_element_value_193 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 429;

                goto list_build_exception_22;
            }
            frame_b732d78f929796a32e47289708183a77->m_frame.f_lineno = 429;
            tmp_list_element_29 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_95, tmp_args_element_value_193);
            if (tmp_list_element_29 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 429;

                goto list_build_exception_22;
            }
            PyList_SET_ITEM(tmp_assattr_value_73, 2, tmp_list_element_29);
        }
        goto list_build_noexception_22;
        // Exception handling pass through code for list_build:
        list_build_exception_22:;
        Py_DECREF(tmp_assattr_value_73);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_22:;
        tmp_assattr_target_73 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[446]);

        if (unlikely(tmp_assattr_target_73 == NULL)) {
            tmp_assattr_target_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[446]);
        }

        if (tmp_assattr_target_73 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_73);

            exception_lineno = 429;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_73, mod_consts[188], tmp_assattr_value_73);
        Py_DECREF(tmp_assattr_value_73);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 429;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_282;
        PyObject *tmp_expression_value_43;
        tmp_expression_value_43 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_43 == NULL)) {
            tmp_expression_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_expression_value_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 432;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_282 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_43, mod_consts[447]);
        if (tmp_assign_source_282 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 432;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[447], tmp_assign_source_282);
    }
    {
        PyObject *tmp_assattr_value_74;
        PyObject *tmp_assattr_target_74;
        tmp_assattr_value_74 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_assattr_value_74 == NULL)) {
            tmp_assattr_value_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
        }

        if (tmp_assattr_value_74 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 433;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_74 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[447]);

        if (unlikely(tmp_assattr_target_74 == NULL)) {
            tmp_assattr_target_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[447]);
        }

        assert(!(tmp_assattr_target_74 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_74, mod_consts[187], tmp_assattr_value_74);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 433;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_75;
        PyObject *tmp_list_element_30;
        PyObject *tmp_assattr_target_75;
        tmp_list_element_30 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_list_element_30 == NULL)) {
            tmp_list_element_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_list_element_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 434;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_75 = MAKE_LIST_EMPTY(2);
        PyList_SET_ITEM0(tmp_assattr_value_75, 0, tmp_list_element_30);
        tmp_list_element_30 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[352]);

        if (unlikely(tmp_list_element_30 == NULL)) {
            tmp_list_element_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[352]);
        }

        if (tmp_list_element_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 434;

            goto list_build_exception_23;
        }
        PyList_SET_ITEM0(tmp_assattr_value_75, 1, tmp_list_element_30);
        goto list_build_noexception_23;
        // Exception handling pass through code for list_build:
        list_build_exception_23:;
        Py_DECREF(tmp_assattr_value_75);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_23:;
        tmp_assattr_target_75 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[447]);

        if (unlikely(tmp_assattr_target_75 == NULL)) {
            tmp_assattr_target_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[447]);
        }

        if (tmp_assattr_target_75 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_75);

            exception_lineno = 434;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_75, mod_consts[188], tmp_assattr_value_75);
        Py_DECREF(tmp_assattr_value_75);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 434;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_283;
        PyObject *tmp_expression_value_44;
        tmp_expression_value_44 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_44 == NULL)) {
            tmp_expression_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_expression_value_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 437;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_283 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_44, mod_consts[448]);
        if (tmp_assign_source_283 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 437;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[448], tmp_assign_source_283);
    }
    {
        PyObject *tmp_assattr_value_76;
        PyObject *tmp_assattr_target_76;
        tmp_assattr_value_76 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[137]);

        if (unlikely(tmp_assattr_value_76 == NULL)) {
            tmp_assattr_value_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[137]);
        }

        if (tmp_assattr_value_76 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 438;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_76 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[448]);

        if (unlikely(tmp_assattr_target_76 == NULL)) {
            tmp_assattr_target_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[448]);
        }

        assert(!(tmp_assattr_target_76 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_76, mod_consts[187], tmp_assattr_value_76);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 438;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_77;
        PyObject *tmp_list_element_31;
        PyObject *tmp_assattr_target_77;
        tmp_list_element_31 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_list_element_31 == NULL)) {
            tmp_list_element_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_list_element_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 439;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_77 = MAKE_LIST_EMPTY(4);
        PyList_SET_ITEM0(tmp_assattr_value_77, 0, tmp_list_element_31);
        tmp_list_element_31 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[352]);

        if (unlikely(tmp_list_element_31 == NULL)) {
            tmp_list_element_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[352]);
        }

        if (tmp_list_element_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 439;

            goto list_build_exception_24;
        }
        PyList_SET_ITEM0(tmp_assattr_value_77, 1, tmp_list_element_31);
        tmp_list_element_31 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[137]);

        if (unlikely(tmp_list_element_31 == NULL)) {
            tmp_list_element_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[137]);
        }

        if (tmp_list_element_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 439;

            goto list_build_exception_24;
        }
        PyList_SET_ITEM0(tmp_assattr_value_77, 2, tmp_list_element_31);
        tmp_list_element_31 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[359]);

        if (unlikely(tmp_list_element_31 == NULL)) {
            tmp_list_element_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[359]);
        }

        if (tmp_list_element_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 439;

            goto list_build_exception_24;
        }
        PyList_SET_ITEM0(tmp_assattr_value_77, 3, tmp_list_element_31);
        goto list_build_noexception_24;
        // Exception handling pass through code for list_build:
        list_build_exception_24:;
        Py_DECREF(tmp_assattr_value_77);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_24:;
        tmp_assattr_target_77 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[448]);

        if (unlikely(tmp_assattr_target_77 == NULL)) {
            tmp_assattr_target_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[448]);
        }

        if (tmp_assattr_target_77 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_77);

            exception_lineno = 439;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_77, mod_consts[188], tmp_assattr_value_77);
        Py_DECREF(tmp_assattr_value_77);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 439;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_284;
        PyObject *tmp_expression_value_45;
        tmp_expression_value_45 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_45 == NULL)) {
            tmp_expression_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_expression_value_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_284 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_45, mod_consts[449]);
        if (tmp_assign_source_284 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[449], tmp_assign_source_284);
    }
    {
        PyObject *tmp_assattr_value_78;
        PyObject *tmp_assattr_target_78;
        tmp_assattr_value_78 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_assattr_value_78 == NULL)) {
            tmp_assattr_value_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
        }

        if (tmp_assattr_value_78 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 443;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_78 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[449]);

        if (unlikely(tmp_assattr_target_78 == NULL)) {
            tmp_assattr_target_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[449]);
        }

        assert(!(tmp_assattr_target_78 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_78, mod_consts[187], tmp_assattr_value_78);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 443;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_79;
        PyObject *tmp_list_element_32;
        PyObject *tmp_assattr_target_79;
        tmp_list_element_32 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_list_element_32 == NULL)) {
            tmp_list_element_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_list_element_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 444;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_79 = MAKE_LIST_EMPTY(4);
        {
            PyObject *tmp_called_value_96;
            PyObject *tmp_args_element_value_194;
            PyList_SET_ITEM0(tmp_assattr_value_79, 0, tmp_list_element_32);
            tmp_list_element_32 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[352]);

            if (unlikely(tmp_list_element_32 == NULL)) {
                tmp_list_element_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[352]);
            }

            if (tmp_list_element_32 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 444;

                goto list_build_exception_25;
            }
            PyList_SET_ITEM0(tmp_assattr_value_79, 1, tmp_list_element_32);
            tmp_list_element_32 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[137]);

            if (unlikely(tmp_list_element_32 == NULL)) {
                tmp_list_element_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[137]);
            }

            if (tmp_list_element_32 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 444;

                goto list_build_exception_25;
            }
            PyList_SET_ITEM0(tmp_assattr_value_79, 2, tmp_list_element_32);
            tmp_called_value_96 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_called_value_96 == NULL)) {
                tmp_called_value_96 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
            }

            if (tmp_called_value_96 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 444;

                goto list_build_exception_25;
            }
            tmp_args_element_value_194 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[355]);

            if (unlikely(tmp_args_element_value_194 == NULL)) {
                tmp_args_element_value_194 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[355]);
            }

            if (tmp_args_element_value_194 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 444;

                goto list_build_exception_25;
            }
            frame_b732d78f929796a32e47289708183a77->m_frame.f_lineno = 444;
            tmp_list_element_32 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_96, tmp_args_element_value_194);
            if (tmp_list_element_32 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 444;

                goto list_build_exception_25;
            }
            PyList_SET_ITEM(tmp_assattr_value_79, 3, tmp_list_element_32);
        }
        goto list_build_noexception_25;
        // Exception handling pass through code for list_build:
        list_build_exception_25:;
        Py_DECREF(tmp_assattr_value_79);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_25:;
        tmp_assattr_target_79 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[449]);

        if (unlikely(tmp_assattr_target_79 == NULL)) {
            tmp_assattr_target_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[449]);
        }

        if (tmp_assattr_target_79 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_79);

            exception_lineno = 444;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_79, mod_consts[188], tmp_assattr_value_79);
        Py_DECREF(tmp_assattr_value_79);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 444;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_285;
        PyObject *tmp_expression_value_46;
        tmp_expression_value_46 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_46 == NULL)) {
            tmp_expression_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_expression_value_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 447;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_285 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_46, mod_consts[450]);
        if (tmp_assign_source_285 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 447;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[450], tmp_assign_source_285);
    }
    {
        PyObject *tmp_assattr_value_80;
        PyObject *tmp_assattr_target_80;
        tmp_assattr_value_80 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[360]);

        if (unlikely(tmp_assattr_value_80 == NULL)) {
            tmp_assattr_value_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[360]);
        }

        if (tmp_assattr_value_80 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 448;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_80 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[450]);

        if (unlikely(tmp_assattr_target_80 == NULL)) {
            tmp_assattr_target_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[450]);
        }

        assert(!(tmp_assattr_target_80 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_80, mod_consts[187], tmp_assattr_value_80);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 448;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_81;
        PyObject *tmp_list_element_33;
        PyObject *tmp_assattr_target_81;
        tmp_list_element_33 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_list_element_33 == NULL)) {
            tmp_list_element_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_list_element_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 449;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_81 = MAKE_LIST_EMPTY(5);
        {
            PyObject *tmp_called_value_97;
            PyObject *tmp_args_element_value_195;
            PyList_SET_ITEM0(tmp_assattr_value_81, 0, tmp_list_element_33);
            tmp_list_element_33 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_list_element_33 == NULL)) {
                tmp_list_element_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
            }

            if (tmp_list_element_33 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 449;

                goto list_build_exception_26;
            }
            PyList_SET_ITEM0(tmp_assattr_value_81, 1, tmp_list_element_33);
            tmp_list_element_33 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[250]);

            if (unlikely(tmp_list_element_33 == NULL)) {
                tmp_list_element_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[250]);
            }

            if (tmp_list_element_33 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 449;

                goto list_build_exception_26;
            }
            PyList_SET_ITEM0(tmp_assattr_value_81, 2, tmp_list_element_33);
            tmp_list_element_33 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[251]);

            if (unlikely(tmp_list_element_33 == NULL)) {
                tmp_list_element_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[251]);
            }

            if (tmp_list_element_33 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 449;

                goto list_build_exception_26;
            }
            PyList_SET_ITEM0(tmp_assattr_value_81, 3, tmp_list_element_33);
            tmp_called_value_97 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_called_value_97 == NULL)) {
                tmp_called_value_97 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
            }

            if (tmp_called_value_97 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 449;

                goto list_build_exception_26;
            }
            tmp_args_element_value_195 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[355]);

            if (unlikely(tmp_args_element_value_195 == NULL)) {
                tmp_args_element_value_195 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[355]);
            }

            if (tmp_args_element_value_195 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 449;

                goto list_build_exception_26;
            }
            frame_b732d78f929796a32e47289708183a77->m_frame.f_lineno = 449;
            tmp_list_element_33 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_97, tmp_args_element_value_195);
            if (tmp_list_element_33 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 449;

                goto list_build_exception_26;
            }
            PyList_SET_ITEM(tmp_assattr_value_81, 4, tmp_list_element_33);
        }
        goto list_build_noexception_26;
        // Exception handling pass through code for list_build:
        list_build_exception_26:;
        Py_DECREF(tmp_assattr_value_81);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_26:;
        tmp_assattr_target_81 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[450]);

        if (unlikely(tmp_assattr_target_81 == NULL)) {
            tmp_assattr_target_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[450]);
        }

        if (tmp_assattr_target_81 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_81);

            exception_lineno = 449;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_81, mod_consts[188], tmp_assattr_value_81);
        Py_DECREF(tmp_assattr_value_81);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 449;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_286;
        PyObject *tmp_expression_value_47;
        tmp_expression_value_47 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_47 == NULL)) {
            tmp_expression_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_expression_value_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 452;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_286 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_47, mod_consts[451]);
        if (tmp_assign_source_286 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 452;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[451], tmp_assign_source_286);
    }
    {
        PyObject *tmp_assattr_value_82;
        PyObject *tmp_assattr_target_82;
        tmp_assattr_value_82 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_assattr_value_82 == NULL)) {
            tmp_assattr_value_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
        }

        if (tmp_assattr_value_82 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 453;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_82 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[451]);

        if (unlikely(tmp_assattr_target_82 == NULL)) {
            tmp_assattr_target_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[451]);
        }

        assert(!(tmp_assattr_target_82 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_82, mod_consts[187], tmp_assattr_value_82);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 453;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_83;
        PyObject *tmp_list_element_34;
        PyObject *tmp_assattr_target_83;
        tmp_list_element_34 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_list_element_34 == NULL)) {
            tmp_list_element_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_list_element_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 454;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_83 = MAKE_LIST_EMPTY(2);
        PyList_SET_ITEM0(tmp_assattr_value_83, 0, tmp_list_element_34);
        tmp_list_element_34 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[360]);

        if (unlikely(tmp_list_element_34 == NULL)) {
            tmp_list_element_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[360]);
        }

        if (tmp_list_element_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 454;

            goto list_build_exception_27;
        }
        PyList_SET_ITEM0(tmp_assattr_value_83, 1, tmp_list_element_34);
        goto list_build_noexception_27;
        // Exception handling pass through code for list_build:
        list_build_exception_27:;
        Py_DECREF(tmp_assattr_value_83);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_27:;
        tmp_assattr_target_83 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[451]);

        if (unlikely(tmp_assattr_target_83 == NULL)) {
            tmp_assattr_target_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[451]);
        }

        if (tmp_assattr_target_83 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_83);

            exception_lineno = 454;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_83, mod_consts[188], tmp_assattr_value_83);
        Py_DECREF(tmp_assattr_value_83);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 454;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_287;
        PyObject *tmp_expression_value_48;
        tmp_expression_value_48 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_48 == NULL)) {
            tmp_expression_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_expression_value_48 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 457;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_287 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_48, mod_consts[452]);
        if (tmp_assign_source_287 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 457;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[452], tmp_assign_source_287);
    }
    {
        PyObject *tmp_assattr_value_84;
        PyObject *tmp_assattr_target_84;
        tmp_assattr_value_84 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_assattr_value_84 == NULL)) {
            tmp_assattr_value_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_assattr_value_84 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 458;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_84 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[452]);

        if (unlikely(tmp_assattr_target_84 == NULL)) {
            tmp_assattr_target_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[452]);
        }

        assert(!(tmp_assattr_target_84 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_84, mod_consts[187], tmp_assattr_value_84);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 458;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_85;
        PyObject *tmp_list_element_35;
        PyObject *tmp_assattr_target_85;
        tmp_list_element_35 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[250]);

        if (unlikely(tmp_list_element_35 == NULL)) {
            tmp_list_element_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[250]);
        }

        if (tmp_list_element_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 459;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_85 = MAKE_LIST_EMPTY(3);
        {
            PyObject *tmp_called_value_98;
            PyObject *tmp_called_value_99;
            PyObject *tmp_args_element_value_196;
            PyList_SET_ITEM0(tmp_assattr_value_85, 0, tmp_list_element_35);
            tmp_called_value_98 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_called_value_98 == NULL)) {
                tmp_called_value_98 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
            }

            if (tmp_called_value_98 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 459;

                goto list_build_exception_28;
            }
            frame_b732d78f929796a32e47289708183a77->m_frame.f_lineno = 459;
            tmp_list_element_35 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_98, mod_consts[21]);

            if (tmp_list_element_35 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 459;

                goto list_build_exception_28;
            }
            PyList_SET_ITEM(tmp_assattr_value_85, 1, tmp_list_element_35);
            tmp_called_value_99 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_called_value_99 == NULL)) {
                tmp_called_value_99 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
            }

            if (tmp_called_value_99 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 459;

                goto list_build_exception_28;
            }
            tmp_args_element_value_196 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[355]);

            if (unlikely(tmp_args_element_value_196 == NULL)) {
                tmp_args_element_value_196 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[355]);
            }

            if (tmp_args_element_value_196 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 459;

                goto list_build_exception_28;
            }
            frame_b732d78f929796a32e47289708183a77->m_frame.f_lineno = 459;
            tmp_list_element_35 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_99, tmp_args_element_value_196);
            if (tmp_list_element_35 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 459;

                goto list_build_exception_28;
            }
            PyList_SET_ITEM(tmp_assattr_value_85, 2, tmp_list_element_35);
        }
        goto list_build_noexception_28;
        // Exception handling pass through code for list_build:
        list_build_exception_28:;
        Py_DECREF(tmp_assattr_value_85);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_28:;
        tmp_assattr_target_85 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[452]);

        if (unlikely(tmp_assattr_target_85 == NULL)) {
            tmp_assattr_target_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[452]);
        }

        if (tmp_assattr_target_85 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_85);

            exception_lineno = 459;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_85, mod_consts[188], tmp_assattr_value_85);
        Py_DECREF(tmp_assattr_value_85);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 459;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_288;
        PyObject *tmp_expression_value_49;
        tmp_expression_value_49 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_49 == NULL)) {
            tmp_expression_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_expression_value_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 462;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_288 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_49, mod_consts[453]);
        if (tmp_assign_source_288 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 462;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[453], tmp_assign_source_288);
    }
    {
        PyObject *tmp_assattr_value_86;
        PyObject *tmp_assattr_target_86;
        tmp_assattr_value_86 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_assattr_value_86 == NULL)) {
            tmp_assattr_value_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
        }

        if (tmp_assattr_value_86 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 463;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_86 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[453]);

        if (unlikely(tmp_assattr_target_86 == NULL)) {
            tmp_assattr_target_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[453]);
        }

        assert(!(tmp_assattr_target_86 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_86, mod_consts[187], tmp_assattr_value_86);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 463;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_87;
        PyObject *tmp_list_element_36;
        PyObject *tmp_assattr_target_87;
        tmp_list_element_36 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_list_element_36 == NULL)) {
            tmp_list_element_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_list_element_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 464;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_87 = MAKE_LIST_EMPTY(4);
        {
            PyObject *tmp_called_value_100;
            PyObject *tmp_called_value_101;
            PyObject *tmp_args_element_value_197;
            PyList_SET_ITEM0(tmp_assattr_value_87, 0, tmp_list_element_36);
            tmp_list_element_36 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_list_element_36 == NULL)) {
                tmp_list_element_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_list_element_36 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 464;

                goto list_build_exception_29;
            }
            PyList_SET_ITEM0(tmp_assattr_value_87, 1, tmp_list_element_36);
            tmp_called_value_100 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_called_value_100 == NULL)) {
                tmp_called_value_100 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
            }

            if (tmp_called_value_100 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 464;

                goto list_build_exception_29;
            }
            frame_b732d78f929796a32e47289708183a77->m_frame.f_lineno = 464;
            tmp_list_element_36 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_100, mod_consts[21]);

            if (tmp_list_element_36 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 464;

                goto list_build_exception_29;
            }
            PyList_SET_ITEM(tmp_assattr_value_87, 2, tmp_list_element_36);
            tmp_called_value_101 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_called_value_101 == NULL)) {
                tmp_called_value_101 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
            }

            if (tmp_called_value_101 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 464;

                goto list_build_exception_29;
            }
            tmp_args_element_value_197 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[355]);

            if (unlikely(tmp_args_element_value_197 == NULL)) {
                tmp_args_element_value_197 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[355]);
            }

            if (tmp_args_element_value_197 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 464;

                goto list_build_exception_29;
            }
            frame_b732d78f929796a32e47289708183a77->m_frame.f_lineno = 464;
            tmp_list_element_36 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_101, tmp_args_element_value_197);
            if (tmp_list_element_36 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 464;

                goto list_build_exception_29;
            }
            PyList_SET_ITEM(tmp_assattr_value_87, 3, tmp_list_element_36);
        }
        goto list_build_noexception_29;
        // Exception handling pass through code for list_build:
        list_build_exception_29:;
        Py_DECREF(tmp_assattr_value_87);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_29:;
        tmp_assattr_target_87 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[453]);

        if (unlikely(tmp_assattr_target_87 == NULL)) {
            tmp_assattr_target_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[453]);
        }

        if (tmp_assattr_target_87 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_87);

            exception_lineno = 464;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_87, mod_consts[188], tmp_assattr_value_87);
        Py_DECREF(tmp_assattr_value_87);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 464;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_289;
        PyObject *tmp_expression_value_50;
        tmp_expression_value_50 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_50 == NULL)) {
            tmp_expression_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_expression_value_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 467;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_289 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_50, mod_consts[454]);
        if (tmp_assign_source_289 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 467;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[454], tmp_assign_source_289);
    }
    {
        PyObject *tmp_assattr_value_88;
        PyObject *tmp_assattr_target_88;
        tmp_assattr_value_88 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_assattr_value_88 == NULL)) {
            tmp_assattr_value_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
        }

        if (tmp_assattr_value_88 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 468;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_88 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[454]);

        if (unlikely(tmp_assattr_target_88 == NULL)) {
            tmp_assattr_target_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[454]);
        }

        assert(!(tmp_assattr_target_88 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_88, mod_consts[187], tmp_assattr_value_88);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 468;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_89;
        PyObject *tmp_list_element_37;
        PyObject *tmp_assattr_target_89;
        tmp_list_element_37 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_list_element_37 == NULL)) {
            tmp_list_element_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_list_element_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 469;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_89 = MAKE_LIST_EMPTY(4);
        {
            PyObject *tmp_called_value_102;
            PyObject *tmp_called_value_103;
            PyObject *tmp_args_element_value_198;
            PyList_SET_ITEM0(tmp_assattr_value_89, 0, tmp_list_element_37);
            tmp_list_element_37 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_list_element_37 == NULL)) {
                tmp_list_element_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
            }

            if (tmp_list_element_37 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 469;

                goto list_build_exception_30;
            }
            PyList_SET_ITEM0(tmp_assattr_value_89, 1, tmp_list_element_37);
            tmp_called_value_102 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_called_value_102 == NULL)) {
                tmp_called_value_102 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
            }

            if (tmp_called_value_102 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 469;

                goto list_build_exception_30;
            }
            frame_b732d78f929796a32e47289708183a77->m_frame.f_lineno = 469;
            tmp_list_element_37 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_102, mod_consts[21]);

            if (tmp_list_element_37 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 469;

                goto list_build_exception_30;
            }
            PyList_SET_ITEM(tmp_assattr_value_89, 2, tmp_list_element_37);
            tmp_called_value_103 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[20]);

            if (unlikely(tmp_called_value_103 == NULL)) {
                tmp_called_value_103 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
            }

            if (tmp_called_value_103 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 469;

                goto list_build_exception_30;
            }
            tmp_args_element_value_198 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[355]);

            if (unlikely(tmp_args_element_value_198 == NULL)) {
                tmp_args_element_value_198 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[355]);
            }

            if (tmp_args_element_value_198 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 469;

                goto list_build_exception_30;
            }
            frame_b732d78f929796a32e47289708183a77->m_frame.f_lineno = 469;
            tmp_list_element_37 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_103, tmp_args_element_value_198);
            if (tmp_list_element_37 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 469;

                goto list_build_exception_30;
            }
            PyList_SET_ITEM(tmp_assattr_value_89, 3, tmp_list_element_37);
        }
        goto list_build_noexception_30;
        // Exception handling pass through code for list_build:
        list_build_exception_30:;
        Py_DECREF(tmp_assattr_value_89);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_30:;
        tmp_assattr_target_89 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[454]);

        if (unlikely(tmp_assattr_target_89 == NULL)) {
            tmp_assattr_target_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[454]);
        }

        if (tmp_assattr_target_89 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_89);

            exception_lineno = 469;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_89, mod_consts[188], tmp_assattr_value_89);
        Py_DECREF(tmp_assattr_value_89);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 469;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_290;
        PyObject *tmp_expression_value_51;
        tmp_expression_value_51 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_51 == NULL)) {
            tmp_expression_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_expression_value_51 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 472;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_290 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_51, mod_consts[455]);
        if (tmp_assign_source_290 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 472;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[455], tmp_assign_source_290);
    }
    {
        PyObject *tmp_assattr_value_90;
        PyObject *tmp_assattr_target_90;
        tmp_assattr_value_90 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_assattr_value_90 == NULL)) {
            tmp_assattr_value_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
        }

        if (tmp_assattr_value_90 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 473;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_90 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[455]);

        if (unlikely(tmp_assattr_target_90 == NULL)) {
            tmp_assattr_target_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[455]);
        }

        assert(!(tmp_assattr_target_90 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_90, mod_consts[187], tmp_assattr_value_90);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 473;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_91;
        PyObject *tmp_list_element_38;
        PyObject *tmp_assattr_target_91;
        tmp_list_element_38 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_list_element_38 == NULL)) {
            tmp_list_element_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_list_element_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 474;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_91 = MAKE_LIST_EMPTY(3);
        PyList_SET_ITEM0(tmp_assattr_value_91, 0, tmp_list_element_38);
        tmp_list_element_38 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[352]);

        if (unlikely(tmp_list_element_38 == NULL)) {
            tmp_list_element_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[352]);
        }

        if (tmp_list_element_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 474;

            goto list_build_exception_31;
        }
        PyList_SET_ITEM0(tmp_assattr_value_91, 1, tmp_list_element_38);
        tmp_list_element_38 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[137]);

        if (unlikely(tmp_list_element_38 == NULL)) {
            tmp_list_element_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[137]);
        }

        if (tmp_list_element_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 474;

            goto list_build_exception_31;
        }
        PyList_SET_ITEM0(tmp_assattr_value_91, 2, tmp_list_element_38);
        goto list_build_noexception_31;
        // Exception handling pass through code for list_build:
        list_build_exception_31:;
        Py_DECREF(tmp_assattr_value_91);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_31:;
        tmp_assattr_target_91 = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[455]);

        if (unlikely(tmp_assattr_target_91 == NULL)) {
            tmp_assattr_target_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[455]);
        }

        if (tmp_assattr_target_91 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_91);

            exception_lineno = 474;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_91, mod_consts[188], tmp_assattr_value_91);
        Py_DECREF(tmp_assattr_value_91);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 474;

            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_2;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b732d78f929796a32e47289708183a77, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b732d78f929796a32e47289708183a77->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b732d78f929796a32e47289708183a77, exception_lineno);
    }



    assertFrameObject(frame_b732d78f929796a32e47289708183a77);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_2:;
    {
        PyObject *tmp_assign_source_291;
        tmp_assign_source_291 = LIST_COPY(mod_consts[456]);
        UPDATE_STRING_DICT1(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)mod_consts[457], tmp_assign_source_291);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("pyglet.libs.egl.egl", false);

    Py_INCREF(module_pyglet$libs$egl$egl);
    return module_pyglet$libs$egl$egl;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyglet$libs$egl$egl, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("pyglet$libs$egl$egl", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
