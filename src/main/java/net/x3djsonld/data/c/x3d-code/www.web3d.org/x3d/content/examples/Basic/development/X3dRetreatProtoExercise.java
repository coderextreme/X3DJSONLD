package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Interpolation.*;
import org.web3d.x3d.jsail.Scripting.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Time.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> Solutions to the Proto Exercise posed by Chris Marrin of SONY at the May 2000 X3D Retreat. This exercise includes intentionally illegal VRML and does not render. </p>
 <p> Related links: X3dRetreatProtoExercise.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.X3dRetreatProtoExercise&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/development/X3DRetreatProtoExercise.x3d">X3DRetreatProtoExercise.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 25 May 2000 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr style="color:red">
			<td style="text-align:right; vertical-align: text-top;"> <i> error </i> </td>
			<td> Contains multiple intentional warnings and errors, for validation testing purposes. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Solutions to the Proto Exercise posed by Chris Marrin of SONY at the May 2000 X3D Retreat. This exercise includes intentionally illegal VRML and does not render. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/x3d/sony/X3DRetreatProtoEx.html" target="_blank">https://www.web3d.org/x3d/sony/X3DRetreatProtoEx.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/development/X3DRetreatProtoExercise.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/development/X3DRetreatProtoExercise.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.1, <a href="https://www.web3d.org/x3d/content/README.X3D-Edit.html" target="_blank">https://www.web3d.org/x3d/content/README.X3D-Edit.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/development/../license.html">../license.html</a> </td>
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

	* @author Don Brutzman
 */

public class X3dRetreatProtoExercise
{
	/** Default constructor to create this object. */
	public X3dRetreatProtoExercise ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_0)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("X3DRetreatProtoExercise.x3d"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Don Brutzman"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("25 May 2000"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_ERROR      ).setContent("Contains multiple intentional warnings and errors, for validation testing purposes."))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Solutions to the Proto Exercise posed by Chris Marrin of SONY at the May 2000 X3D Retreat. This exercise includes intentionally illegal VRML and does not render."))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://www.web3d.org/x3d/sony/X3DRetreatProtoEx.html"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/development/X3DRetreatProtoExercise.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.1, https://www.web3d.org/x3d/content/README.X3D-Edit.html"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addComments(" ============= Example 1 ============= ")
    .addComments(" GeometryNode and ChildNode are not valid node types, so used type Node/Nodes instead. ")
    .addComments(" Note exercise example is incomplete and has no node(s) defined for body content. ")
    .addComments(" X3D DTD can correctly detect these content errors if they occur, scene will be well-formed but not valid. ")
    .addChild(new ProtoDeclare("MyProto").setName("MyProto")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("geometry").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
        .addField(new field().setName("children").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)))
      .setProtoBody(new ProtoBody()
        .addChild(new WorldInfo().setInfo(new String[] {"Added this node as PROTO body, so that the example can be valid VRML"}))))
    .addComments(" ============= Example 2 ============= ")
    .addComments(" Adding new fields to an existing node. ")
    .addComments(" Corrected example by moving Material from PROTO interface to PROTO body. ")
    .addChild(new ProtoDeclare("PhysicalMaterial").setName("PhysicalMaterial")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("mass").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(1))
        .addField(new field().setName("hardness").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(1))
        .addField(new field().setName("friction").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(1)))
      .setProtoBody(new ProtoBody()
        .addChild(new Material("M"))
        .addComments(" EXPORT M (this is Blendo nomenclature, not VRML 97) ")))
    .addComments(" ============= Example 3a ============= ")
    .addComments(" Consider new possibility of declaring a field PROTO. ")
    .addComments(" Again no body provided in this example (since goal is a new FieldPROTO construct). ")
    .addChild(new ProtoDeclare("Plane").setName("Plane")
      .setProtoInterface(new ProtoInterface()
        .addComments(" FIELDPROTO ")
        .addField(new field().setName("normal").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFVec3f(0.0,0.0,1.0)))
        .addField(new field().setName("distance").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(0)))
      .setProtoBody(new ProtoBody()
        .addChild(new WorldInfo().setInfo(new String[] {"Added this node as PROTO body, so that the example can be valid VRML"}))))
    .addComments(" ============= Example 3b ============= ")
    .addComments(" Example 3b employs the supposed field PROTO. ")
    .addComments(" X3D DTD currently restricts field types to VRML 97 types, and so flags these untyped fields as an error. ")
    .addComments(" We could allow unspecified field types, but would lose checking (and authoring suggestions) on existing types. ")
    .addChild(new ProtoDeclare("BSPLeaf").setName("BSPLeaf")
      .setProtoInterface(new ProtoInterface()
        .addComments(" Intentionally invalid type values used. ")
        .addField(new field().setName("plane").setType("Plane").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("0 0 1 0"
// [*** X3dToJava.xslt error: encountered incorrect type, field name='plane' value: $isNumeric=true, $attributeType=Plane, value='0 0 1 0']
))
        .addField(new field().setName("front").setType("BSPLeaf").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("NULL"
// [*** X3dToJava.xslt error: encountered incorrect type, field name='front' value: $isNumeric=false, $attributeType=BSPLeaf, value='NULL']
))
        .addField(new field().setName("back").setType("BSPLeaf").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("NULL"
// [*** X3dToJava.xslt error: encountered incorrect type, field name='back' value: $isNumeric=false, $attributeType=BSPLeaf, value='NULL']
))
        .addField(new field().setName("children").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)))
      .setProtoBody(new ProtoBody()
        .addChild(new WorldInfo().setInfo(new String[] {"Added this node as PROTO body, so that the example can be valid VRML"}))))
    .addComments(" ============= Example 4 ============= ")
    .addComments(" PROTO with routes. Example nodes moved from interface definition to body. ")
    .addChild(new ProtoDeclare("SpinGroup").setName("SpinGroup")
      .setProtoInterface(new ProtoInterface()
        .addComments(" Example 4 calls three of the field references ROUTEs, but they actually match VRML 97 'IS' statements. IS=\"TS.cycleInterval\" IS=\"TS.startTime\" IS=\"TS.stopTime\" ")
        .addField(new field().setName("speed").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(1))
        .addField(new field().setName("startTime").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(0))
        .addField(new field().setName("stopTime").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(0)))
      .setProtoBody(new ProtoBody()
        .addComments(" Corrected example by moving nodes T, G, TS and OI from PROTO interface to PROTO body. ")
        .addChild(new Transform("T")
          .addComments(" EXPORT G (this is Blendo nomenclature, not VRML 97) ")
          .addChild(new Group("G")))
        .addChild(new TimeSensor("TS").setLoop(true))
        .addChild(new OrientationInterpolator("OI").setKey(new double[] {0.0,0.25,0.5,0.75,1.0}).setKeyValue(new MFRotation(new double[] {0.0,1.0,0.0,0.0,0.0,1.0,0.0,1.57,0.0,1.0,0.0,3.14,0.0,1.0,0.0,4.71,0.0,1.0,0.0,0.0})))
        .addChild(new ROUTE().setFromNode("TS").setFromField("fraction_changed").setToNode("OI").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("OI").setFromField("value_changed").setToNode("T").setToField("set_rotation"))))
    .addComments(" ============= Example 5 ============= ")
    .addComments(" Show \"overriding of a method of the inherited interface.\" ")
    .addComments(" X3D DTD currently restricts field types to VRML 97 types, other values can be entered but are flagged as invalid. IS=\"RENDERscript.plane\" IS=\"RENDERscript.front\" IS=\"RENDERscript.back\" ")
    .addChild(new ProtoDeclare("BSPLeaf").setName("BSPLeaf")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("plane").setType("Plane").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("0 0 1 0"
// [*** X3dToJava.xslt error: encountered incorrect type, field name='plane' value: $isNumeric=true, $attributeType=Plane, value='0 0 1 0']
))
        .addField(new field().setName("front").setType("BSPLeaf").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("NULL"
// [*** X3dToJava.xslt error: encountered incorrect type, field name='front' value: $isNumeric=false, $attributeType=BSPLeaf, value='NULL']
))
        .addField(new field().setName("back").setType("BSPLeaf").setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("NULL"
// [*** X3dToJava.xslt error: encountered incorrect type, field name='back' value: $isNumeric=false, $attributeType=BSPLeaf, value='NULL']
)))
      .setProtoBody(new ProtoBody()
        .addComments(" Here is a curious example problem: an unattached function overriding an unspecified (but commonly occuring) implementation-specific browser function. ")
        .addComments(" This solution wraps a Script node around the render () function to maintain VRML 97 semantics. ")
        .addComments(" Preprocessing can automate this process of wrapping a Script node around inline functions. ")
        .addComments(" Corrected example by moving Group G (renamed GG) from PROTO interface to PROTO body. ")
        .addChild(new Group("GG"))
        .addChild(new Script("RENDERscript").setSourceCode("\n" + 
"          " + "\n" + 
"ecmascript:" + "\n" + 
"function render()" + "\n" + 
"{" + "\n" + 
" var result = plane.onPlane(System.sceneManager.getCameraPos());" + "\n" + 
" if (result < 0) {" + "\n" + 
"  front.render();" + "\n" + 
"  G.render();" + "\n" + 
"  back.render();" + "\n" + 
" }" + "\n" + 
" else if (result > 0) {" + "\n" + 
"  back.render();" + "\n" + 
"  G.render();" + "\n" + 
"  front.render();" + "\n" + 
" }" + "\n" + 
" else {" + "\n" + 
"  front.render();" + "\n" + 
"  back.render();" + "\n" + 
" }" + "\n" + 
"}" + "\n"))))
    .addComments(" ============= Example 6 ============= ")
    .addComments(" Show \"inclusion of field scripts which execute whenever the field receives an event.\" ")
    .addChild(new ProtoDeclare("AnimatedMaterial").setName("AnimatedMaterial")
      .setProtoInterface(new ProtoInterface()
        .addComments(" FROM is Blendo nomenclature, expressed using IS references. IS=\"timeBase.startTime\" IS=\"timeBase.stopTime\" ")
        .addField(new field().setName("startTime").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(0))
        .addField(new field().setName("stopTime").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(0))
        .addField(new field().setName("startColor").setType(field.TYPE_SFCOLOR).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFColor(0.0,0.0,0.0)))
        .addField(new field().setName("endColor").setType(field.TYPE_SFCOLOR).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(new SFColor(0.0,0.0,0.0)))
        .addComments(" During the December 3 1999 x3d-contributors meeting, Chris showed how ")
        .addComments(" the VRML 97 specification allows an SF/MFNode field node to be initialized with node content. ")
        .addComments(" This construct is now permitted by DTD, here is an example: ")
        .addField(new field().setName("initializedChildren").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
          .addChild(new Group().setBboxCenter(1.0,2.0,3.0))
          .addChild(new Transform().setTranslation(1.0,2.0,3.0))))
      .setProtoBody(new ProtoBody()
        .addComments(" Moved the following content nodes from PROTO interface to PROTO body in order to match valid VRML 97 content. ")
        .addChild(new Material("MM"))
        .addChild(new ProtoInstance("IntervalSensor").setContainerField("children")
          .addFieldValue(new fieldValue().setName("timeBase")
            .addChild(new ProtoInstance("TimeBase", "timeBase").setContainerField("children"))))
        .addChild(new ColorInterpolator("CI").setKey(new double[] {0.0,0.5,1.0}))
        .addChild(new Script("AnimatedMaterialInitialize").setSourceCode("\n" + 
"          " + "\n" + 
"ecmascript:" + "\n" + 
"{ // simple exercise for reader to initialize/update PROTO field values" + "\n" + 
"  // to the MM Material node.  Be sure to add some IS statements to match." + "\n" + 
"}" + "\n"))
        .addChild(new ROUTE().setFromNode("CI").setFromField("value_changed").setToNode("MM").setToField("set_diffuseColor")))));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return X3dRetreatProtoExercise model
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
        X3D thisExampleX3dModel = new X3dRetreatProtoExercise().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.X3dRetreatProtoExercise\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.X3dRetreatProtoExercise\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}
