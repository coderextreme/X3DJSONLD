package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.KeyDeviceSensor.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.PointingDeviceSensor.*;
import org.web3d.x3d.jsail.Scripting.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Text.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> A simple scene to show KeySensor functionality using Text nodes. </p>
 <p> Related links: <a href="../../../../Sensors/Keyboard/KeySensorActivationKeySwitchTest.java">KeySensorActivationKeySwitchTest.java</a> source, <a href="../../../../Sensors/Keyboard/KeySensorActivationKeySwitchTestIndex.html" target="_top">KeySensorActivationKeySwitchTest catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../../Sensors/Keyboard/KeySensorActivationKeySwitchTest.x3d">KeySensorActivationKeySwitchTest.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> A simple scene to show KeySensor functionality using Text nodes. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 22 June 2001 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr style="color:burntorange">
			<td style="text-align:right; vertical-align: text-top;"> <i> warning </i> </td>
			<td> This doesn't work because there is no KeySensor implementation yet! Prototype script (written in Java) or native node support for KeySensor is needed. </td>
		</tr>
		<tr style="color:burntorange">
			<td style="text-align:right; vertical-align: text-top;"> <i> warning </i> </td>
			<td> enabled accessType needs to be changed to exposedField once supported by Script capabilities </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/x3d/specification-2000july/part1/nodesDef.html#KeySensor" target="_blank">https://www.web3d.org/x3d/specification-2000july/part1/nodesDef.html#KeySensor</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/x3d/sai/javadoc/org/web3d/x3d/sai/Core/KeySensor.html" target="_blank">https://www.web3d.org/x3d/sai/javadoc/org/web3d/x3d/sai/Core/KeySensor.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/development/KeySensorActivationKeySwitchTest.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/development/KeySensorActivationKeySwitchTest.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/ConformanceNist/Sensors/Keyboard/KeySensorActivationKeySwitchTest.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/ConformanceNist/Sensors/Keyboard/KeySensorActivationKeySwitchTest.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> subject </i> </td>
			<td> KeySensor </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../../Sensors/Keyboard/../../license.html">../../license.html</a> </td>
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

public class KeySensorActivationKeySwitchTest
{
	/** Default constructor to create this object. */
	public KeySensorActivationKeySwitchTest ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_0)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("KeySensorActivationKeySwitchTest.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("A simple scene to show KeySensor functionality using Text nodes."))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Don Brutzman"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("22 June 2001"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_WARNING    ).setContent("This doesn't work because there is no KeySensor implementation yet! Prototype script (written in Java) or native node support for KeySensor is needed."))
    .addMeta(new meta().setName(meta.NAME_WARNING    ).setContent("enabled accessType needs to be changed to exposedField once supported by Script capabilities"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://www.web3d.org/x3d/specification-2000july/part1/nodesDef.html#KeySensor"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://www.web3d.org/x3d/sai/javadoc/org/web3d/x3d/sai/Core/KeySensor.html"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://www.web3d.org/x3d/content/examples/development/KeySensorActivationKeySwitchTest.x3d"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/ConformanceNist/Sensors/Keyboard/KeySensorActivationKeySwitchTest.x3d"))
    .addMeta(new meta().setName(meta.NAME_SUBJECT    ).setContent("KeySensor"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../../license.html")))
  .setScene(new Scene()
    .addComments(" The KeySensor prototype can be omitted if native-node Keysensor support is provided by the VRML browser. ")
    .addChild(new WorldInfo().setTitle("KeySensorActivationKeySwitchTest.x3d"))
    .addChild(new ProtoDeclare("KeySensor").setName("KeySensor")
      .setProtoInterface(new ProtoInterface()
        .addComments(" warning: enabled needs to become an exposedField once Scripts support exposedField ")
        .addField(new field().setName("enabled").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(true))
        .addField(new field().setName("set_enabled").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
        .addField(new field().setName("enabled_changed").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
        .addField(new field().setName("isActive").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
        .addField(new field().setName("keyPress").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
        .addField(new field().setName("keyRelease").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
        .addField(new field().setName("actionKeyPress").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
        .addField(new field().setName("actionKeyRelease").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
        .addField(new field().setName("altKey").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
        .addField(new field().setName("controlKey").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
        .addField(new field().setName("shiftKey").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY)))
      .setProtoBody(new ProtoBody()
        .addComments(" First node in prototype indicates node type, use Group so that this sensor is ChildNodeType. ")
        .addChild(new Group()
          .addChild(new Script("KeySensorScript").setSourceCode("\n" + 
"            " + "\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"// Native support for KeySensor node" + "\n" + 
"// or keyboard-access code needed!" + "\n")
            .addField(new field().setName("altKey").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addField(new field().setName("keyPress").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addField(new field().setName("set_enabled").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
            .addField(new field().setName("keyRelease").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addField(new field().setName("enabled").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
            .addField(new field().setName("shiftKey").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addField(new field().setName("actionKeyRelease").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addField(new field().setName("isActive").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addField(new field().setName("actionKeyPress").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addField(new field().setName("enabled_changed").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addField(new field().setName("controlKey").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .setIS(new IS()
              .addConnect(new connect().setNodeField("enabled").setProtoField("enabled"))
              .addConnect(new connect().setNodeField("set_enabled").setProtoField("set_enabled"))
              .addConnect(new connect().setNodeField("enabled_changed").setProtoField("enabled_changed"))
              .addConnect(new connect().setNodeField("isActive").setProtoField("isActive"))
              .addConnect(new connect().setNodeField("keyPress").setProtoField("keyPress"))
              .addConnect(new connect().setNodeField("keyRelease").setProtoField("keyRelease"))
              .addConnect(new connect().setNodeField("actionKeyPress").setProtoField("actionKeyPress"))
              .addConnect(new connect().setNodeField("actionKeyRelease").setProtoField("actionKeyRelease"))
              .addConnect(new connect().setNodeField("altKey").setProtoField("altKey"))
              .addConnect(new connect().setNodeField("controlKey").setProtoField("controlKey"))
              .addConnect(new connect().setNodeField("shiftKey").setProtoField("shiftKey")))))))
    .addComments(" ============================================ ")
    .addComments(" Enabling this KeySensor (from TouchSensor.isActive) disables all other KeySensors. ")
    .addChild(new KeySensor("SingleKeySensor").setEnabled(false))
    .addChild(new Billboard()
      .addChild(new Transform().setTranslation(0.0,2.0,0.0)
        .addChild(new Shape()
          .setGeometry(new Text().setString(new String[] {"Touch this text to enable","KeySensor activation keys then","press activation keys to test"})
            .setFontStyle(new FontStyle("MiddleMiddle").setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE)))
          .setAppearance(new Appearance()
            .setMaterial(new Material().setDiffuseColor(0.9,0.9,0.4))))
        .addChild(new TouchSensor("StartMessageTouched").setDescription("Touch this text to enable KeySensor activation keys then press activation keys to test"))
        .addChild(new ROUTE().setFromNode("StartMessageTouched").setFromField("isOver").setToNode("SingleKeySensor").setToField("enabled")))
      .addChild(new Transform().setTranslation(0.0,-1.0,0.0)
        .addChild(new Switch("ActivationKeyMessageSwitch").setWhichChoice(0)
          .addComments(" ROUTE is not treated as a selectable child of Switch ")
          .addChild(new ROUTE().setFromNode("SingleKeySensor").setFromField("actionKeyPress").setToNode("ActivationKeyMessageSwitch").setToField("whichChoice"))
          .addChild(new Shape("Zero")
            .setGeometry(new Text().setString(new String[] {"No activation keypress sensed..."})
              .setFontStyle(new FontStyle().setUSE("MiddleMiddle")))
            .setAppearance(new Appearance("SelectionAppearance")
              .setMaterial(new Material().setDiffuseColor(0.0,1.0,0.0))))
          .addChild(new Shape("One")
            .setGeometry(new Text().setString(new String[] {"F1"})
              .setFontStyle(new FontStyle().setUSE("MiddleMiddle")))
            .setAppearance(new Appearance().setUSE("SelectionAppearance")))
          .addChild(new Shape("Two")
            .setGeometry(new Text().setString(new String[] {"F2"})
              .setFontStyle(new FontStyle().setUSE("MiddleMiddle")))
            .setAppearance(new Appearance().setUSE("SelectionAppearance")))
          .addChild(new Shape("Three")
            .setGeometry(new Text().setString(new String[] {"F3"})
              .setFontStyle(new FontStyle().setUSE("MiddleMiddle")))
            .setAppearance(new Appearance().setUSE("SelectionAppearance")))
          .addChild(new Shape("Four")
            .setGeometry(new Text().setString(new String[] {"F4"})
              .setFontStyle(new FontStyle().setUSE("MiddleMiddle")))
            .setAppearance(new Appearance().setUSE("SelectionAppearance")))
          .addChild(new Shape("Five")
            .setGeometry(new Text().setString(new String[] {"F5"})
              .setFontStyle(new FontStyle().setUSE("MiddleMiddle")))
            .setAppearance(new Appearance().setUSE("SelectionAppearance")))
          .addChild(new Shape("Six")
            .setGeometry(new Text().setString(new String[] {"F6"})
              .setFontStyle(new FontStyle().setUSE("MiddleMiddle")))
            .setAppearance(new Appearance().setUSE("SelectionAppearance")))
          .addChild(new Shape("Seven")
            .setGeometry(new Text().setString(new String[] {"F7"})
              .setFontStyle(new FontStyle().setUSE("MiddleMiddle")))
            .setAppearance(new Appearance().setUSE("SelectionAppearance")))
          .addChild(new Shape("Eight")
            .setGeometry(new Text().setString(new String[] {"F8"})
              .setFontStyle(new FontStyle().setUSE("MiddleMiddle")))
            .setAppearance(new Appearance().setUSE("SelectionAppearance")))
          .addChild(new Shape("Nine")
            .setGeometry(new Text().setString(new String[] {"F9"})
              .setFontStyle(new FontStyle().setUSE("MiddleMiddle")))
            .setAppearance(new Appearance().setUSE("SelectionAppearance")))
          .addChild(new Shape("Ten")
            .setGeometry(new Text().setString(new String[] {"F10"})
              .setFontStyle(new FontStyle().setUSE("MiddleMiddle")))
            .setAppearance(new Appearance().setUSE("SelectionAppearance")))
          .addChild(new Shape("Eleven")
            .setGeometry(new Text().setString(new String[] {"F11"})
              .setFontStyle(new FontStyle().setUSE("MiddleMiddle")))
            .setAppearance(new Appearance().setUSE("SelectionAppearance")))
          .addChild(new Shape("Twelve")
            .setGeometry(new Text().setString(new String[] {"F12"})
              .setFontStyle(new FontStyle().setUSE("MiddleMiddle")))
            .setAppearance(new Appearance().setUSE("SelectionAppearance")))
          .addChild(new Shape("Thirteen")
            .setGeometry(new Text().setString(new String[] {"13: HOME"})
              .setFontStyle(new FontStyle().setUSE("MiddleMiddle")))
            .setAppearance(new Appearance().setUSE("SelectionAppearance")))
          .addChild(new Shape("Fourteen")
            .setGeometry(new Text().setString(new String[] {"14: END"})
              .setFontStyle(new FontStyle().setUSE("MiddleMiddle")))
            .setAppearance(new Appearance().setUSE("SelectionAppearance")))
          .addChild(new Shape("Fifteen")
            .setGeometry(new Text().setString(new String[] {"15: LEFT"})
              .setFontStyle(new FontStyle().setUSE("MiddleMiddle")))
            .setAppearance(new Appearance().setUSE("SelectionAppearance")))
          .addChild(new Shape("Sixteen")
            .setGeometry(new Text().setString(new String[] {"16: RIGHT"})
              .setFontStyle(new FontStyle().setUSE("MiddleMiddle")))
            .setAppearance(new Appearance().setUSE("SelectionAppearance")))
          .addChild(new Shape("Seventeen")
            .setGeometry(new Text().setString(new String[] {"17: UP"})
              .setFontStyle(new FontStyle().setUSE("MiddleMiddle")))
            .setAppearance(new Appearance().setUSE("SelectionAppearance")))
          .addChild(new Shape("Eighteen")
            .setGeometry(new Text().setString(new String[] {"18: DOWN"})
              .setFontStyle(new FontStyle().setUSE("MiddleMiddle")))
            .setAppearance(new Appearance().setUSE("SelectionAppearance")))
          .addChild(new Shape("Nineteen")
            .setGeometry(new Text().setString(new String[] {"19: PGUP"})
              .setFontStyle(new FontStyle().setUSE("MiddleMiddle")))
            .setAppearance(new Appearance().setUSE("SelectionAppearance")))
          .addChild(new Shape("Twenty")
            .setGeometry(new Text().setString(new String[] {"20: PGDN"})
              .setFontStyle(new FontStyle().setUSE("MiddleMiddle")))
            .setAppearance(new Appearance().setUSE("SelectionAppearance")))))));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return KeySensorActivationKeySwitchTest model
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
        X3D thisExampleX3dModel = new KeySensorActivationKeySwitchTest().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.KeySensorActivationKeySwitchTest\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.KeySensorActivationKeySwitchTest\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}
