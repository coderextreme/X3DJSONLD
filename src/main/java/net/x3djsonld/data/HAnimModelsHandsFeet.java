package net.x3djsonld.data;

import java.util.*;
import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Networking.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> Left and right hands and feet, using high-fidelity definitions for H-Anim version 2.2. </p>
 <p> Related links: <a href="../../../HumanoidAnimation/HAnimModelsHandsFeet.java">HAnimModelsHandsFeet.java</a> source, <a href="../../../HumanoidAnimation/HAnimModelsHandsFeetIndex.html" target="_top">HAnimModelsHandsFeet catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../HumanoidAnimation/HAnimModelsHandsFeet.x3d">HAnimModelsHandsFeet.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Left and right hands and feet, using high-fidelity definitions for H-Anim version 2.2 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> YOO Kwan Hee and Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 8 February 2015 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr style="color:burntorange">
			<td style="text-align:right; vertical-align: text-top;"> <i> warning </i> </td>
			<td> not yet to scale </td>
		</tr>
		<tr style="color:burntorange">
			<td style="text-align:right; vertical-align: text-top;"> <i> warning </i> </td>
			<td> TODO will X3D HAnim component add a new level to support LOA-4 functionality? </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../HumanoidAnimation/HAnimModelsHandsFeet.png">HAnimModelsHandsFeet.png</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../HumanoidAnimation/HAnimModelsHandsFeetWithFour1mGrids.png">HAnimModelsHandsFeetWithFour1mGrids.png</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/working-groups/humanoid-animation-h-anim" target="_blank">https://www.web3d.org/working-groups/humanoid-animation-h-anim</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/files/specifications/19774/V1.0" target="_blank">https://www.web3d.org/files/specifications/19774/V1.0</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/hanim.html" target="_blank">https://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/hanim.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> subject </i> </td>
			<td> X3D H-Anim humanoid animation </td>
		</tr>
		<tr style="color:burntorange">
			<td style="text-align:right; vertical-align: text-top;"> <i> warning </i> </td>
			<td> scene, DOCTYPE and Schema under development. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/HAnimModelsHandsFeet.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/HAnimModelsHandsFeet.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../HumanoidAnimation/../license.html">../license.html</a> </td>
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

	* @author YOO Kwan Hee and Don Brutzman
 */

public class HAnimModelsHandsFeet
{
	/** Default constructor to create this object. */
	public HAnimModelsHandsFeet ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3DObject().setProfile(X3DObject.PROFILE_IMMERSIVE).setVersion(X3DObject.VERSION_4_0)
  .setHead(new headObject()
    .addComponent(new componentObject().setName("H-Anim").setLevel(1))
    .addMeta(new metaObject().setName(metaObject.NAME_TITLE      ).setContent("HAnimModelsHandsFeet.x3d"))
    .addMeta(new metaObject().setName(metaObject.NAME_DESCRIPTION).setContent("Left and right hands and feet, using high-fidelity definitions for H-Anim version 2.2"))
    .addMeta(new metaObject().setName(metaObject.NAME_CREATOR    ).setContent("YOO Kwan Hee and Don Brutzman"))
    .addMeta(new metaObject().setName(metaObject.NAME_CREATED    ).setContent("8 February 2015"))
    .addMeta(new metaObject().setName(metaObject.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new metaObject().setName(metaObject.NAME_WARNING    ).setContent("not yet to scale"))
    .addMeta(new metaObject().setName(metaObject.NAME_WARNING    ).setContent("TODO will X3D HAnim component add a new level to support LOA-4 functionality?"))
    .addMeta(new metaObject().setName(metaObject.NAME_IMAGE      ).setContent("HAnimModelsHandsFeet.png"))
    .addMeta(new metaObject().setName(metaObject.NAME_IMAGE      ).setContent("HAnimModelsHandsFeetWithFour1mGrids.png"))
    .addMeta(new metaObject().setName(metaObject.NAME_REFERENCE  ).setContent("https://www.web3d.org/working-groups/humanoid-animation-h-anim"))
    .addMeta(new metaObject().setName(metaObject.NAME_REFERENCE  ).setContent("https://www.web3d.org/files/specifications/19774/V1.0"))
    .addMeta(new metaObject().setName(metaObject.NAME_REFERENCE  ).setContent("https://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/hanim.html"))
    .addMeta(new metaObject().setName(metaObject.NAME_SUBJECT    ).setContent("X3D H-Anim humanoid animation"))
    .addMeta(new metaObject().setName(metaObject.NAME_WARNING    ).setContent("scene, DOCTYPE and Schema under development."))
    .addMeta(new metaObject().setName(metaObject.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/HAnimModelsHandsFeet.x3d"))
    .addMeta(new metaObject().setName(metaObject.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new metaObject().setName(metaObject.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new SceneObject()
    .addChild(new WorldInfoObject().setTitle("HAnimModelsHandsFeet.x3d"))
    .addChild(new ViewpointObject().setDescription("Hands and feet 10m"))
    .addChild(new ViewpointObject().setDescription("Hands and feet 1.7m").setPosition(0.0f,0.0f,1.7f))
    .addChild(new TransformObject().setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Transform displayBBox: $isNumeric=false, $attributeType=, value='false']
).setTranslation(-1.0f,1.0f,0.0f)
      .addChild(new InlineObject().setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Inline displayBBox: $isNumeric=false, $attributeType=, value='false']
).setUrl(new String[] {"HAnimModelHandLeft.x3d","https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/HAnimModelHandLeft.x3d","HAnimModelHandLeft.wrl","https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/HAnimModelHandLeft.wrl"}))
      .addComments(" Grid overlay authoring hint: first adjust grid scale to convenient large size, then adjust overall scale for your scene model ")
      .addChild(new TransformObject("GridXY_20x20Fixed_AdjustScale").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Transform displayBBox: $isNumeric=false, $attributeType=, value='false']
).setScale(.1f,.1f,.1f)
        .addChild(new InlineObject("GridXY_20x20Fixed").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Inline displayBBox: $isNumeric=false, $attributeType=, value='false']
).setUrl(new String[] {"GridXY_20x20Fixed.x3d","../../Savage/Tools/Authoring/GridXY_20x20Fixed.x3d","https://savage.nps.edu/Savage/Tools/Authoring/GridXY_20x20Fixed.x3d","GridXY_20x20Fixed.wrl","../../Savage/Tools/Authoring/GridXY_20x20Fixed.wrl","https://savage.nps.edu/Savage/Tools/Authoring/GridXY_20x20Fixed.wrl"}))))
    .addChild(new TransformObject().setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Transform displayBBox: $isNumeric=false, $attributeType=, value='false']
).setTranslation(1.0f,1.0f,0.0f)
      .addChild(new InlineObject().setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Inline displayBBox: $isNumeric=false, $attributeType=, value='false']
).setUrl(new String[] {"HAnimModelHandRight.x3d","https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/HAnimModelHandRight.x3d","HAnimModelHandRight.wrl","https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/HAnimModelHandRight.wrl"}))
      .addChild(new TransformObject().setUSE("GridXY_20x20Fixed_AdjustScale").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Transform displayBBox: $isNumeric=false, $attributeType=, value='false']
)))
    .addChild(new TransformObject().setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Transform displayBBox: $isNumeric=false, $attributeType=, value='false']
).setTranslation(-1.0f,-1.0f,0.0f)
      .addComments(" rotation='0 0 1 3.141593' ")
      .addChild(new InlineObject().setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Inline displayBBox: $isNumeric=false, $attributeType=, value='false']
).setUrl(new String[] {"HAnimModelFootLeft.x3d","https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/HAnimModelFootLeft.x3d","HAnimModelFootLeft.wrl","https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/HAnimModelFootLeft.wrl"}))
      .addChild(new TransformObject().setUSE("GridXY_20x20Fixed_AdjustScale").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Transform displayBBox: $isNumeric=false, $attributeType=, value='false']
)))
    .addChild(new TransformObject().setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Transform displayBBox: $isNumeric=false, $attributeType=, value='false']
).setTranslation(1.0f,-1.0f,0.0f)
      .addComments(" rotation='0 0 1 3.141593' ")
      .addChild(new InlineObject().setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Inline displayBBox: $isNumeric=false, $attributeType=, value='false']
).setUrl(new String[] {"HAnimModelFootRight.x3d","https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/HAnimModelFootRight.x3d","HAnimModelFootRight.wrl","https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/HAnimModelFootRight.wrl"}))
      .addChild(new TransformObject().setUSE("GridXY_20x20Fixed_AdjustScale").setDisplayBBox("false"
// [*** X3dToJava.xslt error: encountered incorrect type, Transform displayBBox: $isNumeric=false, $attributeType=, value='false']
))));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3DObject x3dModel;

	/** Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3DObject.html">X3DObject</a>
	 * @return HAnimModelsHandsFeet model
	 */
	public X3DObject getX3dModel()
	{	  
		return x3dModel;
	}
	   
    /** Default main() method provided for test purposes, uses CommandLine to set global ConfigurationProperties for this object.
     * @param args array of input parameters, provided as arguments
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3DObject.html#handleArguments-java.lang.String:A-">X3DObject.handleArguments(args)</a>
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3DObject.html#validationReport--">X3DObject.validationReport()</a>
     * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/CommandLine.html">CommandLine</a>
     * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/CommandLine.html#USAGE">CommandLine.USAGE</a>
     * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/ConfigurationProperties.html">ConfigurationProperties</a>
     */
    public static void main(String args[])
    {
        X3DObject thisExampleX3dObject = new HAnimModelsHandsFeet().getX3dModel();

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
				if (arg.toLowerCase().endsWith(X3DObject.FILE_EXTENSION_X3D) ||
					arg.toLowerCase().endsWith(X3DObject.FILE_EXTENSION_CLASSICVRML) ||
					arg.toLowerCase().endsWith(X3DObject.FILE_EXTENSION_X3DB) ||
					arg.toLowerCase().endsWith(X3DObject.FILE_EXTENSION_VRML97) ||
					arg.toLowerCase().endsWith(X3DObject.FILE_EXTENSION_EXI) ||
					arg.toLowerCase().endsWith(X3DObject.FILE_EXTENSION_GZIP) ||
					arg.toLowerCase().endsWith(X3DObject.FILE_EXTENSION_ZIP) ||
					arg.toLowerCase().endsWith(X3DObject.FILE_EXTENSION_HTML) ||
					arg.toLowerCase().endsWith(X3DObject.FILE_EXTENSION_XHTML))
				{
					argumentsLoadNewModel = true;
					fileName = arg;
				}
			}
		}
		if      (argumentsLoadNewModel)
			System.out.println("WARNING: \"HAnimModelsHandsFeet\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dObject.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"HAnimModelsHandsFeet\" self-validation test results: ");
			String validationResults = thisExampleX3dObject.validationReport();
			System.out.println(validationResults);
		}
    }
}