package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Shape.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> Compressed IndexedFaceSet example. </p>
 <p> Related links: <a href="../../../ExperimentalBinaryCompression/TeapotCompressed.java">TeapotCompressed.java</a> source, <a href="../../../ExperimentalBinaryCompression/TeapotCompressedIndex.html" target="_top">TeapotCompressed catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../ExperimentalBinaryCompression/TeapotCompressed.x3d">TeapotCompressed.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Compressed IndexedFaceSet example. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Martin Isenburg </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translator </i> </td>
			<td> Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 4 May 2003 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translated </i> </td>
			<td> 5 May 2003 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> subject </i> </td>
			<td> X3D VRML binary compression </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/ExperimentalBinaryCompression/TeapotCompressed.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/ExperimentalBinaryCompression/TeapotCompressed.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> Vrml97ToX3dNist, <a href="http://ovrt.nist.gov/v2_x3d.html" target="_blank">http://ovrt.nist.gov/v2_x3d.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../ExperimentalBinaryCompression/../license.html">../license.html</a> </td>
		</tr>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center;" colspan="2">  &nbsp; </td>
		</tr>
	</table>

	<p>
		This program uses the
		<a href="https://www.web3d.org/specifications/java/X3DJSAIL.html" target="_blank">X3D Java Scene Access Interface Library (X3DJSAIL)</a>.
		It has been produced using the 
		<a href="https://www.web3d.org/x3d/stylesheets/X3dToJava.xslt" target="_blank">X3dToJava.xslt</a>
		stylesheet to create Java source code from an <code>.x3d</code> model.
	</p>

	* @author Martin Isenburg
 */

public class TeapotCompressed
{
	/** Default constructor to create this object. */
	public TeapotCompressed ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_0)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("TeapotCompressed.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Compressed IndexedFaceSet example."))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Martin Isenburg"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATOR ).setContent("Don Brutzman"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("4 May 2003"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATED ).setContent("5 May 2003"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_SUBJECT    ).setContent("X3D VRML binary compression"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/ExperimentalBinaryCompression/TeapotCompressed.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("TeapotCompressed.x3d"))
    .addChild(new ExternProtoDeclare("CompressedIndexedFaceSet").setName("CompressedIndexedFaceSet").setAppinfo("An ASCII-compressed IndexedFaceSet").setUrl(new String[] {"CodedCompressedPrototypes.x3d#CompressedIndexedFaceSet","https://www.web3d.org/x3d/content/examples/Basic/ExperimentalBinaryCompression/CodedCompressedPrototypes.x3d#CompressedIndexedFaceSet","CodedCompressedPrototypes.wrl#CompressedIndexedFaceSet","https://www.web3d.org/x3d/content/examples/Basic/ExperimentalBinaryCompression/CodedCompressedPrototypes.wrl#CompressedIndexedFaceSet"})
      .addField(new field().setName("code").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("ASCII-compressed coordIndex and texCoordIndex values"))
      .addField(new field().setName("box_tex").setType(field.TYPE_MFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("bounding box of texture coordinates (always 4 values minU minV maxU maxV)"))
      .addField(new field().setName("bits_tex").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("number of quantization bits for texture coordinates"))
      .addField(new field().setName("box").setType(field.TYPE_MFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("bounding box of coordinates (always 6 values minX minY minZ maxX maxY maxZ)"))
      .addField(new field().setName("bits").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("number of quantization bits for coordinates")))
    .addChild(new Viewpoint().setDescription("1M view").setPosition(0.0,0.0,1.0))
    .addChild(new Background().setGroundColor(new MFColor(new double[] {0.05,0.1,0.3})).setSkyColor(new MFColor(new double[] {0.05,0.1,0.3})))
    .addChild(new Transform().setRotation(1.0,0.0,0.0,-1.57).setScale(0.1,0.1,0.1)
      .addChild(new Shape()
        .setAppearance(new Appearance()
          .setMaterial(new Material().setDiffuseColor(1.0,1.0,0.0)))
        .setGeometry(new ProtoInstance("CompressedIndexedFaceSet").setContainerField("geometry")
          .addFieldValue(new fieldValue().setName("code").setValue("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"))
          .addFieldValue(new fieldValue().setName("box").setValue(new double[] {-2.95609,-2.01033,0.004061,3.45695,1.98978,3.03026}))
          .addFieldValue(new fieldValue().setName("bits").setValue(10))))));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return TeapotCompressed model
	 */
	public X3D getX3dModel()
	{	  
		return x3dModel;
	}
	   
    /** 
	 * Default main() method provided for test purposes, uses CommandLine to set global ConfigurationProperties for this object.
     * @param args array of input parameters, provided as arguments
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html#handleArguments-java.lang.String:A-">X3D.handleArguments(args)</a>
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html#validationReport--">X3D.validationReport()</a>
     * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/CommandLine.html">CommandLine</a>
     * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/CommandLine.html#USAGE">CommandLine.USAGE</a>
     * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/ConfigurationProperties.html">ConfigurationProperties</a>
     */
    public static void main(String args[])
    {
        X3D thisExampleX3dModel = new TeapotCompressed().getX3dModel();

		boolean hasArguments = (args != null) && (args.length > 0);
		boolean validate = true; // default
		boolean argumentsLoadNewModel = false;
		String  fileName = new String();

		if (args != null)
		{
			for (String arg : args)
			{
				if (arg.toLowerCase().startsWith("-v") || arg.toLowerCase().contains("validate"))
				{
					validate = true; // making sure
				}
				if (arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_X3D) ||
					arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_CLASSICVRML) ||
					arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_X3DB) ||
					arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_VRML97) ||
					arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_EXI) ||
					arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_GZIP) ||
					arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_ZIP) ||
					arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_HTML) ||
					arg.toLowerCase().endsWith(X3D.FILE_EXTENSION_XHTML))
				{
					argumentsLoadNewModel = true;
					fileName = arg;
				}
			}
		}
		if      (argumentsLoadNewModel)
			System.out.println("WARNING: \"net.x3djsonld.data.TeapotCompressed\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.TeapotCompressed\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}
