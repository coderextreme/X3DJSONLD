package net.x3djsonld.data;

import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Networking.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Text.*;

// Javadoc metadata annotations follow, see below for X3DJSAIL Java source code.
/**
 * <p> Prototype declarations defining values for X3D/VRML materials, originally converted from SGI's Open Inventor material examples. </p>
 <p> Related links: <a href="../../../UniversalMediaMaterials/ArtDecoPrototypes.java">ArtDecoPrototypes.java</a> source, <a href="../../../UniversalMediaMaterials/ArtDecoPrototypesIndex.html" target="_top">ArtDecoPrototypes catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a>, and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;">
        <caption>Scene Meta Information</caption>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../UniversalMediaMaterials/ArtDecoPrototypes.x3d">ArtDecoPrototypes.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Prototype declarations defining values for X3D/VRML materials, originally converted from SGI's Open Inventor material examples. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> David Roussel </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translator </i> </td>
			<td> James Harney, Don Brutzman NPS </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 7 April 2002 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="http://vrmlstuff.free.fr/materials" target="_blank">http://vrmlstuff.free.fr/materials</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> subject </i> </td>
			<td> Universal Media Material Library </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> Vrml97ToX3dNist, <a href="http://ovrt.nist.gov/v2_x3d.html" target="_blank">http://ovrt.nist.gov/v2_x3d.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../UniversalMediaMaterials/../license.html">../license.html</a> </td>
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

	* @author David Roussel
 */

public class ArtDecoPrototypes
{
	/** Default constructor to create this object. */
	public ArtDecoPrototypes ()
	{
	  initialize();
	}

	/** Create and initialize the X3D model for this object. */
	public final void initialize()
	{
            try { // catch-all
  x3dModel = new X3D().setProfile(X3D.PROFILE_IMMERSIVE).setVersion(X3D.VERSION_3_0)
  .setHead(new head()
    .addMeta(new meta().setName(meta.NAME_TITLE      ).setContent("ArtDecoPrototypes.x3d"))
    .addMeta(new meta().setName(meta.NAME_DESCRIPTION).setContent("Prototype declarations defining values for X3D/VRML materials, originally converted from SGI's Open Inventor material examples."))
    .addMeta(new meta().setName(meta.NAME_CREATOR    ).setContent("David Roussel"))
    .addMeta(new meta().setName(meta.NAME_TRANSLATOR ).setContent("James Harney, Don Brutzman NPS"))
    .addMeta(new meta().setName(meta.NAME_CREATED    ).setContent("7 April 2002"))
    .addMeta(new meta().setName(meta.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new meta().setName(meta.NAME_REFERENCE  ).setContent("http://vrmlstuff.free.fr/materials"))
    .addMeta(new meta().setName(meta.NAME_SUBJECT    ).setContent("Universal Media Material Library"))
    .addMeta(new meta().setName(meta.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d"))
    .addMeta(new meta().setName(meta.NAME_GENERATOR  ).setContent("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html"))
    .addMeta(new meta().setName(meta.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("ArtDecoPrototypes.x3d"))
    .addChild(new ProtoDeclare("ArtDeco00").setName("ArtDeco00").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBody()
        .addChild(new Material().setAmbientIntensity(0.25).setDiffuseColor(0.282435,0.085159,0.134462).setShininess(0.127273).setSpecularColor(0.276305,0.11431,0.139857))))
    .addChild(new ProtoDeclare("ArtDeco01").setName("ArtDeco01").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBody()
        .addChild(new Material().setAmbientIntensity(0.254777).setDiffuseColor(0.685208,0.134679,0.332385).setShininess(0.071429).setSpecularColor(0.122449,0.050035,0.050035))))
    .addChild(new ProtoDeclare("ArtDeco02").setName("ArtDeco02").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .addComments(" computed conversion ambientIntensity=1.745282, normalized to 1.0 ")
      .setProtoBody(new ProtoBody()
        .addChild(new Material().setAmbientIntensity(1.0).setDiffuseColor(0.536861,0.0529,0.245479).setShininess(0.832432).setSpecularColor(0.805292,0.765198,0.747416))))
    .addChild(new ProtoDeclare("ArtDeco03").setName("ArtDeco03").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBody()
        .addChild(new Material().setAmbientIntensity(0.248649).setDiffuseColor(1.0,0.452381,0.40339).setShininess(0.902703).setSpecularColor(0.686486,0.396903,0.419275))))
    .addChild(new ProtoDeclare("ArtDeco04").setName("ArtDeco04").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBody()
        .addChild(new Material().setAmbientIntensity(0.25).setDiffuseColor(0.748016,0.298362,0.342624).setShininess(0.69697).setSpecularColor(0.345455,0.345455,0.345455))))
    .addChild(new ProtoDeclare("ArtDeco05").setName("ArtDeco05").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBody()
        .addChild(new Material().setAmbientIntensity(0.24359).setDiffuseColor(0.945455,0.318988,0.321717).setShininess(0.018182).setSpecularColor(0.072727,0.021705,0.010732))))
    .addChild(new ProtoDeclare("ArtDeco06").setName("ArtDeco06").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBody()
        .addChild(new Material().setAmbientIntensity(0.25946).setDiffuseColor(0.228655,0.195513,0.425484).setShininess(0.542553).setSpecularColor(0.324504,0.404255,0.404255))))
    .addChild(new ProtoDeclare("ArtDeco07").setName("ArtDeco07").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBody()
        .addChild(new Material().setAmbientIntensity(0.333333).setDiffuseColor(0.200348,0.100857,0.320833).setShininess(0.133333).setSpecularColor(0.311358,0.387879,0.387879))))
    .addChild(new ProtoDeclare("ArtDeco08").setName("ArtDeco08").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBody()
        .addChild(new Material().setAmbientIntensity(0.242424).setDiffuseColor(0.330519,0.3389,0.6).setShininess(0.787879).setSpecularColor(0.290909,0.290909,0.290909))))
    .addChild(new ProtoDeclare("ArtDeco09").setName("ArtDeco09").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBody()
        .addChild(new Material().setAmbientIntensity(0.333333).setDiffuseColor(0.237059,0.096273,0.215625).setShininess(0.133333).setSpecularColor(0.311358,0.387879,0.387879))))
    .addChild(new ProtoDeclare("ArtDeco10").setName("ArtDeco10").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBody()
        .addChild(new Material().setAmbientIntensity(0.242425).setDiffuseColor(0.304,0.09025,0.207364).setShininess(0.072727).setSpecularColor(0.6665,0.579046,0.830303))))
    .addChild(new ProtoDeclare("ArtDeco11").setName("ArtDeco11").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBody()
        .addChild(new Material().setAmbientIntensity(0.258928).setDiffuseColor(0.335631,0.207672,0.238304).setEmissiveColor(0.010638,0.010638,0.010638).setShininess(0.021277).setSpecularColor(0.198631,0.075403,0.138803))))
    .addChild(new ProtoDeclare("ArtDeco12").setName("ArtDeco12").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBody()
        .addChild(new Material().setAmbientIntensity(0.240838).setDiffuseColor(0.876873,0.14715,0.00856).setShininess(0.076531).setSpecularColor(0.193878,0.029416,0.029416))))
    .addChild(new ProtoDeclare("ArtDeco13").setName("ArtDeco13").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBody()
        .addChild(new Material().setAmbientIntensity(0.25).setDiffuseColor(0.794445,0.249425,0.0).setShininess(0.551515).setSpecularColor(0.62904,0.194211,0.033663))))
    .addChild(new ProtoDeclare("ArtDeco14").setName("ArtDeco14").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBody()
        .addChild(new Material().setAmbientIntensity(0.25).setDiffuseColor(0.510609,0.17264,0.059872).setShininess(0.933333).setSpecularColor(0.533333,0.533333,0.533333))))
    .addChild(new ProtoDeclare("ArtDeco15").setName("ArtDeco15").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBody()
        .addChild(new Material().setAmbientIntensity(0.255814).setDiffuseColor(0.914894,0.444404,0.348914).setShininess(0.12766).setSpecularColor(0.345745,0.143066,0.0))))
    .addChild(new ProtoDeclare("ArtDeco16").setName("ArtDeco16").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBody()
        .addChild(new Material().setAmbientIntensity(0.240838).setDiffuseColor(0.876873,0.323147,0.199564).setShininess(0.80102).setSpecularColor(0.816327,0.278677,0.278677))))
    .addChild(new ProtoDeclare("ArtDeco17").setName("ArtDeco17").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBody()
        .addChild(new Material().setAmbientIntensity(0.242424).setDiffuseColor(0.515625,0.315496,0.252441).setShininess(0.933333).setSpecularColor(0.533333,0.533333,0.533333))))
    .addChild(new ProtoDeclare("ArtDeco18").setName("ArtDeco18").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBody()
        .addChild(new Material().setAmbientIntensity(0.264706).setDiffuseColor(0.0,0.346939,0.253624).setShininess(0.316327).setSpecularColor(0.0,0.311074,0.357143))))
    .addChild(new ProtoDeclare("ArtDeco19").setName("ArtDeco19").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBody()
        .addChild(new Material().setAmbientIntensity(0.259259).setDiffuseColor(0.0,0.251004,0.239248).setShininess(0.060606).setSpecularColor(0.177935,0.249369,0.229278))))
    .addChild(new ProtoDeclare("ArtDeco20").setName("ArtDeco20").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBody()
        .addChild(new Material().setAmbientIntensity(0.24).setDiffuseColor(0.228298,0.385771,0.186794).setShininess(0.393939).setSpecularColor(0.200464,0.300145,0.293518))))
    .addChild(new ProtoDeclare("ArtDeco21").setName("ArtDeco21").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBody()
        .addChild(new Material().setAmbientIntensity(0.25).setDiffuseColor(0.315389,0.544,0.258052).setShininess(0.509389).setSpecularColor(0.456,0.456,0.456))))
    .addChild(new ProtoDeclare("ArtDeco22").setName("ArtDeco22").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBody()
        .addChild(new Material().setAmbientIntensity(0.246032).setDiffuseColor(0.251104,0.312562,0.201724).setShininess(0.086735).setSpecularColor(0.209184,0.113842,0.111328))))
    .addChild(new ProtoDeclare("ArtDeco23").setName("ArtDeco23").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBody()
        .addChild(new Material().setAmbientIntensity(0.242424).setDiffuseColor(0.392348,0.456,0.417708).setShininess(0.933333).setSpecularColor(0.533333,0.533333,0.533333))))
    .addChild(new ProtoDeclare("ArtDeco24").setName("ArtDeco24").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBody()
        .addChild(new Material().setAmbientIntensity(0.253968).setDiffuseColor(1.0,0.854922,0.0).setShininess(1.0).setSpecularColor(0.872449,0.247119,0.254214))))
    .addChild(new ProtoDeclare("ArtDeco25").setName("ArtDeco25").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBody()
        .addChild(new Material().setAmbientIntensity(0.25641).setDiffuseColor(0.795918,0.505869,0.093315).setShininess(0.397959).setSpecularColor(0.923469,0.428866,0.006369))))
    .addChild(new ProtoDeclare("ArtDeco26").setName("ArtDeco26").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .addComments(" computed conversion ambientIntensity=2.226234, normalized to 1.0 ")
      .setProtoBody(new ProtoBody()
        .addChild(new Material().setAmbientIntensity(1.0).setDiffuseColor(0.331633,0.296582,0.279057).setShininess(0.096939).setSpecularColor(0.311224,0.25183,0.133042))))
    .addChild(new ProtoDeclare("ArtDeco27").setName("ArtDeco27").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBody()
        .addChild(new Material().setAmbientIntensity(0.263158).setDiffuseColor(0.345455,0.163262,0.122622).setShininess(0.048649).setSpecularColor(0.212121,0.107475,0.0))))
    .addChild(new ProtoDeclare("ArtDeco28").setName("ArtDeco28").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBody()
        .addChild(new Material().setAmbientIntensity(0.240506).setDiffuseColor(0.277281,0.104336,0.0799).setShininess(0.09697).setSpecularColor(0.305587,0.141916,0.270572))))
    .addChild(new ProtoDeclare("ArtDeco29").setName("ArtDeco29").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBody()
        .addChild(new Material().setAmbientIntensity(0.215686).setDiffuseColor(0.087034,0.025888,0.0).setShininess(0.045918).setSpecularColor(0.224138,0.104091,0.104091))))
    .addChild(new ProtoDeclare("ArtDeco30").setName("ArtDeco30").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBody()
        .addChild(new Material().setAmbientIntensity(0.0).setDiffuseColor(0.0,0.0,0.0).setShininess(0.081633).setSpecularColor(0.293243,0.297387,0.290421))))
    .addChild(new ProtoDeclare("ArtDeco31").setName("ArtDeco31").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBody()
        .addChild(new Material().setAmbientIntensity(0.25641).setDiffuseColor(0.236364,0.236364,0.236364).setShininess(0.054546).setSpecularColor(0.29697,0.245839,0.295962))))
    .addChild(new ProtoDeclare("ArtDeco32").setName("ArtDeco32").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBody()
        .addChild(new Material().setAmbientIntensity(0.242424).setDiffuseColor(0.38087,0.382957,0.417708).setShininess(0.933333).setSpecularColor(0.533333,0.533333,0.533333))))
    .addChild(new ProtoDeclare("ArtDeco33").setName("ArtDeco33").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBody()
        .addChild(new Material().setAmbientIntensity(0.230089).setDiffuseColor(0.610811,0.610811,0.610811).setShininess(0.897297).setSpecularColor(0.767568,0.756757,0.764964))))
    .addChild(new ProtoDeclare("ArtDeco34").setName("ArtDeco34").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBody()
        .addChild(new Material().setAmbientIntensity(0.25).setShininess(0.0).setSpecularColor(0.2,0.2,0.2))))
    .addChild(new Anchor().setDescription("ArtDecoPrototypeExample").setParameter(new String[] {"target=_blank"}).setUrl(new String[] {"../data/ArtDecoExamples.json","../data/ArtDecoExamples.x3d","ArtDecoExamples.json","ArtDecoExamples.x3d" })
      .addChild(new Shape()
        .setAppearance(new Appearance()
          .setMaterial(new Material().setDiffuseColor(0.8,0.4,0.0)))
        .setGeometry(new Text().setString(new String[] {"ArtDecoExamples.x3d","is a Materials Prototype declaration file.","","For an example scene using these node,","click this text and view","ArtDecoExamples.x3d"})
          .setFontStyle(new FontStyle().setJustify(FontStyle.JUSTIFY_MIDDLE_MIDDLE).setSize(0.8))))));
            }
            catch (Exception ex)
            {       
                System.err.println ("*** Further hints on X3DJSAIL errors and exceptions at");
                System.err.println ("*** https://www.web3d.org/specifications/java/X3DJSAIL.html");
                throw (ex);
            }
	}
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3D x3dModel;

	/** 
	 * Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3D.html">X3D</a>
	 * @return ArtDecoPrototypes model
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
        X3D thisExampleX3dModel = new ArtDecoPrototypes().getX3dModel();
//      System.out.println("X3D model construction complete.");
	
        // next handle command line arguments
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
                System.out.println("WARNING: \"net.x3djsonld.data.ArtDecoPrototypes\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
        else if (hasArguments) // if no arguments provided, this method produces usage warning
                thisExampleX3dModel.handleArguments(args);
	
        if (validate)
        {
                System.out.print("Java program \"net.x3djsonld.data.ArtDecoPrototypes\" self-validation test results: ");
                String validationResults = thisExampleX3dModel.validationReport();
                if (validationResults.startsWith("\n") || (validationResults.length() > 10))
                    System.out.println();
                System.out.println(validationResults.trim());
        }
    }
}
