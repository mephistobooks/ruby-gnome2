/* -*- c-file-style: "ruby"; indent-tabs-mode: nil -*- */
/*
 *  Copyright (C) 2008-2014  Ruby-GNOME2 Project Team
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

#ifndef __RBGTK3CONVERSIONS_H__
#define __RBGTK3CONVERSIONS_H__

#define RVAL2GTKABOUTDIALOG(o)             (GTK_ABOUT_DIALOG(RVAL2GOBJ(o)))
#define RVAL2GTKACCELGROUP(o)              (GTK_ACCEL_GROUP(RVAL2GOBJ(o)))
#define RVAL2GTKACCELLABEL(o)              (GTK_ACCEL_LABEL(RVAL2GOBJ(o)))
#define RVAL2GTKACCESSIBLE(o)              (GTK_ACCESSIBLE(RVAL2GOBJ(o)))
#define RVAL2GTKACTION(o)                  (GTK_ACTION(RVAL2GOBJ(o)))
#define RVAL2GTKACTIONGROUP(o)             (GTK_ACTION_GROUP(RVAL2GOBJ(o)))
#define RVAL2GTKADJUSTMENT(o)              (GTK_ADJUSTMENT(RVAL2GOBJ(o)))
#define RVAL2GTKALIGNMENT(o)               (GTK_ALIGNMENT(RVAL2GOBJ(o)))
#define RVAL2GTKAPPCHOOSER(o)              (GTK_APP_CHOOSER(RVAL2GOBJ(o)))
#define RVAL2GTKAPPCHOOSERBUTTON(o)        (GTK_APP_CHOOSER_BUTTON(RVAL2GOBJ(o)))
#define RVAL2GTKAPPCHOOSERDIALOG(o)        (GTK_APP_CHOOSER_DIALOG(RVAL2GOBJ(o)))
#define RVAL2GTKAPPCHOOSERWIDGET(o)        (GTK_APP_CHOOSER_WIDGET(RVAL2GOBJ(o)))
#define RVAL2GTKAPPLICATION(o)             (GTK_APPLICATION(RVAL2GOBJ(o)))
#define RVAL2GTKARROW(o)                   (GTK_ARROW(RVAL2GOBJ(o)))
#define RVAL2GTKASPECTFRAME(o)             (GTK_ASPECT_FRAME(RVAL2GOBJ(o)))
#define RVAL2GTKASSISTANT(o)               (GTK_ASSISTANT(RVAL2GOBJ(o)))
#define RVAL2GTKBIN(o)                     (GTK_BIN(RVAL2GOBJ(o)))
#define RVAL2GTKBOX(o)                     (GTK_BOX(RVAL2GOBJ(o)))
#define RVAL2GTKBUILDABLE(o)               (GTK_BUILDABLE(RVAL2GOBJ(o)))
#define RVAL2GTKBUILDER(o)                 (GTK_BUILDER(RVAL2GOBJ(o)))
#define RVAL2GTKBUTTON(o)                  (GTK_BUTTON(RVAL2GOBJ(o)))
#define RVAL2GTKBUTTONBOX(o)               (GTK_BUTTON_BOX(RVAL2GOBJ(o)))
#define RVAL2GTKCALENDAR(o)                (GTK_CALENDAR(RVAL2GOBJ(o)))
#define RVAL2GTKCELLAREA(o)                (GTK_CELL_AREA(RVAL2GOBJ(o)))
#define RVAL2GTKCELLEDITABLE(o)            (GTK_CELL_EDITABLE(RVAL2GOBJ(o)))
#define RVAL2GTKCELLLAYOUT(o)              (GTK_CELL_LAYOUT(RVAL2GOBJ(o)))
#define RVAL2GTKCELLRENDERER(o)            (GTK_CELL_RENDERER(RVAL2GOBJ(o)))
#define RVAL2GTKCELLRENDERERACCEL(o)       (GTK_CELL_RENDERER_ACCEL(RVAL2GOBJ(o)))
#define RVAL2GTKCELLRENDERERPIXBUF(o)      (GTK_CELL_RENDERER_PIXBUF(RVAL2GOBJ(o)))
#define RVAL2GTKCELLRENDERERSPIN(o)        (GTK_CELL_RENDERER_SPIN(RVAL2GOBJ(o)))
#define RVAL2GTKCELLRENDERERSPINNER(o)     (GTK_CELL_RENDERER_SPINNER(RVAL2GOBJ(o)))
#define RVAL2GTKCELLRENDERERTEXT(o)        (GTK_CELL_RENDERER_TEXT(RVAL2GOBJ(o)))
#define RVAL2GTKCELLRENDERERTOGGLE(o)      (GTK_CELL_RENDERER_TOGGLE(RVAL2GOBJ(o)))
#define RVAL2GTKCELLVIEW(o)                (GTK_CELL_VIEW(RVAL2GOBJ(o)))
#define RVAL2GTKCHECKMENUITEM(o)           (GTK_CHECK_MENU_ITEM(RVAL2GOBJ(o)))
#define RVAL2GTKCLIPBOARD(o)               (GTK_CLIPBOARD(RVAL2GOBJ(o)))
#define RVAL2GTKCOLORSELECTION(o)          (GTK_COLOR_SELECTION(RVAL2GOBJ(o)))
#define RVAL2GTKCOLORSELECTIONDIALOG(o)    (GTK_COLOR_SELECTION_DIALOG(RVAL2GOBJ(o)))
#define RVAL2GTKCOMBOBOX(o)                (GTK_COMBO_BOX(RVAL2GOBJ(o)))
#define RVAL2GTKCOMBOBOXTEXT(o)            (GTK_COMBO_BOX_TEXT(RVAL2GOBJ(o)))
#define RVAL2GTKCONTAINER(o)               (GTK_CONTAINER(RVAL2GOBJ(o)))
#define RVAL2GTKCSSPROVIDER(o)             (GTK_CSS_PROVIDER(RVAL2GOBJ(o)))
#define RVAL2GTKDIALOG(o)                  (GTK_DIALOG(RVAL2GOBJ(o)))
#define RVAL2GTKEDITABLE(o)                (GTK_EDITABLE(RVAL2GOBJ(o)))
#define RVAL2GTKENTRY(o)                   (GTK_ENTRY(RVAL2GOBJ(o)))
#define RVAL2GTKENTRYBUFFER(o)             (GTK_ENTRY_BUFFER(RVAL2GOBJ(o)))
#define RVAL2GTKENTRYCOMPLETION(o)         (GTK_ENTRY_COMPLETION(RVAL2GOBJ(o)))
#define RVAL2GTKEXPANDER(o)                (GTK_EXPANDER(RVAL2GOBJ(o)))
#define RVAL2GTKFILECHOOSER(o)             (GTK_FILE_CHOOSER(RVAL2GOBJ(o)))
#define RVAL2GTKFILECHOOSERDIALOG(o)       (GTK_FILE_CHOOSER_DIALOG(RVAL2GOBJ(o)))
#define RVAL2GTKFILEFILTER(o)              (GTK_FILE_FILTER(RVAL2GOBJ(o)))
#define RVAL2GTKFIXED(o)                   (GTK_FIXED(RVAL2GOBJ(o)))
#define RVAL2GTKFONTCHOOSER(o)             (GTK_FONT_CHOOSER(RVAL2GOBJ(o)))
#define RVAL2GTKFONTCHOOSERDIALOG(o)       (GTK_FONT_CHOOSER_DIALOG(RVAL2GOBJ(o)))
#define RVAL2GTKFONTCHOOSERWIDGET(o)       (GTK_FONT_CHOOSER_WIDGET(RVAL2GOBJ(o)))
#define RVAL2GTKFRAME(o)                   (GTK_FRAME(RVAL2GOBJ(o)))
#define RVAL2GTKGRID(o)                    (GTK_GRID(RVAL2GOBJ(o)))
#if GTK_CHECK_VERSION(3, 10, 0)
#  define RVAL2GTKHEADERBAR(o)               (GTK_HEADER_BAR(RVAL2GOBJ(o)))
#endif
#define RVAL2GTKHSV(o)                     (GTK_HSV(RVAL2GOBJ(o)))
#define RVAL2GTKICONFACTORY(o)             (GTK_ICON_FACTORY(RVAL2GOBJ(o)))
#define RVAL2GTKICONTHEME(o)               (GTK_ICON_THEME(RVAL2GOBJ(o)))
#define RVAL2GTKICONVIEW(o)                (GTK_ICON_VIEW(RVAL2GOBJ(o)))
#define RVAL2GTKIMAGE(o)                   (GTK_IMAGE(RVAL2GOBJ(o)))
#define RVAL2GTKIMCONTEXT(o)               (GTK_IM_CONTEXT(RVAL2GOBJ(o)))
#define RVAL2GTKIMCONTEXTSIMPLE(o)         (GTK_IM_CONTEXT_SIMPLE(RVAL2GOBJ(o)))
#define RVAL2GTKIMMULTICONTEXT(o)          (GTK_IM_MULTICONTEXT(RVAL2GOBJ(o)))
#define RVAL2GTKINFOBAR(o)                 (GTK_INFO_BAR(RVAL2GOBJ(o)))
#define RVAL2GTKINVISIBLE(o)               (GTK_INVISIBLE(RVAL2GOBJ(o)))
#define RVAL2GTKLABEL(o)                   (GTK_LABEL(RVAL2GOBJ(o)))
#define RVAL2GTKLAYOUT(o)                  (GTK_LAYOUT(RVAL2GOBJ(o)))
#if GTK_CHECK_VERSION(3, 6, 0)
#  define RVAL2GTKLEVELBAR(o)                (GTK_LEVEL_BAR(RVAL2GOBJ(o)))
#endif
#define RVAL2GTKLINKBUTTON(o)              (GTK_LINK_BUTTON(RVAL2GOBJ(o)))
#define RVAL2GTKLISTSTORE(o)               (GTK_LIST_STORE(RVAL2GOBJ(o)))
#define RVAL2GTKMENU(o)                    (GTK_MENU(RVAL2GOBJ(o)))
#define RVAL2GTKMENUITEM(o)                (GTK_MENU_ITEM(RVAL2GOBJ(o)))
#define RVAL2GTKMENUSHELL(o)               (GTK_MENU_SHELL(RVAL2GOBJ(o)))
#define RVAL2GTKMENUTOOLBUTTON(o)          (GTK_MENU_TOOL_BUTTON(RVAL2GOBJ(o)))
#define RVAL2GTKMESSAGEDIALOG(o)           (GTK_MESSAGE_DIALOG(RVAL2GOBJ(o)))
#define RVAL2GTKMISC(o)                    (GTK_MISC(RVAL2GOBJ(o)))
#define RVAL2GTKMOUNTOPERATION(o)          (GTK_MOUNT_OPERATION(RVAL2GOBJ(o)))
#define RVAL2GTKNOTEBOOK(o)                (GTK_NOTEBOOK(RVAL2GOBJ(o)))
#define RVAL2GTKOVERLAY(o)                 (GTK_OVERLAY(RVAL2GOBJ(o)))
#define RVAL2GTKPAGESETUP(o)               (GTK_PAGE_SETUP(RVAL2GOBJ(o)))
#define RVAL2GTKPAGESETUPUNIXDIALOG(o)     (GTK_PAGE_SETUP_UNIX_DIALOG(RVAL2GOBJ(o)))
#define RVAL2GTKPANED(o)                   (GTK_PANED(RVAL2GOBJ(o)))
#define RVAL2GTKPLUG(o)                    (GTK_PLUG(RVAL2GOBJ(o)))
#define RVAL2GTKPRINTBACKEND(o)            (GTK_PRINT_BACKEND(RVAL2GOBJ(o)))
#define RVAL2GTKPRINTCONTEXT(o)            (GTK_PRINT_CONTEXT(RVAL2GOBJ(o)))
#define RVAL2GTKPRINTER(o)                 (GTK_PRINTER(RVAL2GOBJ(o)))
#define RVAL2GTKPRINTJOB(o)                (GTK_PRINT_JOB(RVAL2GOBJ(o)))
#define RVAL2GTKPRINTOPERATION(o)          (GTK_PRINT_OPERATION(RVAL2GOBJ(o)))
#define RVAL2GTKPRINTOPERATIONPREVIEW(o)   (GTK_PRINT_OPERATION_PREVIEW(RVAL2GOBJ(o)))
#define RVAL2GTKPRINTSETTINGS(o)           (GTK_PRINT_SETTINGS(RVAL2GOBJ(o)))
#define RVAL2GTKPRINTUNIXDIALOG(o)         (GTK_PRINT_UNIX_DIALOG(RVAL2GOBJ(o)))
#define RVAL2GTKPROGRESSBAR(o)             (GTK_PROGRESS_BAR(RVAL2GOBJ(o)))
#define RVAL2GTKRADIOACTION(o)             (GTK_RADIO_ACTION(RVAL2GOBJ(o)))
#define RVAL2GTKRADIOBUTTON(o)             (GTK_RADIO_BUTTON(RVAL2GOBJ(o)))
#define RVAL2GTKRADIOMENUITEM(o)           (GTK_RADIO_MENU_ITEM(RVAL2GOBJ(o)))
#define RVAL2GTKRADIOTOOLBUTTON(o)         (GTK_RADIO_TOOL_BUTTON(RVAL2GOBJ(o)))
#define RVAL2GTKRANGE(o)                   (GTK_RANGE(RVAL2GOBJ(o)))
#define RVAL2GTKRECENTCHOOSER(o)           (GTK_RECENT_CHOOSER(RVAL2GOBJ(o)))
#define RVAL2GTKRECENTCHOOSERDIALOG(o)     (GTK_RECENT_CHOOSER_DIALOG(RVAL2GOBJ(o)))
#define RVAL2GTKRECENTCHOOSERMENU(o)       (GTK_RECENT_CHOOSER_MENU(RVAL2GOBJ(o)))
#define RVAL2GTKRECENTCHOOSERWIDGET(o)     (GTK_RECENT_CHOOSER_WIDGET(RVAL2GOBJ(o)))
#define RVAL2GTKRECENTFILTER(o)            (GTK_RECENT_FILTER(RVAL2GOBJ(o)))
#define RVAL2GTKRECENTMANAGER(o)           (GTK_RECENT_MANAGER(RVAL2GOBJ(o)))
#define RVAL2GTKSCALE(o)                   (GTK_SCALE(RVAL2GOBJ(o)))
#define RVAL2GTKSCALEBUTTON(o)             (GTK_SCALE_BUTTON(RVAL2GOBJ(o)))
#define RVAL2GTKSCROLLABLE(o)              (GTK_SCROLLABLE(RVAL2GOBJ(o)))
#define RVAL2GTKSCROLLBAR(o)               (GTK_SCROLLBAR(RVAL2GOBJ(o)))
#define RVAL2GTKSCROLLEDWINDOW(o)          (GTK_SCROLLED_WINDOW(RVAL2GOBJ(o)))
#if GTK_CHECK_VERSION(3, 10, 0)
#  define RVAL2GTKSEARCHBAR(o)               (GTK_SEARCH_BAR(RVAL2GOBJ(o)))
#endif
#define RVAL2GTKSEPARATOR(o)               (GTK_SEPARATOR(RVAL2GOBJ(o)))
#define RVAL2GTKSETTINGS(o)                (GTK_SETTINGS(RVAL2GOBJ(o)))
#define RVAL2GTKSIZEGROUP(o)               (GTK_SIZE_GROUP(RVAL2GOBJ(o)))
#define RVAL2GTKSOCKET(o)                  (GTK_SOCKET(RVAL2GOBJ(o)))
#define RVAL2GTKSPINBUTTON(o)              (GTK_SPIN_BUTTON(RVAL2GOBJ(o)))
#define RVAL2GTKSPINNER(o)                 (GTK_SPINNER(RVAL2GOBJ(o)))
#if GTK_CHECK_VERSION(3, 10, 0)
#  define RVAL2GTKSTACK(o)                   (GTK_STACK(RVAL2GOBJ(o)))
#endif
#define RVAL2GTKSTATUSBAR(o)               (GTK_STATUSBAR(RVAL2GOBJ(o)))
#define RVAL2GTKSTATUSICON(o)              (GTK_STATUS_ICON(RVAL2GOBJ(o)))
#define RVAL2GTKSTYLECONTEXT(o)            (GTK_STYLE_CONTEXT(RVAL2GOBJ(o)))
#define RVAL2GTKSTYLEPROPERTIES(o)         (GTK_STYLE_PROPERTIES(RVAL2GOBJ(o)))
#define RVAL2GTKSTYLEPROVIDER(o)           (GTK_STYLE_PROVIDER(RVAL2GOBJ(o)))
#define RVAL2GTKSWITCH(o)                  (GTK_SWITCH(RVAL2GOBJ(o)))
#define RVAL2GTKTABLE(o)                   (GTK_TABLE(RVAL2GOBJ(o)))
#define RVAL2GTKTEXTBUFFER(o)              (GTK_TEXT_BUFFER(RVAL2GOBJ(o)))
#define RVAL2GTKTEXTCHILDANCHOR(o)         (GTK_TEXT_CHILD_ANCHOR(RVAL2GOBJ(o)))
#define RVAL2GTKTEXTMARK(o)                (GTK_TEXT_MARK(RVAL2GOBJ(o)))
#define RVAL2GTKTEXTTAG(o)                 (GTK_TEXT_TAG(RVAL2GOBJ(o)))
#define RVAL2GTKTEXTTAGTABLE(o)            (GTK_TEXT_TAG_TABLE(RVAL2GOBJ(o)))
#define RVAL2GTKTEXTVIEW(o)                (GTK_TEXT_VIEW(RVAL2GOBJ(o)))
#define RVAL2GTKTHEMINGENGINE(o)           (GTK_THEMING_ENGINE(RVAL2GOBJ(o)))
#define RVAL2GTKTOGGLEACTION(o)            (GTK_TOGGLE_ACTION(RVAL2GOBJ(o)))
#define RVAL2GTKTOGGLEBUTTON(o)            (GTK_TOGGLE_BUTTON(RVAL2GOBJ(o)))
#define RVAL2GTKTOGGLETOOLBUTTON(o)        (GTK_TOGGLE_TOOL_BUTTON(RVAL2GOBJ(o)))
#define RVAL2GTKTOOLBAR(o)                 (GTK_TOOLBAR(RVAL2GOBJ(o)))
#define RVAL2GTKTOOLBUTTON(o)              (GTK_TOOL_BUTTON(RVAL2GOBJ(o)))
#define RVAL2GTKTOOLITEM(o)                (GTK_TOOL_ITEM(RVAL2GOBJ(o)))
#define RVAL2GTKTOOLITEMGROUP(o)           (GTK_TOOL_ITEM_GROUP(RVAL2GOBJ(o)))
#define RVAL2GTKTOOLPALETTE(o)             (GTK_TOOL_PALETTE(RVAL2GOBJ(o)))
#define RVAL2GTKTOOLSHELL(o)               (GTK_TOOL_SHELL(RVAL2GOBJ(o)))
#define RVAL2GTKTREEMODEL(o)               (GTK_TREE_MODEL(RVAL2GOBJ(o)))
#define RVAL2GTKTREEMODELFILTER(o)         (GTK_TREE_MODEL_FILTER(RVAL2GOBJ(o)))
#define RVAL2GTKTREEMODELSORT(o)           (GTK_TREE_MODEL_SORT(RVAL2GOBJ(o)))
#define RVAL2GTKTREESELECTION(o)           (GTK_TREE_SELECTION(RVAL2GOBJ(o)))
#define RVAL2GTKTREESORTABLE(o)            (GTK_TREE_SORTABLE(RVAL2GOBJ(o)))
#define RVAL2GTKTREESTORE(o)               (GTK_TREE_STORE(RVAL2GOBJ(o)))
#define RVAL2GTKTREEVIEW(o)                (GTK_TREE_VIEW(RVAL2GOBJ(o)))
#define RVAL2GTKTREEVIEWCOLUMN(o)          (GTK_TREE_VIEW_COLUMN(RVAL2GOBJ(o)))
#define RVAL2GTKUIMANAGER(o)               (GTK_UI_MANAGER(RVAL2GOBJ(o)))
#define RVAL2GTKWIDGET(o)                  (GTK_WIDGET(RVAL2GOBJ(o)))
#define RVAL2GTKWINDOW(o)                  (GTK_WINDOW(RVAL2GOBJ(o)))
#define RVAL2GTKWINDOWGROUP(o)             (GTK_WINDOW_GROUP(RVAL2GOBJ(o)))

#define RVAL2GTKACCELGROUPENTRY(o)         ((GtkAccelGroupEntry*)RVAL2BOXED(o, GTK_TYPE_ACCEL_GROUP_ENTRY))
#define GTKACCELGROUPENTRY2RVAL(o)         (BOXED2RVAL(o, GTK_TYPE_ACCEL_GROUP_ENTRY))
#define RVAL2GTKACCELKEY(o)                ((GtkAccelKey*)RVAL2BOXED(o, GTK_TYPE_ACCEL_KEY))
#define GTKACCELKEY2RVAL(o)                (BOXED2RVAL(o, GTK_TYPE_ACCEL_KEY))
#define RVAL2GTKALLOCATION(o)              ((GtkAllocation*)RVAL2BOXED(o, GTK_TYPE_ALLOCATION))
#define GTKALLOCATION2RVAL(o)              (BOXED2RVAL(o, GTK_TYPE_ALLOCATION))
#define RVAL2GTKBINDINGSET(o)              ((GtkBindingSet*)RVAL2BOXED(o, GTK_TYPE_BINDING_SET))
#define GTKBINDINGSET2RVAL(o)              (BOXED2RVAL(o, GTK_TYPE_BINDING_SET))
#define RVAL2GTKBORDER(o)                  ((GtkBorder*)RVAL2BOXED(o, GTK_TYPE_BORDER))
#define GTKBORDER2RVAL(o)                  (BOXED2RVAL(o, GTK_TYPE_BORDER))
#define RVAL2GTKCSSSECTION(o)              ((GtkCssSection*)RVAL2BOXED(o, GTK_TYPE_CSS_SECTION))
#define GTKCSSSECTION2RVAL(o)              (BOXED2RVAL(o, GTK_TYPE_CSS_SECTION))
#if GTK_CHECK_VERSION(3, 8, 0)
#  define RVAL2GTKICONINFO(o)              (GTK_ICON_INFO(RVAL2GOBJ(o)))
#  define GTKICONINFO2RVAL(o)              (GOBJ2RVAL(o))
#else
#  define RVAL2GTKICONINFO(o)              ((GtkIconInfo *)RVAL2BOXED(o, GTK_TYPE_ICON_INFO))
#  define GTKICONINFO2RVAL(o)              (BOXED2RVAL(o, GTK_TYPE_ICON_INFO))
#endif
#define RVAL2GTKICONSET(o)                 ((GtkIconSet*)RVAL2BOXED(o, GTK_TYPE_ICON_SET))
#define GTKICONSET2RVAL(o)                 (BOXED2RVAL(o, GTK_TYPE_ICON_SET))
#define RVAL2GTKICONSOURCE(o)              ((GtkIconSource*)RVAL2BOXED(o, GTK_TYPE_ICON_SOURCE))
#define GTKICONSOURCE2RVAL(o)              (BOXED2RVAL(o, GTK_TYPE_ICON_SOURCE))
#define RVAL2GTKPAPERSIZE(o)               ((GtkPaperSize*)RVAL2BOXED(o, GTK_TYPE_PAPER_SIZE))
#define GTKPAPERSIZE2RVAL(o)               (BOXED2RVAL(o, GTK_TYPE_PAPER_SIZE))
#define RVAL2GTKRECENTDATA(o)              ((GtkRecentData*)RVAL2BOXED(o, GTK_TYPE_RECENT_DATA))
#define GTKRECENTDATA2RVAL(o)              (BOXED2RVAL(o, GTK_TYPE_RECENT_DATA))
#define RVAL2GTKRECENTFILTERINFO(o)        ((GtkRecentFilterInfo*)RVAL2BOXED(o, GTK_TYPE_RECENT_FILTER_INFO))
#define GTKRECENTFILTERINFO2RVAL(o)        (BOXED2RVAL(o, GTK_TYPE_RECENT_FILTER_INFO))
#define RVAL2GTKRECENTINFO(o)              ((GtkRecentInfo*)RVAL2BOXED(o, GTK_TYPE_RECENT_INFO))
#define GTKRECENTINFO2RVAL(o)              (BOXED2RVAL(o, GTK_TYPE_RECENT_INFO))
#define RVAL2GTKREQUISITION(o)             ((GtkRequisition *)RVAL2BOXED(o, GTK_TYPE_REQUISITION))
#define GTKREQUISITION2RVAL(o)             (BOXED2RVAL(o, GTK_TYPE_REQUISITION))
#define RVAL2GTKSELECTIONDATA(o)           ((GtkSelectionData*)RVAL2BOXED(o, GTK_TYPE_SELECTION_DATA))
#define GTKSELECTIONDATA2RVAL(o)           (BOXED2RVAL(o, GTK_TYPE_SELECTION_DATA))
#define RVAL2GTKSYMBOLICCOLOR(o)           ((GtkSymbolicColor*)RVAL2BOXED(o, GTK_TYPE_SYMBOLIC_COLOR))
#define GTKSYMBOLICCOLOR2RVAL(o)           (BOXED2RVAL(o, GTK_TYPE_SYMBOLIC_COLOR))
#define RVAL2GTKTARGETLIST(o)              ((GtkTargetList*)RVAL2BOXED(o, GTK_TYPE_TARGET_LIST))
#define GTKTARGETLIST2RVAL(o)              (BOXED2RVAL(o, GTK_TYPE_TARGET_LIST))
#define RVAL2GTKTEXTAPPEARANCE(o)          ((GtkTextAppearance*)RVAL2BOXED(o, GTK_TYPE_TEXT_APPEARANCE))
#define GTKTEXTAPPEARANCE2RVAL(o)          (BOXED2RVAL(o, GTK_TYPE_TEXT_APPEARANCE))
#define RVAL2GTKTEXTATTRIBUTES(o)          ((GtkTextAttributes*)RVAL2BOXED(o, GTK_TYPE_TEXT_ATTRIBUTES))
#define GTKTEXTATTRIBUTES2RVAL(o)          (BOXED2RVAL(o, GTK_TYPE_TEXT_ATTRIBUTES))
#define RVAL2GTKTEXTITER(o)                ((GtkTextIter*)RVAL2BOXED(o, GTK_TYPE_TEXT_ITER))
#define GTKTEXTITER2RVAL(o)                (BOXED2RVAL(o, GTK_TYPE_TEXT_ITER))
#define RVAL2GTKTREEITER(o)                ((GtkTreeIter*)RVAL2BOXED(o, GTK_TYPE_TREE_ITER))
#define GTKTREEITER2RVAL(o)                (BOXED2RVAL(o, GTK_TYPE_TREE_ITER))
#define RVAL2GTKTREEPATH(o)                ((GtkTreePath*)RVAL2BOXED(o, GTK_TYPE_TREE_PATH))
#define GTKTREEPATH2RVAL(o)                (BOXED2RVAL(o, GTK_TYPE_TREE_PATH))
#define RVAL2GTKTREEROWREFERENCE(o)        ((GtkTreeRowReference*)RVAL2BOXED(o, GTK_TYPE_TREE_ROW_REFERENCE))
#define GTKTREEROWREFERENCE2RVAL(o)        (BOXED2RVAL(o, GTK_TYPE_TREE_ROW_REFERENCE))
#define RVAL2GTKWIDGETPATH(o)              ((GtkWidgetPath*)RVAL2BOXED(o, GTK_TYPE_WIDGET_PATH))
#define GTKWIDGETPATH2RVAL(o)              (BOXED2RVAL(o, GTK_TYPE_WIDGET_PATH))

#define RVAL2GTKARROWTYPE(o)               (RVAL2GENUM(o, GTK_TYPE_ARROW_TYPE))
#define GTKARROWTYPE2RVAL(o)               (GENUM2RVAL(o, GTK_TYPE_ARROW_TYPE))
#define RVAL2GTKASSISTANTPAGETYPE(o)       (RVAL2GENUM(o, GTK_TYPE_ASSISTANT_PAGE_TYPE))
#define GTKASSISTANTPAGETYPE2RVAL(o)       (GENUM2RVAL(o, GTK_TYPE_ASSISTANT_PAGE_TYPE))
#define RVAL2GTKBUTTONSTYPE(o)             (RVAL2GENUM(o, GTK_TYPE_BUTTONS_TYPE))
#define GTKBUTTONSTYPE2RVAL(o)             (GENUM2RVAL(o, GTK_TYPE_BUTTONS_TYPE))
#define RVAL2GTKCORNERTYPE(o)              (RVAL2GENUM(o, GTK_TYPE_CORNER_TYPE))
#define GTKCORNERTYPE2RVAL(o)              (GENUM2RVAL(o, GTK_TYPE_CORNER_TYPE))
#define RVAL2GTKCSSSECTIONTYPE(o)          (RVAL2GENUM(o, GTK_TYPE_CSS_SECTION_TYPE))
#define GTKCSSSECTIONTYPE2RVAL(o)          (GENUM2RVAL(o, GTK_TYPE_CSS_SECTION_TYPE))
#define RVAL2GTKDIRECTIONTYPE(o)           (RVAL2GENUM(o, GTK_TYPE_DIRECTION_TYPE))
#define GTKDIRECTIONTYPE2RVAL(o)           (GENUM2RVAL(o, GTK_TYPE_DIRECTION_TYPE))
#define RVAL2GTKENTRYICONPOSITION(o)       (RVAL2GENUM(o, GTK_TYPE_ENTRY_ICON_POSITION))
#define GTKENTRYICONPOSITION2RVAL(o)       (GENUM2RVAL(o, GTK_TYPE_ENTRY_ICON_POSITION))
#define RVAL2GTKFILECHOOSERACTION(o)       (RVAL2GENUM(o, GTK_TYPE_FILE_CHOOSER_ACTION))
#define GTKFILECHOOSERACTION2RVAL(o)       (GENUM2RVAL(o, GTK_TYPE_FILE_CHOOSER_ACTION))
#define RVAL2GTKICONSIZE(o)                (RVAL2GENUM(o, GTK_TYPE_ICON_SIZE))
#define GTKICONSIZE2RVAL(o)                (GENUM2RVAL(o, GTK_TYPE_ICON_SIZE))
#define RVAL2GTKICONVIEWDROPPOSITION(o)    (RVAL2GENUM(o, GTK_TYPE_ICON_VIEW_DROP_POSITION))
#define GTKICONVIEWDROPPOSITION2RVAL(o)    (GENUM2RVAL(o, GTK_TYPE_ICON_VIEW_DROP_POSITION))
#define RVAL2GTKJUNCTIONSIDES(o)           (RVAL2GENUM(o, GTK_TYPE_JUNCTION_SIDES))
#define GTKJUNCTIONSIDES2RVAL(o)           (GENUM2RVAL(o, GTK_TYPE_JUNCTION_SIDES))
#define RVAL2GTKJUSTIFICATION(o)           (RVAL2GENUM(o, GTK_TYPE_JUSTIFICATION))
#define GTKJUSTIFICATION2RVAL(o)           (GENUM2RVAL(o, GTK_TYPE_JUSTIFICATION))
#define RVAL2GTKMESSAGETYPE(o)             (RVAL2GENUM(o, GTK_TYPE_MESSAGE_TYPE))
#define GTKMESSAGETYPE2RVAL(o)             (GENUM2RVAL(o, GTK_TYPE_MESSAGE_TYPE))
#define RVAL2GTKORIENTATION(o)             (RVAL2GENUM(o, GTK_TYPE_ORIENTATION))
#define GTKORIENTATION2RVAL(o)             (GENUM2RVAL(o, GTK_TYPE_ORIENTATION))
#define RVAL2GTKPACKTYPE(o)                (RVAL2GENUM(o, GTK_TYPE_PACK_TYPE))
#define GTKPACKTYPE2RVAL(o)                (GENUM2RVAL(o, GTK_TYPE_PACK_TYPE))
#define RVAL2GTKPAGEORIENTATION(o)         (RVAL2GENUM(o, GTK_TYPE_PAGE_ORIENTATION))
#define GTKPAGEORIENTATION2RVAL(o)         (GENUM2RVAL(o, GTK_TYPE_PAGE_ORIENTATION))
#define RVAL2GTKPAGESET(o)                 (RVAL2GENUM(o, GTK_TYPE_PAGE_SET))
#define GTKPAGESET2RVAL(o)                 (GENUM2RVAL(o, GTK_TYPE_PAGE_SET))
#define RVAL2GTKPATHPRIORITYTYPE(o)        (RVAL2GENUM(o, GTK_TYPE_PATH_PRIORITY_TYPE))
#define GTKPATHPRIORITYTYPE2RVAL(o)        (GENUM2RVAL(o, GTK_TYPE_PATH_PRIORITY_TYPE))
#define RVAL2GTKPATHTYPE(o)                (RVAL2GENUM(o, GTK_TYPE_PATH_TYPE))
#define GTKPATHTYPE2RVAL(o)                (GENUM2RVAL(o, GTK_TYPE_PATH_TYPE))
#define RVAL2GTKPOLICYTYPE(o)              (RVAL2GENUM(o, GTK_TYPE_POLICY_TYPE))
#define GTKPOLICYTYPE2RVAL(o)              (GENUM2RVAL(o, GTK_TYPE_POLICY_TYPE))
#define RVAL2GTKPOSITIONTYPE(o)            (RVAL2GENUM(o, GTK_TYPE_POSITION_TYPE))
#define GTKPOSITIONTYPE2RVAL(o)            (GENUM2RVAL(o, GTK_TYPE_POSITION_TYPE))
#define RVAL2GTKPRINTDUPLEX(o)             (RVAL2GENUM(o, GTK_TYPE_PRINT_DUPLEX))
#define GTKPRINTDUPLEX2RVAL(o)             (GENUM2RVAL(o, GTK_TYPE_PRINT_DUPLEX))
#define RVAL2GTKPRINTOPERATIONACTION(o)    (RVAL2GENUM(o, GTK_TYPE_PRINT_OPERATION_ACTION))
#define GTKPRINTOPERATIONACTION2RVAL(o)    (GENUM2RVAL(o, GTK_TYPE_PRINT_OPERATION_ACTION))
#define RVAL2GTKPRINTOPERATIONRESULT(o)    (RVAL2GENUM(o, GTK_TYPE_PRINT_OPERATION_RESULT))
#define GTKPRINTOPERATIONRESULT2RVAL(o)    (GENUM2RVAL(o, GTK_TYPE_PRINT_OPERATION_RESULT))
#define RVAL2GTKPRINTPAGES(o)              (RVAL2GENUM(o, GTK_TYPE_PRINT_PAGES))
#define GTKPRINTPAGES2RVAL(o)              (GENUM2RVAL(o, GTK_TYPE_PRINT_PAGES))
#define RVAL2GTKPRINTQUALITY(o)            (RVAL2GENUM(o, GTK_TYPE_PRINT_QUALITY))
#define GTKPRINTQUALITY2RVAL(o)            (GENUM2RVAL(o, GTK_TYPE_PRINT_QUALITY))
#define RVAL2GTKPRINTSTATUS(o)             (RVAL2GENUM(o, GTK_TYPE_PRINT_STATUS))
#define GTKPRINTSTATUS2RVAL(o)             (GENUM2RVAL(o, GTK_TYPE_PRINT_STATUS))
#define RVAL2GTKRELIEFSTYLE(o)             (RVAL2GENUM(o, GTK_TYPE_RELIEF_STYLE))
#define GTKRELIEFSTYLE2RVAL(o)             (GENUM2RVAL(o, GTK_TYPE_RELIEF_STYLE))
#define RVAL2GTKRESPONSETYPE(o)            (RVAL2GENUM(o, GTK_TYPE_RESPONSE_TYPE))
#define GTKRESPONSETYPE2RVAL(o)            (GENUM2RVAL(o, GTK_TYPE_RESPONSE_TYPE))
#define RVAL2GTKSELECTIONMODE(o)           (RVAL2GENUM(o, GTK_TYPE_SELECTION_MODE))
#define GTKSELECTIONMODE2RVAL(o)           (GENUM2RVAL(o, GTK_TYPE_SELECTION_MODE))
#define RVAL2GTKSHADOWTYPE(o)              (RVAL2GENUM(o, GTK_TYPE_SHADOW_TYPE))
#define GTKSHADOWTYPE2RVAL(o)              (GENUM2RVAL(o, GTK_TYPE_SHADOW_TYPE))
#define RVAL2GTKSIZEGROUPMODE(o)           (RVAL2GENUM(o, GTK_TYPE_SIZE_GROUP_MODE))
#define GTKSIZEGROUPMODE2RVAL(o)           (GENUM2RVAL(o, GTK_TYPE_SIZE_GROUP_MODE))
#define RVAL2GTKSIZEREQUESTMODE(o)         (RVAL2GENUM(o, GTK_TYPE_SIZE_REQUEST_MODE))
#define GTKSIZEREQUESTMODE2RVAL(o)         (GENUM2RVAL(o, GTK_TYPE_SIZE_REQUEST_MODE))
#define RVAL2GTKSORTTYPE(o)                (RVAL2GENUM(o, GTK_TYPE_SORT_TYPE))
#define GTKSORTTYPE2RVAL(o)                (GENUM2RVAL(o, GTK_TYPE_SORT_TYPE))
#define RVAL2GTKSPINTYPE(o)                (RVAL2GENUM(o, GTK_TYPE_SPIN_TYPE))
#define GTKSPINTYPE2RVAL(o)                (GENUM2RVAL(o, GTK_TYPE_SPIN_TYPE))
#if GTK_CHECK_VERSION(3, 10, 0)
#  define RVAL2GTKSTACKTRANSITIONTYPE(o)     (RVAL2GENUM(o, GTK_TYPE_STACK_TRANSITION_TYPE))
#  define GTKSTACKTRANSITIONTYPE2RVAL(o)     (GENUM2RVAL(o, GTK_TYPE_STACK_TRANSITION_TYPE))
#endif
#define RVAL2GTKSTATETYPE(o)               (RVAL2GENUM(o, GTK_TYPE_STATE_TYPE))
#define GTKSTATETYPE2RVAL(o)               (GENUM2RVAL(o, GTK_TYPE_STATE_TYPE))
#define RVAL2GTKTEXTDIRECTION(o)           (RVAL2GENUM(o, GTK_TYPE_TEXT_DIRECTION))
#define GTKTEXTDIRECTION2RVAL(o)           (GENUM2RVAL(o, GTK_TYPE_TEXT_DIRECTION))
#define RVAL2GTKTEXTWINDOWTYPE(o)          (RVAL2GENUM(o, GTK_TYPE_TEXT_WINDOW_TYPE))
#define GTKTEXTWINDOWTYPE2RVAL(o)          (GENUM2RVAL(o, GTK_TYPE_TEXT_WINDOW_TYPE))
#define RVAL2GTKTOOLBARCHILDTYPE(o)        (RVAL2GENUM(o, GTK_TYPE_TOOLBAR_CHILD_TYPE))
#define GTKTOOLBARCHILDTYPE2RVAL(o)        (GENUM2RVAL(o, GTK_TYPE_TOOLBAR_CHILD_TYPE))
#define RVAL2GTKTOOLBARSTYLE(o)            (RVAL2GENUM(o, GTK_TYPE_TOOLBAR_STYLE))
#define GTKTOOLBARSTYLE2RVAL(o)            (GENUM2RVAL(o, GTK_TYPE_TOOLBAR_STYLE))
#define RVAL2GTKTREEVIEWDROPPOSITION(o)    (RVAL2GENUM(o, GTK_TYPE_TREE_VIEW_DROP_POSITION))
#define GTKTREEVIEWDROPPOSITION2RVAL(o)    (GENUM2RVAL(o, GTK_TYPE_TREE_VIEW_DROP_POSITION))
#define RVAL2GTKUNIT(o)                    (RVAL2GENUM(o, GTK_TYPE_UNIT))
#define GTKUNIT2RVAL(o)                    (GENUM2RVAL(o, GTK_TYPE_UNIT))
#define RVAL2GTKWINDOWTYPE(o)              (RVAL2GENUM(o, GTK_TYPE_WINDOW_TYPE))
#define GTKWINDOWTYPE2RVAL(o)              (GENUM2RVAL(o, GTK_TYPE_WINDOW_TYPE))
#define RVAL2GTKWRAPMODE(o)                (RVAL2GENUM(o, GTK_TYPE_WRAP_MODE))
#define GTKWRAPMODE2RVAL(o)                (GENUM2RVAL(o, GTK_TYPE_WRAP_MODE))
#define RVAL2GTKLICENSE(o)                 (RVAL2GENUM(o, GTK_TYPE_LICENSE))
#define GTKLICENSE2RVAL(o)                 (GENUM2RVAL(o, GTK_TYPE_LICENSE))

#define RVAL2GTKACCELFLAGS(o)              (RVAL2GFLAGS(o, GTK_TYPE_ACCEL_FLAGS))
#define GTKACCELFLAGS2RVAL(o)              (GFLAGS2RVAL(o, GTK_TYPE_ACCEL_FLAGS))
#define RVAL2GTKATTACHOPTIONS(o)           (RVAL2GFLAGS(o, GTK_TYPE_ATTACH_OPTIONS))
#define GTKATTACHOPTIONS2RVAL(o)           (GFLAGS2RVAL(o, GTK_TYPE_ATTACH_OPTIONS))
#define RVAL2GTKCALENDARDISPLAYOPTIONS(o)  (RVAL2GFLAGS(o, GTK_TYPE_CALENDAR_DISPLAY_OPTIONS))
#define GTKCALENDARDISPLAYOPTIONS2RVAL(o)  (GFLAGS2RVAL(o, GTK_TYPE_CALENDAR_DISPLAY_OPTIONS))
#define RVAL2GTKCELLRENDERERSTATE(o)       (RVAL2GFLAGS(o, GTK_TYPE_CELL_RENDERER_STATE))
#define GTKCELLRENDERERSTATE2RVAL(o)       (GFLAGS2RVAL(o, GTK_TYPE_CELL_RENDERER_STATE))
#define RVAL2GTKDESTDEFAULTS(o)            (RVAL2GFLAGS(o, GTK_TYPE_DEST_DEFAULTS))
#define GTKDESTDEFAULTS2RVAL(o)            (GFLAGS2RVAL(o, GTK_TYPE_DEST_DEFAULTS))
#define RVAL2GTKDIALOGFLAGS(o)             (RVAL2GFLAGS(o, GTK_TYPE_DIALOG_FLAGS))
#define GTKDIALOGFLAGS2RVAL(o)             (GFLAGS2RVAL(o, GTK_TYPE_DIALOG_FLAGS))
#define RVAL2GTKFILEFILTERFLAGS(o)         (RVAL2GFLAGS(o, GTK_TYPE_FILE_FILTER_FLAGS))
#define GTKFILEFILTERFLAGS2RVAL(o)         (GFLAGS2RVAL(o, GTK_TYPE_FILE_FILTER_FLAGS))
#define RVAL2GTKICONLOOKUPFLAGS(o)         (RVAL2GFLAGS(o, GTK_TYPE_ICON_LOOKUP_FLAGS))
#define GTKICONLOOKUPFLAGS2RVAL(o)         (GFLAGS2RVAL(o, GTK_TYPE_ICON_LOOKUP_FLAGS))
#define RVAL2GTKPRINTCAPABILITIES(o)       (RVAL2GFLAGS(o, GTK_TYPE_PRINT_CAPABILITIES))
#define GTKPRINTCAPABILITIES2RVAL(o)       (GFLAGS2RVAL(o, GTK_TYPE_PRINT_CAPABILITIES))
#define RVAL2GTKRECENTFILTERFLAGS(o)       (RVAL2GFLAGS(o, GTK_TYPE_RECENT_FILTER_FLAGS))
#define GTKRECENTFILTERFLAGS2RVAL(o)       (GFLAGS2RVAL(o, GTK_TYPE_RECENT_FILTER_FLAGS))
#define RVAL2GTKREGIONFLAGS(o)             (RVAL2GFLAGS(o, GTK_TYPE_REGION_FLAGS))
#define GTKREGIONFLAGS2RVAL(o)             (GFLAGS2RVAL(o, GTK_TYPE_REGION_FLAGS))
#define RVAL2GTKSTATEFLAGS(o)              (RVAL2GFLAGS(o, GTK_TYPE_STATE_FLAGS))
#define GTKSTATEFLAGS2RVAL(o)              (GFLAGS2RVAL(o, GTK_TYPE_STATE_FLAGS))
#define RVAL2GTKTARGETFLAGS(o)             (RVAL2GFLAGS(o, GTK_TYPE_TARGET_FLAGS))
#define GTKTARGETFLAGS2RVAL(o)             (GFLAGS2RVAL(o, GTK_TYPE_TARGET_FLAGS))
#define RVAL2GTKTEXTSEARCHFLAGS(o)         (RVAL2GFLAGS(o, GTK_TYPE_TEXT_SEARCH_FLAGS))
#define GTKTEXTSEARCHFLAGS2RVAL(o)         (GFLAGS2RVAL(o, GTK_TYPE_TEXT_SEARCH_FLAGS))
#define RVAL2GTKTOOLPALETTEDRAGTARGETS(o)  (RVAL2GFLAGS(o, GTK_TYPE_TOOL_PALETTE_DRAG_TARGETS))
#define GTKTOOLPALETTEDRAGTARGETS2RVAL(o)  (GFLAGS2RVAL(o, GTK_TYPE_TOOL_PALETTE_DRAG_TARGETS))
#define RVAL2GTKTREEMODELFLAGS(o)          (RVAL2GFLAGS(o, GTK_TYPE_TREE_MODEL_FLAGS))
#define GTKTREEMODELFLAGS2RVAL(o)          (GFLAGS2RVAL(o, GTK_TYPE_TREE_MODEL_FLAGS))
#define RVAL2GTKUIMANAGERITEMTYPE(o)       (RVAL2GFLAGS(o, GTK_TYPE_UI_MANAGER_ITEM_TYPE))
#define GTKUIMANAGERITEMTYPE2RVAL(o)       (GFLAGS2RVAL(o, GTK_TYPE_UI_MANAGER_ITEM_TYPE))

/* For GIO. They are temporary. They will be needless after Ruby/GTK3
 * is based on Ruby/GObjectIntrospection.
 */
#define RVAL2GFILE(o)                      (G_FILE(RVAL2GOBJ(o)))
#define RVAL2GICON(o)                      (G_ICON(RVAL2GOBJ(o)))
#define RVAL2GPERMISSION(o)                (G_PERMISSION(RVAL2GOBJ(o)))
#define RVAL2GAPPLICATIONFLAGS(o)          (RVAL2GFLAGS(o, G_TYPE_APPLICATION_FLAGS))

/* For GDK. They are temporary. They will be needless after Ruby/GTK3
 * is based on Ruby/GObjectIntrospection.
 */
#define RVAL2GDKCOLOR(o)                   ((GdkColor*)RVAL2BOXED(o, GDK_TYPE_COLOR))
#define GDKCOLOR2RVAL(o)                   (BOXED2RVAL(o, GDK_TYPE_COLOR))

#define RVAL2GDKRGBA(o)                    ((GdkRGBA*)RVAL2BOXED(o, GDK_TYPE_RGBA))
#define GDKRGBA2RVAL(o)                    (BOXED2RVAL(o, GDK_TYPE_RGBA))

#define RVAL2GDKMODIFIERTYPE(o)            (RVAL2GFLAGS(o, GDK_TYPE_MODIFIER_TYPE))

#define RVAL2GDKDRAGCONTEXT(o)             (GDK_DRAG_CONTEXT(RVAL2GOBJ(o)))

#define RVAL2GDKSCREEN(o)                  (GDK_SCREEN(RVAL2GOBJ(o)))

#define RVAL2GDKWINDOW(o)                  (GDK_WINDOW(RVAL2GOBJ(o)))

#define GDKEVENT2RVAL(o)                   (BOXED2RVAL(o, GDK_TYPE_EVENT))
#define RVAL2GDKEVENT(o)                   ((GdkEvent *)RVAL2BOXED(o, GDK_TYPE_EVENT))
#define GEV2RVAL(ev)                       GDKEVENT2RVAL(ev)
#define RVAL2GEV(ev)                       RVAL2GDKEVENT(ev)

#define GDKMODIFIERTYPE2RVAL(o)            (GFLAGS2RVAL(o, GDK_TYPE_MODIFIER_TYPE))

#define GDKRECTANGLE2RVAL(o)               (BOXED2RVAL(o, CAIRO_GOBJECT_TYPE_RECTANGLE_INT))
#define RVAL2GDKRECTANGLE(o)               ((GdkRectangle*)RVAL2BOXED(o, CAIRO_GOBJECT_TYPE_RECTANGLE_INT))

#define RVAL2GDKDISPLAYOBJECT(o)           (GDK_DISPLAY_OBJECT(RVAL2GOBJ(o)))

#define GDKATOM2RVAL(o)                    (BOXED2RVAL(o, GDK_TYPE_ATOM))
#define RVAL2GDKATOM(o)                    ((GdkAtomData*)RVAL2BOXED(o, GDK_TYPE_ATOM))

#define RVAL2GDKEVENTKEY(o)                ((GdkEventKey*)RVAL2GDKEVENT(o))

#define RVAL2GDKDRAGACTION(o)              (RVAL2GFLAGS(o, GDK_TYPE_DRAG_ACTION))

#define RVAL2GDKGEOMETRY(o)                ((GdkGeometry*)RVAL2BOXED(o, GDK_TYPE_GEOMETRY))

#define RVAL2GDKWINDOWHINTS(o)             (RVAL2GFLAGS(o, GDK_TYPE_WINDOW_HINTS))

#define RVAL2GDKWINDOWEDGE(o)              (RVAL2GENUM(o, GDK_TYPE_WINDOW_EDGE))

#define RVAL2GDKDEVICE(o)                  (GDK_DEVICE(RVAL2GOBJ(o)))

#define RVAL2GDKEVENTMASK(o)               (RVAL2GFLAGS(o, GDK_TYPE_EVENT_MASK))
#define GDKEVENTMASK2RVAL(o)               (GFLAGS2RVAL(o, GDK_TYPE_EVENT_MASK))

#define RVAL2GDKVISUAL(o)                  (GDK_VISUAL(RVAL2GOBJ(o)))

#define RVAL2GDKDRAGPROTOCOL(o)            (RVAL2GENUM(o, GDK_TYPE_DRAG_PROTOCOL))

#endif /* __RBGTK3CONVERSIONS_H__ */








