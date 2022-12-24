package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Networking.*;
import org.web3d.x3d.jsail.Rendering.*;
import org.web3d.x3d.jsail.Scripting.*;
import org.web3d.x3d.jsail.Shape.*;

// Javadoc annotations follow, see below for Java source code.
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
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_3)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("ArchPrototype.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Create an arch. Can modify general parameters: clearSpanWidth, riseHeight, depth, topAbutmentHeight, pierWidth, pierHeight. See the reference file ArchModelingDiagrams.pdf to find further information. See also ArchPrototypeScript_more_readable.js."))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Possibility to create shapes related to arch: ArchHalf; IntradosOnly; ArchFilled; ArchHalfFilled; Lintel. See the reference file ArchModelingDiagrams.pdf to find further information."))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Michele Foti, Don Brutzman"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("15 December 2014"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("27 November 2015"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("ArchModelingDiagrams.pdf"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://en.wikipedia.org/wiki/Arch"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("http://X3dGraphics.com/examples/X3dForAdvancedModeling/Buildings/ArchPrototype.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new ProtoDeclare("ArchPrototype").setName("ArchPrototype").setAppinfo("Create an arch. Can modify general parameters: clearSpanWidth, riseHeight, depth, topAbutmentHeight, pierWidth, pierHeight. - Possibility to create shapes related to an arch: ArchHalf; IntradosOnly; ArchFilled; ArchHalfFilled; Lintel. See the reference file ArchModelingDiagrams.pdf to find further information. See also ArchPrototypeScript_more_readable.js.js.")
      .setProtoInterface(new ProtoInterface()
        .addComments(" COLOR OF ARCH ")
        .addField(new field().setName("diffuseColor").setType(field.TYPE_SFCOLOR).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFColor(0.2,0.8,0.8)).setAppinfo("color of arch"))
        .addField(new field().setName("emissiveColor").setType(field.TYPE_SFCOLOR).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFColor(0.2,0.8,0.8)).setAppinfo("color of arch"))
        .addComments(" INPUT PARAMETERS ")
        .addComments(" General parameters: measures in meters ")
        .addField(new field().setName("clearSpanWidth").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(4).setAppinfo("clearSpanWidth: clearSpanWidth must be double of riseHeight to obtain an half circumference"))
        .addField(new field().setName("riseHeight").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(2).setAppinfo("riseHeight: riseHeight must be half of clearSpanWidth to obtain an half circumference"))
        .addField(new field().setName("depth").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(3).setAppinfo("depth"))
        .addField(new field().setName("topAbutmentHeight").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(0.5).setAppinfo("topAbutmentHeight:topAbutmentHeight=0 means no topAbutment"))
        .addField(new field().setName("pierWidth").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(0.5).setAppinfo("pierWidth:pierWidtht=0 means no pierWidth"))
        .addField(new field().setName("pierHeight").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(1).setAppinfo("pierHeight: pierHeight=0 means no pierHeight"))
        .addComments(" Parameters to create to create shapes related to arch: put true to apply ")
        .addField(new field().setName("archHalf").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(false).setAppinfo("archHalf: can modify also clearSpanWidth, riseHeight, depth, pierWidth, pierHeight, topAbutmentHeight, archHalfExtensionWidth at purpose, clearSpanWidth measure refers to a full arc, consider clearSpanWidth/2 for the archHalf width"))
        .addField(new field().setName("archHalfExtensionWidth").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(0).setAppinfo("archHalfExtensionWidth: measure in meters, use only if archHalf=true, it is the width of the etension of the abutment of the archHalf. See the reference file ArchModelingDiagrams.pdf to find further information."))
        .addField(new field().setName("onlyIntrados").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(false).setAppinfo("onlyIntrados: note it is a flat curved surface, can modify also clearSpanWidth, riseHeight, depth at purpose, if needed apply archHalf=true."))
        .addField(new field().setName("archFilled").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(false).setAppinfo("archFilled: note it is an half cylinder, can modify also clearSpanWidth, riseHeight, depth at purpose."))
        .addField(new field().setName("archHalfFilled").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(false).setAppinfo("archHalfFilled: note it is a quarter cylinder, can modify also clearSpanWidth, riseHeight, depth at purpose, clearSpanWidth measure refers to a full arc, consider clearSpanWidth/2 for the archHalfFilled width."))
        .addField(new field().setName("lintel").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(false).setAppinfo("lintel: no arc is rendered, but a lintel: topAbutmentHeight on pierHeight, total height is pierHeight + topAbutmentHeight, if needed apply archHalf=true.")))
      .setProtoBody(new ProtoBody()
        .addComments(" First node determines node type of this prototype ")
        .addComments(" IndexedFaceset creates arch ")
        .addChild(new Transform("ArchTransform")
          .addChild(new Shape("Arch")
            .addComments(" note that convex='false' (meaning concave geometry) is crucial for this IFS of a geometric chord to render properly ")
            .setGeometry(new IndexedFaceSet("ArchIndex").setDEF("ArchIndex").setConvex(false).setSolid(false)
              .setCoord(new Coordinate("ArchChord")))
            .setAppearance(new Appearance()
              .setMaterial(new Material("MaterialNode")
                .setIS(new IS()
                  .addConnect(new connect().setNodeField("emissiveColor").setProtoField("emissiveColor"))
                  .addConnect(new connect().setNodeField("diffuseColor").setProtoField("diffuseColor")))))))
        .addComments(" Subsequent nodes do not render, but still must be a valid X3D subgraph ")
        .addComments(" This embedded Script provides the X3D author with additional visibility and control over prototype inputs and outputs ")
        .addChild(new Script("ArchPrototypeScript").setUrl(new String[] {"../node/ArchPrototypeScript.js","https://coderextreme.net/X3DJSONLD/src/main/node/ArchPrototypeScript.js"})
          .addComments(" INPUT PARAMETERS ")
          .addComments(" General parameters ")
          .addComments(" Parameters to create to create shapes related to arch: put true to apply ")
          .addComments(" OUTPUT PARAMETERS ")
          .addField(new field().setName("clearSpanWidth").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("user or default input for clearSpanWidth parameter"))
          .addField(new field().setName("riseHeight").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("user or default input for riseHeight parameter"))
          .addField(new field().setName("depth").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("user or default input for depth parameter"))
          .addField(new field().setName("topAbutmentHeight").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("user or default input for topAbutmentHeight parameter"))
          .addField(new field().setName("pierWidth").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("user or default input for pierWidth parameter"))
          .addField(new field().setName("pierHeight").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("user or default input for pierHeight parameter"))
          .addField(new field().setName("archHalf").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("user or default input for archHalf parameter"))
          .addField(new field().setName("archHalfExtensionWidth").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("user or default input for archHalfExtensionWidth parameter"))
          .addField(new field().setName("onlyIntrados").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("user or default input for onlyIntrados parameter"))
          .addField(new field().setName("archFilled").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("user or default input for archFilled parameter"))
          .addField(new field().setName("archHalfFilled").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("user or default input for archHalfFilled parameter"))
          .addField(new field().setName("lintel").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("user or default input for lintel parameter"))
          .addField(new field().setName("computedScale").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("computedScale: modify scale field - NOTE it is not used to modify the whole arch, but to modify clearSpanWidth, riseHeight, depth. It does not affect topAbutmentHeight, pierWidth, pierHeight, archHalfExtensionWidth"))
          .addField(new field().setName("pointOut").setType(field.TYPE_MFVEC3F).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("send computed points to the Coordinate node"))
          .addField(new field().setName("indexOut").setType(field.TYPE_MFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("send computed indices to the IndexedFaceSet node"))
          .setIS(new IS()
            .addConnect(new connect().setNodeField("clearSpanWidth").setProtoField("clearSpanWidth"))
            .addConnect(new connect().setNodeField("riseHeight").setProtoField("riseHeight"))
            .addConnect(new connect().setNodeField("depth").setProtoField("depth"))
            .addConnect(new connect().setNodeField("pierWidth").setProtoField("pierWidth"))
            .addConnect(new connect().setNodeField("topAbutmentHeight").setProtoField("topAbutmentHeight"))
            .addConnect(new connect().setNodeField("pierHeight").setProtoField("pierHeight"))
            .addConnect(new connect().setNodeField("archHalf").setProtoField("archHalf"))
            .addConnect(new connect().setNodeField("archHalfExtensionWidth").setProtoField("archHalfExtensionWidth"))
            .addConnect(new connect().setNodeField("onlyIntrados").setProtoField("onlyIntrados"))
            .addConnect(new connect().setNodeField("archFilled").setProtoField("archFilled"))
            .addConnect(new connect().setNodeField("archHalfFilled").setProtoField("archHalfFilled"))
            .addConnect(new connect().setNodeField("lintel").setProtoField("lintel"))))
        .addChild(new ROUTE().setFromNode("ArchPrototypeScript").setFromField("computedScale").setToNode("ArchTransform").setToField("scale"))
        .addChild(new ROUTE().setFromNode("ArchPrototypeScript").setFromField("pointOut").setToNode("ArchChord").setToField("point"))
        .addChild(new ROUTE().setFromNode("ArchPrototypeScript").setFromField("indexOut").setToNode("ArchIndex").setToField("set_coordIndex"))))
    .addChild(new ProtoInstance("ArchPrototype", "ArchInstance").setContainerField("children")
      .addFieldValue(new fieldValue().setName("diffuseColor").setValue(new SFColor(0.5,0.3,0.6)))
      .addFieldValue(new fieldValue().setName("emissiveColor").setValue(new SFColor(0.5,0.3,0.6)))
      .addFieldValue(new fieldValue().setName("clearSpanWidth").setValue(5))
      .addFieldValue(new fieldValue().setName("riseHeight").setValue(2.5))
      .addFieldValue(new fieldValue().setName("depth").setValue(2))
      .addFieldValue(new fieldValue().setName("topAbutmentHeight").setValue(0.6))
      .addFieldValue(new fieldValue().setName("pierWidth").setValue(1))
      .addFieldValue(new fieldValue().setName("pierHeight").setValue(2)))
    .addComments(" Add any ROUTEs here that connect ProtoInstance to/from prior nodes in Scene (and outside of ProtoDeclare) ")
    .addChild(new Inline("CoordinateAxes").setUrl(new String[] {"../data/CoordinateAxes.x3d"})));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return ArchPrototype model
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
        X3D thisExampleX3dModel = new ArchPrototype().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.ArchPrototype\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.ArchPrototype\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}
