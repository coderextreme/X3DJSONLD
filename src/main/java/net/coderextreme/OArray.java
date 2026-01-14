package net.coderextreme;

import java.util.ArrayList;
import java.util.List;
import java.util.Arrays;
import java.util.Collections;

public class OArray {
	/*
	public static final ArrayList<Float> FIELDOFVIEW_DEFAULT_VALUE = new ArrayList<>(Arrays.asList(-1f,-1f,1f,1f));
	public static final float[] ARRAY_FIELDOFVIEW_DEFAULT_VALUE = new float [] {-1f,-1f,1f,1f};
	*/
	public static final double[] DOUBLE_ARRAY_FIELDOFVIEW_DEFAULT_VALUE = new double [] {-1f,-1f,1f,1f};
	public final List<Double> NOMOD_FIELDOFVIEW_DEFAULT_VALUE;
	public OArray() {
		NOMOD_FIELDOFVIEW_DEFAULT_VALUE = Collections.unmodifiableList(Arrays.asList(Arrays.stream(DOUBLE_ARRAY_FIELDOFVIEW_DEFAULT_VALUE).boxed().toArray(Double[]::new)));
		System.out.println("No modifications");
		System.out.println(NOMOD_FIELDOFVIEW_DEFAULT_VALUE);
		NOMOD_FIELDOFVIEW_DEFAULT_VALUE.set(0, 0.0);
		System.out.println(NOMOD_FIELDOFVIEW_DEFAULT_VALUE);
	}
	public static void main(String[] args) {
		/*
		System.out.println(FIELDOFVIEW_DEFAULT_VALUE);
		FIELDOFVIEW_DEFAULT_VALUE.set(0, 0f);
		FIELDOFVIEW_DEFAULT_VALUE.set(1, 0f);
		FIELDOFVIEW_DEFAULT_VALUE.set(2, 20f);
		FIELDOFVIEW_DEFAULT_VALUE.set(3, 20f);
		System.out.println(FIELDOFVIEW_DEFAULT_VALUE);
		System.out.print(
				ARRAY_FIELDOFVIEW_DEFAULT_VALUE[0]+" "+
				ARRAY_FIELDOFVIEW_DEFAULT_VALUE[1]+" "+
				ARRAY_FIELDOFVIEW_DEFAULT_VALUE[2]+" "+
				ARRAY_FIELDOFVIEW_DEFAULT_VALUE[3]);
		System.out.println("");
		ARRAY_FIELDOFVIEW_DEFAULT_VALUE[0] = 0f;
		ARRAY_FIELDOFVIEW_DEFAULT_VALUE[1] = 0f;
		ARRAY_FIELDOFVIEW_DEFAULT_VALUE[2] = 20f;
		ARRAY_FIELDOFVIEW_DEFAULT_VALUE[3] = 20f;
		System.out.print(
				ARRAY_FIELDOFVIEW_DEFAULT_VALUE[0]+" "+
				ARRAY_FIELDOFVIEW_DEFAULT_VALUE[1]+" "+
				ARRAY_FIELDOFVIEW_DEFAULT_VALUE[2]+" "+
				ARRAY_FIELDOFVIEW_DEFAULT_VALUE[3]);
		System.out.println("");
		*/
		new OArray();
	}
}
