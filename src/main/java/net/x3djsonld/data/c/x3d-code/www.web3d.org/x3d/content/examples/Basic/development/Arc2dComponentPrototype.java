package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Rendering.*;
import org.web3d.x3d.jsail.Scripting.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> X3D Geometry2D component node, implemented as prototype for backwards compatibility with VRML 97. Arc2D specifies a 2D linear circular arc. </p>
 <p> Related links: <a href="../../../development/Arc2dComponentPrototype.java">Arc2dComponentPrototype.java</a> source, <a href="../../../development/Arc2dComponentPrototypeIndex.html" target="_top">Arc2dComponentPrototype catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../development/Arc2dComponentPrototype.x3d">Arc2dComponentPrototype.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> X3D Geometry2D component node, implemented as prototype for backwards compatibility with VRML 97. Arc2D specifies a 2D linear circular arc. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Christos Kalogrias, Don Brutzman, Ken Curtin, Duane Davis </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 14 November 2003 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/geometry2D.html" target="_blank">https://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/geometry2D.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> subject </i> </td>
			<td> Geometry2D component node (Arc2D) </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/development/Arc2dComponentPrototype.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/development/Arc2dComponentPrototype.x3d</a> </td>
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

	* @author Christos Kalogrias, Don Brutzman, Ken Curtin, Duane Davis
 */

public class Arc2dComponentPrototype
{
	/** Default constructor to create this object. */
	public Arc2dComponentPrototype ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_1)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("Arc2dComponentPrototype.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("X3D Geometry2D component node, implemented as prototype for backwards compatibility with VRML 97. Arc2D specifies a 2D linear circular arc."))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Christos Kalogrias, Don Brutzman, Ken Curtin, Duane Davis"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("14 November 2003"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/geometry2D.html"))
    .addMeta(new meta().setName(meta.NAME_SUBJECT    ).setContent("Geometry2D component node (Arc2D)"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/development/Arc2dComponentPrototype.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addComments(" ==================== ")
    .addChild(new WorldInfo().setTitle("Arc2dComponentPrototype.x3d"))
    .addChild(new ProtoDeclare("Arc2D").setName("Arc2D")
      .setProtoInterface(new ProtoInterface()
        .addField(new field().setName("startAngle").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(0))
        .addField(new field().setName("endAngle").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(1.5707963265))
        .addField(new field().setName("radius").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(1))
        .addField(new field().setName("metadata").setType(field.TYPE_SFNODE).setAccessType(field.ACCESSTYPE_INPUTOUTPUT).setAppinfo("Metadata node only")))
      .setProtoBody(new ProtoBody()
        .addComments(" Only the first node counts as the node type of a prototype. This node must be a geometry node. ")
        .addChild(new IndexedLineSet("ArcIndexPoints").setDEF("ArcIndexPoints")
          .setCoord(new Coordinate("Arc3DPoints")))
        .addComments(" Any nodes after initial node in a ProtoBody is not rendered. ")
        .addChild(new Group()
          .setIS(new IS()
            .addConnect(new connect().setNodeField("metadata").setProtoField("metadata")))
          .addChild(new Script("Arc2dToFaceSet3d").setSourceCode("\n" + 
"            " + "\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"function initialize()" + "\n" + 
"{" + "\n" + 
"   numOfPoints = 100;" + "\n" + 
"\n" + 
"   if (radius < 0)" + "\n" + 
"   {" + "\n" + 
"      Browser.print ('[Arc2D] Warning:  invalid value, radius=' + value + ' must instead be >= 0');" + "\n" + 
"   }" + "\n" + 
"\n" + 
"   if ((startAngle < 0) || (startAngle >= 2 * Math.PI))" + "\n" + 
"   {" + "\n" + 
"      Browser.print ('[Arc2D] Warning: startAngle=' + startAngle + ' must be within range [0..2pi)');" + "\n" + 
"   }" + "\n" + 
"\n" + 
"   if ((endAngle < 0) || (endAngle >= 2 * Math.PI))" + "\n" + 
"   {" + "\n" + 
"      Browser.print ('[Arc2D] Warning: endAngle=' + endAngle + ' must be within range [0..2pi)');" + "\n" + 
"   }" + "\n" + 
"\n" + 
"   // equal startAngle, endAngle means draw full circle." + "\n" + 
"   // high out-of-range endAngle is OK for local computation." + "\n" + 
"   if (startAngle >= endAngle)" + "\n" + 
"      endAngle += (2 * Math.PI);" + "\n" + 
"\n" + 
"   differAng = Math.abs((endAngle - startAngle))/numOfPoints;" + "\n" + 
"\n" + 
"   for (i = 0; i <= numOfPoints; i++)" + "\n" + 
"   {" + "\n" + 
"      arcSet3d[i] = new SFVec3f (radius * Math.cos(startAngle + i * differAng), radius * Math.sin(startAngle + i * differAng), 0.0);" + "\n" + 
"      arcIndexSet3d[i] = i;" + "\n" + 
"   }" + "\n" + 
"\n" + 
"} // initialize" + "\n")
            .addField(new field().setName("startAngle").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
            .addField(new field().setName("endAngle").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
            .addField(new field().setName("radius").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY))
            .addField(new field().setName("arcSet3d").setType(field.TYPE_MFVEC3F).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .addField(new field().setName("arcIndexSet3d").setType(field.TYPE_MFINT32).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
            .setIS(new IS()
              .addConnect(new connect().setNodeField("startAngle").setProtoField("startAngle"))
              .addConnect(new connect().setNodeField("endAngle").setProtoField("endAngle"))
              .addConnect(new connect().setNodeField("radius").setProtoField("radius"))))
          .addChild(new ROUTE().setFromNode("Arc2dToFaceSet3d").setFromField("arcSet3d").setToNode("Arc3DPoints").setToField("point"))
          .addChild(new ROUTE().setFromNode("Arc2dToFaceSet3d").setFromField("arcIndexSet3d").setToNode("ArcIndexPoints").setToField("set_coordIndex"))))));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return Arc2dComponentPrototype model
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
        X3D thisExampleX3dModel = new Arc2dComponentPrototype().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.Arc2dComponentPrototype\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.Arc2dComponentPrototype\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}
