#pragma once

enum eVKKeyCode {
	VK_KEY_NULL = 0,
	VK_KEY_NONE = 254,
	VK_KEY_0 = 48,
	VK_KEY_1,
	VK_KEY_2,
	VK_KEY_3,
	VK_KEY_4,
	VK_KEY_5,
	VK_KEY_6,
	VK_KEY_7,
	VK_KEY_8,
	VK_KEY_9,
	VK_KEY_A = 65,
	VK_KEY_B,
	VK_KEY_C,
	VK_KEY_D,
	VK_KEY_E,
	VK_KEY_F,
	VK_KEY_G,
	VK_KEY_H,
	VK_KEY_I,
	VK_KEY_J,
	VK_KEY_K,
	VK_KEY_L,
	VK_KEY_M,
	VK_KEY_N,
	VK_KEY_O,
	VK_KEY_P,
	VK_KEY_Q,
	VK_KEY_R,
	VK_KEY_S,
	VK_KEY_T,
	VK_KEY_U,
	VK_KEY_V,
	VK_KEY_W,
	VK_KEY_X,
	VK_KEY_Y,
	VK_KEY_Z,

	VK_NUMPAD_0 = 96,
	VK_NUMPAD_1,
	VK_NUMPAD_2,
	VK_NUMPAD_3,
	VK_NUMPAD_4,
	VK_NUMPAD_5,
	VK_NUMPAD_6,
	VK_NUMPAD_7,
	VK_NUMPAD_8,
	VK_NUMPAD_9,

	VK_BACKSPACE = 8,
	VK_ENTER = 13,
	VK_CTRL = 17,
	VK_ALT = 18,
	VK_CAPS_LOCK = 20,
	VK_PAGE_UP = 33,
	VK_PAGE_DOWN = 34,
	VK_LEFT_ARROW = 37,
	VK_UP_ARROW = 38,
	VK_RIGHT_ARROW = 39,
	VK_DOWN_ARROW = 40,
	VK_LEFT_META = 91,
	VK_RIGHT_META = 92,
	VK_NUM_LOCK = 144,
	VK_SCROLL_LOCK = 145,
	VK_SEMICOLON = 186,
	VK_EQUALS = 187,
	VK_COMMA = 188,
	VK_DASH = 189,
	VK_PERIOD = 190,
	VK_FORWARD_SLASH = 191,
	VK_GRAVE_ACCENT = 192,
	VK_OPEN_BRACKET = 219,
	VK_BACK_SLASH = 220,
	VK_CLOSE_BRACKET = 221,
	VK_SINGLE_QUOTE = 222,

	VK_KEY_MAX = 256
};


class eKeyboardMan {
public:

	static bool		   ms_keyboardBuffer[VK_KEY_MAX];
	static bool		   ms_keyboardBufferJustPressed[VK_KEY_MAX];

	static int		   ms_lastKey;

	static eVKKeyCode  GetLastKey();
	static const char* KeyToString(int vkKey);

	static void SetKeyStatus(int vkKey, bool isDown);
	static void SetLastPressedKey(int vkKey);
	static void ResetKeys();

	static int  GetKeyState(int vkKey);
	static int  GetNumPressedKeys();

	static void OnFocusLost();
};