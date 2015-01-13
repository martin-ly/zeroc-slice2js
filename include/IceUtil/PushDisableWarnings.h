// **********************************************************************
//
// Copyright (c) 2003-2014 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// No pragma once as this file can be included several times in a translation 
// unit

#ifdef _MSC_VER
#   pragma warning(push)
#   pragma warning(disable:4250) // ... : inherits ... via dominance
#   pragma warning(disable:4251) // class ... needs to have dll-interface to be used by clients of class ...
#   pragma warning(disable:4512) //  ... assignment operator could not be generated
#endif

#if defined(__GNUC__) && ((__GNUC__ > 4) || (__GNUC__ == 4 && __GNUC_MINOR__ >= 6))
//
// Expected when using forward Slice declarations
//
#   pragma GCC diagnostic push
#   pragma GCC diagnostic ignored "-Wredundant-decls"
#endif
