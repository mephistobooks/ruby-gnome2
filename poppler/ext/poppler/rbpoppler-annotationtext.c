/* -*- c-file-style: "ruby"; indent-tabs-mode: nil -*- */
/*
 *  Copyright (C) 2011  Ruby-GNOME2 Project Team
 *  Copyright (C) 2008  Ruby-GNOME2 Project Team
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Lesser General Public
 *  License as published by the Free Software Foundation; either
 *  version 2.1 of the License, or (at your option) any later version.
 *
 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public
 *  License along with this library; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 *  MA  02110-1301  USA
 */

#include "rbpoppler-private.h"

#define RG_TARGET_NAMESPACE cAnnotationText
#define SELF(self) (POPPLER_ANNOT_TEXT(RVAL2GOBJ(self)))

#define TEXT_ICON2RVAL(obj) (GENUM2RVAL(obj, POPPLER_TYPE_ANNOT_TEXT_ICON))
#define TEXT_STATE2RVAL(obj) (GENUM2RVAL(obj, POPPLER_TYPE_ANNOT_TEXT_STATE))

static VALUE
rg_open_p(VALUE self)
{
    return CBOOL2RVAL(poppler_annot_text_get_is_open(SELF(self)));
}

static VALUE
rg_icon(VALUE self)
{
#if POPPLER_CHECK_VERSION(0, 9, 0)
    return CSTR2RVAL_FREE(poppler_annot_text_get_icon(SELF(self)));
#else
    return TEXT_ICON2RVAL(poppler_annot_text_get_icon(SELF(self)));
#endif
}

static VALUE
rg_state(VALUE self)
{
    return TEXT_STATE2RVAL(poppler_annot_text_get_state(SELF(self)));
}

void
Init_poppler_annotationtext(VALUE mPoppler)
{
    VALUE RG_TARGET_NAMESPACE = G_DEF_CLASS(POPPLER_TYPE_ANNOT_TEXT,
                                  "AnnotationText", mPoppler);

    RG_DEF_METHOD_P(open, 0);
    RG_DEF_METHOD(icon, 0);
    RG_DEF_METHOD(state, 0);
}
