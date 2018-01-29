/*
Copyright (c) 1995-2018 held by the author(s).  All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions
are met:

    * Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above copyright
      notice, this list of conditions and the following disclaimer
      in the documentation and/or other materials provided with the
      distribution.
    * Neither the name of the Web3D Consortium (http://www.web3D.org)
      nor the names of its contributors may be used to endorse or
      promote products derived from this software without specific
      prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
"AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
POSSIBILITY OF SUCH DAMAGE.
*/

package org.web3d.x3d.jsail.fields;

import org.web3d.x3d.jsail.*;
import org.web3d.x3d.jsail.Core.*;
import java.util.Arrays;
import org.web3d.x3d.sai.InvalidFieldValueException;
import java.awt.image.RenderedImage;
import java.awt.image.WritableRenderedImage;

/**
 * This utility class provides a concrete implementation corresponding to MFImage X3D field type.
 * 
 * <br><br>
 * MFImage is an array of SFImage values.
<br><br>
Related field object: {@link SFImageObject}
 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#MFImage">X3D Tooltips: type MFImage</a>

 * 

 * <br>
 * <i>Package hint:</i>  This specification class is defined by the X3D Java Language Binding Specification for the Scene Authoring Interface (SAI).
 *
 * @author Don Brutzman and Roy Walmsley
 * @see <a href="http://www.web3d.org/documents/specifications/19777-2/V3.0/Part2/abstracts.html#X3DFieldTypes" target="_blank">SAI Java Specification: B.4.11 X3DFieldTypes</a>
 * @see <a href="http://www.web3d.org/documents/specifications/19775-2/V3.3/Part02/dataRef.html#SAIFieldType" target="blank">SAI Abstract Specification: 5.2.15 SAIFieldType</a>
 * @see <a href="http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/fieldsDef.html#SFImageAndMFImage" target="blank">X3D Abstract Specification: SFImageAndMFImage</a>

 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html" target="_blank">X3D Tooltips</a>
 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#field"      target="_blank">X3D Tooltips: field</a>
 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#fieldValue" target="_blank">X3D Tooltips: fieldValue</a>
 * @see <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>
 */
public class MFImageObject extends X3DConcreteField implements org.web3d.x3d.sai.MFImage
{
	/** String constant <i>NAME</i> provides name of this element: <i>MFImage</i> */
	public static final String NAME = "MFImage";

	/** Default value for this field type is an empty array.
	 * @see <a href="https://docs.oracle.com/javase/tutorial/java/nutsandbolts/datatypes.html" target="_blank">Java Tutorials: Primitive Data Types</a>
     */
	public static final int[] DEFAULT_VALUE = new int[0]; // initialize as empty array

	// Member value declaration is encapsulated and private, using preferred Java types for concretes library
	private int[] MFImage = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy

	/**
	 * Constructor for MFImageObject performs value initialization.
	 */
	public MFImageObject ()
	{
		initialize();
	}

	/**
	 * Initialization for MFImageObject applies default initial value.
	 */
	@Override
	public void initialize()
	{
		MFImage = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy
	}

	/**
	 * Utility accessor for MFImageObject using String value (which must pass parsing validation checks).
	 * <br ><br >
	 * <i>Warning:</i> this method is not 
	 * <i><a href="https://en.wikipedia.org/wiki/Type_safety" target="_blank">type safe</a></i>
	 * at compile time!  Best practice for X3DJSAIL programmers is to use strongly typed methods instead, in order to avoid potential for run-time errors.
	 * @see X3DLoaderObject#toX3dObjectTree(org.w3c.dom.Node)
	 * @param newValue is new value to assign, if empty then assign DEFAULT_VALUE
	 * @return {@link MFMatrix4dObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive
method invocations on the same node object).
	 */
	public MFImageObject setValueByString (String newValue) throws InvalidFieldValueException
	{
		if (newValue == null)
			newValue = new String(); // Principle of Least Astonishment (POLA)
			// https://en.wikipedia.org/wiki/Principle_of_least_astonishment
		if (newValue.trim().isEmpty())
		{
			MFImage = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy
			return this;
		}
		try
		{
			String[] newValues = newValue.trim().split("\\s+");
			MFImage = new int[newValues.length];  // reset array size to match
			for (int i = 0; i < newValues.length;i++)
			{
				MFImage[i] = Integer.parseInt(newValues[i]); // insert in array
			}
		}
		catch (NumberFormatException e)
		{
			String errorNotice = "new MFImageObject(" + newValue + ") " + e.getMessage();
			validationResult.append(errorNotice).append("\n");
			throw new InvalidFieldValueException (errorNotice);
		}
		return this;
	}

	/**
	 * Constructor to copy an MFImageObject value as initial value for this new field object.
	 * @param newValue The newValue to apply
	 */
	public MFImageObject(MFImageObject newValue)
	{
		if (newValue == null)
		{
			MFImage = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy
			return;
		}
		MFImage = newValue.getPrimitiveValue();
	}

	/**
	 * Constructor for MFImageObject using a corresponding Java primitive int[] array as new initial value.
	 * @param newValue is new value to assign
	 * setContainerFieldOverride(containerFieldName); // apply checksConcreteField#getTupleSize(String)
	 */
	public MFImageObject (int[] newValue)
	{
		if (newValue == null)
			newValue = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy
		MFImage = newValue;
	}

	/**
	 * Static utility method to provide String representation of a correctly typed input value.
	 * @param value The value to convert to a String
	 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#type">X3D Tooltips: type</a>
	 * @return String version of the provided value
	 */
	public static String toString (int[] value)
	{
		StringBuilder result = new StringBuilder();
		for (int i=0; i < value.length; i++)
		{
			result.append(value[i]).append(" ");
		}
		return result.toString().trim();
	}

	/**
	 * Provides current value of the field as a Java primitive type.
	 * @return current value
	 */
	public int[] getPrimitiveValue()
	{
		return MFImage;
	}
	/**
	 * Provides current value as a String.
	 * @see <a href="http://www.web3d.org/x3d/tooltips/X3dTooltips.html#MFImage">X3D Tooltips: type MFImage</a>
	 * @return String version of the provided value
	 */
	@Override
	public String toString()
	{
		return "TODO"; // unimplemented type toString()
	}
    /**
     * Get the width of the image array.
     * @param imageIndex the index of the selected image
     * @return The width of the image in pixels
     */
	@Override
	public int getWidth(int imageIndex)
	{
		return 0; // TODO access correct image, return value
	}

    /**
     * Get the height of the image array.
     * @param imageIndex the index of the selected image
     * @return The height of the image in pixels
     */
	@Override
	public int getHeight(int imageIndex)
	{
		return 0; // TODO access correct image, return value
	}

    /**
     * Get the number of color components in the image. The value will
     * always be between 1 and 4 indicating the number of components of
     * the color specification to be read from the image pixel data.
     * @param imageIndex the index of the selected image
     * @return The number of components
     */
	@Override
	public int getComponents(int imageIndex)
	{
		return 0; // TODO access correct image, return value
	}

    /**
     * Get the image pixel value in the given eventOut.
     * <p>
     * The number of items in the pixels array will be
     * <code>width * height</code>. If there are less items than this an
     * ArrayIndexOutOfBoundsException will be generated. The integer values
     * are represented according to the number of components.
     * <p>
     *  <b>1 Component Images </b> <br>
     * The integer has the intensity value stored in the lowest byte and can be
     * obtained:
     *  <pre>
     *    intensity = (pixel[i]     ) &amp;0xFF;
     *  </pre>
     * <p>
     *  <b>2 Component Images </b> <br>
     * The integer has the transparency value stored in the lowest byte and the
     * intensity in the next byte:
     *  <pre>
     *    intensity = (pixel[i] &gt;&gt; 8) &amp;0xFF;
     *    alpha     = (pixel[i]     ) &amp;0xFF;
     *  </pre>
     * <p>
     *  <b>3 Component Images </b> <br>
     * The three color components are stored in the integer array as follows:
     *  <pre>
     *    red   = (pixel[i] &gt;&gt; 16) &amp;0xFF;
     *    green = (pixel[i] &gt;&gt;  8) &amp;0xFF;
     *    blue  = (pixel[i]      ) &amp;0xFF;
     *  </pre>
     * <p>
     *  <b>4 Component Images </b> <br>
     * The integer has the value stored in the array as follows:
     *  <pre>
     *    red   = (pixel[i] &gt;&gt; 24) &amp;0xFF;
     *    green = (pixel[i] &gt;&gt; 16) &amp;0xFF;
     *    blue  = (pixel[i] &gt;&gt;  8) &amp;0xFF;
     *    alpha = (pixel[i]      ) &amp;0xFF;
     *  </pre>
     * <p>
     * The width and height values must be greater than or equal to zero. The
     * number of components is between 1 and 4. Any value outside of these
     * bounds will generate an IllegalArgumentException.
     * @param imageIndex the index of the selected image
     * @param pixels The array to copy pixel values into
     */
	@Override
	public void getPixels(int imageIndex, int[] pixels)
	{
		// TODO
	}

    /**
     * Fetch the Java representation of the underlying image from these pixels.
     * This is the same copy that the browser uses to generate texture
     * information from.
     * @param imageIndex the index of the selected image
     * @return The image reference representing the current state
     */
	@Override
	public WritableRenderedImage getImage(int imageIndex)
	{
		return null; // TODO
	}

    /**
     * Set the image value in the given writable field to the new image defined
     * by a set of pixels.
     * @param imageIndex the index of the selected image
     * @param image The new image to use as the source
     */
	@Override
	public void setImage(int imageIndex, RenderedImage image)
	{
		// TODO
	}

    /**
	 * Copy a region of the argument RenderedImage to replace a portion of the
	 * current SFimage.
	 * <p>
	 * The sub image set shall not resize the base image representation and
	 * therefore performs an intersection clip of the provided image. The user
	 * provided image shall be of the same format (pixel depth, pixel
	 * representation) as the original image obtained through the getImage()
	 * method.
	 * <p>
	 * RenderedImages are row order from top to bottom. A
	 * 4x8 RenderImage is indexed as follows:
	 *
	 *  <pre>
	 *
	 * X &gt;01234567
	 *   ----------
	 * 0 |********|
	 * 1 |********|
	 * 2 |********|
	 * 3 |********|
	 * ^ ----------
	 * Y
	 *
	 *  </pre>
	 *
	 * SFImages are row order from bottom to top. A
	 * 4x8 RenderImage is indexed as follows:
	 *
	 *  <pre>
	 *
	 * X &gt;01234567
	 *   ----------
	 * 3 |********|
	 * 2 |********|
	 * 1 |********|
	 * 0 |********|
	 * ^ ----------
	 * Y
	 *
	 *  </pre>
	 *
	 * <p>
	 * Note: The parameter srcYOffset is referenced to the RenderedImage object
	 * (indexed top to bottom).
	 * <br>
	 * The parameter destYOffset is referenced to the SFImage object
	 * (indexed bottom to top).
	 *
	 * @param imageIndex the index of the selected image
	 * @param image The new image to use as the source
	 * @param sourceWidth The width of the argument sub-image region to copy
	 * @param sourceHeight The height of the argument sub-image region to copy
	 * @param sourceXOffset The initial x dimension (width) offset into the
	 * argument sub-image that begins the region to copy
	 * @param sourceYOffset The initial y dimension (height) offset into the
	 * argument sub-image that begins the region to copy
	 * @param destinationXOffset The initial x dimension (width) offset in the SFimage
	 * object that begins the region to receive the copy
	 * @param destinationYOffset The initial y dimension (height) offset in the SFimage
	 * object that begins the region to receive the copy
	 */
	@Override
	public void setSubImage(int imageIndex,
		RenderedImage image,
		int sourceWidth,
		int sourceHeight,
		int sourceXOffset,
		int sourceYOffset,
		int destinationXOffset,
		int destinationYOffset)
	{
		// TODO
	}

    /**
     * Replace a single value at the appropriate location in the existing value array.
	 * Size of the current underlying value array does not change.
     * @param imageIndex the index of the selected image
     * @param newValue provides new value to apply
     */
	@Override
	public void set1Value(int imageIndex, int newValue)
	{
		// TODO
	}

	@Override
	public void set1Value(int imageIndex,
		int width,
		int height,
		int components,
		int[] pixels)
	{
		// TODO
	}

    /**
     * Assign a new value array containing imageIndex, width, height, and components count, followed by array of pixels.
     * @param newValue The newValue to set
     */	
	@Override
	public void setValue(int[] newValue)
	{
		if (newValue == null)
			throw new org.web3d.x3d.sai.InvalidFieldValueException("Object newValue is null and cannot be set"); // fieldTest

		// TODO
	}

	@Override
	public void setImage(RenderedImage[] image)
	{
		// TODO
	}

    /**
     * Places a new SFImage value at the end of the existing value array, increasing the field length accordingly.
     * @param newValue The newValue to append
     */
	@Override
	public void append(RenderedImage[] newValue)
	{
		if (newValue == null)
			throw new org.web3d.x3d.sai.InvalidFieldValueException("Object newValue is null and cannot be set"); // fieldTest

		// TODO
	}

    /**
     * Insert a new value prior to the index location in the existing value array, increasing the field length accordingly.
     * @param index The position for the inserted value in the current array
     * @param newValue The newValue to insert
     */
	@Override
	public void insertValue(int index, RenderedImage newValue)
	{
		if (index < 0)
		{
			String errorNotice = "Index value is negative, thus cannot insertValue at index=" + index + ".";
			validationResult.append(errorNotice).append("\n");
			throw new ArrayIndexOutOfBoundsException(errorNotice);
		}
		if (newValue == null)
			throw new org.web3d.x3d.sai.InvalidFieldValueException("Object newValue is null and cannot be set"); // fieldTest

		// TODO
	}
	/**
	 * Remove one SFImage element of the field array at index position, if found.  Initial element is at index 0.
	 * @param index position of element in field array that gets removed
	 */
	@Override
	public void remove (int index)
	{
		if (index < 0)
		{
			String errorNotice = "Index value is negative, thus cannot remove value at index=" + index + ".";
			validationResult.append(errorNotice).append("\n");
			throw new ArrayIndexOutOfBoundsException(errorNotice);
		}
		// TODO compute offset factor
		if (index >= MFImage.length)
		{
			String errorNotice = "Provided array index=" + index + " must be less than MFImage array length=" + MFImage.length;
			validationResult.append(errorNotice).append("\n");
			throw new IllegalArgumentException(errorNotice);
		}
		// TODO remove (int index)
	}
	/**
	 * Removes all values in the field array, changing the array size to zero.
	 */
	@Override
	public void clear()
	{
		MFImage = new int[0];
	}
	/**
	 * Get the size of the underlying data array. The size is the number of
	 * elements for that data type. So for an MFFloat the size would be the
	 * number of float values, but for an MFVec3f, it is the number of vectors
	 * in the returned array (where a vector is 3 consecutive array indexes in
	 * a flat array).
	 *
	 * @return The number of elements in this field array.
	 */
	@Override
	public int size()
	{
		return MFImage.length;
	}

	/**
	 * Apply an MFImageObject value to this field.
	 * @param newValue The newValue to apply
	 * @return {@link MFImageObject} - namely <i>this</i> same object to allow sequential method pipelining (i.e. consecutive method invocations on the same node object).
	 */
	public MFImageObject setValue(MFImageObject newValue)
	{
		if (newValue == null)
		{
			MFImage = java.util.Arrays.copyOf(DEFAULT_VALUE, DEFAULT_VALUE.length); // must be separate copy
			return this;
		}
		MFImage = newValue.getPrimitiveValue();
		return this;
	}								
}
