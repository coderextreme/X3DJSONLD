package net.x3djsonld.data;

import java.util.*;
import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Rendering.*;
import org.web3d.x3d.jsail.Shape.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> Create a half arch with parameters clearSpanWidth=4; riseHeight=2; depth=3; topAbutmentHeight=0.5; pierWidth=0.5; pierHeight=1. Parameter clearSpanWidth measure refers to a full arc, consider clearSpanWidth/2 for the archHalf width. Modify them with Transform &gt; scale or editing the IndexedFileSet node. See the reference file ArchModelingDiagrams.pdf and the ArchScript_more_readable.js script to find further information. </p>
 <p> Related links: <a href="../../../Buildings/ArchHalf.java">ArchHalf.java</a> source, <a href="../../../Buildings/ArchHalfIndex.html" target="_top">ArchHalf catalog page</a>, <a href="http://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="http://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="http://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../Buildings/ArchHalf.x3d">ArchHalf.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Create a half arch with parameters clearSpanWidth=4; riseHeight=2; depth=3; topAbutmentHeight=0.5; pierWidth=0.5; pierHeight=1. Parameter clearSpanWidth measure refers to a full arc, consider clearSpanWidth/2 for the archHalf width. Modify them with Transform &gt; scale or editing the IndexedFileSet node. See the reference file ArchModelingDiagrams.pdf and the ArchScript_more_readable.js script to find further information. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Michele Foti, Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 15 December 2014 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 16 February 2016 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="../../../Buildings/ArchModelingDiagrams.pdf">ArchModelingDiagrams.pdf</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://en.wikipedia.org/wiki/Arch" target="_blank">https://en.wikipedia.org/wiki/Arch</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="http://X3dGraphics.com/examples/X3dForAdvancedModeling/Buildings/ArchHalf.x3d" target="_blank">http://X3dGraphics.com/examples/X3dForAdvancedModeling/Buildings/ArchHalf.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../Buildings/../license.html">../license.html</a> </td>
		</tr>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center;" colspan="2">  &nbsp; </td>
		</tr>
	</table>

	<p>
		This program uses the
		<a href="http://www.web3d.org/specifications/java/X3DJSAIL.html" target="_blank">X3D Java Scene Access Interface Library (X3DJSAIL)</a>.
		It has been produced using the 
		<a href="http://www.web3d.org/x3d/stylesheets/X3dToJava.xslt" target="_blank">X3dToJava.xslt</a>
		stylesheet to create Java source code from an <code>.x3d</code> model.
	</p>

	* @author Michele Foti, Don Brutzman
 */

public class ArchHalf
{
	/** Default constructor to create this object. */
	public ArchHalf ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3DObject().setProfile("Interchange").setVersion("3.3")
  .setHead(new headObject()
    .addMeta(new metaObject().setName("title").setContent("ArchHalf.x3d"))
    .addMeta(new metaObject().setName("description").setContent("Create a half arch with parameters clearSpanWidth=4; riseHeight=2; depth=3; topAbutmentHeight=0.5; pierWidth=0.5; pierHeight=1. Parameter clearSpanWidth measure refers to a full arc, consider clearSpanWidth/2 for the archHalf width. Modify them with Transform > scale or editing the IndexedFileSet node. See the reference file ArchModelingDiagrams.pdf and the ArchScript_more_readable.js script to find further information."))
    .addMeta(new metaObject().setName("creator").setContent("Michele Foti, Don Brutzman"))
    .addMeta(new metaObject().setName("created").setContent("15 December 2014"))
    .addMeta(new metaObject().setName("modified").setContent("16 February 2016"))
    .addMeta(new metaObject().setName("reference").setContent("ArchModelingDiagrams.pdf"))
    .addMeta(new metaObject().setName("reference").setContent("https://en.wikipedia.org/wiki/Arch"))
    .addMeta(new metaObject().setName("identifier").setContent("http://X3dGraphics.com/examples/X3dForAdvancedModeling/Buildings/ArchHalf.x3d"))
    .addMeta(new metaObject().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new metaObject().setName("license").setContent("../license.html")))
  .setScene(new SceneObject()
    .addChild(new ShapeObject("Arch")
      .addComments(" note that convex='false' (meaning concave geometry) is crucial for this IFS of a geometric chord to render properly ")
      .setGeometry(new IndexedFaceSetObject("ArchIndex").setDEF("ArchIndex").setConvex(false).setSolid(false).setCoordIndex(ArchIndex_4_12_coordIndex)
        .setCoord(new CoordinateObject("ArchChord").setPoint(ArchChord_5_12_point)))
      .setAppearance(new AppearanceObject()
        .setMaterial(new MaterialObject("MaterialNode").setDiffuseColor(1.0f,0.75f,0.25f)))));
  }
	// end of initialize() method

	/** Large attribute array: IndexedFaceSet DEF='ArchIndex' coordIndex field, scene-graph level=4, element #12, 318 total numbers */
	private MFInt32Object ArchIndex_4_12_coordIndex = new MFInt32Object(new int[] {31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,144,-1,149,31,144,147,-1,134,147,144,145,-1,145,144,62,141,-1,132,133,141,62,-1,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,143,-1,148,94,143,146,-1,142,128,146,143,-1,140,125,143,142,-1,125,126,127,140,-1,31,94,95,32,-1,32,95,96,33,-1,33,96,97,34,-1,34,97,98,35,-1,35,98,99,36,-1,36,99,100,37,-1,37,100,101,38,-1,38,101,102,39,-1,39,102,103,40,-1,40,103,104,41,-1,41,104,105,42,-1,42,105,106,43,-1,43,106,107,44,-1,44,107,108,45,-1,45,108,109,46,-1,46,109,110,47,-1,47,110,111,48,-1,48,111,112,49,-1,49,112,113,50,-1,50,113,114,51,-1,51,114,115,52,-1,52,115,116,53,-1,53,116,117,54,-1,54,117,118,55,-1,55,118,119,56,-1,56,119,120,57,-1,57,120,121,58,-1,58,121,122,59,-1,59,122,123,60,-1,60,123,124,61,-1,61,124,125,62,-1,148,149,147,146,-1,146,147,134,128,-1,128,134,145,142,-1,140,141,145,142,-1,127,133,141,140,-1,127,126,132,133,-1,126,132,62,125,-1,31,94,143,144,-1,142,143,144,145,-1,140,125,62,141,-1,31,94,148,149,-1});

	/** Large attribute array: Coordinate DEF='ArchChord' point field, scene-graph level=5, element #12, 468 total numbers made up of 156 3-tuple values */
	private MFVec3fObject ArchChord_5_12_point = new MFVec3fObject() /* splitting up long array to improve readability */
	.append(new MFVec3fObject(new float[] {2.0f,0.0f,0.0f,1.9974984355438178f,0.1f,0.0f,1.98997487421324f,0.2f,0.0f,1.977371993328519f,0.3f,0.0f,1.9595917942265423f,0.4f,0.0f,1.9364916731037084f,0.5f,0.0f,1.9078784028338912f,0.6f,0.0f,1.8734993995195193f,0.7f,0.0f,1.833030277982336f,0.8f,0.0f,1.786057109949175f,0.9f,0.0f}))
	.append(new MFVec3fObject(new float[] {1.7320508075688775f,1.0f,0.0f,1.6703293088490067f,1.1f,0.0f,1.60f,1.2f,0.0f,1.5198684153570664f,1.3f,0.0f,1.42828568570857f,1.4f,0.0f,1.3228756555322953f,1.5f,0.0f,1.20f,1.6f,0.0f,1.0535653752852738f,1.7f,0.0f,0.9020947843768965f,1.785f,0.0f,0.7599342076785332f,1.85f,0.0f}))
	.append(new MFVec3fObject(new float[] {0.6244997998398398f,1.9f,0.0f,0.5425633603552677f,1.925f,0.0f,0.4444097208657794f,1.95f,0.0f,0.36181625170796194f,1.967f,0.0f,0.2821347195933173f,1.98f,0.0f,0.19974984355438343f,1.99f,0.0f,0.16718552568927703f,1.993f,0.0f,0.14133294025102578f,1.995f,0.0f,0.10950342460398415f,1.997f,0.0f,0.08942035562443252f,1.998f,0.0f}))
	.append(new MFVec3fObject(new float[] {0.06323764701505419f,1.999f,0.0f,0.0f,2.0f,0.0f,-0.06323764701505419f,1.999f,0.0f,-0.08942035562443252f,1.998f,0.0f,-0.10950342460398415f,1.997f,0.0f,-0.14133294025102578f,1.995f,0.0f,-0.16718552568927703f,1.993f,0.0f,-0.19974984355438343f,1.99f,0.0f,-0.2821347195933173f,1.98f,0.0f,-0.36181625170796194f,1.967f,0.0f}))
	.append(new MFVec3fObject(new float[] {-0.4444097208657794f,1.95f,0.0f,-0.5425633603552677f,1.925f,0.0f,-0.6244997998398398f,1.9f,0.0f,-0.7599342076785332f,1.85f,0.0f,-0.9020947843768965f,1.785f,0.0f,-1.0535653752852738f,1.7f,0.0f,-1.20f,1.6f,0.0f,-1.3228756555322953f,1.5f,0.0f,-1.42828568570857f,1.4f,0.0f,-1.5198684153570664f,1.3f,0.0f}))
	.append(new MFVec3fObject(new float[] {-1.60f,1.2f,0.0f,-1.6703293088490067f,1.1f,0.0f,-1.7320508075688775f,1.0f,0.0f,-1.786057109949175f,0.9f,0.0f,-1.833030277982336f,0.8f,0.0f,-1.8734993995195193f,0.7f,0.0f,-1.9078784028338912f,0.6f,0.0f,-1.9364916731037084f,0.5f,0.0f,-1.9595917942265423f,0.4f,0.0f,-1.977371993328519f,0.3f,0.0f}))
	.append(new MFVec3fObject(new float[] {-1.98997487421324f,0.2f,0.0f,-1.9974984355438178f,0.1f,0.0f,-2.0f,0.0f,0.0f,2.0f,0.0f,3.0f,1.9974984355438178f,0.1f,3.0f,1.98997487421324f,0.2f,3.0f,1.977371993328519f,0.3f,3.0f,1.9595917942265423f,0.4f,3.0f,1.9364916731037084f,0.5f,3.0f,1.9078784028338912f,0.6f,3.0f}))
	.append(new MFVec3fObject(new float[] {1.8734993995195193f,0.7f,3.0f,1.833030277982336f,0.8f,3.0f,1.786057109949175f,0.9f,3.0f,1.7320508075688775f,1.0f,3.0f,1.6703293088490067f,1.1f,3.0f,1.60f,1.2f,3.0f,1.5198684153570664f,1.3f,3.0f,1.42828568570857f,1.4f,3.0f,1.3228756555322953f,1.5f,3.0f,1.20f,1.6f,3.0f}))
	.append(new MFVec3fObject(new float[] {1.0535653752852738f,1.7f,3.0f,0.9020947843768965f,1.785f,3.0f,0.7599342076785332f,1.85f,3.0f,0.6244997998398398f,1.9f,3.0f,0.5425633603552677f,1.925f,3.0f,0.4444097208657794f,1.95f,3.0f,0.36181625170796194f,1.967f,3.0f,0.2821347195933173f,1.98f,3.0f,0.19974984355438343f,1.99f,3.0f,0.16718552568927703f,1.993f,3.0f}))
	.append(new MFVec3fObject(new float[] {0.14133294025102578f,1.995f,3.0f,0.10950342460398415f,1.997f,3.0f,0.08942035562443252f,1.998f,3.0f,0.06323764701505419f,1.999f,3.0f,0.0f,2.0f,3.0f,-0.06323764701505419f,1.999f,3.0f,-0.08942035562443252f,1.998f,3.0f,-0.10950342460398415f,1.997f,3.0f,-0.14133294025102578f,1.995f,3.0f,-0.16718552568927703f,1.993f,3.0f}))
	.append(new MFVec3fObject(new float[] {-0.19974984355438343f,1.99f,3.0f,-0.2821347195933173f,1.98f,3.0f,-0.36181625170796194f,1.967f,3.0f,-0.4444097208657794f,1.95f,3.0f,-0.5425633603552677f,1.925f,3.0f,-0.6244997998398398f,1.9f,3.0f,-0.7599342076785332f,1.85f,3.0f,-0.9020947843768965f,1.785f,3.0f,-1.0535653752852738f,1.7f,3.0f,-1.20f,1.6f,3.0f}))
	.append(new MFVec3fObject(new float[] {-1.3228756555322953f,1.5f,3.0f,-1.42828568570857f,1.4f,3.0f,-1.5198684153570664f,1.3f,3.0f,-1.60f,1.2f,3.0f,-1.6703293088490067f,1.1f,3.0f,-1.7320508075688775f,1.0f,3.0f,-1.786057109949175f,0.9f,3.0f,-1.833030277982336f,0.8f,3.0f,-1.8734993995195193f,0.7f,3.0f,-1.9078784028338912f,0.6f,3.0f}))
	.append(new MFVec3fObject(new float[] {-1.9364916731037084f,0.5f,3.0f,-1.9595917942265423f,0.4f,3.0f,-1.977371993328519f,0.3f,3.0f,-1.98997487421324f,0.2f,3.0f,-1.9974984355438178f,0.1f,3.0f,-2.0f,0.0f,3.0f,-2.0f,-1.0f,3.0f,-2.5f,-1.0f,3.0f,-2.5f,2.5f,3.0f,2.5f,2.5f,3.0f}))
	.append(new MFVec3fObject(new float[] {2.5f,-1.0f,3.0f,2.0f,-1.0f,3.0f,-2.0f,-1.0f,0.0f,-2.5f,-1.0f,0.0f,-2.5f,2.5f,0.0f,2.5f,2.5f,0.0f,2.5f,-1.0f,0.0f,2.0f,-1.0f,0.0f,2.5f,0.0f,3.0f,2.5f,0.0f,0.0f}))
	.append(new MFVec3fObject(new float[] {-2.5f,0.0f,3.0f,-2.5f,0.0f,0.0f,-2.5f,2.0f,3.0f,-2.0f,2.0f,3.0f,-2.0f,2.0f,0.0f,-2.5f,2.0f,0.0f,-2.0f,2.5f,3.0f,-2.0f,2.5f,0.0f,0.0f,2.5f,3.0f,0.0f,2.5f,0.0f}))
	.append(new MFVec3fObject(new float[] {2.0f,2.0f,3.0f,2.5f,2.0f,3.0f,2.5f,2.0f,0.0f,2.0f,2.0f,0.0f,2.0f,2.5f,3.0f,2.0f,2.5f,0.0f}));

	/** The initialized model object, created within initialize() method. */
	private X3DObject x3dModel;

	/** Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="http://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3DObject.html">X3DObject</a>
	 * @return ArchHalf model
	 */
	public X3DObject getX3dModel()
	{	  
		return x3dModel;
	}
	   
    /** Default main() method provided for test purposes, uses CommandLine to set global ConfigurationProperties for this object.
     * @param args array of input parameters, provided as arguments
	 * @see <a href="http://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3DObject.html#handleArguments-java.lang.String:A-">X3DObject.handleArguments(args)</a>
	 * @see <a href="http://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3DObject.html#validationReport--">X3DObject.validationReport()</a>
     * @see <a href="http://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/CommandLine.html">CommandLine</a>
     * @see <a href="http://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/CommandLine.html#USAGE">CommandLine.USAGE</a>
     * @see <a href="http://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/ConfigurationProperties.html">ConfigurationProperties</a>
     */
    public static void main(String args[])
    {
        X3DObject exampleObject = new ArchHalf().getX3dModel();

        exampleObject.handleArguments(args);
		boolean validate = (args.length == 0);
		for (String arg : args)
		{
			if (arg.toLowerCase().startsWith("-v") || arg.toLowerCase().contains("validate"))
			{
				validate = true;
				break;
			}
		}
		if (validate)
		{
			System.out.print("ArchHalf self-validation test results: ");
			String validationResults = exampleObject.validationReport();
			System.out.println(validationResults);
		}
    }
}
