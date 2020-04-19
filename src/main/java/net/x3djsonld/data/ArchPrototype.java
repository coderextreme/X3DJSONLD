package net.x3djsonld.data;

import java.util.*;
import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Networking.*;
import org.web3d.x3d.jsail.Rendering.*;
import org.web3d.x3d.jsail.Scripting.*;
import org.web3d.x3d.jsail.Shape.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> Create an arch. Can modify general parameters: clearSpanWidth, riseHeight, depth, topAbutmentHeight, pierWidth, pierHeight. See the reference file ArchModelingDiagrams.pdf to find further information. See also ArchPrototypeScript_more_readable.js. </p>
 <p> Related links: <a href="../../../Buildings/ArchPrototype.java">ArchPrototype.java</a> source, <a href="../../../Buildings/ArchPrototypeIndex.html" target="_top">ArchPrototype catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../Buildings/ArchPrototype.x3d">ArchPrototype.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Create an arch. Can modify general parameters: clearSpanWidth, riseHeight, depth, topAbutmentHeight, pierWidth, pierHeight. See the reference file ArchModelingDiagrams.pdf to find further information. See also ArchPrototypeScript_more_readable.js. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Possibility to create shapes related to arch: ArchHalf; IntradosOnly; ArchFilled; ArchHalfFilled; Lintel. See the reference file ArchModelingDiagrams.pdf to find further information. </td>
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
			<td> 27 November 2015 </td>
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
			<td> <a href="http://X3dGraphics.com/examples/X3dForAdvancedModeling/Buildings/ArchPrototype.x3d" target="_blank">http://X3dGraphics.com/examples/X3dForAdvancedModeling/Buildings/ArchPrototype.x3d</a> </td>
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
		<a href="https://www.web3d.org/specifications/java/X3DJSAIL.html" target="_blank">X3D Java Scene Access Interface Library (X3DJSAIL)</a>.
		It has been produced using the 
		<a href="https://www.web3d.org/x3d/stylesheets/X3dToJava.xslt" target="_blank">X3dToJava.xslt</a>
		stylesheet to create Java source code from an <code>.x3d</code> model.
	</p>

	* @author Michele Foti, Don Brutzman
 */

public class ArchPrototype
{
	/** Default constructor to create this object. */
	public ArchPrototype ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3DObject().setProfile(X3DObject.PROFILE_IMMERSIVE).setVersion(X3DObject.VERSION_3_3)
  .setHead(new headObject()
    .addMeta(new metaObject().setName(metaObject.NAME_TITLE      ).setContent("ArchPrototype.x3d"))
    .addMeta(new metaObject().setName(metaObject.NAME_DESCRIPTION).setContent("Create an arch. Can modify general parameters: clearSpanWidth, riseHeight, depth, topAbutmentHeight, pierWidth, pierHeight. See the reference file ArchModelingDiagrams.pdf to find further information. See also ArchPrototypeScript_more_readable.js."))
    .addMeta(new metaObject().setName(metaObject.NAME_DESCRIPTION).setContent("Possibility to create shapes related to arch: ArchHalf; IntradosOnly; ArchFilled; ArchHalfFilled; Lintel. See the reference file ArchModelingDiagrams.pdf to find further information."))
    .addMeta(new metaObject().setName(metaObject.NAME_CREATOR    ).setContent("Michele Foti, Don Brutzman"))
    .addMeta(new metaObject().setName(metaObject.NAME_CREATED    ).setContent("15 December 2014"))
    .addMeta(new metaObject().setName(metaObject.NAME_MODIFIED   ).setContent("27 November 2015"))
    .addMeta(new metaObject().setName(metaObject.NAME_REFERENCE  ).setContent("ArchModelingDiagrams.pdf"))
    .addMeta(new metaObject().setName(metaObject.NAME_REFERENCE  ).setContent("https://en.wikipedia.org/wiki/Arch"))
    .addMeta(new metaObject().setName(metaObject.NAME_IDENTIFIER ).setContent("http://X3dGraphics.com/examples/X3dForAdvancedModeling/Buildings/ArchPrototype.x3d"))
    .addMeta(new metaObject().setName(metaObject.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new metaObject().setName(metaObject.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new SceneObject()
    .addChild(new ProtoDeclareObject("ArchPrototype").setName("ArchPrototype").setAppinfo("Create an arch. Can modify general parameters: clearSpanWidth, riseHeight, depth, topAbutmentHeight, pierWidth, pierHeight. - Possibility to create shapes related to an arch: ArchHalf; IntradosOnly; ArchFilled; ArchHalfFilled; Lintel. See the reference file ArchModelingDiagrams.pdf to find further information. See also ArchPrototypeScript_more_readable.js.js.")
      .setProtoInterface(new ProtoInterfaceObject()
        .addComments(" COLOR OF ARCH ")
        .addField(new fieldObject().setName("diffuseColor").setType(fieldObject.TYPE_SFCOLOR).setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue(new SFColorObject(0.2f,0.8f,0.8f)).setAppinfo("color of arch"))
        .addField(new fieldObject().setName("emissiveColor").setType(fieldObject.TYPE_SFCOLOR).setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue(new SFColorObject(0.2f,0.8f,0.8f)).setAppinfo("color of arch"))
        .addComments(" INPUT PARAMETERS ")
        .addComments(" General parameters: measures in meters ")
        .addField(new fieldObject().setName("clearSpanWidth").setType(fieldObject.TYPE_SFFLOAT).setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue(4f).setAppinfo("clearSpanWidth: clearSpanWidth must be double of riseHeight to obtain an half circumference"))
        .addField(new fieldObject().setName("riseHeight").setType(fieldObject.TYPE_SFFLOAT).setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue(2f).setAppinfo("riseHeight: riseHeight must be half of clearSpanWidth to obtain an half circumference"))
        .addField(new fieldObject().setName("depth").setType(fieldObject.TYPE_SFFLOAT).setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue(3f).setAppinfo("depth"))
        .addField(new fieldObject().setName("topAbutmentHeight").setType(fieldObject.TYPE_SFFLOAT).setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue(0.5f).setAppinfo("topAbutmentHeight:topAbutmentHeight=0 means no topAbutment"))
        .addField(new fieldObject().setName("pierWidth").setType(fieldObject.TYPE_SFFLOAT).setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue(0.5f).setAppinfo("pierWidth:pierWidtht=0 means no pierWidth"))
        .addField(new fieldObject().setName("pierHeight").setType(fieldObject.TYPE_SFFLOAT).setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue(1f).setAppinfo("pierHeight: pierHeight=0 means no pierHeight"))
        .addComments(" Parameters to create to create shapes related to arch: put true to apply ")
        .addField(new fieldObject().setName("archHalf").setType(fieldObject.TYPE_SFBOOL).setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue(false).setAppinfo("archHalf: can modify also clearSpanWidth, riseHeight, depth, pierWidth, pierHeight, topAbutmentHeight, archHalfExtensionWidth at purpose, clearSpanWidth measure refers to a full arc, consider clearSpanWidth/2 for the archHalf width"))
        .addField(new fieldObject().setName("archHalfExtensionWidth").setType(fieldObject.TYPE_SFFLOAT).setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue(0f).setAppinfo("archHalfExtensionWidth: measure in meters, use only if archHalf=true, it is the width of the etension of the abutment of the archHalf. See the reference file ArchModelingDiagrams.pdf to find further information."))
        .addField(new fieldObject().setName("onlyIntrados").setType(fieldObject.TYPE_SFBOOL).setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue(false).setAppinfo("onlyIntrados: note it is a flat curved surface, can modify also clearSpanWidth, riseHeight, depth at purpose, if needed apply archHalf=true."))
        .addField(new fieldObject().setName("archFilled").setType(fieldObject.TYPE_SFBOOL).setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue(false).setAppinfo("archFilled: note it is an half cylinder, can modify also clearSpanWidth, riseHeight, depth at purpose."))
        .addField(new fieldObject().setName("archHalfFilled").setType(fieldObject.TYPE_SFBOOL).setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue(false).setAppinfo("archHalfFilled: note it is a quarter cylinder, can modify also clearSpanWidth, riseHeight, depth at purpose, clearSpanWidth measure refers to a full arc, consider clearSpanWidth/2 for the archHalfFilled width."))
        .addField(new fieldObject().setName("lintel").setType(fieldObject.TYPE_SFBOOL).setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setValue(false).setAppinfo("lintel: no arc is rendered, but a lintel: topAbutmentHeight on pierHeight, total height is pierHeight + topAbutmentHeight, if needed apply archHalf=true.")))
      .setProtoBody(new ProtoBodyObject()
        .addComments(" First node determines node type of this prototype ")
        .addComments(" IndexedFaceset creates arch ")
        .addChild(new TransformObject("ArchTransform")
          .addChild(new ShapeObject("Arch")
            .addComments(" note that convex='false' (meaning concave geometry) is crucial for this IFS of a geometric chord to render properly ")
            .setGeometry(new IndexedFaceSetObject("ArchIndex").setDEF("ArchIndex").setConvex(false).setSolid(false)
              .setCoord(new CoordinateObject("ArchChord")))
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject("MaterialNode")
                .setIS(new ISObject()
                  .addConnect(new connectObject().setNodeField("emissiveColor").setProtoField("emissiveColor"))
                  .addConnect(new connectObject().setNodeField("diffuseColor").setProtoField("diffuseColor")))))))
        .addComments(" Subsequent nodes do not render, but still must be a valid X3D subgraph ")
        .addComments(" This embedded Script provides the X3D author with additional visibility and control over prototype inputs and outputs ")
        .addChild(new ScriptObject("ArchPrototypeScript").setUrl(new String[] {"../node/ArchPrototypeScript.js","https://coderextreme.net/X3DJSONLD/src/main/node/ArchPrototypeScript.js"})
          .addComments(" INPUT PARAMETERS ")
          .addComments(" General parameters ")
          .addComments(" Parameters to create to create shapes related to arch: put true to apply ")
          .addComments(" OUTPUT PARAMETERS ")
          .addField(new fieldObject().setName("clearSpanWidth").setType(fieldObject.TYPE_SFFLOAT).setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("user or default input for clearSpanWidth parameter"))
          .addField(new fieldObject().setName("riseHeight").setType(fieldObject.TYPE_SFFLOAT).setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("user or default input for riseHeight parameter"))
          .addField(new fieldObject().setName("depth").setType(fieldObject.TYPE_SFFLOAT).setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("user or default input for depth parameter"))
          .addField(new fieldObject().setName("topAbutmentHeight").setType(fieldObject.TYPE_SFFLOAT).setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("user or default input for topAbutmentHeight parameter"))
          .addField(new fieldObject().setName("pierWidth").setType(fieldObject.TYPE_SFFLOAT).setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("user or default input for pierWidth parameter"))
          .addField(new fieldObject().setName("pierHeight").setType(fieldObject.TYPE_SFFLOAT).setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("user or default input for pierHeight parameter"))
          .addField(new fieldObject().setName("archHalf").setType(fieldObject.TYPE_SFBOOL).setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("user or default input for archHalf parameter"))
          .addField(new fieldObject().setName("archHalfExtensionWidth").setType(fieldObject.TYPE_SFFLOAT).setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("user or default input for archHalfExtensionWidth parameter"))
          .addField(new fieldObject().setName("onlyIntrados").setType(fieldObject.TYPE_SFBOOL).setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("user or default input for onlyIntrados parameter"))
          .addField(new fieldObject().setName("archFilled").setType(fieldObject.TYPE_SFBOOL).setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("user or default input for archFilled parameter"))
          .addField(new fieldObject().setName("archHalfFilled").setType(fieldObject.TYPE_SFBOOL).setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("user or default input for archHalfFilled parameter"))
          .addField(new fieldObject().setName("lintel").setType(fieldObject.TYPE_SFBOOL).setAccessType(fieldObject.ACCESSTYPE_INITIALIZEONLY).setAppinfo("user or default input for lintel parameter"))
          .addField(new fieldObject().setName("computedScale").setType(fieldObject.TYPE_SFVEC3F).setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setAppinfo("computedScale: modify scale field - NOTE it is not used to modify the whole arch, but to modify clearSpanWidth, riseHeight, depth. It does not affect topAbutmentHeight, pierWidth, pierHeight, archHalfExtensionWidth"))
          .addField(new fieldObject().setName("pointOut").setType(fieldObject.TYPE_MFVEC3F).setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setAppinfo("send computed points to the Coordinate node"))
          .addField(new fieldObject().setName("indexOut").setType(fieldObject.TYPE_MFINT32).setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setAppinfo("send computed indices to the IndexedFaceSet node"))
          .setIS(new ISObject()
            .addConnect(new connectObject().setNodeField("clearSpanWidth").setProtoField("clearSpanWidth"))
            .addConnect(new connectObject().setNodeField("riseHeight").setProtoField("riseHeight"))
            .addConnect(new connectObject().setNodeField("depth").setProtoField("depth"))
            .addConnect(new connectObject().setNodeField("pierWidth").setProtoField("pierWidth"))
            .addConnect(new connectObject().setNodeField("topAbutmentHeight").setProtoField("topAbutmentHeight"))
            .addConnect(new connectObject().setNodeField("pierHeight").setProtoField("pierHeight"))
            .addConnect(new connectObject().setNodeField("archHalf").setProtoField("archHalf"))
            .addConnect(new connectObject().setNodeField("archHalfExtensionWidth").setProtoField("archHalfExtensionWidth"))
            .addConnect(new connectObject().setNodeField("onlyIntrados").setProtoField("onlyIntrados"))
            .addConnect(new connectObject().setNodeField("archFilled").setProtoField("archFilled"))
            .addConnect(new connectObject().setNodeField("archHalfFilled").setProtoField("archHalfFilled"))
            .addConnect(new connectObject().setNodeField("lintel").setProtoField("lintel"))))
        .addChild(new ROUTEObject().setFromNode("ArchPrototypeScript").setFromField("computedScale").setToNode("ArchTransform").setToField("scale"))
        .addChild(new ROUTEObject().setFromNode("ArchPrototypeScript").setFromField("pointOut").setToNode("ArchChord").setToField("point"))
        .addChild(new ROUTEObject().setFromNode("ArchPrototypeScript").setFromField("indexOut").setToNode("ArchIndex").setToField("set_coordIndex"))))
    .addChild(new ProtoInstanceObject("ArchPrototype", "ArchInstance")
      .addFieldValue(new fieldValueObject().setName("diffuseColor").setValue(new SFColorObject(0.5f,0.3f,0.6f)))
      .addFieldValue(new fieldValueObject().setName("emissiveColor").setValue(new SFColorObject(0.5f,0.3f,0.6f)))
      .addFieldValue(new fieldValueObject().setName("clearSpanWidth").setValue(5f))
      .addFieldValue(new fieldValueObject().setName("riseHeight").setValue(2.5f))
      .addFieldValue(new fieldValueObject().setName("depth").setValue(2f))
      .addFieldValue(new fieldValueObject().setName("topAbutmentHeight").setValue(0.6f))
      .addFieldValue(new fieldValueObject().setName("pierWidth").setValue(1f))
      .addFieldValue(new fieldValueObject().setName("pierHeight").setValue(2f)))
    .addComments(" Add any ROUTEs here that connect ProtoInstance to/from prior nodes in Scene (and outside of ProtoDeclare) ")
    .addChild(new InlineObject("CoordinateAxes").setUrl(new String[] {"../data/CoordinateAxes.x3d"})));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3DObject x3dModel;

	/** Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3DObject.html">X3DObject</a>
	 * @return ArchPrototype model
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
        X3DObject thisExampleX3dObject = new ArchPrototype().getX3dModel();

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
			System.out.println("WARNING: \"ArchPrototype\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dObject.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"ArchPrototype\" self-validation test results: ");
			String validationResults = thisExampleX3dObject.validationReport();
			System.out.println(validationResults);
		}
    }
}
