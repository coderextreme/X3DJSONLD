package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Networking.*;
import org.web3d.x3d.jsail.Scripting.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Text.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> Event utility node prototypes for boolean filtering and other event utility nodes. </p>
 <p> Related links: <a href="../../../development/EventUtilityPrototypes.java">EventUtilityPrototypes.java</a> source, <a href="../../../development/EventUtilityPrototypesIndex.html" target="_top">EventUtilityPrototypes catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../development/EventUtilityPrototypes.x3d">EventUtilityPrototypes.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Event utility node prototypes for boolean filtering and other event utility nodes. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Nick Polys, Tony Parisi, Don Brutzman, Justin Couch </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 25 September 2002 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 January 2020 </td>
		</tr>
		<tr style="color:burntorange">
			<td style="text-align:right; vertical-align: text-top;"> <i> warning </i> </td>
			<td> Under development, IntegerTrigger example needed. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="../../../development/EventUtilityExamples.x3d">EventUtilityExamples.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> subject </i> </td>
			<td> BooleanFilter BooleanToggle BooleanTrigger IntegerTrigger TimeTrigger </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/development/EventUtilityPrototypes.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/development/EventUtilityPrototypes.x3d</a> </td>
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

	* @author Nick Polys, Tony Parisi, Don Brutzman, Justin Couch
 */

public class EventUtilityPrototypes
{
	/** Default constructor to create this object. */
	public EventUtilityPrototypes ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_0)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("EventUtilityPrototypes.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Event utility node prototypes for boolean filtering and other event utility nodes."))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Nick Polys, Tony Parisi, Don Brutzman, Justin Couch"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("25 September 2002"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 January 2020"))
    .addMeta(new meta().setName(meta.NAME_WARNING    ).setContent("Under development, IntegerTrigger example needed."))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("EventUtilityExamples.x3d"))
    .addMeta(new meta().setName(meta.NAME_SUBJECT    ).setContent("BooleanFilter BooleanToggle BooleanTrigger IntegerTrigger TimeTrigger"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/development/EventUtilityPrototypes.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("EventUtilityPrototypes.x3d"))
    .addChild(new ProtoDeclare("BooleanFilter").setName("BooleanFilter").setAppinfo("BooleanFilter selectively passes true false or negated events.")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("set_boolean").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("set_boolean is the input value to be filtered."))
        .addField(new field().setName("inputTrue").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("inputTrue only passes a true value when set_boolean input is true."))
        .addField(new field().setName("inputFalse").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("inputFalse only passes a false value when set_boolean is false."))
        .addField(new field().setName("inputNegate").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("inputNegate provides opposite value by negating set_boolean input.")))
      .setProtoBody(new ProtoBody()
        .addChild(new Script("BooleanFilterScript").setSourceCode("\n" + 
"          " + "\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"function set_boolean (value, timestamp)" + "\n" + 
"{" + "\n" + 
"	if (value) inputTrue  = value;" + "\n" + 
"	else       inputFalse = value;" + "\n" + 
"	inputNegate = !value;" + "\n" + 
"\n" + 
"//	if (value) Browser.print ('[BooleanFilter] set_boolean=' + value + ', inputTrue='  + inputTrue  + ', inputNegate=' + inputNegate);" + "\n" + 
"//	else       Browser.print ('[BooleanFilter] set_boolean=' + value + ', inputFalse=' + inputFalse + ', inputNegate=' + inputNegate);" + "\n" + 
"}" + "\n")
          .addField(new field().setName("set_boolean").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
          .addField(new field().setName("inputTrue").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
          .addField(new field().setName("inputFalse").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
          .addField(new field().setName("inputNegate").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
          .setIS(new IS()
            .addConnect(new connect().setNodeField("set_boolean").setProtoField("set_boolean"))
            .addConnect(new connect().setNodeField("inputTrue").setProtoField("inputTrue"))
            .addConnect(new connect().setNodeField("inputFalse").setProtoField("inputFalse"))
            .addConnect(new connect().setNodeField("inputNegate").setProtoField("inputNegate"))))))
    .addComments(" ======================================== ")
    .addChild(new ProtoDeclare("BooleanToggle").setName("BooleanToggle").setAppinfo("BooleanToggle maintains state and negates output when a true input is provided.")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("set_boolean").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("If set_boolean input is true toggle state."))
        .addField(new field().setName("set_toggle").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("Reset persistent state value."))
        .addField(new field().setName("toggle").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(false).setAppinfo("Persistent state value that gets toggled or reset."))
        .addField(new field().setName("toggle_changed").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Output toggled persistent state value."))
        .addComments(" warning: toggle depends on exposedField functionality in Script node, not compatible with VRML 97. implemented as inputOnly/initializeOnly/outputOnly triplet. "))
      .setProtoBody(new ProtoBody()
        .addChild(new Group()
          .addChild(new Script("BooleanToggleScript").setSourceCode("\n" + 
"            " + "\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"function initialize ()" + "\n" + 
"{" + "\n" + 
"	if (traceEnabled) Browser.print ('[BooleanToggle] toggle=' + toggle);" + "\n" + 
"\n" + 
"}" + "\n" + 
"function set_boolean (value, timestamp)" + "\n" + 
"{" + "\n" + 
"	if (value == true)  // only toggle on true input" + "\n" + 
"	{" + "\n" + 
"		if (toggle == true) toggle = false;" + "\n" + 
"		else                toggle = true;" + "\n" + 
"	}" + "\n" + 
"	toggle_changed = toggle;" + "\n" + 
"//	Browser.print ('[BooleanToggle] traceEnabled=' + traceEnabled);" + "\n" + 
"	if (traceEnabled) Browser.print ('[BooleanToggle] set_boolean=' + value + ', toggle=' + toggle);" + "\n" + 
"}" + "\n" + 
"function set_toggle (value, timestamp)" + "\n" + 
"{" + "\n" + 
"	toggle = value;" + "\n" + 
"	toggle_changed = toggle;" + "\n" + 
"	if (traceEnabled) Browser.print ('[BooleanToggle] set_toggle=' + set_toggle);" + "\n" + 
"}" + "\n")
            .addField(new field().setName("set_boolean").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
            .addField(new field().setName("set_toggle").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
            .addField(new field().setName("toggle").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(false))
            .addField(new field().setName("toggle_changed").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addField(new field().setName("traceEnabled").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(false))
            .setIS(new IS()
              .addConnect(new connect().setNodeField("set_boolean").setProtoField("set_boolean"))
              .addConnect(new connect().setNodeField("set_toggle").setProtoField("set_toggle"))
              .addConnect(new connect().setNodeField("toggle_changed").setProtoField("toggle_changed")))))))
    .addComments(" ======================================== ")
    .addChild(new ProtoDeclare("BooleanTrigger").setName("BooleanTrigger").setAppinfo("BooleanTrigger converts time events to boolean true events.")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("set_triggerTime").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("set_triggerTime provides input time event typical event sent is TouchSensor touchTime."))
        .addField(new field().setName("triggerTrue").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("triggerTrue outputs a true value whenever a triggerTime event is received.")))
      .setProtoBody(new ProtoBody()
        .addChild(new Script("TriggerBooleanScript").setSourceCode("\n" + 
"          " + "\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"function set_triggerTime (value, timestamp)" + "\n" + 
"{" + "\n" + 
"	triggerTrue = true;" + "\n" + 
"//	Browser.print ('triggerTrue = true');" + "\n" + 
"}" + "\n")
          .addField(new field().setName("set_triggerTime").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INPUTONLY))
          .addField(new field().setName("triggerTrue").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
          .setIS(new IS()
            .addConnect(new connect().setNodeField("set_triggerTime").setProtoField("set_triggerTime"))
            .addConnect(new connect().setNodeField("triggerTrue").setProtoField("triggerTrue"))))))
    .addComments(" ======================================== ")
    .addChild(new ProtoDeclare("IntegerTrigger").setName("IntegerTrigger").setAppinfo("IntegerTrigger converts boolean true or time input events to integer value (suitable for Switch node).")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("set_boolean").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("If set_boolean input is true trigger output of integer value."))
        .addField(new field().setName("set_integerKey").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("Resets value used for output when triggered later."))
        .addField(new field().setName("integerKey").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(-1).setAppinfo("integerKey is value for output when triggered."))
        .addField(new field().setName("integerKey_changed").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("Reports change in integerKey value."))
        .addField(new field().setName("triggerValue").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("triggerValue provides integer event output matching integerKey when true set_boolean received.")))
      .setProtoBody(new ProtoBody()
        .addChild(new Group()
          .addChild(new Switch("IntegerKeyHolder").setWhichChoice(-1)
            .setIS(new IS()
              .addConnect(new connect().setNodeField("whichChoice").setProtoField("integerKey"))))
          .addChild(new Script("TriggerIntegerScript").setDirectOutput(true).setSourceCode("\n" + 
"            " + "\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"function set_boolean (inputValue, timestamp)" + "\n" + 
"{" + "\n" + 
"	if (inputValue == true)" + "\n" + 
"	{" + "\n" + 
"		integerKey = integerKeyHolderNode.whichChoice;" + "\n" + 
"		triggerValue = integerKey; // send output event" + "\n" + 
"	}" + "\n" + 
"}" + "\n" + 
"function set_integerKey (inputValue, timestamp)" + "\n" + 
"{" + "\n" + 
"	integerKey = inputValue;" + "\n" + 
"	integerKeyHolderNode.whichChoice = integerKey;" + "\n" + 
"	integerKey_changed = integerKey; // send output event" + "\n" + 
"}" + "\n")
            .addField(new field().setName("set_boolean").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
            .addField(new field().setName("set_integerKey").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTONLY))
            .addField(new field().setName("integerKeyHolderNode").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
              .addChild(new Switch().setUSE("IntegerKeyHolder").setWhichChoice(-1)))
            .addField(new field().setName("integerKey_changed").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addField(new field().setName("triggerValue").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .setIS(new IS()
              .addConnect(new connect().setNodeField("set_boolean").setProtoField("set_boolean"))
              .addConnect(new connect().setNodeField("set_integerKey").setProtoField("set_integerKey"))
              .addConnect(new connect().setNodeField("integerKey_changed").setProtoField("integerKey_changed"))
              .addConnect(new connect().setNodeField("triggerValue").setProtoField("triggerValue")))))))
    .addComments(" ======================================== ")
    .addChild(new ProtoDeclare("TimeTrigger").setName("TimeTrigger").setAppinfo("TimeTrigger converts boolean true events to time events.")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("set_boolean").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("If set_boolean input is true trigger output time value."))
        .addField(new field().setName("triggerTime").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("triggerTime is output time event sent when set_boolean input is true.")))
      .setProtoBody(new ProtoBody()
        .addChild(new Script("TriggerTimeScript").setSourceCode("\n" + 
"          " + "\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"function set_boolean (value, timestamp)" + "\n" + 
"{" + "\n" + 
"	if (value) triggerTime = timestamp;" + "\n" + 
"}" + "\n")
          .addField(new field().setName("set_boolean").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
          .addField(new field().setName("triggerTime").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
          .setIS(new IS()
            .addConnect(new connect().setNodeField("set_boolean").setProtoField("set_boolean"))
            .addConnect(new connect().setNodeField("triggerTime").setProtoField("triggerTime"))))))
    .addComments(" ======================================== ")
    .addChild(new Anchor().setDescription("EventUtilityExamples").setParameter(new String[] {"target=_blank"}).setUrl(new String[] {"EventUtilityExamples.x3d","https://www.web3d.org/x3d/content/examples/Basic/development/EventUtilityExamples.x3d","EventUtilityExamples.wrl","https://www.web3d.org/x3d/content/examples/Basic/development/EventUtilityExamples.wrl"})
      .addChild(new Shape()
        .setGeometry(new Text().setString(new String[] {"EventUtilityPrototype","defines prototypes","","Click text to see","EventUtilityExamples"})
          .setFontStyle(new FontStyle().setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE).setSize(0.9)))
        .setAppearance(new Appearance()
          .setMaterial(new Material().setDiffuseColor(1.0,1.0,0.2))))));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return EventUtilityPrototypes model
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
        X3D thisExampleX3dModel = new EventUtilityPrototypes().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.EventUtilityPrototypes\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.EventUtilityPrototypes\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}
