#ifndef ECMA_CLASS_BROWSER_H
#define ECMA_CLASS_BROWSER_H
#include "editor/editor_file_dialog.h"
#include "editor/editor_node.h"

class ECMAScriptPlugin : public EditorPlugin {

	GDCLASS(ECMAScriptPlugin, EditorPlugin);

	enum MenuItem {
		ITEM_GEN_DECLAR_FILE,
	};

	EditorFileDialog *declaration_file_dialog;

protected:
	static String BUILTIN_DECLEARATION_TEXT;
	static void _bind_methods();
	void _on_menu_item_pressed(int item);
	void _export_typescript_declare_file(const String &p_path);

public:
	virtual String get_name() const { return "ECMAScriptPlugin"; }
	ECMAScriptPlugin(EditorNode *p_node);
};

#endif // ECMA_CLASS_BROWSER_H
