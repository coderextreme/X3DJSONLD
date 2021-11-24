package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.EventUtilities.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Interpolation.*;
import org.web3d.x3d.jsail.Networking.*;
import org.web3d.x3d.jsail.PointingDeviceSensor.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Text.*;
import org.web3d.x3d.jsail.Time.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> Event utility node examples for boolean filtering and other event utility nodes. </p>
 <p> Related links: <a href="../../../development/EventUtilityExamples.java">EventUtilityExamples.java</a> source, <a href="../../../development/EventUtilityExamplesIndex.html" target="_top">EventUtilityExamples catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../development/EventUtilityExamples.x3d">EventUtilityExamples.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Event utility node examples for boolean filtering and other event utility nodes. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 3 November 2002 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 January 2020 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> subject </i> </td>
			<td> BooleanFilter BooleanToggle BooleanTrigger IntegerTrigger TimeTrigger </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/development/EventUtilityExamples.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/development/EventUtilityExamples.x3d</a> </td>
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

	* @author Don Brutzman
 */

public class EventUtilityExamples
{
	/** Default constructor to create this object. */
	public EventUtilityExamples ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_0)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("EventUtilityExamples.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Event utility node examples for boolean filtering and other event utility nodes."))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Don Brutzman"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("3 November 2002"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 January 2020"))
    .addMeta(new meta().setName(meta.NAME_SUBJECT    ).setContent("BooleanFilter BooleanToggle BooleanTrigger IntegerTrigger TimeTrigger"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/development/EventUtilityExamples.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addComments(" ======================================== ")
    .addComments(" ExternProtoDeclare definitions are used here only for language development - do not copy into other scenes! ")
    .addComments(" ExternProtoDeclare node support is provided either by X3D-compliant browser or X3dToVrml97.xslt ExternProtoDeclare definitions. ")
    .addComments(" ======================================== ")
    .addChild(new WorldInfo().setTitle("EventUtilityExamples.x3d"))
    .addChild(new ExternProtoDeclare("BooleanFilter").setName("BooleanFilter").setAppinfo("BooleanFilter selectively passes true false or negated events.").setUrl(new String[] {"EventUtilityPrototypes.x3d#BooleanFilter","https://www.web3d.org/x3d/content/examples/Basic/development/EventUtilityPrototypes.x3d#BooleanFilter","EventUtilityPrototypes.wrl#BooleanFilter","https://www.web3d.org/x3d/content/examples/Basic/development/EventUtilityPrototypes.wrl#BooleanFilter"})
      .addField(new field().setName("set_boolean").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("set_boolean is the input value to be filtered."))
      .addField(new field().setName("inputTrue").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("inputTrue only passes a true value when set_boolean input is true."))
      .addField(new field().setName("inputFalse").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("inputFalse only passes a false value when set_boolean is false."))
      .addField(new field().setName("inputNegate").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("inputNegate provides opposite value by negating set_boolean input.")))
    .addComments(" ======================================== ")
    .addChild(new ExternProtoDeclare("BooleanToggle").setName("BooleanToggle").setAppinfo("BooleanToggle maintains state and negates output when a true input is provided.").setUrl(new String[] {"EventUtilityPrototypes.x3d#BooleanToggle","https://www.web3d.org/x3d/content/examples/Basic/development/EventUtilityPrototypes.x3d#BooleanToggle","EventUtilityPrototypes.wrl#BooleanToggle","https://www.web3d.org/x3d/content/examples/Basic/development/EventUtilityPrototypes.wrl#BooleanToggle"})
      .addField(new field().setName("set_boolean").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("If set_boolean input is true toggle state."))
      .addField(new field().setName("set_toggle").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("Reset persistent state value."))
      .addField(new field().setName("toggle").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Persistent state value that gets toggled or reset."))
      .addField(new field().setName("toggle_changed").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Output toggled persistent state value."))
      .addComments(" warning: toggle depends on exposedField functionality in Script node, not compatible with VRML 97. implemented as inputOnly/initializeOnly/outputOnly triplet. "))
    .addComments(" ======================================== ")
    .addChild(new ExternProtoDeclare("BooleanTrigger").setName("BooleanTrigger").setAppinfo("BooleanTrigger converts time events to boolean true events.").setUrl(new String[] {"EventUtilityPrototypes.x3d#BooleanTrigger","https://www.web3d.org/x3d/content/examples/Basic/development/EventUtilityPrototypes.x3d#BooleanTrigger","EventUtilityPrototypes.wrl#BooleanTrigger","https://www.web3d.org/x3d/content/examples/Basic/development/EventUtilityPrototypes.wrl#BooleanTrigger"})
      .addField(new field().setName("set_triggerTime").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("set_triggerTime provides input time event typical event sent is TouchSensor touchTime."))
      .addField(new field().setName("triggerTrue").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("triggerTrue outputs a true value whenever a triggerTime event is received.")))
    .addComments(" ======================================== ")
    .addChild(new ExternProtoDeclare("IntegerTrigger").setName("IntegerTrigger").setAppinfo("IntegerTrigger converts boolean true or time input events to integer value (suitable for Switch node).").setUrl(new String[] {"EventUtilityPrototypes.x3d#IntegerTrigger","https://www.web3d.org/x3d/content/examples/Basic/development/EventUtilityPrototypes.x3d#IntegerTrigger","EventUtilityPrototypes.wrl#IntegerTrigger","https://www.web3d.org/x3d/content/examples/Basic/development/EventUtilityPrototypes.wrl#IntegerTrigger"})
      .addField(new field().setName("set_boolean").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("If set_boolean input is true trigger output of integer value."))
      .addField(new field().setName("set_integerKey").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("Resets value used for output when triggered later."))
      .addField(new field().setName("integerKey").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("integerKey is value for output when triggered."))
      .addField(new field().setName("integerKey_changed").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Reports change in integerKey value."))
      .addField(new field().setName("triggerValue").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("triggerValue provides integer event output matching integerKey when true set_boolean received.")))
    .addComments(" ======================================== ")
    .addChild(new ExternProtoDeclare("TimeTrigger").setName("TimeTrigger").setAppinfo("TimeTrigger converts boolean true events to time events.").setUrl(new String[] {"EventUtilityPrototypes.x3d#TimeTrigger","https://www.web3d.org/x3d/content/examples/Basic/development/EventUtilityPrototypes.x3d#TimeTrigger","EventUtilityPrototypes.wrl#TimeTrigger","https://www.web3d.org/x3d/content/examples/Basic/development/EventUtilityPrototypes.wrl#TimeTrigger"})
      .addField(new field().setName("set_boolean").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("If set_boolean input is true trigger output time value."))
      .addField(new field().setName("triggerTime").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("triggerTime is output time event sent when set_boolean input is true.")))
    .addComments(" ======================================== ")
    .addChild(new Group()
      .addChild(new Transform().setTranslation(0.0,3.0,0.0)
        .addChild(new Anchor().setDescription("Click for BooleanFilter example").setParameter(new String[] {"target=_blank"}).setUrl(new String[] {"../../Savage/Tools/HeadsUpDisplays/CrossHairExample.x3d","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CrossHairExample.x3d","../../Savage/Tools/HeadsUpDisplays/CrossHairExample.wrl","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CrossHairExample.wrl"})
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(0.6,0.6,0.2)))
            .setGeometry(new Text().setString(new String[] {"BooleanFilter example"})
              .setFontStyle(new FontStyle("TextFont").setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE).setSize(0.8).setCssStyle("BOLD"))))))
      .addChild(new Transform().setTranslation(0.0,1.5,0.0)
        .addChild(new Anchor().setDescription("Click for BooleanToggle example").setParameter(new String[] {"target=_blank"}).setUrl(new String[] {"../../Savage/Tools/HeadsUpDisplays/CrossHairExample.x3d","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CrossHairExample.x3d","../../Savage/Tools/HeadsUpDisplays/CrossHairExample.wrl","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CrossHairExample.wrl"})
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(0.6,0.6,0.2)))
            .setGeometry(new Text().setString(new String[] {"BooleanToggle example"})
              .setFontStyle(new FontStyle().setUSE("TextFont"))))))
      .addChild(new Transform()
        .addChild(new Anchor().setDescription("Click for BooleanTrigger example").setParameter(new String[] {"target=_blank"}).setUrl(new String[] {"../../Savage/Tools/HeadsUpDisplays/CrossHairExample.x3d","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CrossHairExample.x3d","../../Savage/Tools/HeadsUpDisplays/CrossHairExample.wrl","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CrossHairExample.wrl"})
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(0.6,0.6,0.2)))
            .setGeometry(new Text().setString(new String[] {"BooleanTrigger example"})
              .setFontStyle(new FontStyle().setUSE("TextFont"))))))
      .addChild(new Transform().setTranslation(0.0,-1.5,0.0)
        .addChild(new Anchor().setDescription("Click for IntegerTrigger example").setParameter(new String[] {"target=_blank"}).setUrl(new String[] {"../../Savage/Tools/Animation/MaterialChoiceExample.x3d","https://savage.nps.edu/Savage/Tools/Animation/MaterialChoiceExample.x3d","../../Savage/Tools/Animation/MaterialChoiceExample.wrl","https://savage.nps.edu/Savage/Tools/Animation/MaterialChoiceExample.wrl"})
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setDiffuseColor(0.6,0.6,0.2)))
            .setGeometry(new Text().setString(new String[] {"IntegerTrigger example"})
              .setFontStyle(new FontStyle().setUSE("TextFont"))))))
      .addChild(new Transform("TimeTriggerTransform").setTranslation(0.0,-3.0,0.0)
        .addChild(new TouchSensor("TimeTriggerTouchSensor").setDescription("Click forTimeTrigger example"))
        .addChild(new Shape()
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(0.6,0.6,0.2)))
          .setGeometry(new Text().setString(new String[] {"TimeTrigger example"})
            .setFontStyle(new FontStyle().setUSE("TextFont")))))
      .addChild(new TimeTrigger("TimeTriggerNode"))
      .addChild(new TimeSensor("TimeTriggerTimeSensor").setCycleInterval(2))
      .addChild(new OrientationInterpolator("TimeTriggerOrientationInterpolator").setKey(new double[] {0.0,0.5,1.0}).setKeyValue(new MFRotation(new double[] {0.0,1.0,0.0,0.0,0.0,1.0,0.0,3.14159,0.0,1.0,0.0,6.2432})))
      .addChild(new ROUTE().setFromNode("TimeTriggerTouchSensor").setFromField("isActive").setToNode("TimeTriggerNode").setToField("set_boolean"))
      .addChild(new ROUTE().setFromNode("TimeTriggerNode").setFromField("triggerTime").setToNode("TimeTriggerTimeSensor").setToField("startTime"))
      .addChild(new ROUTE().setFromNode("TimeTriggerTimeSensor").setFromField("fraction_changed").setToNode("TimeTriggerOrientationInterpolator").setToField("set_fraction"))
      .addChild(new ROUTE().setFromNode("TimeTriggerOrientationInterpolator").setFromField("value_changed").setToNode("TimeTriggerTransform").setToField("set_rotation"))));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return EventUtilityExamples model
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
        X3D thisExampleX3dModel = new EventUtilityExamples().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.EventUtilityExamples\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.EventUtilityExamples\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}
