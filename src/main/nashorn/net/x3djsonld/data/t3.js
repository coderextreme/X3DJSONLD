load('X3Dautoclass.js');

// Javadoc annotations follow, see below for source.
/**
 * <p> Test Case for Proto Expander. </p>
 <p> Related links: t3.java source, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">net.x3djsonld.data.t3&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="http://coderextreme.net/X3DJSONLD/src/main/data/t4.x3d">t4.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="http://coderextreme.net/X3DJSONLD/src/main/data/t4.x3d" target="_blank">http://coderextreme.net/X3DJSONLD/src/main/data/t4.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> view3dscene, <a href="https://castle-engine.io/view3dscene.php" target="_blank">https://castle-engine.io/view3dscene.php</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Andreas Plesch and John Carlson </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> source </i> </td>
			<td> t1.wrl </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Test Case for Proto Expander </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/license.html" target="_blank">https://www.web3d.org/x3d/content/examples/license.html</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translated </i> </td>
			<td> 12 May 2020 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> DOM2JSONSerializer.js, <a href="https://github.com/coderextreme/X3DJSONLD/blob/master/src/main/node/DOM2JSONSerializer.js" target="_blank">https://github.com/coderextreme/X3DJSONLD/blob/master/src/main/node/DOM2JSONSerializer.js</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> X3D JSON encoding: <a href="https://www.web3d.org/wiki/index.php/X3D_JSON_Encoding" target="_blank">https://www.web3d.org/wiki/index.php/X3D_JSON_Encoding</a> </td>
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

	* @author Andreas Plesch and John Carlson
 */

function t3
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
t3.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {
  this.x3dModel = new X3DObject().setProfile("Immersive").setVersion("3.3")
  .setHead(new headObject()
    .addComponent(new componentObject().setName("Networking").setLevel(2))
    .addComponent(new componentObject().setName("Core").setLevel(2))
    .addMeta(new metaObject().setName("title").setContent("t4.x3d"))
    .addMeta(new metaObject().setName("identifier").setContent("http://coderextreme.net/X3DJSONLD/src/main/data/t4.x3d"))
    .addMeta(new metaObject().setName("generator").setContent("view3dscene, https://castle-engine.io/view3dscene.php"))
    .addMeta(new metaObject().setName("creator").setContent("Andreas Plesch and John Carlson"))
    .addMeta(new metaObject().setName("source").setContent("t1.wrl"))
    .addMeta(new metaObject().setName("description").setContent("Test Case for Proto Expander"))
    .addMeta(new metaObject().setName("license").setContent("https://www.web3d.org/x3d/content/examples/license.html"))
    .addMeta(new metaObject().setName("translated").setContent("12 May 2020"))
    .addMeta(new metaObject().setName("generator").setContent("DOM2JSONSerializer.js, https://github.com/coderextreme/X3DJSONLD/blob/master/src/main/node/DOM2JSONSerializer.js"))
    .addMeta(new metaObject().setName("reference").setContent("X3D JSON encoding: https://www.web3d.org/wiki/index.php/X3D_JSON_Encoding")))
  .setScene(new SceneObject()
    .addChild(new NavigationInfoObject().setType(new MFStringObject("\"EXAMINE\" \"FLY\" \"WALK\"")).setAvatarSize(Java.to([200.0,200.0,120.0], Java.type("float[]"))).setSpeed(3))
    .addChild(new WorldInfoObject().setTitle("Arts Mapper"))
    .addChild(new ViewpointObject().setDescription("looking North").setPosition(0.0,60.0,110.0).setFieldOfView(0.785398125648499).setOrientation(1.0,0.0,0.0,-0.699999988079071))
    .addChild(new TransformObject().setTranslation(-468.0,0.0,315.0)
      .addChild(new AnchorObject().setDescription("High Peak Community Arts").setUrl(new MFStringObject("\"javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/574.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\" \"javascript:window.open('./data/574.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new TransformObject()
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setEmissiveColor(0.0,0.300000011920929,1.0).setDiffuseColor(1.0,1.0,1.0)))
            .setGeometry(new SphereObject().setRadius(5.10000002384186)))))
      .addChild(new AnchorObject().setDescription("People Express").setUrl(new MFStringObject("\"javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/583.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\" \"javascript:window.open('./data/583.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new TransformObject()
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setEmissiveColor(0.600000023841858,0.0,0.600000023841858).setDiffuseColor(1.0,1.0,1.0)))
            .setGeometry(new SphereObject().setRadius(5.10000002384186)))))
      .addChild(new AnchorObject().setDescription("QArts/Studios").setUrl(new MFStringObject("\"javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/589.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\" \"javascript:window.open('./data/589.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new TransformObject()
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setEmissiveColor(0.600000023841858,0.0,0.600000023841858).setDiffuseColor(1.0,1.0,1.0)))
            .setGeometry(new SphereObject().setRadius(5.10000002384186)))))
      .addChild(new AnchorObject().setDescription("First Movement").setUrl(new MFStringObject("\"javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/593.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\" \"javascript:window.open('./data/593.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new TransformObject()
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setEmissiveColor(1.0,0.0,0.200000002980232).setDiffuseColor(1.0,1.0,1.0)))
            .setGeometry(new SphereObject().setRadius(5.10000002384186)))))
      .addChild(new AnchorObject().setDescription("City Arts").setUrl(new MFStringObject("\"javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/612.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\" \"javascript:window.open('./data/612.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new TransformObject()
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setEmissiveColor(0.600000023841858,0.0,0.600000023841858).setDiffuseColor(1.0,1.0,1.0)))
            .setGeometry(new SphereObject().setRadius(5.10000002384186)))))
      .addChild(new AnchorObject().setDescription("Indigo Dance Group (Salamanda Tandem)").setUrl(new MFStringObject("\"javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/615.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\" \"javascript:window.open('./data/615.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new TransformObject()
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setEmissiveColor(0.0,0.300000011920929,1.0).setDiffuseColor(1.0,1.0,1.0)))
            .setGeometry(new SphereObject().setRadius(5.10000002384186)))))
      .addChild(new AnchorObject().setDescription("Watering Seeds").setUrl(new MFStringObject("\"javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/623.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\" \"javascript:window.open('./data/623.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new TransformObject()
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setEmissiveColor(0.0,0.300000011920929,1.0).setDiffuseColor(1.0,1.0,1.0)))
            .setGeometry(new SphereObject().setRadius(5.10000002384186)))))
      .addChild(new AnchorObject().setDescription("Fased In The Arts").setUrl(new MFStringObject("\"javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/630.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\" \"javascript:window.open('./data/630.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new TransformObject()
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setEmissiveColor(0.0,0.300000011920929,1.0).setDiffuseColor(1.0,1.0,1.0)))
            .setGeometry(new SphereObject().setRadius(5.10000002384186)))))
      .addChild(new AnchorObject().setDescription("27a Access Artspace").setUrl(new MFStringObject("\"javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/633.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\" \"javascript:window.open('./data/633.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new TransformObject()
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setEmissiveColor(1.0,0.0,0.200000002980232).setDiffuseColor(1.0,1.0,1.0)))
            .setGeometry(new SphereObject().setRadius(5.10000002384186)))))
      .addChild(new AnchorObject().setDescription("Bamboozle Theatre Company").setUrl(new MFStringObject("\"javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/638.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\" \"javascript:window.open('./data/638.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new TransformObject()
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setEmissiveColor(0.0,0.300000011920929,1.0).setDiffuseColor(1.0,1.0,1.0)))
            .setGeometry(new SphereObject().setRadius(5.10000002384186)))))
      .addChild(new AnchorObject().setDescription("Mantle Community Arts").setUrl(new MFStringObject("\"javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/648.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\" \"javascript:window.open('./data/648.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new TransformObject()
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setEmissiveColor(0.0,0.300000011920929,1.0).setDiffuseColor(1.0,1.0,1.0)))
            .setGeometry(new SphereObject().setRadius(5.10000002384186)))))
      .addChild(new AnchorObject().setDescription("Artlink East").setUrl(new MFStringObject("\"javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/658.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\" \"javascript:window.open('./data/658.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new TransformObject()
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setEmissiveColor(0.0,0.300000011920929,1.0).setDiffuseColor(1.0,1.0,1.0)))
            .setGeometry(new SphereObject().setRadius(5.10000002384186)))))
      .addChild(new AnchorObject().setDescription("Creations").setUrl(new MFStringObject("\"javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/665.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\" \"javascript:window.open('./data/665.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new TransformObject()
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setEmissiveColor(0.0,0.300000011920929,1.0).setDiffuseColor(1.0,1.0,1.0)))
            .setGeometry(new SphereObject().setRadius(5.10000002384186)))))
      .addChild(new AnchorObject().setDescription("New Perspectives").setUrl(new MFStringObject("\"javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/670.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\" \"javascript:window.open('./data/670.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new TransformObject()
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setEmissiveColor(1.0,0.0,0.200000002980232).setDiffuseColor(1.0,1.0,1.0)))
            .setGeometry(new SphereObject().setRadius(5.10000002384186)))))
      .addChild(new AnchorObject().setDescription("UKan2").setUrl(new MFStringObject("\"javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/671.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\" \"javascript:window.open('./data/671.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');\""))
        .addChild(new TransformObject()
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setEmissiveColor(0.0,0.300000011920929,1.0).setDiffuseColor(1.0,1.0,1.0)))
            .setGeometry(new SphereObject().setRadius(5.10000002384186)))))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return t3 model
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
			meta = metaList[m];
			if (meta.getName().equals(metaObject.NAME_ERROR) ||
				meta.getName().equals(metaObject.NAME_WARNING) ||
				meta.getName().equals(metaObject.NAME_HINT) ||
				meta.getName().equals(metaObject.NAME_INFO) ||
				meta.getName().equals(metaObject.NAME_TODO))
			{
				metaResult += meta.toStringX3D();
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
		var testObject = new t3();
		print ("t3 execution self-validation test results: " + testObject.validateSelf());
	}
}
new t3().main();