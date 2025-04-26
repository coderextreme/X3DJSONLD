var java = require('java');
java.asyncOptions = {
  asyncSuffix: undefined,     // Don't generate node-style methods taking callbacks
  syncSuffix: "",              // Sync methods use the base name(!!)
  promiseSuffix: "Promise",   // Generate methods returning promises, using the suffix Promise.
  promisify: require('util').promisify, // Needs Node.js version 8 or greater, see comment below
  ifReadOnlySuffix: "_alt"
};
var autoclass = require('./X3Dautoclass');

// Javadoc annotations follow, see below for source.
/**
 * <p> *enter description here, short-sentence summaries preferred*. </p>
 <p> Related links: bumpyfreewrljsonverse.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.bumpyfreewrljsonverse&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="bumpyfreewrljsonverse.x3d">bumpyfreewrljsonverse.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> *enter description here, short-sentence summaries preferred* </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Doug Sanden, Christoph Valentin, John Carlson </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translator </i> </td>
			<td> *if manually translating VRML-to-X3D, enter name of person translating here* </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> *enter date of initial version here* </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translated </i> </td>
			<td> *enter date of translation here* </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> *enter date of latest revision here* </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> version </i> </td>
			<td> *enter version here, if any* </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> *enter reference citation or relative/online url here* </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> *enter additional url/bibliographic reference information here* </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> requires </i> </td>
			<td> *enter reference resource here if required to support function, delivery, or coherence of content* </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> rights </i> </td>
			<td> *enter copyright information here* Example: Copyright (c) Web3D Consortium Inc. 2008, 2024 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> drawing </i> </td>
			<td> *enter drawing filename/url here* </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> MovingImage </i> </td>
			<td> *enter movie filename/url here* </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> photo </i> </td>
			<td> *enter photo filename/url here* </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> subject </i> </td>
			<td> *enter subject keywords here* </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> accessRights </i> </td>
			<td> *enter permission statements or url here* </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> *enter online Uniform Resource Identifier (URI) or Uniform Resource Locator (URL) address for this file here* </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> PSPad, <a href="http://www.pspad.com/" target="_blank">http://www.pspad.com/</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="license.html">license.html</a> </td>
		</tr>
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center;" colspan="2">  &nbsp; </td>
		</tr>
	</table>

	<p>
		This program uses the
		<a href="https://www.web3d.org/specifications/java/X3DJSAIL.html" target="_blank">X3D Java Scene Access Interface Library (X3DJSAIL)</a>.
		It has been produced using the 
		<a href="https://www.web3d.org/x3d/stylesheets/X3dToNodeJS.xslt" target="_blank">X3dToNodeJS.xslt</a>
		stylesheet to create NodeJS source code from an <code>.x3d</code> scene.
	</p>

	* @author Doug Sanden, Christoph Valentin, John Carlson
 */

function bumpyfreewrljsonverse
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
bumpyfreewrljsonverse.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {
  this.x3dModel = (new autoclass.X3D()).setProfile("Full").setVersion("4.0")
  .setHead((new autoclass.head())
    .addComponent((new autoclass.component()).setName("Scripting").setLevel(1))
    .addComponent((new autoclass.component()).setName("EnvironmentalEffects").setLevel(3))
    .addComponent((new autoclass.component()).setName("Shaders").setLevel(1))
    .addComponent((new autoclass.component()).setName("CubeMapTexturing").setLevel(1))
    .addComponent((new autoclass.component()).setName("Texturing").setLevel(1))
    .addComponent((new autoclass.component()).setName("Rendering").setLevel(1))
    .addComments("<component name='Shape' level='4'></component>")
    .addComponent((new autoclass.component()).setName("Grouping").setLevel(3))
    .addComponent((new autoclass.component()).setName("Core").setLevel(1))
    .addComponent((new autoclass.component()).setName("DIS").setLevel(2))
    .addMeta((new autoclass.meta()).setName("title").setContent("bumpyfreewrljsonverse.x3d"))
    .addMeta((new autoclass.meta()).setName("description").setContent("*enter description here, short-sentence summaries preferred*"))
    .addMeta((new autoclass.meta()).setName("creator").setContent("Doug Sanden, Christoph Valentin, John Carlson"))
    .addMeta((new autoclass.meta()).setName("translator").setContent("*if manually translating VRML-to-X3D, enter name of person translating here*"))
    .addMeta((new autoclass.meta()).setName("created").setContent("*enter date of initial version here*"))
    .addMeta((new autoclass.meta()).setName("translated").setContent("*enter date of translation here*"))
    .addMeta((new autoclass.meta()).setName("modified").setContent("*enter date of latest revision here*"))
    .addMeta((new autoclass.meta()).setName("version").setContent("*enter version here, if any*"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("*enter reference citation or relative/online url here*"))
    .addMeta((new autoclass.meta()).setName("reference").setContent("*enter additional url/bibliographic reference information here*"))
    .addMeta((new autoclass.meta()).setName("requires").setContent("*enter reference resource here if required to support function, delivery, or coherence of content*"))
    .addMeta((new autoclass.meta()).setName("rights").setContent("*enter copyright information here* Example: Copyright (c) Web3D Consortium Inc. 2008, 2024"))
    .addMeta((new autoclass.meta()).setName("drawing").setContent("*enter drawing filename/url here*"))
    .addMeta((new autoclass.meta()).setName("MovingImage").setContent("*enter movie filename/url here*"))
    .addMeta((new autoclass.meta()).setName("photo").setContent("*enter photo filename/url here*"))
    .addMeta((new autoclass.meta()).setName("subject").setContent("*enter subject keywords here*"))
    .addMeta((new autoclass.meta()).setName("accessRights").setContent("*enter permission statements or url here*"))
    .addMeta((new autoclass.meta()).setName("identifier").setContent("*enter online Uniform Resource Identifier (URI) or Uniform Resource Locator (URL) address for this file here*"))
    .addMeta((new autoclass.meta()).setName("generator").setContent("PSPad, http://www.pspad.com/"))
    .addMeta((new autoclass.meta()).setName("license").setContent("license.html"))
    .addComments(" Additional authoring resources for meta-tags: http://www.dublincore.org/documents/dcmi-terms http://www.dublincore.org/documents/dces http://www.w3.org/TR/html4/struct/global.html#h-7.4.4 http://vancouver-webpages.com/META http://vancouver-webpages.com/META/about-mk-metas2.html Additional authoring resources for language codes: ftp://ftp.isi.edu/in-notes/bcp/bcp47.txt http://www.loc.gov/standards/iso639-2/langhome.html http://www.iana.org/numbers.html#L "))
  .addComments(java.newArray("java.lang.String",[" \"The Flower Review (TPREV)\", a simple MU scene using DIS Sensor Event Distribution,",
"     It is assumed the reviewers (users) have a non-X3D voice channel (e.g. TeamSpeak)",
"     open for their \"discussion about the teapot\" ]))
  .setScene((new autoclass.Scene())
    .addComments(" basic nodes, which might be present in any scene ")
    .addChild((new autoclass.NavigationInfo()).setAvatarSize(java.newArray("float", [0.25,.0,1.75,.0,0.75])).setType("\"EXAMINE\""))
    .addChild((new autoclass.DirectionalLight()).setAmbientIntensity(.2).setDirection(0.0,-1.0,-0.0))
    .addChild((new autoclass.DirectionalLight()).setAmbientIntensity(.2).setDirection(-1.0,-.1,-1.0))
    .addChild((new autoclass.Viewpoint()).setDescription("My Overview").setFieldOfView(1.570796).setPosition(0.0,1.75,60.0))
    .addComments(" LayerSet with two layers, navigation happens in layer 1 ")
    .addLayerSet((new autoclass.LayerSet()).setActiveLayer(1).setOrder(java.newArray("int", [1,2]))
      .addComments(" the first Layer contains the main scenery - \"The Review of the Flower (DIS Multiuser)\" ")
      .addLayers((new autoclass.Layer()).setObjectType(new autoclass.MFString("\"ALL\"")).setPickable(true)
        .addComments(" this group contains the red/green/blue 3D crosshair ")
        .addChild((new autoclass.Group())
          .addComments(" Arrow X ")
          .addChild((new autoclass.Transform()).setRotation(0.0,0.0,-1.0,1.57).setTranslation(25.0,0.0,0.0)
            .addChild((new autoclass.Shape())
              .setGeometry((new autoclass.Cylinder("Shaft")).setHeight(50.0).setRadius(.35))
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material("RED")).setDiffuseColor(1.0,0.0,0.0).setEmissiveColor(1.0,0.0,0.0)))))
          .addChild((new autoclass.Transform()).setRotation(0.0,0.0,-1.0,1.57).setTranslation(50.0,0.0,0.0)
            .addChild((new autoclass.Shape())
              .setGeometry((new autoclass.Cone("Tip")).setBottomRadius(.8).setHeight(3.0))
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material())))))
          .addComments(" Arrow Y ")
          .addChild((new autoclass.Transform()).setTranslation(0.0,25.0,0.0)
            .addChild((new autoclass.Shape())
              .setGeometry((new autoclass.Cylinder()))
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material("GREEN")).setDiffuseColor(0.0,1.0,0.0).setEmissiveColor(0.0,1.0,0.0)))))
          .addChild((new autoclass.Transform()).setTranslation(0.0,50.0,0.0)
            .addChild((new autoclass.Shape())
              .setGeometry((new autoclass.Cone()))
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material())))))
          .addComments(" Arrow Z ")
          .addChild((new autoclass.Transform()).setRotation(1.0,0.0,0.0,1.57).setTranslation(0.0,0.0,25.0)
            .addChild((new autoclass.Shape())
              .setGeometry((new autoclass.Cylinder()))
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material("BLUE")).setDiffuseColor(0.0,0.0,1.0).setEmissiveColor(0.0,0.0,1.0)))))
          .addChild((new autoclass.Transform()).setRotation(1.0,0.0,0.0,1.57).setTranslation(0.0,0.0,50.0)
            .addChild((new autoclass.Shape())
              .setGeometry((new autoclass.Cone()))
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material()))))))
        .addComments(" the model that is being reviewed by the users of this scene ")
        .addChild((new autoclass.Transform("FlowerTransform"))
          .addComments(java.newArray("java.lang.String",["",
"        <Inline DEF=\"Flower\" url='\"bumpyfreewrl.x3d\"' />"]))
          .addComments(" Images courtesy of Paul Debevec's Light Probe Image Gallery ")
          .addChild((new autoclass.Background()).setBackUrl(new autoclass.MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png\"")).setBottomUrl(new autoclass.MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png\"")).setFrontUrl(new autoclass.MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png\"")).setLeftUrl(new autoclass.MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png\"")).setRightUrl(new autoclass.MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png\"")).setTopUrl(new autoclass.MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png\"")))
          .addChild((new autoclass.Transform())
            .addChild((new autoclass.Shape())
              .addComments(java.newArray("java.lang.String",["",
"	  <Sphere radius='40'></Sphere>"]))
              .setGeometry((new autoclass.IndexedFaceSet("Orbit")).setDEF("Orbit").setConvex(false)
                .setCoord((new autoclass.Coordinate("OrbitCoordinates"))))
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material()).setDiffuseColor(.7,.7,.7).setSpecularColor(.5,.5,.5))
                .setTexture((new autoclass.ComposedCubeMapTexture("texture"))
                  .setBackTexture((new autoclass.ImageTexture()).setUrl(new autoclass.MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_back.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png\"")))
                  .setBottomTexture((new autoclass.ImageTexture()).setUrl(new autoclass.MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_bottom.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png\"")))
                  .setFrontTexture((new autoclass.ImageTexture()).setUrl(new autoclass.MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_front.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png\"")))
                  .setLeftTexture((new autoclass.ImageTexture()).setUrl(new autoclass.MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_left.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png\"")))
                  .setRightTexture((new autoclass.ImageTexture()).setUrl(new autoclass.MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_right.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png\"")))
                  .setTopTexture((new autoclass.ImageTexture()).setUrl(new autoclass.MFString("\"../resources/images/all_probes/stpeters_cross/stpeters_top.png\" \"https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png\""))))
                .addShaders((new autoclass.ComposedShader("freewrlShader")).setLanguage("GLSL")
                  .addField((new autoclass.field()).setName(chromaticDispertion).setType(SFVec3f).setAccessType(inputOnly.0).setValue(0.98,1.0,1.033))
                  .addField((new autoclass.field()).setName(fw_textureCoordGenType).setType(SFInt32).setAccessType(inputOnly).setValue(0))
                  .addField((new autoclass.field()).setName(bias).setType(SFFloat).setAccessType(inputOnly).setValue(0.5))
                  .addField((new autoclass.field()).setName(scale).setType(SFFloat).setAccessType(inputOnly).setValue(0.5))
                  .addField((new autoclass.field()).setName(power).setType(SFFloat).setAccessType(inputOnly).setValue(2))
                  .addField((new autoclass.field()).setName(a).setType(SFFloat).setAccessType(inputOutput).setValue(15))
                  .addField((new autoclass.field()).setName(b).setType(SFFloat).setAccessType(inputOutput).setValue(5))
                  .addField((new autoclass.field()).setName(c).setType(SFFloat).setAccessType(inputOutput).setValue(5))
                  .addField((new autoclass.field()).setName(d).setType(SFFloat).setAccessType(inputOutput).setValue(5))
                  .addField((new autoclass.field()).setName(tdelta).setType(SFFloat).setAccessType(inputOutput).setValue(0))
                  .addField((new autoclass.field()).setName(pdelta).setType(SFFloat).setAccessType(inputOutput).setValue(0))
                  .addParts((new autoclass.ShaderPart()).setUrl(new autoclass.MFString("\"../shaders/freewrl_flowers_chromatic.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl_flowers_chromatic.vs\"")))
                  .addParts((new autoclass.ShaderPart()).setType("FRAGMENT").setUrl(new autoclass.MFString("\"../shaders/freewrl.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/freewrl_bubbles.fs\"")))
                  .addComments(java.newArray("java.lang.String",[" TO CONVERT TO A SPHERE",
"                  <ShaderPart url='\"../shaders/freewrl.vs\"' type=\"VERTEX\" containerField='parts'></ShaderPart>",
"                  <ShaderPart url='\"../shaders/freewrl_bubbles.fs\"' containerField='parts' type='FRAGMENT'></ShaderPart>"])))))))
        .addChild((new autoclass.Script("OrbitScript")).setSourceCode("\n" + 
"ecmascript:" + "\n" + 
"function initialize() {" + "\n" + 
"     var resolution = 100;" + "\n" + 
"     var theta = 0.0;" + "\n" + 
"     var phi = 0.0;" + "\n" + 
"     var delta = (2 * 3.141592653) / (resolution-1);" + "\n" + 
"     var crds = new MFVec3f();" + "\n" + 
"     var vecCount = 0;" + "\n" + 
"     for ( i = 0; i < resolution; i++) {" + "\n" + 
"     	for ( j = 0; j < resolution; j++) {" + "\n" + 
"		var rho = a + b * Math.cos(c * theta + tdelta) * Math.cos(d * phi + pdelta);" + "\n" + 
"		crds[vecCount] = new SFVec3f(" + "\n" + 
"			rho * Math.cos(phi) * Math.cos(theta)," + "\n" + 
"			rho * Math.cos(phi) * Math.sin(theta)," + "\n" + 
"			rho * Math.sin(phi)" + "\n" + 
"		);" + "\n" + 
"		vecCount++;" + "\n" + 
"		theta += delta;" + "\n" + 
"	}" + "\n" + 
"	phi += delta;" + "\n" + 
"     }" + "\n" + 
"     coordinates = crds;" + "\n" + 
"     // coordinates = new MFVec3f(...crds);" + "\n" + 
"\n" + 
"\n" + 
"     var cis = new MFInt32();" + "\n" + 
"     var intCount = 0;" + "\n" + 
"     for ( i = 0; i < resolution-1; i++) {" + "\n" + 
"     	for ( j = 0; j < resolution-1; j++) {" + "\n" + 
"	     cis[intCount++] = i*resolution+j;" + "\n" + 
"	     cis[intCount++] = i*resolution+j+1;" + "\n" + 
"	     cis[intCount++] = (i+1)*resolution+j+1;" + "\n" + 
"	     cis[intCount++] = (i+1)*resolution+j;" + "\n" + 
"	     cis[intCount++] = -1;" + "\n" + 
"	}" + "\n" + 
"    }" + "\n" + 
"    coordIndexes = cis;" + "\n" + 
"    // coordIndexes = new MFInt32(...cis);" + "\n" + 
"}" + "\n")
          .addField((new autoclass.field()).setName(new autoclass.MFVec3f(java.newArray("float", [coordinates]))).setType(new autoclass.MFVec3f(java.newArray("float", [MFVec3f]))).setAccessType(new autoclass.MFVec3f(java.newArray("float", [inputOutput.0]))))
          .addField((new autoclass.field()).setName(java.newArray("int", [coordIndexes])).setType(java.newArray("int", [MFInt32])).setAccessType(java.newArray("int", [outputOnly])))
          .addField((new autoclass.field()).setName(a).setType(SFFloat).setAccessType(inputOutput).setValue(10))
          .addField((new autoclass.field()).setName(b).setType(SFFloat).setAccessType(inputOutput).setValue(10))
          .addField((new autoclass.field()).setName(c).setType(SFFloat).setAccessType(inputOutput).setValue(2))
          .addField((new autoclass.field()).setName(d).setType(SFFloat).setAccessType(inputOutput).setValue(2))
          .addField((new autoclass.field()).setName(pdelta).setType(SFFloat).setAccessType(inputOutput).setValue(0))
          .addField((new autoclass.field()).setName(tdelta).setType(SFFloat).setAccessType(inputOutput).setValue(0)))
        .addChild((new autoclass.ROUTE()).setFromNode("OrbitScript").setFromField("coordIndexes").setToNode("Orbit").setToField("set_coordIndex"))
        .addChild((new autoclass.ROUTE()).setFromNode("OrbitScript").setFromField("coordinates").setToNode("OrbitCoordinates").setToField("set_point"))
        .addComments(" DIS multiuser facilities ")
        .addChild((new autoclass.DISEntityManager("EntityManager")).setNetworkMode("networkReader")
          .addChild((new autoclass.DISEntityTypeMapping()).setCategory(77).setReadInterval(3.0).setSpecific(1).setUrl(new autoclass.MFString("\"../data/Gramps8Final.x3d\" \"https://coderextreme.net/X3DJSONLD/src/main/data/Gramps8Final.x3d\"")))
          .addChild((new autoclass.DISEntityTypeMapping()).setCategory(77).setReadInterval(3.0).setSpecific(2).setUrl(new autoclass.MFString("\"../data/Leif8Final.x3d\" \"https://coderextreme.net/X3DJSONLD/src/main/data/Leif8Final.x3d\"")))
          .addChild((new autoclass.DISEntityTypeMapping()).setCategory(77).setReadInterval(3.0).setSpecific(3).setUrl(new autoclass.MFString("\"../data/Lily8Final.x3d\" \"https://coderextreme.net/X3DJSONLD/src/main/data/Lily8Final.x3d\"")))
          .addChild((new autoclass.DISEntityTypeMapping()).setCategory(77).setReadInterval(3.0).setSpecific(4).setUrl(new autoclass.MFString("\"../data/Tufani8Final.x3d\" \"https://coderextreme.net/X3DJSONLD/src/main/data/Tufani8Final.x3d\""))))
        .addChild((new autoclass.Collision()).setEnabled(false)
          .addChild((new autoclass.Group("AvatarHolder"))))
        .addChild((new autoclass.ROUTE()).setFromNode("EntityManager").setFromField("addedEntities").setToNode("AvatarHolder").setToField("addChildren"))
        .addChild((new autoclass.ROUTE()).setFromNode("EntityManager").setFromField("removedEntities").setToNode("AvatarHolder").setToField("removeChildren")))
      .addComments(java.newArray("java.lang.String",[" the second layer contains the sliders that are moved with the user's display",
"         like a HUD (heads up display) ]))
      .addLayers((new autoclass.LayoutLayer()).setObjectType(new autoclass.MFString("\"ALL\"")).setPickable(true)
        .addComments(" positioning the LayoutLayer ")
        .setLayout((new autoclass.Layout()).setAlign(new autoclass.MFString("\"LEFT\",\"BOTTOM\"")).setOffset(java.newArray("float", [-0.2,.0,0.19])).setOffsetUnits(new autoclass.MFString("\"WORLD\",\"WORLD\"")).setScaleMode(new autoclass.MFString("\"NONE\",\"NONE\"")).setSize(java.newArray("float", [0.4,.0,0.6])).setSizeUnits(new autoclass.MFString("\"WORLD\",\"WORLD\"")))
        .addComments(" clipping the LayoutLayer ")
        .setViewport((new autoclass.Viewport()).setClipBoundary(java.newArray("float", [0.0,.0,1.0,.0,0.0,.0,1.0])))
        .addComments(" the content (children) of the LayoutLayer ")
        .addComments(" first, the slider for scaling the model ")
        .addChild((new autoclass.Transform()).setTranslation(0.0,0.0,-3.0)
          .addChild((new autoclass.Shape())
            .setAppearance((new autoclass.Appearance())
              .setMaterial((new autoclass.Material()).setDiffuseColor(0.0,0.0,0.0).setTransparency(0.7)))
            .setGeometry((new autoclass.Box()).setSize(100.0,100.0,0.02))))
        .addChild((new autoclass.Transform("equationTransform"))
          .addChild((new autoclass.Transform()).setTranslation(0.0,0.0,-20.0)
            .addChild((new autoclass.Shape())
              .setGeometry((new autoclass.Text("equation")).setString(new autoclass.MFString("\"r = a + b * cos(c * theta + tdelta) * cos (d * phi + pdelta)\""))
                .setFontStyle((new autoclass.FontStyle()).setSize(0.09)))
              .setAppearance((new autoclass.Appearance())
                .setMaterial((new autoclass.Material()).setDiffuseColor(1.0,1.0,0.0))))))
        .addChild((new autoclass.ProtoDeclare()).setName("SliderProto")
          .setProtoInterface((new autoclass.ProtoInterface())
            .addField((new autoclass.field()).setName(sliderTranslation).setType(SFVec3f).setAccessType(inputOutput.0).setValue(0.0,0.7,0.0))
            .addField((new autoclass.field()).setName(transformTranslation.0).setType(SFVec3f).setAccessType(inputOutput.0).setValue(0.0,0.0,0.1))
            .addField((new autoclass.field()).setName(sensorTranslation).setType(SFVec3f).setAccessType(inputOutput.0).setValue(0.0,0.0,0.0))
            .addField((new autoclass.field()).setName(new autoclass.MFString("\"textString\"")).setType(new autoclass.MFString("\"MFString\"")).setAccessType(new autoclass.MFString("\"inputOutput\"")).setValue(new autoclass.MFString("\"a=\"")))
            .addField((new autoclass.field()).setName(parameterScale).setType(SFFloat).setAccessType(inputOutput).setValue(30))
            .addField((new autoclass.field()).setName("parameterName").setType("SFString").setAccessType("inputOutput").setValue("a"))
            .addField((new autoclass.field()).setName(shaderNode).setType(SFNode).setAccessType(inputOutput)))
          .setProtoBody((new autoclass.ProtoBody())
            .addChild((new autoclass.Group())
              .addChild((new autoclass.Transform("protoSlider")).setTranslation(0.0,0.7,0.0)
                .setIS((new autoclass.IS())
                  .addConnect((new autoclass.connect()).setNodeField("translation").setProtoField("sliderTranslation")))
                .addChild((new autoclass.Transform("protoTransform")).setTranslation(0.0,0.0,0.1)
                  .setIS((new autoclass.IS())
                    .addConnect((new autoclass.connect()).setNodeField("translation").setProtoField("transformTranslation")))
                  .addChild((new autoclass.PlaneSensor("protoSensor")).setMaxPosition(1.0,0.0))
                  .setIS((new autoclass.IS())
                    .addConnect((new autoclass.connect()).setNodeField("translation").setProtoField("sensorTranslation")))
                  .addChild((new autoclass.Transform()).setTranslation(0.0,0.0,0.0)
                    .addChild((new autoclass.TouchSensor("protoTS"))))
                  .addChild((new autoclass.Transform())
                    .addChild((new autoclass.Shape())
                      .setGeometry((new autoclass.Text("protoText")).setString(new autoclass.MFString("\"a=\""))
                        .setIS((new autoclass.IS())
                          .addConnect((new autoclass.connect()).setNodeField("string").setProtoField("textString")))
                        .setFontStyle((new autoclass.FontStyle()).setSize(0.23)))
                      .setAppearance((new autoclass.Appearance())
                        .setMaterial((new autoclass.Material())))))))
              .addChild((new autoclass.Script("protoValueTransformerScript")).setDirectOutput(true).setMustEvaluate(true).setSourceCode("\n" + 
"ecmascript:" + "\n" + 
"const newTranslation = function(Value) {" + "\n" + 
"	'use strict';" + "\n" + 
"	protoValue_changed = Value.x * protoScale;" + "\n" + 
"	protoText_changed = new MFString(protoParameterName+'='+protoValue_changed.toFixed(2));" + "\n" + 
"\n" + 
"        var orientation = Value.x;" + "\n" + 
"\n" + 
"        var ps = Browser.currentScene.getNamedNode(\"protoSensor\");" + "\n" + 
"        var t = Browser.currentScene.getNamedNode(\"protoTransform\");" + "\n" + 
"        var txt = Browser.currentScene.getNamedNode(\"protoText\");" + "\n" + 
"        if (shader) {" + "\n" + 
"            shader.getField(protoParameterName).setValue(orientation * protoScale);" + "\n" + 
"        }" + "\n" + 
"        if (txt) {" + "\n" + 
"            var stringField = txt.getField(\"string\");" + "\n" + 
"            var label = protoParameterName;" + "\n" + 
"            stringField.setValue(new MFString(label+\"=\"+(orientation * protoScale).toFixed(2)));" + "\n" + 
"        }" + "\n" + 
"        if (ps) {" + "\n" + 
"            ps.offset = new SFVec3f(orientation, ps.offset[1], ps.offset[2]);" + "\n" + 
"        }" + "\n" + 
"        if (t) {" + "\n" + 
"            t.translation = new SFVec3f(orientation, t.translation[1], t.translation[2]);" + "\n" + 
"        }" + "\n" + 
"}" + "\n")
                .addField((new autoclass.field()).setName(protoScale).setType(SFFloat).setAccessType(inputOutput).setValue(30))
                .addField((new autoclass.field()).setName("protoParameterName").setType("SFString").setAccessType("inputOutput").setValue("a"))
                .addField((new autoclass.field()).setName(shader).setType(SFNode).setAccessType(inputOutput))
                .addField((new autoclass.field()).setName(newTranslation).setType(SFVec3f).setAccessType(inputOnly.0).setValue(1.0,1.0,1.0))
                .addField((new autoclass.field()).setName(protoValue_changed).setType(SFFloat).setAccessType(outputOnly).setValue(1.0))
                .addField((new autoclass.field()).setName(new autoclass.MFString("\"protoText_changed\"")).setType(new autoclass.MFString("\"MFString\"")).setAccessType(new autoclass.MFString("\"outputOnly\"")).setValue(new autoclass.MFString("\"1.0\"")))
                .setIS((new autoclass.IS())
                  .addConnect((new autoclass.connect()).setNodeField("protoScale").setProtoField("parameterScale"))
                  .addConnect((new autoclass.connect()).setNodeField("protoParameterName").setProtoField("parameterName"))
                  .addConnect((new autoclass.connect()).setNodeField("shader").setProtoField("shaderNode"))))
              .addChild((new autoclass.ROUTE()).setFromNode("protoSensor").setFromField("translation_changed").setToNode("protoTransform").setToField("set_translation"))
              .addChild((new autoclass.ROUTE()).setFromNode("protoSensor").setFromField("translation_changed").setToNode("protoValueTransformerScript").setToField("newTranslation"))
              .addChild((new autoclass.ROUTE()).setFromNode("protoValueTransformerScript").setFromField("protoText_changed").setToNode("protoText").setToField("string")))))
        .addChild((new autoclass.ProtoInstance("aPI", "SliderProto"))
          .addFieldValue((new autoclass.fieldValue()).setName("sliderTranslation").setValue(0 0.7 0))
          .addFieldValue((new autoclass.fieldValue()).setName("transformTranslation").setValue(0 0 0.1))
          .addFieldValue((new autoclass.fieldValue()).setName("sensorTranslation").setValue(0 0 0.0))
          .addFieldValue((new autoclass.fieldValue()).setName("textString").setValue("a="))
          .addFieldValue((new autoclass.fieldValue()).setName("parameterScale").setValue(30))
          .addFieldValue((new autoclass.fieldValue()).setName("parameterName").setValue(a))
          .addFieldValue((new autoclass.fieldValue()).setName("shaderNode")
            .addChild((new autoclass.ComposedShader()))))
        .addChild((new autoclass.ProtoInstance("bPI", "SliderProto"))
          .addFieldValue((new autoclass.fieldValue()).setName("sliderTranslation").setValue(0 0.4 0))
          .addFieldValue((new autoclass.fieldValue()).setName("transformTranslation").setValue(0 0 0.1))
          .addFieldValue((new autoclass.fieldValue()).setName("sensorTranslation").setValue(0 0 0.0))
          .addFieldValue((new autoclass.fieldValue()).setName("textString").setValue("b="))
          .addFieldValue((new autoclass.fieldValue()).setName("parameterScale").setValue(30))
          .addFieldValue((new autoclass.fieldValue()).setName("parameterName").setValue(b))
          .addFieldValue((new autoclass.fieldValue()).setName("shaderNode")
            .addChild((new autoclass.ComposedShader()))))
        .addChild((new autoclass.ProtoInstance("cPI", "SliderProto"))
          .addFieldValue((new autoclass.fieldValue()).setName("sliderTranslation").setValue(0 0.1 0))
          .addFieldValue((new autoclass.fieldValue()).setName("transformTranslation").setValue(0 0 0.1))
          .addFieldValue((new autoclass.fieldValue()).setName("sensorTranslation").setValue(0 0 0.0))
          .addFieldValue((new autoclass.fieldValue()).setName("textString").setValue("c="))
          .addFieldValue((new autoclass.fieldValue()).setName("parameterScale").setValue(20))
          .addFieldValue((new autoclass.fieldValue()).setName("parameterName").setValue(c))
          .addFieldValue((new autoclass.fieldValue()).setName("shaderNode")
            .addChild((new autoclass.ComposedShader()))))
        .addChild((new autoclass.ProtoInstance("dPI", "SliderProto"))
          .addFieldValue((new autoclass.fieldValue()).setName("sliderTranslation").setValue(0 -0.2 0))
          .addFieldValue((new autoclass.fieldValue()).setName("transformTranslation").setValue(0 0 0.1))
          .addFieldValue((new autoclass.fieldValue()).setName("sensorTranslation").setValue(0 0 0.0))
          .addFieldValue((new autoclass.fieldValue()).setName("textString").setValue("d="))
          .addFieldValue((new autoclass.fieldValue()).setName("parameterScale").setValue(20))
          .addFieldValue((new autoclass.fieldValue()).setName("parameterName").setValue(d))
          .addFieldValue((new autoclass.fieldValue()).setName("shaderNode")
            .addChild((new autoclass.ComposedShader()))))
        .addChild((new autoclass.ProtoInstance("tdeltaPI", "SliderProto"))
          .addFieldValue((new autoclass.fieldValue()).setName("sliderTranslation").setValue(0 -0.5 0))
          .addFieldValue((new autoclass.fieldValue()).setName("transformTranslation").setValue(0 0 0.1))
          .addFieldValue((new autoclass.fieldValue()).setName("sensorTranslation").setValue(0 0 0.0))
          .addFieldValue((new autoclass.fieldValue()).setName("textString").setValue("tdelta="))
          .addFieldValue((new autoclass.fieldValue()).setName("parameterScale").setValue(6.28))
          .addFieldValue((new autoclass.fieldValue()).setName("parameterName").setValue(tdelta))
          .addFieldValue((new autoclass.fieldValue()).setName("shaderNode")
            .addChild((new autoclass.ComposedShader()))))
        .addChild((new autoclass.ProtoInstance("pdeltaPI", "SliderProto"))
          .addFieldValue((new autoclass.fieldValue()).setName("sliderTranslation").setValue(0 -0.8 0))
          .addFieldValue((new autoclass.fieldValue()).setName("transformTranslation").setValue(0 0 0.1))
          .addFieldValue((new autoclass.fieldValue()).setName("sensorTranslation").setValue(0 0 0.0))
          .addFieldValue((new autoclass.fieldValue()).setName("textString").setValue("pdelta="))
          .addFieldValue((new autoclass.fieldValue()).setName("parameterScale").setValue(6.28))
          .addFieldValue((new autoclass.fieldValue()).setName("parameterName").setValue(pdelta))
          .addFieldValue((new autoclass.fieldValue()).setName("shaderNode")
            .addChild((new autoclass.ComposedShader())))))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return bumpyfreewrljsonverse model
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
		validationResult += this.x3dModel.validate(); // walk entire tree to validate correctness
	}
	catch (e)
	{
		exceptionResult = e; // report exception failures, if any
	}
	if  (exceptionResult === "" && validationResult === "")
	     return "success";
	else
	{
		var returnMessage = "";
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
		var testObject = new bumpyfreewrljsonverse();
		console.log ("bumpyfreewrljsonverse execution self-validation test results: " + testObject.validateSelf());
	}
}
new bumpyfreewrljsonverse().main();