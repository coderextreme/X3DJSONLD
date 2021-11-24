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
 <p> Related links: <a href="../../../ExperimentalBinaryCompression/EightCompressed.java">EightCompressed.java</a> source, <a href="../../../ExperimentalBinaryCompression/EightCompressedIndex.html" target="_top">EightCompressed catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../ExperimentalBinaryCompression/EightCompressed.x3d">EightCompressed.x3d</a> </td>
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
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../ExperimentalBinaryCompression/Eight.png">Eight.png</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> subject </i> </td>
			<td> X3D VRML binary compression </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/ExperimentalBinaryCompression/EightCompressed.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/ExperimentalBinaryCompression/EightCompressed.x3d</a> </td>
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

public class EightCompressed
{
	/** Default constructor to create this object. */
	public EightCompressed ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_0)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("EightCompressed.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Compressed IndexedFaceSet example."))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Martin Isenburg"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATOR ).setContent("Don Brutzman"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("4 May 2003"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATED ).setContent("5 May 2003"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_IMAGE      ).setContent("Eight.png"))
    .addMeta(new meta().setName(meta.NAME_SUBJECT    ).setContent("X3D VRML binary compression"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/ExperimentalBinaryCompression/EightCompressed.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("EightCompressed.x3d"))
    .addChild(new ExternProtoDeclare("CompressedIndexedFaceSet").setName("CompressedIndexedFaceSet").setAppinfo("An ASCII-compressed IndexedFaceSet").setUrl(new String[] {"CodedCompressedPrototypes.x3d#CompressedIndexedFaceSet","https://www.web3d.org/x3d/content/examples/Basic/ExperimentalBinaryCompression/CodedCompressedPrototypes.x3d#CompressedIndexedFaceSet","CodedCompressedPrototypes.wrl#CompressedIndexedFaceSet","https://www.web3d.org/x3d/content/examples/Basic/ExperimentalBinaryCompression/CodedCompressedPrototypes.wrl#CompressedIndexedFaceSet"})
      .addField(new field().setName("code").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("ASCII-compressed coordIndex and texCoordIndex values"))
      .addField(new field().setName("box_tex").setType(field.TYPE_MFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("bounding box of texture coordinates (always 4 values minU minV maxU maxV)"))
      .addField(new field().setName("bits_tex").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("number of quantization bits for texture coordinates"))
      .addField(new field().setName("box").setType(field.TYPE_MFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("bounding box of coordinates (always 6 values minX minY minZ maxX maxY maxZ)"))
      .addField(new field().setName("bits").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("number of quantization bits for coordinates")))
    .addChild(new Viewpoint().setDescription("1M view from above").setOrientation(1.0,0.0,0.0,-1.5707999).setPosition(0.0,1.0,0.0))
    .addChild(new Viewpoint().setDescription("1M view from side").setPosition(0.0,0.0,1.0))
    .addChild(new Background().setGroundColor(new MFColor(new double[] {0.05,0.1,0.3})).setSkyColor(new MFColor(new double[] {0.05,0.1,0.3})))
    .addChild(new Transform().setScale(0.25,0.25,0.25)
      .addChild(new Shape()
        .setAppearance(new Appearance()
          .setMaterial(new Material().setDiffuseColor(1.0,0.5,0.5)))
        .setGeometry(new ProtoInstance("CompressedIndexedFaceSet").setContainerField("geometry")
          .addFieldValue(new fieldValue().setName("code").setValue("Ci/47sFjgNbpisdVZrziRcuVDeiO8Sw2W4Vp51Fui86lArDqa/8gAcnZf3BKPp1HqVJfe6SiuEuiCFO2h1ep6bhw1Lt7h3HgETmD4wEYsIkUzdQb1oHq1Vs2vj/BQ+2+Yor7hxu+AE17Hl9Xg5XCcRYOURw8fC9yDj20q3suaq2SeSXhWTC8R10Wc3GHnRrP7IH5pl9WxOxMaTeqlWeQvkcT1X0UX6IODFXQVkVGx1dmpSp78EHbghTORPgzcT5WHe3Rh0y6+h+NFxc/25QwcuDyOP3KmO8PIfnkIPX6v6reGu7eemGPA5eIjD7oQM+pLAwTE5iJjMNrbIt5cYePkRanASAQueY5YUEjMcC2VaBHcjeq1zpVBE9APrCxfWmWqQxSb2fzEyrVVleG+7ndEQjo+i3P+rfZCkPoXY1pvOyrRuVuQqlN3mmNaMsfDFCHlQqCxZT88Bi8qBc8r6KchvT3T3DNlxfhA3MrmHeLmuaeDF/Ib5FbM/luJQ7Xq96msydDL+GNa25qySzEsAOuKp6HqXyzXP5+lq6My/rMnSbUKE0QowmN13dqoBNFXJWzvNkgYIMdUgdRCxzbQFCwLBBVUV2UoeUpdVX65EtAwIl5fIiYi4iR4mofN0moYjDXLWzsZ73FsUoGvnw7F1qhtC1ra2NIYEY3AbLHU0xkvwOjYL8khiF3mZDa+qEmwcgsHHqn/2kZXYDlG7vpHEE9XIRujGJP1QFJ7wN8JTcWPBe+u3cSJMD+JSO/0VK1GRlfknykUnYePs1W1UeVIs44otf2RlwjHW3szTvufY5h+4MW1bAOfO3IC56YVJTqQ/iwUhktX0E6xo0/KNju7aLdcTsqPOIDj3rDv7IHBHtYocR3kqTslEIHrXOQdBc0tDIJROGZVgg8aoAru4H24W+UxJOeLfRJohCKMKyDN0STrLcrBvWrqrHrG0R9BM+kCp1Q0XUM6V/FZfGZKdNp/+xkSQhvIpX0Nc72WGWmC7sxtVSENGRbFKsuqrPKEuazBeEAtmBogRGFeVmMuzky+mMnFte6uQ4O9mwnyM8Uwucpdpktk2KD5uwCskK3srdQuIMdVxtOZhMuPS1cAmUH9A1dkND+DhUuWlKjxpQNMOUjf/vrl0MorO0X+quolItMW9setQi1DB7wuCSee6aTraq4inlxbU4uB0VTha3aAOhb3Tvz9m/C6EejBUWaPSSd/Xb7iynDPAZcpcttpQ95cR5J9ygBzy9BOS3bvg7wx/lATIruZSAmnHUD25gx90FjnT5FhiKau/acVX8W6WJ5cQcKWr+WlmBuUkQde/ASC3+MNpaAF69D2JUeEodwJphJZJVkJlCuBoKN1gS/JC3U+N69uNam8Nb+T3CRrl3bM1bM/bjCX7cx7FVdJ/MsEFJ2pAtbxuOV4eQ4W6wWieesrWhs2tgccpf77CDIrB7s8eCTo0bytEO+D9kukrjdEfJg49kKmmEK9KzVrFT8YsXj+8cKrSz0lzIisYi3cGPRWcZMOiRK8JMrKUwbftyoZKUmsPnuVmOHbR1XimbYh4o7vw9Zb9tx1/EWioU4G6lkULZckIW63d8hG0pWosdpjju3DTHcXEJpVWhX0TnxdEH+EISft84vxtCJE4VPi+L1+IOzNZdzh1Om6qyEt5PCSU1esWiaX9HRxRryw103Te4TWMa7YcwCBPszhsX//QNXuoctSAIX+VGLaCCPt2yyZpZmSgZmugxOZoYFUiJwDB/okCBKuRKbqRMtfIO2FMQUVRoDeK1LXTcrD4/9pkKRVqljxb7zD5B4JJ+vvWxtZiH2SNcxM5fU04BSL4p0UjG+CQbISN4hKw6LBfMPY9VqPi8u"))
          .addFieldValue(new fieldValue().setName("box").setValue(new double[] {-0.6223,-0.2668,-1.281,0.6223,0.2663,1.281}))
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
	 * @return EightCompressed model
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
        X3D thisExampleX3dModel = new EightCompressed().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.EightCompressed\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.EightCompressed\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}
