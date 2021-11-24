package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.EnvironmentalEffects.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Networking.*;
import org.web3d.x3d.jsail.Rendering.*;
import org.web3d.x3d.jsail.Scripting.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Text.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> New X3D Metadata nodes in Core component (MetadataBoolean MetadataDouble MetadataFloat MetadataInteger MetadataSet MetadataString) implemented as prototypes for backwards compatibility with VRML 97. </p>
 <p> Related links: <a href="../../../development/MetadataPrototypes.java">MetadataPrototypes.java</a> source, <a href="../../../development/MetadataPrototypesIndex.html" target="_top">MetadataPrototypes catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../development/MetadataPrototypes.x3d">MetadataPrototypes.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> New X3D Metadata nodes in Core component (MetadataBoolean MetadataDouble MetadataFloat MetadataInteger MetadataSet MetadataString) implemented as prototypes for backwards compatibility with VRML 97. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 17 November 2003 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 12 March 2021 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="../../../development/MetadataExamples.x3d">MetadataExamples.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> subject </i> </td>
			<td> Metadata nodes, X3D Core component (MetadataBoolean MetadataDouble MetadataFloat MetadataInteger MetadataSet MetadataString) </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/core.html#Metadata" target="_blank">https://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/core.html#Metadata</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/core.html#X3DMetadataObject" target="_blank">https://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/core.html#X3DMetadataObject</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/core.html#Nodereference" target="_blank">https://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/core.html#Nodereference</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/development/MetadataPrototypes.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/development/MetadataPrototypes.x3d</a> </td>
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

public class MetadataPrototypes
{
	/** Default constructor to create this object. */
	public MetadataPrototypes ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_0)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("MetadataPrototypes.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("New X3D Metadata nodes in Core component (MetadataBoolean MetadataDouble MetadataFloat MetadataInteger MetadataSet MetadataString) implemented as prototypes for backwards compatibility with VRML 97."))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Don Brutzman"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("17 November 2003"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("12 March 2021"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("MetadataExamples.x3d"))
    .addMeta(new meta().setName(meta.NAME_SUBJECT    ).setContent("Metadata nodes, X3D Core component (MetadataBoolean MetadataDouble MetadataFloat MetadataInteger MetadataSet MetadataString)"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/core.html#Metadata"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/core.html#X3DMetadataObject"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/core.html#Nodereference"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/development/MetadataPrototypes.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addComments(" ==================== ")
    .addChild(new ProtoDeclare("MetadataBoolean").setName("MetadataBoolean").setAppinfo("MetadataBoolean contains a list of booleans in the value field.")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("name").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
        .addField(new field().setName("value").setType(field.TYPE_MFBOOL).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
        .addField(new field().setName("reference").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
        .addField(new field().setName("metadata").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Metadata node only")
          .addComments(" initialization node (if any) goes here ")))
      .setProtoBody(new ProtoBody()
        .addChild(new WorldInfo().setInfo(new String[] {"WorldInfo as first node in the ProtoBody precludes any possible rendering of further nodes in this prototype"}))
        .addChild(new Group()
          .setIS(new IS()
            .addConnect(new connect().setNodeField("metadata").setProtoField("metadata")))
          .addComments(" name holder ")
          .addChild(new Viewpoint()
            .setIS(new IS()
              .addConnect(new connect().setNodeField("description").setProtoField("name"))))
          .addComments(" value holder; IS/connect possibilities are limited since no MFBool fields exist in other VRML/X3D nodes ")
          .addComments(" Alternative: no metadata holder, since there is no exposedField SFNode in VRML 97. metadata SFNode simply sits in the ProtoInterface. Run-time instantiation support may vary. ")
          .addChild(new Script().setUrl(new String[] {"ignoreWarning.js","https://www.web3d.org/x3d/content/examples/Basic/development/ignoreWarning.js"})
            .addField(new field().setName("booleanArray").setType(field.TYPE_MFBOOL).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
            .setIS(new IS()
              .addConnect(new connect().setNodeField("booleanArray").setProtoField("value"))))
          .addComments(" reference holder ")
          .addChild(new Viewpoint()
            .setIS(new IS()
              .addConnect(new connect().setNodeField("description").setProtoField("reference")))))))
    .addComments(" ==================== ")
    .addChild(new ProtoDeclare("MetadataDouble").setName("MetadataDouble").setAppinfo("MetadataDouble contains a list of double-precision floating-point numbers in the value field.")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("name").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
        .addField(new field().setName("value").setType(field.TYPE_MFDOUBLE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
        .addField(new field().setName("reference").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
        .addField(new field().setName("metadata").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("[X3DMetadataObject]")
          .addComments(" Specification initialization: NULL node ")))
      .setProtoBody(new ProtoBody()
        .addChild(new WorldInfo().setInfo(new String[] {"WorldInfo as first node in the ProtoBody precludes any possible rendering of further nodes in this prototype"}))
        .addChild(new Group()
          .setIS(new IS()
            .addConnect(new connect().setNodeField("metadata").setProtoField("metadata")))
          .addComments(" name holder ")
          .addChild(new Viewpoint()
            .setIS(new IS()
              .addConnect(new connect().setNodeField("description").setProtoField("name"))))
          .addComments(" value holder: X3D MFDouble maps to VRML 97MFFloat ")
          .addChild(new Shape()
            .setGeometry(new Text().setString(new String[] {""})
              .setIS(new IS()
                .addConnect(new connect().setNodeField("length").setProtoField("value"))))
            .setAppearance(new Appearance("HideWarnings2")
              .addComments(" note that each Prototype has an independent DEF/USE namespace, and thus must avoid re-using identical DEF names within multiple prototype declarations in order to pass all validation requirements. ")
              .setMaterial(new Material())))
          .addComments(" reference holder ")
          .addChild(new Viewpoint()
            .setIS(new IS()
              .addConnect(new connect().setNodeField("description").setProtoField("reference"))))
          .addComments(" no metadata holder, since there is no exposedField SFNode in VRML 97. metadata SFNode simply sits in the ProtoInterface. Run-time instantiation support may vary. "))))
    .addComments(" ==================== ")
    .addChild(new ProtoDeclare("MetadataFloat").setName("MetadataFloat").setAppinfo("MetadataFloat contains a list of floating-point numbers in the value field.")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("name").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
        .addField(new field().setName("value").setType(field.TYPE_MFFLOAT).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
        .addField(new field().setName("reference").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
        .addField(new field().setName("metadata").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("[X3DMetadataObject]")
          .addComments(" Specification initialization: NULL node ")))
      .setProtoBody(new ProtoBody()
        .addChild(new WorldInfo().setInfo(new String[] {"WorldInfo as first node in the ProtoBody precludes any possible rendering of further nodes in this prototype"}))
        .addChild(new Group()
          .setIS(new IS()
            .addConnect(new connect().setNodeField("metadata").setProtoField("metadata")))
          .addComments(" name holder ")
          .addChild(new Viewpoint()
            .setIS(new IS()
              .addConnect(new connect().setNodeField("description").setProtoField("name"))))
          .addComments(" value holder ")
          .addChild(new Shape()
            .setGeometry(new Text().setString(new String[] {""})
              .setIS(new IS()
                .addConnect(new connect().setNodeField("length").setProtoField("value"))))
            .setAppearance(new Appearance("HideWarnings3")
              .addComments(" note that each Prototype has an independent DEF/USE namespace, and thus must avoid re-using identical DEF names within multiple prototype declarations in order to pass all validation requirements. ")
              .setMaterial(new Material())))
          .addComments(" reference holder ")
          .addChild(new Viewpoint()
            .setIS(new IS()
              .addConnect(new connect().setNodeField("description").setProtoField("reference"))))
          .addComments(" no metadata holder, since there is no exposedField SFNode in VRML 97. metadata SFNode simply sits in the ProtoInterface. Run-time instantiation support may vary. "))))
    .addComments(" ==================== ")
    .addChild(new ProtoDeclare("MetadataInteger").setName("MetadataInteger").setAppinfo("MetadataInteger contains a list of 32-bit integer numbers in the value field.")
      .addComments(" VRML 97 has no native exposedField MFInt32, and so must split value accessors to match available accessTypes. ")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("name").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
        .addField(new field().setName("value").setType(field.TYPE_MFINT32).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
        .addField(new field().setName("set_value").setType(field.TYPE_MFINT32).setAccessType(field.ACCESSTYPE_INPUTONLY))
        .addField(new field().setName("reference").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
        .addField(new field().setName("metadata").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("[X3DMetadataObject]")
          .addComments(" Specification initialization: NULL node ")))
      .setProtoBody(new ProtoBody()
        .addChild(new WorldInfo().setInfo(new String[] {"WorldInfo as first node in the ProtoBody precludes any possible rendering of further nodes in this prototype"}))
        .addChild(new Group()
          .setIS(new IS()
            .addConnect(new connect().setNodeField("metadata").setProtoField("metadata")))
          .addComments(" name holder ")
          .addChild(new Viewpoint()
            .setIS(new IS()
              .addConnect(new connect().setNodeField("description").setProtoField("name"))))
          .addComments(" value holder ")
          .addChild(new Shape()
            .setGeometry(new IndexedLineSet()
              .setIS(new IS()
                .addConnect(new connect().setNodeField("colorIndex").setProtoField("value"))
                .addConnect(new connect().setNodeField("set_colorIndex").setProtoField("set_value"))))
            .setAppearance(new Appearance("HideWarnings4")
              .addComments(" note that each Prototype has an independent DEF/USE namespace, and thus must avoid re-using identical DEF names within multiple prototype declarations in order to pass all validation requirements. ")
              .setMaterial(new Material().setEmissiveColor(0.8,0.8,0.8))))
          .addComments(" reference holder ")
          .addChild(new Viewpoint()
            .setIS(new IS()
              .addConnect(new connect().setNodeField("description").setProtoField("reference"))))
          .addComments(" no metadata holder, since there is no exposedField SFNode in VRML 97. metadata SFNode simply sits in the ProtoInterface. Run-time instantiation support may vary. "))))
    .addComments(" ==================== ")
    .addChild(new ProtoDeclare("MetadataSet").setName("MetadataSet").setAppinfo("MetadataSet contains a list of Metadata nodes in the value field. MetadataSet can contain other MetadataSet nodes.")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("name").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
        .addField(new field().setName("value").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT)
          .addComments(" Specification initialization: NULL node "))
        .addField(new field().setName("reference").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
        .addField(new field().setName("metadata").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("[X3DMetadataObject]")
          .addComments(" Specification initialization: NULL node ")))
      .setProtoBody(new ProtoBody()
        .addChild(new WorldInfo().setInfo(new String[] {"WorldInfo as first node in the ProtoBody precludes any possible rendering of further nodes in this prototype"}))
        .addChild(new Group()
          .setIS(new IS()
            .addConnect(new connect().setNodeField("metadata").setProtoField("metadata")))
          .addComments(" name holder ")
          .addChild(new Viewpoint()
            .setIS(new IS()
              .addConnect(new connect().setNodeField("description").setProtoField("name"))))
          .addComments(" value holder ")
          .addChild(new Group()
            .setIS(new IS()
              .addConnect(new connect().setNodeField("children").setProtoField("value"))))
          .addComments(" reference holder ")
          .addChild(new Viewpoint()
            .setIS(new IS()
              .addConnect(new connect().setNodeField("description").setProtoField("reference"))))
          .addComments(" no metadata holder, since there is no exposedField SFNode in VRML 97. metadata SFNode simply sits in the ProtoInterface. Run-time instantiation support may vary. "))))
    .addComments(" ==================== ")
    .addChild(new ProtoDeclare("MetadataString").setName("MetadataString").setAppinfo("MetadataString contains a list of strings in the value field.")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("name").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
        .addField(new field().setName("value").setType(field.TYPE_MFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
        .addField(new field().setName("reference").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT))
        .addField(new field().setName("metadata").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Metadata node only")
          .addComments(" Specification initialization: NULL node ")))
      .setProtoBody(new ProtoBody()
        .addChild(new WorldInfo().setInfo(new String[] {"WorldInfo as first node in the ProtoBody precludes any possible rendering of further nodes in this prototype"}))
        .addChild(new Group()
          .setIS(new IS()
            .addConnect(new connect().setNodeField("metadata").setProtoField("metadata")))
          .addComments(" name holder ")
          .addChild(new Viewpoint()
            .setIS(new IS()
              .addConnect(new connect().setNodeField("description").setProtoField("name"))))
          .addComments(" value holder ")
          .addChild(new Shape()
            .setGeometry(new Text()
              .setIS(new IS()
                .addConnect(new connect().setNodeField("string").setProtoField("value"))))
            .setAppearance(new Appearance("HideWarnings5")
              .addComments(" note that each Prototype has an independent DEF/USE namespace, and thus must avoid re-using identical DEF names within multiple prototype declarations in order to pass all validation requirements. ")
              .setMaterial(new Material())))
          .addComments(" reference holder ")
          .addChild(new Viewpoint()
            .setIS(new IS()
              .addConnect(new connect().setNodeField("description").setProtoField("reference"))))
          .addComments(" no metadata holder, since there is no exposedField SFNode in VRML 97. metadata SFNode simply sits in the ProtoInterface. Run-time instantiation support may vary. "))))
    .addComments(" ==================== ")
    .addChild(new Background().setGroundColor(new MFColor(new double[] {0.25,0.25,0.25})).setSkyColor(new MFColor(new double[] {0.25,0.25,0.25})))
    .addChild(new Anchor("LinkToExamples").setDescription("link to examples").setUrl(new String[] {"MetadataExamples.x3d","https://www.web3d.org/x3d/content/examples/Basic/development/MetadataExamples.x3d","MetadataExamples.wrl","https://www.web3d.org/x3d/content/examples/Basic/development/MetadataExamples.wrl"})
      .addChild(new Shape()
        .setAppearance(new Appearance()
          .setMaterial(new Material().setDiffuseColor(0.8,0.6,0.2)))
        .setGeometry(new Text().setString(new String[] {"MetadataPrototypes","is a developmental file.","Click this text to view","MetadataExamples"})
          .setFontStyle(new FontStyle().setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE).setSize(0.75))))));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return MetadataPrototypes model
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
        X3D thisExampleX3dModel = new MetadataPrototypes().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.MetadataPrototypes\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.MetadataPrototypes\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}
