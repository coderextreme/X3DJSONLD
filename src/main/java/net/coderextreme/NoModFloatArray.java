package net.coderextreme;

import java.util.ArrayList;
import java.util.List;
import java.util.Arrays;
import java.util.Collections;
import java.lang.Float;

public class NoModFloatArray {
	public  static final List<Float> FIELDOFVIEW_DEFAULT_VALUE = Collections.unmodifiableList(List.of(-1f,-1f,1f,1f));
	public void print(String section, List<Float> MOD_FIELDOFVIEW) {
		System.out.println();
		System.out.println(section);
		System.out.println("Immutable Array FIELDOFVIEW_DEFAULT_VALUE "+FIELDOFVIEW_DEFAULT_VALUE);
		System.out.println("Mutable Array MOD_FIELDOFVIEW"+MOD_FIELDOFVIEW);
		System.out.println("Compare mutable to immutable "+MOD_FIELDOFVIEW.equals(FIELDOFVIEW_DEFAULT_VALUE));
		System.out.println();
	}
	public NoModFloatArray() {
		List<Float> MOD_FIELDOFVIEW = new ArrayList<Float>(FIELDOFVIEW_DEFAULT_VALUE);
		print("Modify Pre Immutable Change", MOD_FIELDOFVIEW);
		try {
			System.out.println("Setting immutable index 0 to 2.0");
			FIELDOFVIEW_DEFAULT_VALUE.set(0, 2.0f);
		} catch (UnsupportedOperationException ex) {
			ex.printStackTrace();
		}
		print("Modify Post Immutable Change", MOD_FIELDOFVIEW);

		System.out.println("seting mutable index 2 to 4.0");
		MOD_FIELDOFVIEW.set(2, 4.0f);
		print("Post modify non-final", MOD_FIELDOFVIEW);
	}
	public static void main(String[] args) {
		new NoModFloatArray();
		System.out.println("---------------------------------------------");
		new NoModFloatArray();
	}
}
