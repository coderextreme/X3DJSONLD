package net.coderextreme;

import java.util.ArrayList;
import java.util.List;
import java.util.Arrays;
import java.util.Collections;

public class NoModDoubleArray {
	private static final double[] DOUBLE_ARRAY_FIELDOFVIEW_DEFAULT_VALUE = new double [] {-1f,-1f,1f,1f};
	public static final List<Double> NOMOD_FIELDOFVIEW_DEFAULT_VALUE = Collections.unmodifiableList(Arrays.asList(Arrays.stream(DOUBLE_ARRAY_FIELDOFVIEW_DEFAULT_VALUE).boxed().toArray(Double[]::new)));
	public NoModDoubleArray() {
		List<Double> MOD_FIELDOFVIEW = Arrays.asList(Arrays.stream(DOUBLE_ARRAY_FIELDOFVIEW_DEFAULT_VALUE).boxed().toArray(Double[]::new));
		System.out.println("Immutable Array "+NOMOD_FIELDOFVIEW_DEFAULT_VALUE);
		System.out.println("Mutable Array "+MOD_FIELDOFVIEW);
		try {
			System.out.println("Setting immutable index 0 to 0.0");
			NOMOD_FIELDOFVIEW_DEFAULT_VALUE.set(0, 0.0);
		} catch (UnsupportedOperationException ex) {
			ex.printStackTrace();
		}
		System.out.println("Immutable Array "+NOMOD_FIELDOFVIEW_DEFAULT_VALUE);
		System.out.println("Mutable Array "+MOD_FIELDOFVIEW);

		System.out.println();
		System.out.println("Setting double array index 0 to 0.0");
		DOUBLE_ARRAY_FIELDOFVIEW_DEFAULT_VALUE[0] = 0.0;
		System.out.println("Immutable Array "+NOMOD_FIELDOFVIEW_DEFAULT_VALUE);
		System.out.println("Mutable Array "+MOD_FIELDOFVIEW);
		System.out.println("Compare mutable to immutable "+MOD_FIELDOFVIEW.equals(NOMOD_FIELDOFVIEW_DEFAULT_VALUE));

		System.out.println();
		System.out.println("Setting mutable index 1 to 0.0");
		MOD_FIELDOFVIEW.set(1, 0.0);
		System.out.println("Immutable Array "+NOMOD_FIELDOFVIEW_DEFAULT_VALUE);
		System.out.println("Mutable Array "+MOD_FIELDOFVIEW);
		System.out.println("Compare mutable to immutable "+MOD_FIELDOFVIEW.equals(NOMOD_FIELDOFVIEW_DEFAULT_VALUE));
	}
	public static void main(String[] args) {
		new NoModDoubleArray();
		System.out.println("---------------------------------------------");
		new NoModDoubleArray();
	}
}
