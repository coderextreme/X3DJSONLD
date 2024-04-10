load('X3Dautoclass.js');

// Javadoc annotations follow, see below for source.
/**
 * <p> Prototype declarations defining values for X3D/VRML materials, originally converted from SGI's Open Inventor material examples. </p>
 <p> Related links: <a href="../../../UniversalMediaMaterials/ArtDecoPrototypes.java">ArtDecoPrototypes.java</a> source, <a href="../../../UniversalMediaMaterials/ArtDecoPrototypesIndex.html" target="_top">ArtDecoPrototypes catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
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
		<a href="https://www.web3d.org/x3d/stylesheets/X3dToES5.xslt" target="_blank">X3dToES5.xslt</a>
		stylesheet to create ES5 source code from an <code>.x3d</code> scene.
	</p>

	* @author David Roussel
 */

function ArtDecoPrototypes
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
  function doubleToFloat(d) {
    if (Float32Array) {
        return new Float32Array([d])[0];
    }
  }
ArtDecoPrototypes.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {

	/** Large attribute array: Text string field, scene-graph level=5, element #121, 21 total values */
	this.Text_5_121_string = new MFString(new MFString("\"ArtDecoExamples.x3d\" \"is a Materials Prototype declaration file.\" \"\" \"For an example scene using these node,\" \"click this text and view\" \"ArtDecoExamples.x3d\""));
  this.x3dModel = new X3D().setProfile("Immersive").setVersion("3.0")
  .setHead(new head()
    .addMeta(new meta().setName("title").setContent("ArtDecoPrototypes.x3d"))
    .addMeta(new meta().setName("description").setContent("Prototype declarations defining values for X3D/VRML materials, originally converted from SGI's Open Inventor material examples."))
    .addMeta(new meta().setName("creator").setContent("David Roussel"))
    .addMeta(new meta().setName("translator").setContent("James Harney, Don Brutzman NPS"))
    .addMeta(new meta().setName("created").setContent("7 April 2002"))
    .addMeta(new meta().setName("modified").setContent("20 October 2019"))
    .addMeta(new meta().setName("reference").setContent("http://vrmlstuff.free.fr/materials"))
    .addMeta(new meta().setName("subject").setContent("Universal Media Material Library"))
    .addMeta(new meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d"))
    .addMeta(new meta().setName("generator").setContent("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html"))
    .addMeta(new meta().setName("license").setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("ArtDecoPrototypes.x3d"))
    .addChild(new ProtoDeclare().setName("ArtDeco00").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBody()
        .addChild(new Material().setAmbientIntensity(0.25).setDiffuseColor(doubleToFloat(0.282435),doubleToFloat(0.085159),doubleToFloat(0.134462)).setShininess(0.127273).setSpecularColor(doubleToFloat(0.276305),doubleToFloat(0.11431),doubleToFloat(0.139857)))))
    .addChild(new ProtoDeclare().setName("ArtDeco01").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBody()
        .addChild(new Material().setAmbientIntensity(0.254777).setDiffuseColor(doubleToFloat(0.685208),doubleToFloat(0.134679),doubleToFloat(0.332385)).setShininess(0.071429).setSpecularColor(doubleToFloat(0.122449),doubleToFloat(0.050035),doubleToFloat(0.050035)))))
    .addChild(new ProtoDeclare().setName("ArtDeco02").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .addComments(" computed conversion ambientIntensity=1.745282, normalized to 1.0 ")
      .setProtoBody(new ProtoBody()
        .addChild(new Material().setAmbientIntensity(1.0).setDiffuseColor(doubleToFloat(0.536861),doubleToFloat(0.0529),doubleToFloat(0.245479)).setShininess(0.832432).setSpecularColor(doubleToFloat(0.805292),doubleToFloat(0.765198),doubleToFloat(0.747416)))))
    .addChild(new ProtoDeclare().setName("ArtDeco03").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBody()
        .addChild(new Material().setAmbientIntensity(0.248649).setDiffuseColor(doubleToFloat(1.0),doubleToFloat(0.452381),doubleToFloat(0.40339)).setShininess(0.902703).setSpecularColor(doubleToFloat(0.686486),doubleToFloat(0.396903),doubleToFloat(0.419275)))))
    .addChild(new ProtoDeclare().setName("ArtDeco04").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBody()
        .addChild(new Material().setAmbientIntensity(0.25).setDiffuseColor(doubleToFloat(0.748016),doubleToFloat(0.298362),doubleToFloat(0.342624)).setShininess(0.69697).setSpecularColor(doubleToFloat(0.345455),doubleToFloat(0.345455),doubleToFloat(0.345455)))))
    .addChild(new ProtoDeclare().setName("ArtDeco05").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBody()
        .addChild(new Material().setAmbientIntensity(0.24359).setDiffuseColor(doubleToFloat(0.945455),doubleToFloat(0.318988),doubleToFloat(0.321717)).setShininess(0.018182).setSpecularColor(doubleToFloat(0.072727),doubleToFloat(0.021705),doubleToFloat(0.010732)))))
    .addChild(new ProtoDeclare().setName("ArtDeco06").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBody()
        .addChild(new Material().setAmbientIntensity(0.25946).setDiffuseColor(doubleToFloat(0.228655),doubleToFloat(0.195513),doubleToFloat(0.425484)).setShininess(0.542553).setSpecularColor(doubleToFloat(0.324504),doubleToFloat(0.404255),doubleToFloat(0.404255)))))
    .addChild(new ProtoDeclare().setName("ArtDeco07").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBody()
        .addChild(new Material().setAmbientIntensity(0.333333).setDiffuseColor(doubleToFloat(0.200348),doubleToFloat(0.100857),doubleToFloat(0.320833)).setShininess(0.133333).setSpecularColor(doubleToFloat(0.311358),doubleToFloat(0.387879),doubleToFloat(0.387879)))))
    .addChild(new ProtoDeclare().setName("ArtDeco08").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBody()
        .addChild(new Material().setAmbientIntensity(0.242424).setDiffuseColor(doubleToFloat(0.330519),doubleToFloat(0.3389),doubleToFloat(0.6)).setShininess(0.787879).setSpecularColor(doubleToFloat(0.290909),doubleToFloat(0.290909),doubleToFloat(0.290909)))))
    .addChild(new ProtoDeclare().setName("ArtDeco09").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBody()
        .addChild(new Material().setAmbientIntensity(0.333333).setDiffuseColor(doubleToFloat(0.237059),doubleToFloat(0.096273),doubleToFloat(0.215625)).setShininess(0.133333).setSpecularColor(doubleToFloat(0.311358),doubleToFloat(0.387879),doubleToFloat(0.387879)))))
    .addChild(new ProtoDeclare().setName("ArtDeco10").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBody()
        .addChild(new Material().setAmbientIntensity(0.242425).setDiffuseColor(doubleToFloat(0.304),doubleToFloat(0.09025),doubleToFloat(0.207364)).setShininess(0.072727).setSpecularColor(doubleToFloat(0.6665),doubleToFloat(0.579046),doubleToFloat(0.830303)))))
    .addChild(new ProtoDeclare().setName("ArtDeco11").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBody()
        .addChild(new Material().setAmbientIntensity(0.258928).setDiffuseColor(doubleToFloat(0.335631),doubleToFloat(0.207672),doubleToFloat(0.238304)).setEmissiveColor(doubleToFloat(0.010638),doubleToFloat(0.010638),doubleToFloat(0.010638)).setShininess(0.021277).setSpecularColor(doubleToFloat(0.198631),doubleToFloat(0.075403),doubleToFloat(0.138803)))))
    .addChild(new ProtoDeclare().setName("ArtDeco12").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBody()
        .addChild(new Material().setAmbientIntensity(0.240838).setDiffuseColor(doubleToFloat(0.876873),doubleToFloat(0.14715),doubleToFloat(0.00856)).setShininess(0.076531).setSpecularColor(doubleToFloat(0.193878),doubleToFloat(0.029416),doubleToFloat(0.029416)))))
    .addChild(new ProtoDeclare().setName("ArtDeco13").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBody()
        .addChild(new Material().setAmbientIntensity(0.25).setDiffuseColor(doubleToFloat(0.794445),doubleToFloat(0.249425),doubleToFloat(0.0)).setShininess(0.551515).setSpecularColor(doubleToFloat(0.62904),doubleToFloat(0.194211),doubleToFloat(0.033663)))))
    .addChild(new ProtoDeclare().setName("ArtDeco14").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBody()
        .addChild(new Material().setAmbientIntensity(0.25).setDiffuseColor(doubleToFloat(0.510609),doubleToFloat(0.17264),doubleToFloat(0.059872)).setShininess(0.933333).setSpecularColor(doubleToFloat(0.533333),doubleToFloat(0.533333),doubleToFloat(0.533333)))))
    .addChild(new ProtoDeclare().setName("ArtDeco15").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBody()
        .addChild(new Material().setAmbientIntensity(0.255814).setDiffuseColor(doubleToFloat(0.914894),doubleToFloat(0.444404),doubleToFloat(0.348914)).setShininess(0.12766).setSpecularColor(doubleToFloat(0.345745),doubleToFloat(0.143066),doubleToFloat(0.0)))))
    .addChild(new ProtoDeclare().setName("ArtDeco16").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBody()
        .addChild(new Material().setAmbientIntensity(0.240838).setDiffuseColor(doubleToFloat(0.876873),doubleToFloat(0.323147),doubleToFloat(0.199564)).setShininess(0.80102).setSpecularColor(doubleToFloat(0.816327),doubleToFloat(0.278677),doubleToFloat(0.278677)))))
    .addChild(new ProtoDeclare().setName("ArtDeco17").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBody()
        .addChild(new Material().setAmbientIntensity(0.242424).setDiffuseColor(doubleToFloat(0.515625),doubleToFloat(0.315496),doubleToFloat(0.252441)).setShininess(0.933333).setSpecularColor(doubleToFloat(0.533333),doubleToFloat(0.533333),doubleToFloat(0.533333)))))
    .addChild(new ProtoDeclare().setName("ArtDeco18").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBody()
        .addChild(new Material().setAmbientIntensity(0.264706).setDiffuseColor(doubleToFloat(0.0),doubleToFloat(0.346939),doubleToFloat(0.253624)).setShininess(0.316327).setSpecularColor(doubleToFloat(0.0),doubleToFloat(0.311074),doubleToFloat(0.357143)))))
    .addChild(new ProtoDeclare().setName("ArtDeco19").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBody()
        .addChild(new Material().setAmbientIntensity(0.259259).setDiffuseColor(doubleToFloat(0.0),doubleToFloat(0.251004),doubleToFloat(0.239248)).setShininess(0.060606).setSpecularColor(doubleToFloat(0.177935),doubleToFloat(0.249369),doubleToFloat(0.229278)))))
    .addChild(new ProtoDeclare().setName("ArtDeco20").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBody()
        .addChild(new Material().setAmbientIntensity(0.24).setDiffuseColor(doubleToFloat(0.228298),doubleToFloat(0.385771),doubleToFloat(0.186794)).setShininess(0.393939).setSpecularColor(doubleToFloat(0.200464),doubleToFloat(0.300145),doubleToFloat(0.293518)))))
    .addChild(new ProtoDeclare().setName("ArtDeco21").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBody()
        .addChild(new Material().setAmbientIntensity(0.25).setDiffuseColor(doubleToFloat(0.315389),doubleToFloat(0.544),doubleToFloat(0.258052)).setShininess(0.509389).setSpecularColor(doubleToFloat(0.456),doubleToFloat(0.456),doubleToFloat(0.456)))))
    .addChild(new ProtoDeclare().setName("ArtDeco22").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBody()
        .addChild(new Material().setAmbientIntensity(0.246032).setDiffuseColor(doubleToFloat(0.251104),doubleToFloat(0.312562),doubleToFloat(0.201724)).setShininess(0.086735).setSpecularColor(doubleToFloat(0.209184),doubleToFloat(0.113842),doubleToFloat(0.111328)))))
    .addChild(new ProtoDeclare().setName("ArtDeco23").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBody()
        .addChild(new Material().setAmbientIntensity(0.242424).setDiffuseColor(doubleToFloat(0.392348),doubleToFloat(0.456),doubleToFloat(0.417708)).setShininess(0.933333).setSpecularColor(doubleToFloat(0.533333),doubleToFloat(0.533333),doubleToFloat(0.533333)))))
    .addChild(new ProtoDeclare().setName("ArtDeco24").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBody()
        .addChild(new Material().setAmbientIntensity(0.253968).setDiffuseColor(doubleToFloat(1.0),doubleToFloat(0.854922),doubleToFloat(0.0)).setShininess(1.0).setSpecularColor(doubleToFloat(0.872449),doubleToFloat(0.247119),doubleToFloat(0.254214)))))
    .addChild(new ProtoDeclare().setName("ArtDeco25").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBody()
        .addChild(new Material().setAmbientIntensity(0.25641).setDiffuseColor(doubleToFloat(0.795918),doubleToFloat(0.505869),doubleToFloat(0.093315)).setShininess(0.397959).setSpecularColor(doubleToFloat(0.923469),doubleToFloat(0.428866),doubleToFloat(0.006369)))))
    .addChild(new ProtoDeclare().setName("ArtDeco26").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .addComments(" computed conversion ambientIntensity=2.226234, normalized to 1.0 ")
      .setProtoBody(new ProtoBody()
        .addChild(new Material().setAmbientIntensity(1.0).setDiffuseColor(doubleToFloat(0.331633),doubleToFloat(0.296582),doubleToFloat(0.279057)).setShininess(0.096939).setSpecularColor(doubleToFloat(0.311224),doubleToFloat(0.25183),doubleToFloat(0.133042)))))
    .addChild(new ProtoDeclare().setName("ArtDeco27").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBody()
        .addChild(new Material().setAmbientIntensity(0.263158).setDiffuseColor(doubleToFloat(0.345455),doubleToFloat(0.163262),doubleToFloat(0.122622)).setShininess(0.048649).setSpecularColor(doubleToFloat(0.212121),doubleToFloat(0.107475),doubleToFloat(0.0)))))
    .addChild(new ProtoDeclare().setName("ArtDeco28").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBody()
        .addChild(new Material().setAmbientIntensity(0.240506).setDiffuseColor(doubleToFloat(0.277281),doubleToFloat(0.104336),doubleToFloat(0.0799)).setShininess(0.09697).setSpecularColor(doubleToFloat(0.305587),doubleToFloat(0.141916),doubleToFloat(0.270572)))))
    .addChild(new ProtoDeclare().setName("ArtDeco29").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBody()
        .addChild(new Material().setAmbientIntensity(0.215686).setDiffuseColor(doubleToFloat(0.087034),doubleToFloat(0.025888),doubleToFloat(0.0)).setShininess(0.045918).setSpecularColor(doubleToFloat(0.224138),doubleToFloat(0.104091),doubleToFloat(0.104091)))))
    .addChild(new ProtoDeclare().setName("ArtDeco30").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBody()
        .addChild(new Material().setAmbientIntensity(0.0).setDiffuseColor(doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(0.0)).setShininess(0.081633).setSpecularColor(doubleToFloat(0.293243),doubleToFloat(0.297387),doubleToFloat(0.290421)))))
    .addChild(new ProtoDeclare().setName("ArtDeco31").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBody()
        .addChild(new Material().setAmbientIntensity(0.25641).setDiffuseColor(doubleToFloat(0.236364),doubleToFloat(0.236364),doubleToFloat(0.236364)).setShininess(0.054546).setSpecularColor(doubleToFloat(0.29697),doubleToFloat(0.245839),doubleToFloat(0.295962)))))
    .addChild(new ProtoDeclare().setName("ArtDeco32").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBody()
        .addChild(new Material().setAmbientIntensity(0.242424).setDiffuseColor(doubleToFloat(0.38087),doubleToFloat(0.382957),doubleToFloat(0.417708)).setShininess(0.933333).setSpecularColor(doubleToFloat(0.533333),doubleToFloat(0.533333),doubleToFloat(0.533333)))))
    .addChild(new ProtoDeclare().setName("ArtDeco33").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBody()
        .addChild(new Material().setAmbientIntensity(0.230089).setDiffuseColor(doubleToFloat(0.610811),doubleToFloat(0.610811),doubleToFloat(0.610811)).setShininess(0.897297).setSpecularColor(doubleToFloat(0.767568),doubleToFloat(0.756757),doubleToFloat(0.764964)))))
    .addChild(new ProtoDeclare().setName("ArtDeco34").setAppinfo("UniversalMediaMaterials prototype").setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials")
      .setProtoBody(new ProtoBody()
        .addChild(new Material().setAmbientIntensity(0.25).setShininess(0.0).setSpecularColor(doubleToFloat(0.2),doubleToFloat(0.2),doubleToFloat(0.2)))))
    .addChild(new Anchor().setDescription("ArtDecoPrototypeExample").setParameter(new MFString("\"target=_blank\"")).setUrl(new MFString("\"../data/ArtDecoExamples.json\" \"../data/ArtDecoExamples.x3d\" \"ArtDecoExamples.json\" \"ArtDecoExamples.x3d\" "))
      .addChild(new Shape()
        .setAppearance(new Appearance()
          .setMaterial(new Material().setDiffuseColor(doubleToFloat(0.8),doubleToFloat(0.4),doubleToFloat(0.0))))
        .setGeometry(new Text().setString(this.Text_5_121_string)
          .setFontStyle(new FontStyle().setJustify(new MFString("\"MIDDLE\" \"MIDDLE\"")).setSize(0.8))))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return ArtDecoPrototypes model
   */
  getX3dModel : function()
  {	  
	  return this.x3dModel;
  },
  
  /** Indicate X3DJSAIL validation results for this X3D model.
   * @return validation results plus exception information, if any
   */
  validateSelf : function()
  {
	var       metaResult = "";
	var validationResult = "";
	var  exceptionResult = "";
	try
	{
		this.initialize();
		
		if ((this.getX3dModel() == null) || (this.getX3dModel().getHead() == null))
		{
			validationResult = "empty scene, nothing to validate. " + this.x3dModel.validate();
			return validationResult;
		}
		// first list informational meta elements of interest
		var metaList = this.getX3dModel().getHead().getMetaList();
		for (var m in metaList) {
			var metaObject = metaList[m];
			if (metaObject.getName() === metaObject.NAME_ERROR ||
				metaObject.getName() === metaObject.NAME_WARNING ||
				metaObject.getName() === metaObject.NAME_HINT ||
				metaObject.getName() === metaObject.NAME_INFO ||
				metaObject.getName() === metaObject.NAME_TODO)
			{
				metaResult += metaObject.toStringX3D();
			}
		}
		validationResult += this.x3dModel.validate(); // walk entire tree to validate correctness
	}
	catch (e)
	{
		exceptionResult = e; // report exception failures, if any
	}
	if  (metaResult === "" && exceptionResult === "" && validationResult === "")
	     return "success";
	else
	{
		var returnMessage = metaResult;
		if  (exceptionResult !== "" && validationResult !== "")
			returnMessage += "\n*** ";
		returnMessage += exceptionResult;
		if  (exceptionResult === "" && validationResult !== "")
			returnMessage = "\n" + returnMessage; // skip line before meta tags, etc.
		returnMessage += validationResult;
		return returnMessage;
	}
  },
    /** Default main() method provided for test purposes.
     * @param argv input parameters
     */
    main : function (argv)
    {
		var testObject = new ArtDecoPrototypes();
		print ("ArtDecoPrototypes execution self-validation test results: " + testObject.validateSelf());
	}
}
new ArtDecoPrototypes().main();