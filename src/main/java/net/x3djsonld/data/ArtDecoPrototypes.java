package net.x3djsonld.data;

import java.util.*;
import org.web3d.x3d.jsail.Core.*;
import org.web3d.x3d.jsail.fields.*;
import org.web3d.x3d.jsail.Networking.*;
import org.web3d.x3d.jsail.Shape.*;
import org.web3d.x3d.jsail.Text.*;

// Javadoc annotations follow, see below for source.
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
  x3dModel = new X3DObject().setProfile(X3DObject.PROFILE_IMMERSIVE).setVersion(X3DObject.VERSION_3_0)
  .setHead(new headObject()
    .addMeta(new metaObject().setName(metaObject.NAME_TITLE      ).setContent("ArtDecoPrototypes.x3d"))
    .addMeta(new metaObject().setName(metaObject.NAME_DESCRIPTION).setContent("Prototype declarations defining values for X3D/VRML materials, originally converted from SGI's Open Inventor material examples."))
    .addMeta(new metaObject().setName(metaObject.NAME_CREATOR    ).setContent("David Roussel"))
    .addMeta(new metaObject().setName(metaObject.NAME_TRANSLATOR ).setContent("James Harney, Don Brutzman NPS"))
    .addMeta(new metaObject().setName(metaObject.NAME_CREATED    ).setContent("7 April 2002"))
    .addMeta(new metaObject().setName(metaObject.NAME_MODIFIED   ).setContent("20 October 2019"))
    .addMeta(new metaObject().setName(metaObject.NAME_REFERENCE  ).setContent("http://vrmlstuff.free.fr/materials"))
    .addMeta(new metaObject().setName(metaObject.NAME_SUBJECT    ).setContent("Universal Media Material Library"))
    .addMeta(new metaObject().setName(metaObject.NAME_IDENTIFIER ).setContent("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d"))
    .addMeta(new metaObject().setName(metaObject.NAME_GENERATOR  ).setContent("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html"))
    .addMeta(new metaObject().setName(metaObject.NAME_LICENSE    ).setContent("../license.html")))
  .setScene(new SceneObject()
    .addChild(new WorldInfoObject().setTitle("ArtDecoPrototypes.x3d"))
    .addChild(new ProtoDeclareObject("ArtDeco00").setName("ArtDeco00").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBodyObject()
        .addChild(new MaterialObject().setAmbientIntensity(0.25f).setDiffuseColor(0.282435f,0.085159f,0.134462f).setShininess(0.127273f).setSpecularColor(0.276305f,0.11431f,0.139857f))))
    .addChild(new ProtoDeclareObject("ArtDeco01").setName("ArtDeco01").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBodyObject()
        .addChild(new MaterialObject().setAmbientIntensity(0.254777f).setDiffuseColor(0.685208f,0.134679f,0.332385f).setShininess(0.071429f).setSpecularColor(0.122449f,0.050035f,0.050035f))))
    .addChild(new ProtoDeclareObject("ArtDeco02").setName("ArtDeco02").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .addComments(" computed conversion ambientIntensity=1.745282, normalized to 1.0 ")
      .setProtoBody(new ProtoBodyObject()
        .addChild(new MaterialObject().setAmbientIntensity(1.0f).setDiffuseColor(0.536861f,0.0529f,0.245479f).setShininess(0.832432f).setSpecularColor(0.805292f,0.765198f,0.747416f))))
    .addChild(new ProtoDeclareObject("ArtDeco03").setName("ArtDeco03").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBodyObject()
        .addChild(new MaterialObject().setAmbientIntensity(0.248649f).setDiffuseColor(1.0f,0.452381f,0.40339f).setShininess(0.902703f).setSpecularColor(0.686486f,0.396903f,0.419275f))))
    .addChild(new ProtoDeclareObject("ArtDeco04").setName("ArtDeco04").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBodyObject()
        .addChild(new MaterialObject().setAmbientIntensity(0.25f).setDiffuseColor(0.748016f,0.298362f,0.342624f).setShininess(0.69697f).setSpecularColor(0.345455f,0.345455f,0.345455f))))
    .addChild(new ProtoDeclareObject("ArtDeco05").setName("ArtDeco05").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBodyObject()
        .addChild(new MaterialObject().setAmbientIntensity(0.24359f).setDiffuseColor(0.945455f,0.318988f,0.321717f).setShininess(0.018182f).setSpecularColor(0.072727f,0.021705f,0.010732f))))
    .addChild(new ProtoDeclareObject("ArtDeco06").setName("ArtDeco06").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBodyObject()
        .addChild(new MaterialObject().setAmbientIntensity(0.25946f).setDiffuseColor(0.228655f,0.195513f,0.425484f).setShininess(0.542553f).setSpecularColor(0.324504f,0.404255f,0.404255f))))
    .addChild(new ProtoDeclareObject("ArtDeco07").setName("ArtDeco07").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBodyObject()
        .addChild(new MaterialObject().setAmbientIntensity(0.333333f).setDiffuseColor(0.200348f,0.100857f,0.320833f).setShininess(0.133333f).setSpecularColor(0.311358f,0.387879f,0.387879f))))
    .addChild(new ProtoDeclareObject("ArtDeco08").setName("ArtDeco08").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBodyObject()
        .addChild(new MaterialObject().setAmbientIntensity(0.242424f).setDiffuseColor(0.330519f,0.3389f,0.6f).setShininess(0.787879f).setSpecularColor(0.290909f,0.290909f,0.290909f))))
    .addChild(new ProtoDeclareObject("ArtDeco09").setName("ArtDeco09").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBodyObject()
        .addChild(new MaterialObject().setAmbientIntensity(0.333333f).setDiffuseColor(0.237059f,0.096273f,0.215625f).setShininess(0.133333f).setSpecularColor(0.311358f,0.387879f,0.387879f))))
    .addChild(new ProtoDeclareObject("ArtDeco10").setName("ArtDeco10").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBodyObject()
        .addChild(new MaterialObject().setAmbientIntensity(0.242425f).setDiffuseColor(0.304f,0.09025f,0.207364f).setShininess(0.072727f).setSpecularColor(0.6665f,0.579046f,0.830303f))))
    .addChild(new ProtoDeclareObject("ArtDeco11").setName("ArtDeco11").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBodyObject()
        .addChild(new MaterialObject().setAmbientIntensity(0.258928f).setDiffuseColor(0.335631f,0.207672f,0.238304f).setEmissiveColor(0.010638f,0.010638f,0.010638f).setShininess(0.021277f).setSpecularColor(0.198631f,0.075403f,0.138803f))))
    .addChild(new ProtoDeclareObject("ArtDeco12").setName("ArtDeco12").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBodyObject()
        .addChild(new MaterialObject().setAmbientIntensity(0.240838f).setDiffuseColor(0.876873f,0.14715f,0.00856f).setShininess(0.076531f).setSpecularColor(0.193878f,0.029416f,0.029416f))))
    .addChild(new ProtoDeclareObject("ArtDeco13").setName("ArtDeco13").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBodyObject()
        .addChild(new MaterialObject().setAmbientIntensity(0.25f).setDiffuseColor(0.794445f,0.249425f,0.0f).setShininess(0.551515f).setSpecularColor(0.62904f,0.194211f,0.033663f))))
    .addChild(new ProtoDeclareObject("ArtDeco14").setName("ArtDeco14").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBodyObject()
        .addChild(new MaterialObject().setAmbientIntensity(0.25f).setDiffuseColor(0.510609f,0.17264f,0.059872f).setShininess(0.933333f).setSpecularColor(0.533333f,0.533333f,0.533333f))))
    .addChild(new ProtoDeclareObject("ArtDeco15").setName("ArtDeco15").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBodyObject()
        .addChild(new MaterialObject().setAmbientIntensity(0.255814f).setDiffuseColor(0.914894f,0.444404f,0.348914f).setShininess(0.12766f).setSpecularColor(0.345745f,0.143066f,0.0f))))
    .addChild(new ProtoDeclareObject("ArtDeco16").setName("ArtDeco16").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBodyObject()
        .addChild(new MaterialObject().setAmbientIntensity(0.240838f).setDiffuseColor(0.876873f,0.323147f,0.199564f).setShininess(0.80102f).setSpecularColor(0.816327f,0.278677f,0.278677f))))
    .addChild(new ProtoDeclareObject("ArtDeco17").setName("ArtDeco17").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBodyObject()
        .addChild(new MaterialObject().setAmbientIntensity(0.242424f).setDiffuseColor(0.515625f,0.315496f,0.252441f).setShininess(0.933333f).setSpecularColor(0.533333f,0.533333f,0.533333f))))
    .addChild(new ProtoDeclareObject("ArtDeco18").setName("ArtDeco18").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBodyObject()
        .addChild(new MaterialObject().setAmbientIntensity(0.264706f).setDiffuseColor(0.0f,0.346939f,0.253624f).setShininess(0.316327f).setSpecularColor(0.0f,0.311074f,0.357143f))))
    .addChild(new ProtoDeclareObject("ArtDeco19").setName("ArtDeco19").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBodyObject()
        .addChild(new MaterialObject().setAmbientIntensity(0.259259f).setDiffuseColor(0.0f,0.251004f,0.239248f).setShininess(0.060606f).setSpecularColor(0.177935f,0.249369f,0.229278f))))
    .addChild(new ProtoDeclareObject("ArtDeco20").setName("ArtDeco20").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBodyObject()
        .addChild(new MaterialObject().setAmbientIntensity(0.24f).setDiffuseColor(0.228298f,0.385771f,0.186794f).setShininess(0.393939f).setSpecularColor(0.200464f,0.300145f,0.293518f))))
    .addChild(new ProtoDeclareObject("ArtDeco21").setName("ArtDeco21").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBodyObject()
        .addChild(new MaterialObject().setAmbientIntensity(0.25f).setDiffuseColor(0.315389f,0.544f,0.258052f).setShininess(0.509389f).setSpecularColor(0.456f,0.456f,0.456f))))
    .addChild(new ProtoDeclareObject("ArtDeco22").setName("ArtDeco22").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBodyObject()
        .addChild(new MaterialObject().setAmbientIntensity(0.246032f).setDiffuseColor(0.251104f,0.312562f,0.201724f).setShininess(0.086735f).setSpecularColor(0.209184f,0.113842f,0.111328f))))
    .addChild(new ProtoDeclareObject("ArtDeco23").setName("ArtDeco23").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBodyObject()
        .addChild(new MaterialObject().setAmbientIntensity(0.242424f).setDiffuseColor(0.392348f,0.456f,0.417708f).setShininess(0.933333f).setSpecularColor(0.533333f,0.533333f,0.533333f))))
    .addChild(new ProtoDeclareObject("ArtDeco24").setName("ArtDeco24").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBodyObject()
        .addChild(new MaterialObject().setAmbientIntensity(0.253968f).setDiffuseColor(1.0f,0.854922f,0.0f).setShininess(1.0f).setSpecularColor(0.872449f,0.247119f,0.254214f))))
    .addChild(new ProtoDeclareObject("ArtDeco25").setName("ArtDeco25").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBodyObject()
        .addChild(new MaterialObject().setAmbientIntensity(0.25641f).setDiffuseColor(0.795918f,0.505869f,0.093315f).setShininess(0.397959f).setSpecularColor(0.923469f,0.428866f,0.006369f))))
    .addChild(new ProtoDeclareObject("ArtDeco26").setName("ArtDeco26").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .addComments(" computed conversion ambientIntensity=2.226234, normalized to 1.0 ")
      .setProtoBody(new ProtoBodyObject()
        .addChild(new MaterialObject().setAmbientIntensity(1.0f).setDiffuseColor(0.331633f,0.296582f,0.279057f).setShininess(0.096939f).setSpecularColor(0.311224f,0.25183f,0.133042f))))
    .addChild(new ProtoDeclareObject("ArtDeco27").setName("ArtDeco27").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBodyObject()
        .addChild(new MaterialObject().setAmbientIntensity(0.263158f).setDiffuseColor(0.345455f,0.163262f,0.122622f).setShininess(0.048649f).setSpecularColor(0.212121f,0.107475f,0.0f))))
    .addChild(new ProtoDeclareObject("ArtDeco28").setName("ArtDeco28").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBodyObject()
        .addChild(new MaterialObject().setAmbientIntensity(0.240506f).setDiffuseColor(0.277281f,0.104336f,0.0799f).setShininess(0.09697f).setSpecularColor(0.305587f,0.141916f,0.270572f))))
    .addChild(new ProtoDeclareObject("ArtDeco29").setName("ArtDeco29").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBodyObject()
        .addChild(new MaterialObject().setAmbientIntensity(0.215686f).setDiffuseColor(0.087034f,0.025888f,0.0f).setShininess(0.045918f).setSpecularColor(0.224138f,0.104091f,0.104091f))))
    .addChild(new ProtoDeclareObject("ArtDeco30").setName("ArtDeco30").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBodyObject()
        .addChild(new MaterialObject().setAmbientIntensity(0.0f).setDiffuseColor(0.0f,0.0f,0.0f).setShininess(0.081633f).setSpecularColor(0.293243f,0.297387f,0.290421f))))
    .addChild(new ProtoDeclareObject("ArtDeco31").setName("ArtDeco31").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBodyObject()
        .addChild(new MaterialObject().setAmbientIntensity(0.25641f).setDiffuseColor(0.236364f,0.236364f,0.236364f).setShininess(0.054546f).setSpecularColor(0.29697f,0.245839f,0.295962f))))
    .addChild(new ProtoDeclareObject("ArtDeco32").setName("ArtDeco32").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBodyObject()
        .addChild(new MaterialObject().setAmbientIntensity(0.242424f).setDiffuseColor(0.38087f,0.382957f,0.417708f).setShininess(0.933333f).setSpecularColor(0.533333f,0.533333f,0.533333f))))
    .addChild(new ProtoDeclareObject("ArtDeco33").setName("ArtDeco33").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBodyObject()
        .addChild(new MaterialObject().setAmbientIntensity(0.230089f).setDiffuseColor(0.610811f,0.610811f,0.610811f).setShininess(0.897297f).setSpecularColor(0.767568f,0.756757f,0.764964f))))
    .addChild(new ProtoDeclareObject("ArtDeco34").setName("ArtDeco34").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBodyObject()
        .addChild(new MaterialObject().setAmbientIntensity(0.25f).setShininess(0.0f).setSpecularColor(0.2f,0.2f,0.2f))))
    .addChild(new AnchorObject().setDescription("ArtDecoPrototypeExample").setParameter(new String[] {"target=_blank"}).setUrl(new String[] {"../data/ArtDecoExamples.json","../data/ArtDecoExamples.x3d","ArtDecoExamples.json","ArtDecoExamples.x3d" })
      .addChild(new ShapeObject()
        .setAppearance(new AppearanceObject()
          .setMaterial(new MaterialObject().setDiffuseColor(0.8f,0.4f,0.0f)))
        .setGeometry(new TextObject().setString(new String[] {"ArtDecoExamples.x3d","is a Materials Prototype declaration file.","","For an example scene using these node,","click this text and view","ArtDecoExamples.x3d"})
          .setFontStyle(new FontStyleObject().setJustify(FontStyleObject.JUSTIFY_MIDDLE_MIDDLE).setSize(0.8f))))));
    }
	// end of initialize() method

	/** The initialized model object, created within initialize() method. */
	private X3DObject x3dModel;

	/** Provide a 
	 * <a href="https://dzone.com/articles/java-copy-shallow-vs-deep-in-which-you-will-swim" target="_blank">shallow copy</a>
	 * of the X3D model.
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3DObject.html">X3DObject</a>
	 * @return ArtDecoPrototypes model
	 */
	public X3DObject getX3dModel()
	{	  
		return x3dModel;
	}
	   
    /** Default main() method provided for test purposes, uses CommandLine to set global ConfigurationProperties for this object.
     * @param args array of input parameters, provided as arguments
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3DObject.html#handleArguments-java.lang.String:A-">X3DObject.handleArguments(args)</a>
	 * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/Core/X3DObject.html#validationReport--">X3DObject.validationReport()</a>
     * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/CommandLine.html">CommandLine</a>
     * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/CommandLine.html#USAGE">CommandLine.USAGE</a>
     * @see <a href="https://www.web3d.org/specifications/java/javadoc/org/web3d/x3d/jsail/ConfigurationProperties.html">ConfigurationProperties</a>
     */
    public static void main(String args[])
    {
        X3DObject thisExampleX3dObject = new ArtDecoPrototypes().getX3dModel();

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
				if (arg.toLowerCase().endsWith(X3DObject.FILE_EXTENSION_X3D) ||
					arg.toLowerCase().endsWith(X3DObject.FILE_EXTENSION_CLASSICVRML) ||
					arg.toLowerCase().endsWith(X3DObject.FILE_EXTENSION_X3DB) ||
					arg.toLowerCase().endsWith(X3DObject.FILE_EXTENSION_VRML97) ||
					arg.toLowerCase().endsWith(X3DObject.FILE_EXTENSION_EXI) ||
					arg.toLowerCase().endsWith(X3DObject.FILE_EXTENSION_GZIP) ||
					arg.toLowerCase().endsWith(X3DObject.FILE_EXTENSION_ZIP) ||
					arg.toLowerCase().endsWith(X3DObject.FILE_EXTENSION_HTML) ||
					arg.toLowerCase().endsWith(X3DObject.FILE_EXTENSION_XHTML))
				{
					argumentsLoadNewModel = true;
					fileName = arg;
				}
			}
		}
		if      (argumentsLoadNewModel)
			System.out.println("WARNING: \"ArtDecoPrototypes\" model invocation is attempting to load file \"" + fileName + "\" instead of simply validating itself... file loading ignored.");
		else if (hasArguments) // if no arguments provided, this method produces usage warning
			thisExampleX3dObject.handleArguments(args);

		if (validate)
		{
			System.out.print("Java program \"ArtDecoPrototypes\" self-validation test results: ");
			String validationResults = thisExampleX3dObject.validationReport();
			System.out.println(validationResults);
		}
    }
}
