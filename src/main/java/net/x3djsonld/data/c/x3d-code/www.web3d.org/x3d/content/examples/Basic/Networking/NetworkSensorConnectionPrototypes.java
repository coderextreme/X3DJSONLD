package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.KeyDeviceSensor.*;
import org.web3d.x3d.jsail.Scripting.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Text.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> Prototypes for NetworkSensor and Connection nodes. </p>
 <p> Related links: <a href="../../../Networking/NetworkSensorConnectionPrototypes.java">NetworkSensorConnectionPrototypes.java</a> source, <a href="../../../Networking/NetworkSensorConnectionPrototypesIndex.html" target="_top">NetworkSensorConnectionPrototypes catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../Networking/NetworkSensorConnectionPrototypes.x3d">NetworkSensorConnectionPrototypes.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Prototypes for NetworkSensor and Connection nodes </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Don Brutzman, Chris Thorne, Don McGregor, Shun-Yun Hu </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 14 March 2008 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr style="color:burntorange">
			<td style="text-align:right; vertical-align: text-top;"> <i> warning </i> </td>
			<td> under development </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="../../../Networking/NetworkSensorConnectionNodes.html">NetworkSensorConnectionNodes.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://www.xj3d.org/tutorials/general_sai.html" target="_blank">http://www.xj3d.org/tutorials/general_sai.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/x3d/specifications/ISO-IEC-CD-19775-2.2/Part02/X3D_SAI.html" target="_blank">https://www.web3d.org/x3d/specifications/ISO-IEC-CD-19775-2.2/Part02/X3D_SAI.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/x3d/specifications/ISO-IEC-19777-2-X3DLanguageBindings-Java/Part2/X3D_Java.html" target="_blank">https://www.web3d.org/x3d/specifications/ISO-IEC-19777-2-X3DLanguageBindings-Java/Part2/X3D_Java.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> subject </i> </td>
			<td> Prototypes for NetworkSensor and Connection nodes </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/Networking/NetworkSensorConnectionPrototypes.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/Networking/NetworkSensorConnectionPrototypes.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../Networking/../license.html">../license.html</a> </td>
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

	* @author Don Brutzman, Chris Thorne, Don McGregor, Shun-Yun Hu
 */

public class NetworkSensorConnectionPrototypes
{
	/** Default constructor to create this object. */
	public NetworkSensorConnectionPrototypes ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_1)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("NetworkSensorConnectionPrototypes.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Prototypes for NetworkSensor and Connection nodes"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Don Brutzman, Chris Thorne, Don McGregor, Shun-Yun Hu"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("14 March 2008"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_WARNING    ).setContent("under development"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("NetworkSensorConnectionNodes.html"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://www.xj3d.org/tutorials/general_sai.html"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://www.web3d.org/x3d/specifications/ISO-IEC-CD-19775-2.2/Part02/X3D_SAI.html"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://www.web3d.org/x3d/specifications/ISO-IEC-19777-2-X3DLanguageBindings-Java/Part2/X3D_Java.html"))
    .addMeta(new meta().setName(meta.NAME_SUBJECT    ).setContent("Prototypes for NetworkSensor and Connection nodes"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/Networking/NetworkSensorConnectionPrototypes.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("NetworkSensorConnectionPrototypes.x3d"))
    .addChild(new ProtoDeclare("NetworkSensor").setName("NetworkSensor")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("enabled").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(true))
        .addField(new field().setName("metadata").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("X3DMetadataObject node type only")
          .addComments(" Metadata initialization node is NULL "))
        .addField(new field().setName("isActive").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
        .addField(new field().setName("connection").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Connection node only")
          .addComments(" Default Connection node goes here "))
        .addField(new field().setName("httpRequest").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTONLY))
        .addField(new field().setName("httpResponse").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
        .addField(new field().setName("channelId").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue("true"))
        .addComments(" TODO: how to handle user-defined fields? ")
        .addComments(" perhaps corresponding MFString arrays for fieldName, fieldType, fieldAccessType, fieldInitialValues ")
        .addComments(" for now we'll simply try to get a MFString field to work ")
        .addField(new field().setName("textInput").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTONLY).setAppinfo("ROUTE StringSensor output here"))
        .addField(new field().setName("textOutput").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("ROUTE this output to Text node string field"))
        .addComments(" TODO: can we get consistent type for textInput? "))
      .setProtoBody(new ProtoBody()
        .addComments(" First node determines node type of prototype ")
        .addChild(new Script("NetworkSensorScript").setUrl(new String[] {"NetworkSensorScript.class","https://www.web3d.org/x3d/content/examples/Networking/NetworkSensorScript.class"})
          .addField(new field().setName("enabled").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
          .addField(new field().setName("metadata").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
          .addField(new field().setName("isActive").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
          .addField(new field().setName("connection").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setAppinfo("Connection node only"))
          .addField(new field().setName("httpRequest").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTONLY))
          .addField(new field().setName("httpResponse").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
          .addField(new field().setName("channelId").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
          .setIS(new IS()
            .addConnect(new connect().setNodeField("enabled").setProtoField("enabled"))
            .addConnect(new connect().setNodeField("metadata").setProtoField("metadata"))
            .addConnect(new connect().setNodeField("isActive").setProtoField("isActive"))
            .addConnect(new connect().setNodeField("connection").setProtoField("connection"))
            .addConnect(new connect().setNodeField("httpRequest").setProtoField("httpRequest"))
            .addConnect(new connect().setNodeField("httpResponse").setProtoField("httpResponse"))
            .addConnect(new connect().setNodeField("channelId").setProtoField("channelId"))))
        .addComments(" Subsequent nodes do not render, but still must be a valid X3D subgraph ")))
    .addChild(new ProtoDeclare("Connection").setName("Connection")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("enabled").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(true))
        .addField(new field().setName("metadata").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT)
          .addComments(" Metadata initialization node is NULL "))
        .addField(new field().setName("isActive").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
        .addField(new field().setName("url").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(new String[] {"x3dp://localhost:80"}))
        .addComments(" 1 for HTTP, 2 for HTTP 1.1, 3 for TCP/IP, 4 for UDP, 5 for multicast ")
        .addComments(" spec TODO: change these code numbers to string enumerations instead ")
        .addField(new field().setName("protocol").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(0))
        .addField(new field().setName("timeOut").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(0))
        .addField(new field().setName("secure").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY)))
      .setProtoBody(new ProtoBody()
        .addComments(" First node determines node type of prototype ")
        .addChild(new Script("ConnectionScript").setUrl(new String[] {"ConnectionScript.class","https://www.web3d.org/x3d/content/examples/Networking/ConnectionScript.class"})
          .addField(new field().setName("enabled").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
          .addField(new field().setName("isActive").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
          .addField(new field().setName("url").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
          .addField(new field().setName("protocol").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
          .addField(new field().setName("timeOut").setType(field.TYPE_SFTIME).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
          .addField(new field().setName("secure").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
          .setIS(new IS()
            .addConnect(new connect().setNodeField("enabled").setProtoField("enabled"))
            .addConnect(new connect().setNodeField("isActive").setProtoField("isActive"))
            .addConnect(new connect().setNodeField("url").setProtoField("url"))
            .addConnect(new connect().setNodeField("protocol").setProtoField("protocol"))
            .addConnect(new connect().setNodeField("timeOut").setProtoField("timeOut"))
            .addConnect(new connect().setNodeField("secure").setProtoField("secure"))))
        .addComments(" Subsequent nodes do not render, but still must be a valid X3D subgraph ")))
    .addComments(" We'll put our initial example next. First the listener will output networked messages to a Text node ")
    .addChild(new Shape()
      .setGeometry(new Text("MessageOutput").setString(new String[] {"NetworkSensor messages will appear here"})
        .setFontStyle(new FontStyle().setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE)))
      .setAppearance(new Appearance()
        .setMaterial(new Material().setAmbientIntensity(0.25).setDiffuseColor(0.374008,0.0,0.748016).setShininess(0.4).setSpecularColor(0.909091,0.909091,0.909091).setTransparency(0.35))))
    .addComments(" Only need a single Connection definition for this example ")
    .addChild(new ProtoInstance("Connection", "OurNetworkChannel").setContainerField("children")
      .addFieldValue(new fieldValue().setName("url").setValue(new String[] {"x3dp://localhost:80"}))
      .addComments(" protocol 1=http ")
      .addFieldValue(new fieldValue().setName("protocol").setValue(1))
      .addFieldValue(new fieldValue().setName("timeOut").setValue(10))
      .addFieldValue(new fieldValue().setName("secure").setValue(false)))
    .addComments(" Here is the listener that connects and sends strings to the Text node ")
    .addChild(new ProtoInstance("NetworkSensor", "TextListener").setContainerField("children")
      .addFieldValue(new fieldValue().setName("connection")
        .addChild(new ProtoInstance().setUSE("OurNetworkChannel").setContainerField("children")))
      .addFieldValue(new fieldValue().setName("channelId").setValue("78")))
    .addComments(" TODO: once a single string can successfully be sent, insert an intermediate Script to remember last 10 strings ")
    .addChild(new ROUTE().setFromNode("TextListener").setFromField("textOutput").setToNode("MessageOutput").setToField("string"))
    .addComments(" Now capture text from local keyboard, send to scenes listening to this network connection ")
    .addChild(new ProtoInstance("NetworkSensor", "TextSender").setContainerField("children")
      .addFieldValue(new fieldValue().setName("connection")
        .addChild(new ProtoInstance().setUSE("OurNetworkChannel").setContainerField("children")))
      .addFieldValue(new fieldValue().setName("channelId").setValue("78")))
    .addChild(new StringSensor("KeyboardDetector"))
    .addChild(new ROUTE().setFromNode("KeyboardDetector").setFromField("finalText").setToNode("TextSender").setToField("textInput"))
    .addComments(" done. we should now be able to type text and have it appear in the output for whoever's using the same scene. "));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return NetworkSensorConnectionPrototypes model
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
        X3D thisExampleX3dModel = new NetworkSensorConnectionPrototypes().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.NetworkSensorConnectionPrototypes\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.NetworkSensorConnectionPrototypes\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}
