package net.coderextreme;

import java.util.ArrayList;
import java.util.List;
import java.util.Arrays;
import java.util.Collections;
import java.lang.Double;

public class NoModDoubleArray {
	private static final double[] DOUBLE_ARRAY_FIELDOFVIEW_DEFAULT_VALUE = new double [] {-1f,-1f,1f,1f};
	public static final List<Double> FIELDOFVIEW_DEFAULT_VALUE = Collections.unmodifiableList(Arrays.asList(Arrays.stream(DOUBLE_ARRAY_FIELDOFVIEW_DEFAULT_VALUE).boxed().toArray(Double[]::new)));
	public void print(String section, List<Double> MOD_FIELDOFVIEW) {
		System.out.println();
		System.out.println(section);
		System.out.println("Immutable Array FIELDOFVIEW_DEFAULT_VALUE "+FIELDOFVIEW_DEFAULT_VALUE);
		System.out.println("Mutable Array MOD_FIELDOFVIEW"+MOD_FIELDOFVIEW);
		System.out.println("Compare mutable to immutable "+MOD_FIELDOFVIEW.equals(FIELDOFVIEW_DEFAULT_VALUE));
		System.out.println();
	}
	public NoModDoubleArray() {
		List<Double> MOD_FIELDOFVIEW = Arrays.asList(Arrays.stream(DOUBLE_ARRAY_FIELDOFVIEW_DEFAULT_VALUE).boxed().toArray(Double[]::new));
		print("Modify Pre Immutable Change", MOD_FIELDOFVIEW);
		try {
			System.out.println("Setting immutable index 0 to 2.0");
			FIELDOFVIEW_DEFAULT_VALUE.set(0, 2.0);
		} catch (UnsupportedOperationException ex) {
			ex.printStackTrace();
		}
		print("Modify Post Immutable Change", MOD_FIELDOFVIEW);

		System.out.println("setting base mutable index 1 to 3.0");
		DOUBLE_ARRAY_FIELDOFVIEW_DEFAULT_VALUE[1] = 3.0;
		print("Post modify Changing base mutable", MOD_FIELDOFVIEW);

		System.out.println("seting mutable index 2 to 4.0");
		MOD_FIELDOFVIEW.set(2, 4.0);
		print("Post modify non-final", MOD_FIELDOFVIEW);
	}
	public static void main(String[] args) {
		new NoModDoubleArray();
		System.out.println("---------------------------------------------");
		new NoModDoubleArray();
	}
}
