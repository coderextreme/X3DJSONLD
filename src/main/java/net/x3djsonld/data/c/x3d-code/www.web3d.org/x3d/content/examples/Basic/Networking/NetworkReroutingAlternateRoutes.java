package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Networking.*;
import org.web3d.x3d.jsail.PointingDeviceSensor.*;
import org.web3d.x3d.jsail.Scripting.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Text.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> This scene demonstrates that even though a minimal interference secondary route has been identified in case of link failure, (a) both routes may be invalid due to an overlap at a critical link, and (b) some reasonable third path may exist to route packets. Note that the hop count is larger (by 1) for each successive route. By pushing the right rear button, the critical link that overlaps the primary and secondary route will turn red opaque. </p>
 <p> Related links: <a href="../../../Networking/NetworkReroutingAlternateRoutes.java">NetworkReroutingAlternateRoutes.java</a> source, <a href="../../../Networking/NetworkReroutingAlternateRoutesIndex.html" target="_top">NetworkReroutingAlternateRoutes catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../Networking/NetworkReroutingAlternateRoutes.x3d">NetworkReroutingAlternateRoutes.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> This scene demonstrates that even though a minimal interference secondary route has been identified in case of link failure, (a) both routes may be invalid due to an overlap at a critical link, and (b) some reasonable third path may exist to route packets. Note that the hop count is larger (by 1) for each successive route. By pushing the right rear button, the critical link that overlaps the primary and secondary route will turn red opaque. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Bill Fischer </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translator </i> </td>
			<td> Xeena </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> Image </i> </td>
			<td> <a href="../../../Networking/NetworkReroutingAlternateRoutes.png">NetworkReroutingAlternateRoutes.png</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/Networking/NetworkReroutingAlternateRoutes.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/Networking/NetworkReroutingAlternateRoutes.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="../../../Networking/NetworkReroutingRoutes.x3d">NetworkReroutingRoutes.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="../../../Networking/NetworkReroutingNetwork.x3d">NetworkReroutingNetwork.x3d</a> </td>
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

	* @author Bill Fischer
 */

public class NetworkReroutingAlternateRoutes
{
	/** Default constructor to create this object. */
	public NetworkReroutingAlternateRoutes ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_0)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("NetworkReroutingAlternateRoutes.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("This scene demonstrates that even though a minimal interference secondary route has been identified in case of link failure, (a) both routes may be invalid due to an overlap at a critical link, and (b) some reasonable third path may exist to route packets. Note that the hop count is larger (by 1) for each successive route. By pushing the right rear button, the critical link that overlaps the primary and secondary route will turn red opaque."))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Bill Fischer"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATOR ).setContent("Xeena"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_IMAGE      ).setContent("NetworkReroutingAlternateRoutes.png"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/Networking/NetworkReroutingAlternateRoutes.x3d"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("NetworkReroutingRoutes.x3d"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("NetworkReroutingNetwork.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("NetworkReroutingAlternateRoutes.x3d"))
    .addChild(new Viewpoint("default").setDescription("Network Rerouting Alternate Routes").setOrientation(1.0,0.0,0.0,-.5).setPosition(0.0,6.0,10.0))
    .addChild(new Group("default_network")
      .addChild(new Transform()
        .addChild(new Inline("network").setUrl(new String[] {"NetworkReroutingNetwork.x3d","https://www.web3d.org/x3d/content/examples/Basic/Networking/NetworkReroutingNetwork.x3d","NetworkReroutingNetwork.wrl","https://www.web3d.org/x3d/content/examples/Basic/Networking/NetworkReroutingNetwork.wrl"}))))
    .addChild(new Group()
      .addChild(new Transform()
        .addChild(new Inline("routes").setUrl(new String[] {"NetworkReroutingRoutes.x3d","https://www.web3d.org/x3d/content/examples/Basic/Networking/NetworkReroutingRoutes.x3d","NetworkReroutingRoutes.wrl","https://www.web3d.org/x3d/content/examples/Basic/Networking/NetworkReroutingRoutes.wrl"}))))
    .addChild(new Group()
      .addChild(new Transform().setRotation(0.0,1.0,0.0,-.785).setTranslation(-3.0,-.5,1.0)
        .addChild(new Transform().setRotation(0.0,0.0,1.0,1.57)
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material("pipe_material").setDiffuseColor(.8,0.0,0.0).setTransparency(1)))
            .setGeometry(new Cylinder().setRadius(.1)))))
      .addChild(new Transform().setRotation(0.0,1.0,0.0,.785).setTranslation(-1.0,-.5,1.0)
        .addChild(new Transform().setRotation(0.0,0.0,1.0,1.57)
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material("pipe_material2").setDiffuseColor(.8,0.0,0.0).setTransparency(1)))
            .setGeometry(new Cylinder().setRadius(.1)))))
      .addChild(new Transform().setRotation(0.0,1.0,0.0,.785).setTranslation(-3.0,-.5,3.0)
        .addChild(new Transform().setRotation(0.0,0.0,1.0,1.57)
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setUSE("pipe_material2")))
            .setGeometry(new Cylinder().setRadius(.1)))))
      .addChild(new Transform().setRotation(0.0,1.0,0.0,-.785).setTranslation(-3.0,-.5,1.0)
        .addChild(new Transform().setRotation(0.0,0.0,1.0,1.57)
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setUSE("pipe_material2")))
            .setGeometry(new Cylinder().setRadius(.1)))))
      .addChild(new Transform())
      .addChild(new Transform().setScale(.4,.4,.4).setTranslation(4.0,-.5,-6.0)
        .addChild(new Group()
          .addChild(new Transform().setScale(1.0,1.5,1.0).setTranslation(0.0,-.5,0.0)
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(.5,.5,.5)))
              .setGeometry(new Box())))
          .addChild(new Shape()
            .setAppearance(new Appearance()
              .setMaterial(new Material().setEmissiveColor(1.0,0.0,0.0)))
            .setGeometry(new Cylinder().setHeight(2.5).setRadius(.5)))
          .addChild(new TouchSensor("red_pipe").setDescription("#1 red pipe touchsensor"))
          .addChild(new Transform().setTranslation(0.0,11.0,0.0)
            .addChild(new Billboard()
              .addChild(new Shape()
                .setGeometry(new Text().setString(new String[] {"Link Error"})
                  .setFontStyle(new FontStyle().setHorizontal(false).setCssStyle("BOLD")))
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setEmissiveColor(1.0,0.0,0.0)))))))
        .addChild(new Group()
          .addChild(new Transform().setScale(1.0,1.5,1.0).setTranslation(3.0,-.5,0.0)
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setDiffuseColor(.5,.5,.5)))
              .setGeometry(new Box())))
          .addChild(new Transform().setTranslation(3.0,0.0,0.0)
            .addChild(new Shape()
              .setAppearance(new Appearance()
                .setMaterial(new Material().setEmissiveColor(1.0,0.0,0.0)))
              .setGeometry(new Cylinder().setHeight(2.5).setRadius(.5)))
            .addChild(new TouchSensor("red_pipe2").setDescription("#2 red pipe touchsensor")))
          .addChild(new Transform().setTranslation(3.0,11.0,0.0)
            .addChild(new Billboard()
              .addChild(new Shape()
                .setGeometry(new Text().setString(new String[] {"Node Error"})
                  .setFontStyle(new FontStyle().setHorizontal(false).setCssStyle("BOLD")))
                .setAppearance(new Appearance()
                  .setMaterial(new Material().setEmissiveColor(1.0,0.0,0.0))))))))
      .addChild(new Script("linkFailure").setSourceCode("\n" + 
"        " + "\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"function toggle ( value, ts ) {" + "\n" + 
" if(value == true){" + "\n" + 
"   state = !state;" + "\n" + 
"   toggleValue = state;" + "\n" + 
"   }" + "\n" + 
"  if(state){" + "\n" + 
"      transState = 0;" + "\n" + 
"      transparency = transState;" + "\n" + 
"   }" + "\n" + 
"   else{" + "\n" + 
"      transState = 1;" + "\n" + 
"      transparency = transState;" + "\n" + 
"   }" + "\n" + 
"}" + "\n")
        .addField(new field().setName("toggle").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
        .addField(new field().setName("state").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(false))
        .addField(new field().setName("toggleValue").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
        .addField(new field().setName("transState").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(1))
        .addField(new field().setName("transparency").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_OUTPUTONLY)))
      .addChild(new Script("nodeFailure").setSourceCode("\n" + 
"        " + "\n" + 
"ecmascript:" + "\n" + 
"\n" + 
"function toggle ( value, ts ) {" + "\n" + 
" if(value == true){" + "\n" + 
"   state = !state;" + "\n" + 
"   toggleValue = state;" + "\n" + 
"   }" + "\n" + 
"  if(state){" + "\n" + 
"      transState = 0;" + "\n" + 
"      transparency = transState;" + "\n" + 
"   }" + "\n" + 
"   else{" + "\n" + 
"      transState = 1;" + "\n" + 
"      transparency = transState;" + "\n" + 
"   }" + "\n" + 
"}" + "\n")
        .addField(new field().setName("toggle").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INPUTONLY))
        .addField(new field().setName("state").setType(field.TYPE_SFBOOL).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(false))
        .addField(new field().setName("toggleValue").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_OUTPUTONLY))
        .addField(new field().setName("transState").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_INITIALIZEONLY).setValue(1))
        .addField(new field().setName("transparency").setType(field.TYPE_SFFLOAT).setAccessType(field.ACCESSTYPE_OUTPUTONLY))))
    .addChild(new ROUTE().setFromNode("red_pipe").setFromField("isActive").setToNode("linkFailure").setToField("toggle"))
    .addChild(new ROUTE().setFromNode("linkFailure").setFromField("toggleValue").setToNode("pipe_material").setToField("transparency"))
    .addChild(new ROUTE().setFromNode("linkFailure").setFromField("transparency").setToNode("pipe_material").setToField("transparency"))
    .addChild(new ROUTE().setFromNode("red_pipe2").setFromField("isActive").setToNode("nodeFailure").setToField("toggle"))
    .addChild(new ROUTE().setFromNode("nodeFailure").setFromField("toggleValue").setToNode("pipe_material2").setToField("transparency"))
    .addChild(new ROUTE().setFromNode("nodeFailure").setFromField("transparency").setToNode("pipe_material2").setToField("transparency")));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return NetworkReroutingAlternateRoutes model
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
        X3D thisExampleX3dModel = new NetworkReroutingAlternateRoutes().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.NetworkReroutingAlternateRoutes\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.NetworkReroutingAlternateRoutes\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}
