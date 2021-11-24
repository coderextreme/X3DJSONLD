package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Networking.*;
import org.web3d.x3d.jsail.PointingDeviceSensor.*;
import org.web3d.x3d.jsail.Scripting.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Text.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> Specification example: on-demand inlining via GeoInline for scene resource management. </p>
 <p> Related links: <a href="../../../Geospatial/A3_GeoInline.java">A3_GeoInline.java</a> source, <a href="../../../Geospatial/A3_GeoInlineIndex.html" target="_top">A3_GeoInline catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../Geospatial/A3_GeoInline.x3d">A3_GeoInline.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Martin Reddy SRI, original example </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Don Brutzman NPS, X3D encoding </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 26 June 2000 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 17 June 2020 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Specification example: on-demand inlining via GeoInline for scene resource management. </td>
		</tr>
		<tr style="color:burntorange">
			<td style="text-align:right; vertical-align: text-top;"> <i> warning </i> </td>
			<td> GeoVRML 1.1 GeoInline functionality is embedded in X3D Inline node, GeoInline no longer supported in X3D. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://www.geovrml.org/1.0/doc/examples.html" target="_blank">http://www.geovrml.org/1.0/doc/examples.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> originals/geoinlineTest.wrl </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> VRML 97 encoding <a href="http://www.geovrml.org/1.0/doc/examples/geoinline.wrl" target="_blank">http://www.geovrml.org/1.0/doc/examples/geoinline.wrl</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/Geospatial/A3_GeoInline.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/Geospatial/A3_GeoInline.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../Geospatial/../license.html">../license.html</a> </td>
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

	* @author Martin Reddy SRI, original example
	* @author Don Brutzman NPS, X3D encoding
 */

public class A3_GeoInline
{
	/** Default constructor to create this object. */
	public A3_GeoInline ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_3)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("A3_GeoInline.x3d"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Martin Reddy SRI, original example"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Don Brutzman NPS, X3D encoding"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("26 June 2000"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("17 June 2020"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Specification example: on-demand inlining via GeoInline for scene resource management."))
    .addMeta(new meta().setName(meta.NAME_WARNING    ).setContent("GeoVRML 1.1 GeoInline functionality is embedded in X3D Inline node, GeoInline no longer supported in X3D."))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://www.geovrml.org/1.0/doc/examples.html"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("originals/geoinlineTest.wrl"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("VRML 97 encoding http://www.geovrml.org/1.0/doc/examples/geoinline.wrl"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/Geospatial/A3_GeoInline.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("A3_GeoInline.x3d"))
    .addChild(new Group()
      .addComments(" Original GeoVRML GeoInline node replaced by improved X3D Inline node ")
      .addChild(new Inline("TestInline").setLoad(false).setUrl(new String[] {"BoxSimple.x3d","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/BoxSimple.x3d","BoxSimple.wrl","https://www.web3d.org/x3d/content/examples/Basic/Geospatial/BoxSimple.wrl"}))
      .addComments(" don't load TestInline until 'true' event sent "))
    .addComments(" Two cones that are used to load and unload the URL for the box ")
    .addChild(new Transform().setScale(0.5,0.5,0.5).setTranslation(2.0,1.0,0.0)
      .addChild(new TouchSensor("LoadTrigger").setDescription("click to load inlined Box"))
      .addChild(new Shape()
        .setAppearance(new Appearance()
          .setMaterial(new Material().setDiffuseColor(1.0,0.0,0.0)))
        .setGeometry(new Cone())))
    .addChild(new Transform().setScale(0.5,0.5,0.5).setTranslation(1.5,1.2,0.3)
      .addChild(new Shape()
        .setGeometry(new Text().setLength(new double[] {0.0}).setString(new String[] {"Load Cube"})
          .setFontStyle(new FontStyle()))
        .setAppearance(new Appearance()
          .setMaterial(new Material().setDiffuseColor(0.0,0.6,0.3)))))
    .addChild(new Transform().setRotation(1.0,0.0,0.0,3.1415).setScale(0.5,0.5,0.5).setTranslation(2.0,-1.0,0.0)
      .addChild(new TouchSensor("UnLoadTrigger").setDescription("click to unload inlined Box"))
      .addChild(new Shape()
        .setAppearance(new Appearance()
          .setMaterial(new Material().setDiffuseColor(0.0,0.0,1.0)))
        .setGeometry(new Cone())))
    .addChild(new Transform().setScale(0.5,0.5,0.5).setTranslation(1.5,-1.5,0.3)
      .addChild(new Shape()
        .setGeometry(new Text().setLength(new double[] {0.0}).setString(new String[] {"Unload Cube"})
          .setFontStyle(new FontStyle()))
        .setAppearance(new Appearance()
          .setMaterial(new Material().setDiffuseColor(0.6,0.3,0.0)))))
    .addComments(" a couple of scripts to process the events from clicking on the cones ")
    .addChild(new Script("ReturnTrue").setSourceCode("\n" + 
"      " + "\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"function set_value( value ) {" + "\n" + 
"  if ( value == true ) value_changed = true;" + "\n" + 
"}" + "\n")
      .addField(new field().setName("set_value").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("value_changed").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY)))
    .addChild(new Script("ReturnFalse").setSourceCode("\n" + 
"      " + "\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"function set_value( value ) {" + "\n" + 
"  if ( value == true ) value_changed = false;" + "\n" + 
"}" + "\n")
      .addField(new field().setName("set_value").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
      .addField(new field().setName("value_changed").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_OUTPUTONLY)))
    .addChild(new ROUTE().setFromNode("LoadTrigger").setFromField("isActive").setToNode("ReturnTrue").setToField("set_value"))
    .addChild(new ROUTE().setFromNode("ReturnTrue").setFromField("value_changed").setToNode("TestInline").setToField("set_load"))
    .addChild(new ROUTE().setFromNode("UnLoadTrigger").setFromField("isActive").setToNode("ReturnFalse").setToField("set_value"))
    .addChild(new ROUTE().setFromNode("ReturnFalse").setFromField("value_changed").setToNode("TestInline").setToField("set_load")));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return A3_GeoInline model
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
        X3D thisExampleX3dModel = new A3_GeoInline().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.A3_GeoInline\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.A3_GeoInline\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}
