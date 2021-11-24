package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Networking.*;
import org.web3d.x3d.jsail.Scripting.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Text.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> Prototypes for CodedIndexedFaceSet decoding and CompressedIndexedFaceSet decompression, with links to example scenes. </p>
 <p> Related links: <a href="../../../ExperimentalBinaryCompression/CodedCompressedPrototypes.java">CodedCompressedPrototypes.java</a> source, <a href="../../../ExperimentalBinaryCompression/CodedCompressedPrototypesIndex.html" target="_top">CodedCompressedPrototypes catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../ExperimentalBinaryCompression/CodedCompressedPrototypes.x3d">CodedCompressedPrototypes.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Prototypes for CodedIndexedFaceSet decoding and CompressedIndexedFaceSet decompression, with links to example scenes. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Martin Isenburg </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translator </i> </td>
			<td> X3D-Edit VRML importer </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translator </i> </td>
			<td> Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 26 September 2002 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translated </i> </td>
			<td> 28 April 2003 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://www.cs.unc.edu/~isenburg/ac/models" target="_blank">http://www.cs.unc.edu/~isenburg/ac/models</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://www.cs.unc.edu/~isenburg/research/asciicoder" target="_blank">http://www.cs.unc.edu/~isenburg/research/asciicoder</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://www.cs.unc.edu/~isenburg/research/asciicoder/coder" target="_blank">http://www.cs.unc.edu/~isenburg/research/asciicoder/coder</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> Martin Isenburg, Jack Snoeyink Binary Compression Rates for ASCII Formats, accepted for Web3D'03, March 2003 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="../../../ExperimentalBinaryCompression/isenburg/is-bcraf-03.pdf">isenburg/is-bcraf-03.pdf</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://www.cs.unc.edu/~isenburg/research/papers/is-bcraf-03.pdf" target="_blank">http://www.cs.unc.edu/~isenburg/research/papers/is-bcraf-03.pdf</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> Martin Isenburg, Jack Snoeyink, Coding with ASCII: compact, yet text-based 3D content, Proceedings of the 1st International Symposium on 3D Data Processing, Visualization and Transmission'02 (Invited Paper), pages 609 - 616, June 2002. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="../../../ExperimentalBinaryCompression/isenburg/is-cwa-02.pdf">isenburg/is-cwa-02.pdf</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://www.cs.unc.edu/~isenburg/papers/is-cwa-02.pdf" target="_blank">http://www.cs.unc.edu/~isenburg/papers/is-cwa-02.pdf</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> Martin Isenburg, Jack Snoeyink Coding Polygon Meshes as Compressable ASCII, Proceedings of Web3D Symposium'02 (Best Paper), pages 1 - 10, February 2002 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="../../../ExperimentalBinaryCompression/isenburg/is-cpmca-02.pdf">isenburg/is-cpmca-02.pdf</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://www.cs.unc.edu/~isenburg/papers/is-cpmca-02.pdf" target="_blank">http://www.cs.unc.edu/~isenburg/papers/is-cpmca-02.pdf</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> subject </i> </td>
			<td> X3D VRML binary compression </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/ExperimentalBinaryCompression/CodedCompressedPrototypes.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/ExperimentalBinaryCompression/CodedCompressedPrototypes.x3d</a> </td>
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

public class CodedCompressedPrototypes
{
	/** Default constructor to create this object. */
	public CodedCompressedPrototypes ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_0)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("CodedCompressedPrototypes.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Prototypes for CodedIndexedFaceSet decoding and CompressedIndexedFaceSet decompression, with links to example scenes."))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Martin Isenburg"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATOR ).setContent("X3D-Edit VRML importer"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATOR ).setContent("Don Brutzman"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("26 September 2002"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATED ).setContent("28 April 2003"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://www.cs.unc.edu/~isenburg/ac/models"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://www.cs.unc.edu/~isenburg/research/asciicoder"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://www.cs.unc.edu/~isenburg/research/asciicoder/coder"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("Martin Isenburg, Jack Snoeyink Binary Compression Rates for ASCII Formats, accepted for Web3D'03, March 2003"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("isenburg/is-bcraf-03.pdf"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://www.cs.unc.edu/~isenburg/research/papers/is-bcraf-03.pdf"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("Martin Isenburg, Jack Snoeyink, Coding with ASCII: compact, yet text-based 3D content, Proceedings of the 1st International Symposium on 3D Data Processing, Visualization and Transmission'02 (Invited Paper), pages 609 - 616, June 2002."))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("isenburg/is-cwa-02.pdf"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://www.cs.unc.edu/~isenburg/papers/is-cwa-02.pdf"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("Martin Isenburg, Jack Snoeyink Coding Polygon Meshes as Compressable ASCII, Proceedings of Web3D Symposium'02 (Best Paper), pages 1 - 10, February 2002"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("isenburg/is-cpmca-02.pdf"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://www.cs.unc.edu/~isenburg/papers/is-cpmca-02.pdf"))
    .addMeta(new meta().setName(meta.NAME_SUBJECT    ).setContent("X3D VRML binary compression"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/ExperimentalBinaryCompression/CodedCompressedPrototypes.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addComments(" ==================== ")
    .addChild(new WorldInfo().setTitle("CodedCompressedPrototypes.x3d"))
    .addChild(new ProtoDeclare("CodedIndexedFaceSet").setName("CodedIndexedFaceSet").setAppinfo("An ASCII-coded IndexedFaceSet")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("code").setType(field.TYPE_MFINT32).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new int[] {0}).setAppinfo("ASCII-coded coordIndex and texCoordIndex values"))
        .addField(new field().setName("pos").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(0.0).setAppinfo("dequantization multiplier for Coordinate values"))
        .addField(new field().setName("tex").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(0.0).setAppinfo("dequantization multiplier for TextureCoordinate values"))
        .addField(new field().setName("coord").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Coordinate node")
          .addComments(" not initialized by default "))
        .addField(new field().setName("texCoord").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("TextureCoordinate node")
          .addComments(" not initialized by default ")))
      .setProtoBody(new ProtoBody()
        .addChild(new IndexedFaceSet("DecodedIFS").setDEF("DecodedIFS")
          .setIS(new IS()
            .addConnect(new connect().setNodeField("coord").setProtoField("coord"))
            .addConnect(new connect().setNodeField("texCoord").setProtoField("texCoord"))))
        .addComments(" Warning: VRML97-style scripting, not X3D Scene Authoring Interface (SAI) ")
        .addChild(new Script("DecoderScript").setDirectOutput(true).setUrl(new String[] {"isenburg/Vrml97Scripts/CodedIndexedFaceSet.class","https://www.web3d.org/x3d/content/examples/Basic/ExperimentalBinaryCompression/isenburg/Vrml97Scripts/CodedIndexedFaceSet.class"})
          .addField(new field().setName("code").setType(field.TYPE_MFINT32).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
          .addField(new field().setName("pos").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
          .addField(new field().setName("tex").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
          .addField(new field().setName("IFS").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
            .addChild(new IndexedFaceSet().setUSE("DecodedIFS")))
          .setIS(new IS()
            .addConnect(new connect().setNodeField("code").setProtoField("code"))
            .addConnect(new connect().setNodeField("pos").setProtoField("pos"))
            .addConnect(new connect().setNodeField("tex").setProtoField("tex"))))))
    .addComments(" ==================== ")
    .addChild(new ProtoDeclare("CompressedIndexedFaceSet").setName("CompressedIndexedFaceSet").setAppinfo("An ASCII-compressed IndexedFaceSet")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("code").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("ASCII-compressed coordIndex and texCoordIndex values"))
        .addField(new field().setName("box_tex").setType(field.TYPE_MFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new double[] {0.0,0.0,1.0,1.0}).setAppinfo("bounding box of texture coordinates (always 4 values minU minV maxU maxV)"))
        .addField(new field().setName("bits_tex").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(0).setAppinfo("number of quantization bits for texture coordinates"))
        .addField(new field().setName("box").setType(field.TYPE_MFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new double[] {0.0,0.0,0.0,1.0,1.0,1.0}).setAppinfo("bounding box of coordinates (always 6 values minX minY minZ maxX maxY maxZ)"))
        .addField(new field().setName("bits").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(0).setAppinfo("number of quantization bits for coordinates")))
      .setProtoBody(new ProtoBody()
        .addChild(new IndexedFaceSet("DecompressedIFS").setDEF("DecompressedIFS"))
        .addComments(" Warning: VRML97-style scripting, not X3D Scene Authoring Interface (SAI) ")
        .addChild(new Script("DecompressionScript").setDirectOutput(true).setUrl(new String[] {"isenburg/Vrml97Scripts/CompressedIndexedFaceSet.class","https://www.web3d.org/x3d/content/examples/Basic/ExperimentalBinaryCompression/isenburg/Vrml97Scripts/CompressedIndexedFaceSet.class"})
          .addField(new field().setName("code").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
          .addField(new field().setName("box_tex").setType(field.TYPE_MFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
          .addField(new field().setName("bits_tex").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
          .addField(new field().setName("box").setType(field.TYPE_MFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
          .addField(new field().setName("bits").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
          .addField(new field().setName("IFS").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
            .addChild(new IndexedFaceSet().setUSE("DecompressedIFS")))
          .setIS(new IS()
            .addConnect(new connect().setNodeField("code").setProtoField("code"))
            .addConnect(new connect().setNodeField("box_tex").setProtoField("box_tex"))
            .addConnect(new connect().setNodeField("bits_tex").setProtoField("bits_tex"))
            .addConnect(new connect().setNodeField("box").setProtoField("box"))
            .addConnect(new connect().setNodeField("bits").setProtoField("bits"))))))
    .addComments(" ==================== ")
    .addChild(new Viewpoint().setDescription("Select an example scene").setPosition(0.0,0.0,12.0))
    .addChild(new Background().setGroundColor(new MFColor(new double[] {0.05,0.1,0.3})).setSkyColor(new MFColor(new double[] {0.05,0.1,0.3})))
    .addChild(new Transform().setTranslation(7.0,0.0,0.0)
      .addChild(new Transform().setTranslation(0.0,3.0,0.0)
        .addChild(new Anchor().setDescription("Click for IndexedFaceSet example").setUrl(new String[] {"Fish.x3d","https://www.web3d.org/x3d/content/examples/Basic/ExperimentalBinaryCompression/Fish.x3d","Fish.wrl","https://www.web3d.org/x3d/content/examples/Basic/ExperimentalBinaryCompression/Fish.wrl"})
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(0.6,0.6,0.2)))
            .setGeometry(new Text().setLength(new double[] {0.0}).setString(new String[] {"Fish IndexedFaceSet 442 KB"})
              .setFontStyle(new FontStyle("TextFont").setJustify(FontStyle.JUSTIFY_END_MIDDLE).setSize(1.25).setCssStyle("BOLD"))))))
      .addChild(new Transform()
        .addChild(new Anchor().setDescription("Click for CodedIndexedFaceSet example").setUrl(new String[] {"FishCoded.x3d","https://www.web3d.org/x3d/content/examples/Basic/ExperimentalBinaryCompression/FishCoded.x3d","FishCoded.wrl","https://www.web3d.org/x3d/content/examples/Basic/ExperimentalBinaryCompression/FishCoded.wrl"})
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(0.6,0.6,0.2)))
            .setGeometry(new Text().setLength(new double[] {0.0}).setString(new String[] {"FishCoded 96 KB"})
              .setFontStyle(new FontStyle().setUSE("TextFont"))))))
      .addChild(new Transform().setTranslation(0.0,-3.0,0.0)
        .addChild(new Anchor().setDescription("Click for CompressedIndexedFaceSet example").setUrl(new String[] {"FishCompressed.x3d","https://www.web3d.org/x3d/content/examples/Basic/ExperimentalBinaryCompression/FishCompressed.x3d","FishCompressed.wrl","https://www.web3d.org/x3d/content/examples/Basic/ExperimentalBinaryCompression/FishCompressed.wrl"})
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(0.6,0.6,0.2)))
            .setGeometry(new Text().setLength(new double[] {0.0}).setString(new String[] {"FishCompressed 22 KB"})
              .setFontStyle(new FontStyle().setUSE("TextFont"))))))));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return CodedCompressedPrototypes model
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
        X3D thisExampleX3dModel = new CodedCompressedPrototypes().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.CodedCompressedPrototypes\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.CodedCompressedPrototypes\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}
