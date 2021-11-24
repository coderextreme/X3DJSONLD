package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Geometry3D.*;
import org.web3d.x3d.jsail.Grouping.*;
import org.web3d.x3d.jsail.Navigation.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Text.*;
import org.web3d.x3d.jsail.Texturing.*;

// Javadoc annotations follow, see below for source.
/**
 * <p> Simple X3D example with XML digital signature for author authentication, also used for example combined with encryption. </p>
 <p> Related links: <a href="../../../Security/HelloWorldSigned.java">HelloWorldSigned.java</a> source, <a href="../../../Security/HelloWorldSignedIndex.html" target="_top">HelloWorldSigned catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../Security/HelloWorldSigned.x3d">HelloWorldSigned.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Simple X3D example with XML digital signature for author authentication, also used for example combined with encryption </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 2 July 2008 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 6 July 2008 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Don Brutzman, Mike Bailey </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="../../../Security/X3dSecurityReadMe.html">X3dSecurityReadMe.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> keystore/SelectSigningKeyPair.png </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> keystore/PublicPrivatePair_certificateChain.cer </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/HelloWorld.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/HelloWorld.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/Security/HelloWorldSignedEncryptedResult.xml" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/Security/HelloWorldSignedEncryptedResult.xml</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/Security/HelloWorldSignedDecrypted.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/Security/HelloWorldSignedDecrypted.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/Security/HelloWorldSigned.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/Security/HelloWorldSigned.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.2, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../Security/../license.html">../license.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> subject </i> </td>
			<td> X3D security, XML signature authentication, public private key pair, XML encryption, secret key </td>
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

	* @author Don Brutzman, Mike Bailey
 */

public class HelloWorldSigned
{
	/** Default constructor to create this object. */
	public HelloWorldSigned ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_2)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("HelloWorldSigned.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Simple X3D example with XML digital signature for author authentication, also used for example combined with encryption"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("2 July 2008"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("6 July 2008"))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("Don Brutzman, Mike Bailey"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("X3dSecurityReadMe.html"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("keystore/SelectSigningKeyPair.png"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("keystore/PublicPrivatePair_certificateChain.cer"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://www.web3d.org/x3d/content/examples/HelloWorld.x3d"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://www.web3d.org/x3d/content/examples/Basic/Security/HelloWorldSignedEncryptedResult.xml"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("https://www.web3d.org/x3d/content/examples/Basic/Security/HelloWorldSignedDecrypted.x3d"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/Security/HelloWorldSigned.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html"))
    .addMeta(new meta().setName(meta.NAME_SUBJECT    ).setContent("X3D security, XML signature authentication, public private key pair, XML encryption, secret key")))
  .setScene(new Scene()
    .addComments(" Example scene to illustrate X3D tags and attributes. ")
    .addChild(new Group().setBboxCenter(0.0,0.0,0.0).setBboxSize(-1.0,-1.0,-1.0)
      .addChild(new Viewpoint().setDescription("Hello world!").setCenterOfRotation(0.0,-1.0,0.0).setFieldOfView(0.7854).setJump(true).setOrientation(0.0,0.0,1.0,0.0).setPosition(0.0,-1.0,7.0).setRetainUserOffsets(false))
      .addChild(new Transform().setBboxCenter(0.0,0.0,0.0).setBboxSize(-1.0,-1.0,-1.0).setCenter(0.0,0.0,0.0).setRotation(0.0,1.0,0.0,3.0).setScale(1.0,1.0,1.0).setScaleOrientation(0.0,0.0,1.0,0.0).setTranslation(0.0,0.0,0.0)
        .addChild(new Shape().setBboxCenter(0.0,0.0,0.0).setBboxSize(-1.0,-1.0,-1.0)
          .setGeometry(new Sphere().setRadius(1).setSolid(true))
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0.2).setDiffuseColor(0.0,0.5,1.0).setEmissiveColor(0.0,0.0,0.0).setShininess(0.2).setSpecularColor(0.0,0.0,0.0).setTransparency(0))
            .setTexture(new ImageTexture().setRepeatS(true).setRepeatT(true).setUrl(new String[] {"../earth-topo.png","../earth-topo.jpg","../earth-topo-small.gif","https://www.web3d.org/x3d/content/examples/Basic/earth-topo.png","https://www.web3d.org/x3d/content/examples/Basic/earth-topo.jpg","https://www.web3d.org/x3d/content/examples/Basic/earth-topo-small.gif"})))))
      .addChild(new Transform().setBboxCenter(0.0,0.0,0.0).setBboxSize(-1.0,-1.0,-1.0).setCenter(0.0,0.0,0.0).setRotation(0.0,0.0,1.0,0.0).setScale(1.0,1.0,1.0).setScaleOrientation(0.0,0.0,1.0,0.0).setTranslation(0.0,-2.0,0.0)
        .addChild(new Shape().setBboxCenter(0.0,0.0,0.0).setBboxSize(-1.0,-1.0,-1.0)
          .setGeometry(new Text().setMaxExtent(0.0).setSolid(false).setString(new String[] {"Hello","world!"})
            .setFontStyle(new FontStyle().setFamily(new String[] {"SERIF"}).setHorizontal(true).setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE).setLeftToRight(true).setSize(1.0).setSpacing(1.0).setCssStyle("PLAIN").setTopToBottom(true)))
          .setAppearance(new Appearance()
            .setMaterial(new Material().setAmbientIntensity(0.2).setDiffuseColor(0.1,0.5,1.0).setEmissiveColor(0.0,0.0,0.0).setShininess(0.2).setSpecularColor(0.0,0.0,0.0).setTransparency(0)))))))
  ;
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return HelloWorldSigned model
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
        X3D thisExampleX3dModel = new HelloWorldSigned().getX3dModel();

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
			System.out.println("WARNING: \"net.x3djsonld.data.HelloWorldSigned\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dModel.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"net.x3djsonld.data.HelloWorldSigned\" self-validation test results: ");
			String validationResults = thisExampleX3dModel.validationReport();
            if (validationResults.startsWith("\n"))
                System.out.println();
			System.out.println(validationResults.trim());
		}
    }
}
