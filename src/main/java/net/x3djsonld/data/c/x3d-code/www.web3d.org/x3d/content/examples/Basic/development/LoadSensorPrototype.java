package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Networking.*;
import org.web3d.x3d.jsail.Scripting.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Text.*;
import org.web3d.x3d.jsail.Time.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> LoadSensor prototype for VRML 97 use. Assumes correct loading of resources and provides output events based on timeOut delay. </p>
 <p> Related links: <a href="../../../development/LoadSensorPrototype.java">LoadSensorPrototype.java</a> source, <a href="../../../development/LoadSensorPrototypeIndex.html" target="_top">LoadSensorPrototype catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../development/LoadSensorPrototype.x3d">LoadSensorPrototype.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> LoadSensor prototype for VRML 97 use. Assumes correct loading of resources and provides output events based on timeOut delay. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 26 December 2003 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> hint </i> </td>
			<td> Set LoadSensorScript traceEnabled true/false to enable/disable console trace text. </td>
		</tr>
		<tr style="color:burntorange">
			<td style="text-align:right; vertical-align: text-top;"> <i> warning </i> </td>
			<td> This LoadSensor implementation for VRML 97 only emulates LoadSensor events and cannot sense actual loading of watchList resources. Use an X3D-compliant browser for complete LoadSensor capability. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="../../../development/LoadSensorExample.x3d">LoadSensorExample.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> LoadSensorPrototypeInitializationTrace.txt </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/development/LoadSensorPrototype.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/development/LoadSensorPrototype.x3d</a> </td>
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

public class LoadSensorPrototype
{
	/** Default constructor to create this object. */
	public LoadSensorPrototype ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_0)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("LoadSensorPrototype.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("LoadSensor prototype for VRML 97 use. Assumes correct loading of resources and provides output events based on timeOut delay."))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("26 December 2003"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Don Brutzman"))
    .addMeta(new meta().setName(meta.NAME_HINT       ).setContent("Set LoadSensorScript traceEnabled true/false to enable/disable console trace text."))
    .addMeta(new meta().setName(meta.NAME_WARNING    ).setContent("This LoadSensor implementation for VRML 97 only emulates LoadSensor events and cannot sense actual loading of watchList resources. Use an X3D-compliant browser for complete LoadSensor capability."))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("LoadSensorExample.x3d"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("LoadSensorPrototypeInitializationTrace.txt"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/development/LoadSensorPrototype.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("LoadSensorPrototype.x3d"))
    .addChild(new ProtoDeclare("LoadSensor").setName("LoadSensor").setAppinfo("LoadSensor monitors the progress and success of downloading URL elements over a network. Only nodes that contain a valid URL field (i.e. descendants of X3DUrlObject) may be specified as watchList children. Multiple nodes may be watched with a single LoadSensor.").setDocumentation("https://www.web3d.org/specifications/ISO-IEC-19775/Part01/components/networking.html#LoadSensor")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("enabled").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(true).setAppinfo("Enables/disables the sensor node."))
        .addField(new field().setName("timeOut").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(0).setAppinfo("Maximum time for which the LoadSensor will monitor loading starting from when the sensor becomes active. timeOut=0 ordinarily indicates an indefinite time out period; i.e. the LoadSensor will wait until loading has completed either with success or failure timeOut=0 causes immediate loading for this implementation."))
        .addField(new field().setName("watchList").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Zero or more nodes with url fields to monitor."))
        .addField(new field().setName("set_watchList").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("Change watchList MFNode array."))
        .addField(new field().setName("isActive").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("isActive=true when loading begins isActive=false when loading ends."))
        .addField(new field().setName("isLoaded").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("isLoaded=true when loading succeeds isLoaded=false when loading fails or timeOut reached."))
        .addField(new field().setName("loadTime").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("loadTime event is generated when loading has successfully completed."))
        .addField(new field().setName("progress").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("progress [0..1] indicates fraction of loading complete."))
        .addField(new field().setName("metadata").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("associated Metadata node.")))
      .setProtoBody(new ProtoBody()
        .addChild(new Group()
          .addChild(new TimeSensor("Clock").setLoop(true)
            .setIS(new IS()
              .addConnect(new connect().setNodeField("enabled").setProtoField("enabled"))
              .addConnect(new connect().setNodeField("cycleInterval").setProtoField("timeOut"))))
          .addChild(new Script("LoadSensorScript").setDirectOutput(true).setSourceCode("\n" + 
"            " + "\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"function initialize ()" + "\n" + 
"{" + "\n" + 
"	enabled = ClockNode.enabled;" + "\n" + 
"	tracePrint ('initialize() enabled=' + enabled);" + "\n" + 
"	if (enabled)" + "\n" + 
"	{" + "\n" + 
"		isActive = true;" + "\n" + 
"		// isLoaded event only sent upon completion" + "\n" + 
"		progress = 0.0;" + "\n" + 
"		tracePrintEvents ();" + "\n" + 
"		timeOut = ClockNode.cycleInterval;" + "\n" + 
"		tracePrint ('timeOut=' + timeOut);" + "\n" + 
"		if (timeOut <= 0.0) // instantaneous, no loop" + "\n" + 
"		{" + "\n" + 
"			isActive = false;" + "\n" + 
"			isLoaded = true;" + "\n" + 
"			progress = 1.0;" + "\n" + 
"			loadTime = timestamp;" + "\n" + 
"			tracePrintEvents ();" + "\n" + 
"		}" + "\n" + 
"	}" + "\n" + 
"}" + "\n" + 
"function fraction (value, timestamp)" + "\n" + 
"{" + "\n" + 
"	enabled = ClockNode.enabled;" + "\n" + 
"	if (enabled)" + "\n" + 
"		tracePrint ('progress=' + value + ', priorFraction=' + priorFraction);" + "\n" + 
"	// use priorFraction to check for looping, then stop loop" + "\n" + 
"	if (enabled && ((value >=1) || (value < priorFraction)))" + "\n" + 
"	{" + "\n" + 
"		isActive = false;" + "\n" + 
"		isLoaded = true;" + "\n" + 
"		loadTime = timestamp;" + "\n" + 
"		progress = 1;" + "\n" + 
"		tracePrintEvents ();" + "\n" + 
"		tracePrint ('complete');" + "\n" + 
"                loopStart = true;" + "\n" + 
"	}" + "\n" + 
"	else progress= value; // output event" + "\n" + 
"	priorFraction = progress;" + "\n" + 
"}" + "\n" + 
"function set_watchList (value, timestamp)" + "\n" + 
"{" + "\n" + 
"	watchList = value;" + "\n" + 
"}" + "\n" + 
"function tracePrintEvents ()" + "\n" + 
"{" + "\n" + 
"	tracePrint ('isActive=' + isActive);" + "\n" + 
"	tracePrint ('isLoaded=' + isLoaded);" + "\n" + 
"	tracePrint ('loadTime=' + loadTime);" + "\n" + 
"	tracePrint ('progress=' + progress);" + "\n" + 
"}" + "\n" + 
"function tracePrint (outputString)" + "\n" + 
"{" + "\n" + 
"	if (traceEnabled) Browser.print ('[LoadSensor]' + outputString);" + "\n" + 
"}" + "\n" + 
"function alwaysPrint (outputString)" + "\n" + 
"{" + "\n" + 
"	Browser.print ('[LoadSensor]' + outputString);" + "\n" + 
"}" + "\n")
            .addField(new field().setName("ClockNode").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY)
              .addChild(new TimeSensor().setUSE("Clock")))
            .addField(new field().setName("loopStart").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addField(new field().setName("fraction").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INPUTONLY))
            .addField(new field().setName("priorFraction").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(0))
            .addField(new field().setName("progress").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addField(new field().setName("watchList").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
            .addField(new field().setName("set_watchList").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTONLY))
            .addField(new field().setName("isActive").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addField(new field().setName("isLoaded").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addField(new field().setName("loadTime").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addField(new field().setName("traceEnabled").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(false))
            .setIS(new IS()
              .addConnect(new connect().setNodeField("watchList").setProtoField("watchList"))
              .addConnect(new connect().setNodeField("set_watchList").setProtoField("set_watchList"))
              .addConnect(new connect().setNodeField("isActive").setProtoField("isActive"))
              .addConnect(new connect().setNodeField("isLoaded").setProtoField("isLoaded"))
              .addConnect(new connect().setNodeField("loadTime").setProtoField("loadTime"))
              .addConnect(new connect().setNodeField("progress").setProtoField("progress"))))
          .addChild(new ROUTE().setFromNode("LoadSensorScript").setFromField("loopStart").setToNode("Clock").setToField("startTime"))
          .addChild(new ROUTE().setFromNode("LoadSensorScript").setFromField("isActive").setToNode("Clock").setToField("enabled"))
          .addChild(new ROUTE().setFromNode("Clock").setFromField("fraction_changed").setToNode("LoadSensorScript").setToField("fraction"))
          .addChild(new Collision().setEnabled(false)
            .setIS(new IS()
              .addConnect(new connect().setNodeField("proxy").setProtoField("metadata")))))))
    .addComments(" ====================================== ")
    .addComments(" Example use ")
    .addChild(new Anchor().setDescription("LoadSensorExample").setParameter(new String[] {"target=_blank"}).setUrl(new String[] {"LoadSensorExample.x3d","https://www.web3d.org/x3d/content/examples/Basic/development/LoadSensorExample.x3d","LoadSensorExample.wrl","https://www.web3d.org/x3d/content/examples/Basic/development/LoadSensorExample.wrl"})
      .addChild(new Shape()
        .setGeometry(new Text().setString(new String[] {"LoadSensorPrototype","defines a prototype","","Click on this text to see","LoadSensorExample scene"})
          .setFontStyle(new FontStyle().setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE).setSize(0.7)))
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
	 * @return LoadSensorPrototype model
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
        X3D thisExampleX3dModel = new LoadSensorPrototype().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.LoadSensorPrototype\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.LoadSensorPrototype\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}
