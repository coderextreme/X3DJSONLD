package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.DIS.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Navigation.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> Prototype definitions for DISEntityManager and DISEntityTypeMapping. </p>
 <p> Related links: <a href="../../../DistributedInteractiveSimulation/DISEntityPrototypes.java">DISEntityPrototypes.java</a> source, <a href="../../../DistributedInteractiveSimulation/DISEntityPrototypesIndex.html" target="_top">DISEntityPrototypes catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../DistributedInteractiveSimulation/DISEntityPrototypes.x3d">DISEntityPrototypes.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Prototype definitions for DISEntityManager and DISEntityTypeMapping. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Alan Hudson </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translator </i> </td>
			<td> Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 26 April 2005 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr style="color:burntorange">
			<td style="text-align:right; vertical-align: text-top;"> <i> warning </i> </td>
			<td> under development. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://www.xj3d.org/extensions/DIS.html" target="_blank">http://www.xj3d.org/extensions/DIS.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://www.yumetech.com" target="_blank">http://www.yumetech.com</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/DISEntityPrototypes.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/DISEntityPrototypes.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../DistributedInteractiveSimulation/../license.html">../license.html</a> </td>
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

	* @author Alan Hudson
 */

public class DISEntityPrototypes
{
	/** Default constructor to create this object. */
	public DISEntityPrototypes ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_0)
  .setHead(new head()
    .addComponent(new component().setName("DIS").setLevel(1))
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("DISEntityPrototypes.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Prototype definitions for DISEntityManager and DISEntityTypeMapping."))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Alan Hudson"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATOR ).setContent("Don Brutzman"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("26 April 2005"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_WARNING    ).setContent("under development."))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://www.xj3d.org/extensions/DIS.html"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://www.yumetech.com"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/DISEntityPrototypes.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addComments(" ============================================================ ")
    .addChild(new WorldInfo().setTitle("DISEntityPrototypes.x3d"))
    .addChild(new ProtoDeclare("DISEntityManager").setName("DISEntityManager").setAppinfo("A DISEntityManager node notifies content when new entities arrive or current entities leave.").setDocumentation("http://www.xj3d.org/extensions/DIS.html#DISEntityManager")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("siteID").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(0).setAppinfo("[065535]"))
        .addField(new field().setName("applicationID").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(1).setAppinfo("[065535]"))
        .addField(new field().setName("entityID").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(0).setAppinfo("[065535] field under consideration"))
        .addField(new field().setName("address").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue("localhost"))
        .addField(new field().setName("port").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setValue(0).setAppinfo("[065535]"))
        .addField(new field().setName("mapping").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("[DISEntityTypeMapping]")
          .addComments(" default NULL "))
        .addField(new field().setName("addedEntities").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("[EspduTransform]"))
        .addField(new field().setName("removedEntities").setType(field.TYPE_MFNODE).setAccessType(field.ACCESSTYPE_OUTPUTONLY).setAppinfo("[EspduTransform]"))
        .addField(new field().setName("metadata").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("[X3DMetadataObject]")
          .addComments(" default NULL ")))
      .setProtoBody(new ProtoBody()
        .addComments(" X3DChildNode node type ")
        .addChild(new Group())))
    .addComments(" ============================================================ ")
    .addChild(new ProtoDeclare("DISEntityTypeMapping").setName("DISEntityTypeMapping").setAppinfo("A DISEntityTypeMapping node provides a mapping from DIS Entity type information to an X3D model. This model is model provides a visual and behavioral representation of the entity for usage in X3D simulations. The mappings are done by selecting the most specific record which fits the entity. A value of 0 is considered a wildcard. All fields after the first zero must be zero as well.").setDocumentation("http://www.xj3d.org/extensions/DIS.html#DISEntityTypeMapping")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("kind").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(0).setAppinfo("[0255]"))
        .addField(new field().setName("domain").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(0).setAppinfo("[0255]"))
        .addField(new field().setName("country").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(0).setAppinfo("[0255]"))
        .addField(new field().setName("category").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(0).setAppinfo("[0255]"))
        .addField(new field().setName("subcategory").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(0).setAppinfo("[0255]"))
        .addField(new field().setName("specific").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(0).setAppinfo("[0255]"))
        .addField(new field().setName("extra").setType(field.TYPE_SFINT32).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(0).setAppinfo("[0255]"))
        .addField(new field().setName("identifier").setType(field.TYPE_SFSTRING).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
        .addField(new field().setName("metadata").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("[X3DMetadataObject]")
          .addComments(" default NULL ")))
      .setProtoBody(new ProtoBody()
        .addComments(" X3DInfoNode node type ")
        .setMetadata(new MetadataSet().setName("PlaceholderNode"))))
    .addComments(" ============================================================ ")
    .addComments(" Default content ")
    .addChild(new Viewpoint().setDescription("default viewpoint").setPosition(0.0,0.0,110.0))
    .addChild(new EspduTransform())
    .addChild(new TransmitterPdu().setRelativeAntennaLocation(0.0,0.0,0.0).setTransmitFrequencyBandwidth(0.0))
    .addChild(new ProtoInstance("DISEntityManager", "EntityManager").setContainerField("children")
      .addFieldValue(new fieldValue().setName("address").setValue("224.2.181.145"))
      .addFieldValue(new fieldValue().setName("port").setValue(62040))
      .addFieldValue(new fieldValue().setName("siteID").setValue(0))
      .addFieldValue(new fieldValue().setName("applicationID").setValue(1))
      .addFieldValue(new fieldValue().setName("mapping")
        .addComments(" n.b. nested prototypes ")
        .addChild(new ProtoInstance("DISEntityTypeMapping").setContainerField("children")
          .addFieldValue(new fieldValue().setName("kind").setValue(1))
          .addFieldValue(new fieldValue().setName("domain").setValue(1))
          .addFieldValue(new fieldValue().setName("country").setValue(225))
          .addFieldValue(new fieldValue().setName("category").setValue(1))
          .addFieldValue(new fieldValue().setName("subcategory").setValue(1))
          .addFieldValue(new fieldValue().setName("specific").setValue(1))
          .addFieldValue(new fieldValue().setName("identifier").setValue("m1a1tank.x3dv")))
        .addChild(new ProtoInstance("DISEntityTypeMapping").setContainerField("children")
          .addFieldValue(new fieldValue().setName("kind").setValue(1))
          .addFieldValue(new fieldValue().setName("domain").setValue(3))
          .addFieldValue(new fieldValue().setName("country").setValue(225))
          .addFieldValue(new fieldValue().setName("category").setValue(4))
          .addFieldValue(new fieldValue().setName("identifier").setValue("dog.x3dv")))
        .addChild(new ProtoInstance("DISEntityTypeMapping").setContainerField("children")
          .addFieldValue(new fieldValue().setName("kind").setValue(1))
          .addFieldValue(new fieldValue().setName("domain").setValue(1))
          .addFieldValue(new fieldValue().setName("identifier").setValue("land.x3dv")))
        .addChild(new ProtoInstance("DISEntityTypeMapping").setContainerField("children")
          .addFieldValue(new fieldValue().setName("kind").setValue(1))
          .addFieldValue(new fieldValue().setName("domain").setValue(1))
          .addFieldValue(new fieldValue().setName("country").setValue(225))
          .addFieldValue(new fieldValue().setName("identifier").setValue("USAland.x3dv")))
        .addChild(new ProtoInstance("DISEntityTypeMapping").setContainerField("children")
          .addFieldValue(new fieldValue().setName("kind").setValue(1))
          .addFieldValue(new fieldValue().setName("domain").setValue(3))
          .addFieldValue(new fieldValue().setName("specific").setValue(1))
          .addFieldValue(new fieldValue().setName("identifier").setValue("surface.x3dv")))))
    .addChild(new Group("EntityHolder"))
    .addChild(new ROUTE().setFromNode("EntityManager").setFromField("addedEntities").setToNode("EntityHolder").setToField("addChildren"))
    .addChild(new ROUTE().setFromNode("EntityManager").setFromField("removedEntities").setToNode("EntityHolder").setToField("removeChildren")));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return DISEntityPrototypes model
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
        X3D thisExampleX3dModel = new DISEntityPrototypes().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.DISEntityPrototypes\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.DISEntityPrototypes\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}
