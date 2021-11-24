package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Interpolation.*;
import org.web3d.x3d.jsail.Scripting.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Text.*;
import org.web3d.x3d.jsail.Time.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> Test case for Prototype PositionInterpolator OrientationInterpolator, expected behavior: is for both sets of test Text to move identically. </p>
 <p> Related links: <a href="../../../development/TestPrototypeInterpolators.java">TestPrototypeInterpolators.java</a> source, <a href="../../../development/TestPrototypeInterpolatorsIndex.html" target="_top">TestPrototypeInterpolators catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../development/TestPrototypeInterpolators.x3d">TestPrototypeInterpolators.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Test case for Prototype PositionInterpolator OrientationInterpolator, expected behavior: is for both sets of test Text to move identically. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Don Brutzman and Jeff Weekley </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 4 April 2009 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://savage.nps.edu/Savage/Tools/Animation/WaypointInterpolatorPrototype.x3d" target="_blank">https://savage.nps.edu/Savage/Tools/Animation/WaypointInterpolatorPrototype.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/development/TestPrototypeInterpolators.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/development/TestPrototypeInterpolators.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../development/../license.html">../license.html</a> </td>
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

	* @author Don Brutzman and Jeff Weekley
 */

public class TestPrototypeInterpolators
{
	/** Default constructor to create this object. */
	public TestPrototypeInterpolators ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_2)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("TestPrototypeInterpolators.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Test case for Prototype PositionInterpolator OrientationInterpolator, expected behavior: is for both sets of test Text to move identically."))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Don Brutzman and Jeff Weekley"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("4 April 2009"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://savage.nps.edu/Savage/Tools/Animation/WaypointInterpolatorPrototype.x3d"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/development/TestPrototypeInterpolators.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("TestPrototypeInterpolators.x3d"))
    .addChild(new ProtoDeclare("InterpolatorTest").setName("InterpolatorTest").setAppinfo("Test output of PositionInterpolator, OrientationInterpolator when within Protototype")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("set_fraction").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("exposed PositionInterpolator and OrientationInterpolator setting"))
        .addField(new field().setName("position_changed").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("exposed PositionInterpolator setting"))
        .addField(new field().setName("orientation_changed").setType(field.TYPE_SFROTATION).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("exposed OrientationInterpolator setting")))
      .setProtoBody(new ProtoBody()
        .addComments(" First node determines node type of this prototype ")
        .addChild(new Group("PrototypeRootNode")
          .addChild(new PositionInterpolator("WaypointPI").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFVec3f(new double[] {0.0,0.0,0.0,1.0,1.0,1.0,2.0,2.0,2.0}))
            .setIS(new IS()
              .addConnect(new connect().setNodeField("set_fraction").setProtoField("set_fraction"))
              .addConnect(new connect().setNodeField("value_changed").setProtoField("position_changed"))))
          .addChild(new OrientationInterpolator("WaypointOI").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,1.0,0.0,0.0,0.7071,0.7071,0.0,3.1416,0.0,1.0,0.0,0.0}))
            .setIS(new IS()
              .addConnect(new connect().setNodeField("set_fraction").setProtoField("set_fraction"))
              .addConnect(new connect().setNodeField("value_changed").setProtoField("orientation_changed")))))
        .addComments(" Subsequent nodes do not render, but still must be a valid X3D subgraph ")
        .addChild(new Script("InternalTraceScript").setSourceCode("\n" + 
"          " + "\n" + 
"ecmascript:" + "\n" + 
"function set_position (value)" + "\n" + 
"{" + "\n" + 
"	holdPosition=value;" + "\n" + 
"}" + "\n" + 
"function set_rotation (value)" + "\n" + 
"{" + "\n" + 
"	Browser.print ('Internal position=' + holdPosition.toString() + ' , internal rotation=' + value.toString() + '\\n');" + "\n" + 
"}" + "\n")
          .addField(new field().setName("set_position").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTONLY))
          .addField(new field().setName("holdPosition").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFVec3f(0.0,0.0,0.0)))
          .addField(new field().setName("set_rotation").setType(field.TYPE_SFROTATION).setAccessType(field.ACCESSTYPE_INPUTONLY)))
        .addChild(new ROUTE().setFromNode("WaypointPI").setFromField("value_changed").setToNode("InternalTraceScript").setToField("set_position"))
        .addChild(new ROUTE().setFromNode("WaypointOI").setFromField("value_changed").setToNode("InternalTraceScript").setToField("set_rotation"))))
    .addComments(" ===================================== ")
    .addChild(new TimeSensor("Clock").setCycleInterval(6).setLoop(true))
    .addComments(" ===================================== ")
    .addChild(new ProtoInstance("InterpolatorTest", "InterpolatorTestInstance").setContainerField("children"))
    .addChild(new Transform("LeftText").setTranslation(-3.0,0.0,0.0)
      .addChild(new Transform("TrackingTransformLeft")
        .addChild(new ROUTE().setFromNode("Clock").setFromField("fraction_changed").setToNode("InterpolatorTestInstance").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("InterpolatorTestInstance").setFromField("position_changed").setToNode("TrackingTransformLeft").setToField("translation"))
        .addChild(new ROUTE().setFromNode("InterpolatorTestInstance").setFromField("orientation_changed").setToNode("TrackingTransformLeft").setToField("rotation"))
        .addChild(new Shape()
          .setGeometry(new Text().setString(new String[] {"prototype interpolators"})
            .setFontStyle(new FontStyle().setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE)))
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(0.8,0.2,0.2))))))
    .addComments(" ===================================== ")
    .addChild(new PositionInterpolator("ActualPositionInterpolator").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFVec3f(new double[] {0.0,0.0,0.0,1.0,1.0,1.0,2.0,2.0,2.0})))
    .addChild(new OrientationInterpolator("ActualOrientationInterpolator").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,1.0,0.0,0.0,0.7071,0.7071,0.0,3.1416,0.0,1.0,0.0,0.0})))
    .addChild(new Transform("RightText").setTranslation(-3.0,-2.0,0.0)
      .addChild(new Transform("TrackingTransformRight")
        .addChild(new ROUTE().setFromNode("Clock").setFromField("fraction_changed").setToNode("ActualPositionInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("Clock").setFromField("fraction_changed").setToNode("ActualOrientationInterpolator").setToField("set_fraction"))
        .addChild(new ROUTE().setFromNode("ActualPositionInterpolator").setFromField("value_changed").setToNode("TrackingTransformRight").setToField("translation"))
        .addChild(new ROUTE().setFromNode("ActualOrientationInterpolator").setFromField("value_changed").setToNode("TrackingTransformRight").setToField("rotation"))
        .addChild(new Shape()
          .setGeometry(new Text().setString(new String[] {"native interpolators"}))
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(0.2,0.8,0.2))))))
    .addChild(new Script("ExternalTraceScript").setSourceCode("\n" + 
"      " + "\n" + 
"ecmascript:" + "\n" + 
"function set_position (value)" + "\n" + 
"{" + "\n" + 
"	holdPosition=value;" + "\n" + 
"}" + "\n" + 
"function set_rotation (value)" + "\n" + 
"{" + "\n" + 
"	 Browser.print ('External position=' + holdPosition.toString() + ' , external rotation=' + value.toString() + '\\n');" + "\n" + 
"}" + "\n")
      .addField(new field().setName("set_position").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("holdPosition").setType(field.TYPE_SFVEC3F).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new SFVec3f(0.0,0.0,0.0)))
      .addField(new field().setName("set_rotation").setType(field.TYPE_SFROTATION).setAccessType(field.ACCESSTYPE_INPUTONLY)))
    .addChild(new ROUTE().setFromNode("ActualPositionInterpolator").setFromField("value_changed").setToNode("ExternalTraceScript").setToField("set_position"))
    .addChild(new ROUTE().setFromNode("ActualOrientationInterpolator").setFromField("value_changed").setToNode("ExternalTraceScript").setToField("set_rotation")));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return TestPrototypeInterpolators model
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
        X3D thisExampleX3dModel = new TestPrototypeInterpolators().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.TestPrototypeInterpolators\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.TestPrototypeInterpolators\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}
