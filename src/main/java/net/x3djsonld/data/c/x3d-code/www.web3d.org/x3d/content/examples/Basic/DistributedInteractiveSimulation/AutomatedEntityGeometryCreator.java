package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.DIS.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Grouping.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> Example scene for DISEntityManager and DISEntityTypeMapping, showing design pattern to detect presence of new DIS entities and automatically produce EspduTransform holding an Inline copy of the appropriate model. </p>
 <p> Related links: <a href="../../../DistributedInteractiveSimulation/AutomatedEntityGeometryCreator.java">AutomatedEntityGeometryCreator.java</a> source, <a href="../../../DistributedInteractiveSimulation/AutomatedEntityGeometryCreatorIndex.html" target="_top">AutomatedEntityGeometryCreator catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../DistributedInteractiveSimulation/AutomatedEntityGeometryCreator.x3d">AutomatedEntityGeometryCreator.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Example scene for DISEntityManager and DISEntityTypeMapping, showing design pattern to detect presence of new DIS entities and automatically produce EspduTransform holding an Inline copy of the appropriate model. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Alan Hudson and Justin Couch </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translator </i> </td>
			<td> Don Brutzman </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 4 March 2005 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translated </i> </td>
			<td> 8 January 2009 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="../../../DistributedInteractiveSimulation/AutomatedEntityGeometryCreatorOriginal.x3dv">AutomatedEntityGeometryCreatorOriginal.x3dv</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://www.xj3d.org/extensions/DIS_examples.html" target="_blank">http://www.xj3d.org/extensions/DIS_examples.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/x3d/specifications/ISO-IEC-FDIS-19775-1.2-X3D-AbstractSpecification/Part01/components/dis.html#DISEntityManager" target="_blank">https://www.web3d.org/x3d/specifications/ISO-IEC-FDIS-19775-1.2-X3D-AbstractSpecification/Part01/components/dis.html#DISEntityManager</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> subject </i> </td>
			<td> IEEE Distributed Interactive Simulation DIS </td>
		</tr>
		<tr style="color:burntorange">
			<td style="text-align:right; vertical-align: text-top;"> <i> warning </i> </td>
			<td> under development </td>
		</tr>
		<tr style="color:red">
			<td style="text-align:right; vertical-align: text-top;"> <i> error </i> </td>
			<td> missing script source </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://bugzilla.xj3d.org/show_bug.cgi?id=561" target="_blank">http://bugzilla.xj3d.org/show_bug.cgi?id=561</a> </td>
		</tr>
		<tr style="color:burntorange">
			<td style="text-align:right; vertical-align: text-top;"> <i> warning </i> </td>
			<td> conversion of .x3dv original version failed </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://bugzilla.xj3d.org/show_bug.cgi?id=563" target="_blank">http://bugzilla.xj3d.org/show_bug.cgi?id=563</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/AutomatedEntityGeometryCreator.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/AutomatedEntityGeometryCreator.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> Xj3D, <a href="http://www.xj3d.org" target="_blank">http://www.xj3d.org</a> </td>
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

	* @author Alan Hudson and Justin Couch
 */

public class AutomatedEntityGeometryCreator
{
	/** Default constructor to create this object. */
	public AutomatedEntityGeometryCreator ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_2)
  .setHead(new head()
    .addComponent(new component().setName("DIS").setLevel(2))
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("AutomatedEntityGeometryCreator.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Example scene for DISEntityManager and DISEntityTypeMapping, showing design pattern to detect presence of new DIS entities and automatically produce EspduTransform holding an Inline copy of the appropriate model."))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Alan Hudson and Justin Couch"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATOR ).setContent("Don Brutzman"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("4 March 2005"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATED ).setContent("8 January 2009"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("AutomatedEntityGeometryCreatorOriginal.x3dv"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://www.xj3d.org/extensions/DIS_examples.html"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://www.web3d.org/x3d/specifications/ISO-IEC-FDIS-19775-1.2-X3D-AbstractSpecification/Part01/components/dis.html#DISEntityManager"))
    .addMeta(new meta().setName(meta.NAME_SUBJECT    ).setContent("IEEE Distributed Interactive Simulation DIS"))
    .addMeta(new meta().setName(meta.NAME_WARNING    ).setContent("under development"))
    .addMeta(new meta().setName(meta.NAME_ERROR      ).setContent("missing script source"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://bugzilla.xj3d.org/show_bug.cgi?id=561"))
    .addMeta(new meta().setName(meta.NAME_WARNING    ).setContent("conversion of .x3dv original version failed"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://bugzilla.xj3d.org/show_bug.cgi?id=563"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/AutomatedEntityGeometryCreator.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("Xj3D, http://www.xj3d.org"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .addComments(" TODO editor pane: add tooltips to various DIS editor panes ")
  .addComments(" TODO: change notional url connections to actual models ")
  .addComments(" TODO: integrate Open-DIS enumerations for field selections wherever appropriate ")
  .addComments(" TODO: add test file for playback and console output or description of results ")
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("AutomatedEntityGeometryCreator.x3d"))
    .addChild(new DISEntityManager("EntityManager").setAddress("224.2.181.145").setPort(62040)
      .addChild(new DISEntityTypeMapping().setCategory(1).setCountry(225).setDomain(1).setKind(1).setUrl(new String[] {"usatank.x3d","https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/usatank.x3d"}))
      .addChild(new DISEntityTypeMapping().setCategory(4).setCountry(225).setDomain(3).setKind(1).setUrl(new String[] {"ddg.x3d","https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/ddg.x3d"}))
      .addChild(new DISEntityTypeMapping().setDomain(1).setKind(1).setUrl(new String[] {"land.x3d","https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/land.x3d"}))
      .addChild(new DISEntityTypeMapping().setDomain(3).setKind(1).setUrl(new String[] {"surface.x3d","https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/surface.x3d"})))
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
	 * @return AutomatedEntityGeometryCreator model
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
        X3D thisExampleX3dModel = new AutomatedEntityGeometryCreator().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.AutomatedEntityGeometryCreator\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.AutomatedEntityGeometryCreator\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}
