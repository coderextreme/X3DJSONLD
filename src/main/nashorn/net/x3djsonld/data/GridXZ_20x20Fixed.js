load('X3Dautoclass.js');

// Javadoc annotations follow, see below for source.
/**
 * <p> Line grid authoring tool to enable precise visual measurement of objects in 3D space - fixed position. Oriented along XZ plane, size 20m by 20m, default block size 1m by 1m. </p>
 <p> Related links: <a href="../../../../Tools/Authoring/GridXZ_20x20Fixed.java">GridXZ_20x20Fixed.java</a> source, <a href="../../../../Tools/Authoring/GridXZ_20x20FixedIndex.html" target="_top">GridXZ_20x20Fixed catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../../Tools/Authoring/GridXZ_20x20Fixed.x3d">GridXZ_20x20Fixed.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> MV4204 class </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 3 September 2000 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 30 March 2016 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="../../../../Tools/Authoring/GridXY_20x20Fixed.x3d">GridXY_20x20Fixed.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="../../../../Tools/Authoring/GridYZ_20x20Fixed.x3d">GridYZ_20x20Fixed.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Line grid authoring tool to enable precise visual measurement of objects in 3D space - fixed position. Oriented along XZ plane, size 20m by 20m, default block size 1m by 1m. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://savage.nps.edu/Savage/Tools/Authoring/GridXZ_20x20Fixed.x3d" target="_blank">https://savage.nps.edu/Savage/Tools/Authoring/GridXZ_20x20Fixed.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.2, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../../Tools/Authoring/../../license.html">../../license.html</a> </td>
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

	* @author MV4204 class
 */

function GridXZ_20x20Fixed
  /** Default constructor to create this object. */
  ()
  {
    /** The initialized model object, created within initialize() method. */
    this.x3dModel = {};
    this.initialize();
    return this;
  }
GridXZ_20x20Fixed.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {

	/** Large attribute array: IndexedLineSet coordIndex field, scene-graph level=6, element #13, 63 total numbers */
	this.IndexedLineSet_6_13_coordIndex = new MFInt32(Java.to([1,22,-1,2,23,-1,3,24,-1,4,25,-1,5,26,-1,6,27,-1,7,28,-1,8,29,-1,9,30,-1,10,31,-1,11,32,-1,12,33,-1,13,34,-1,14,35,-1,15,36,-1,16,37,-1,17,38,-1,18,39,-1,19,40,-1,20,41,-1,21,42,-1], Java.type("int[]")));

	/** Large attribute array: Coordinate DEF='EndPoints' point field, scene-graph level=7, element #13, 129 total numbers made up of 43 3-tuple values */
	this.EndPoints_7_13_point = new MFVec3f() /* splitting up long array to improve readability */
	.append(new MFVec3f(Java.to([0.0,0.0,0.0,-10.0,0.0,10.0,-9.0,0.0,10.0,-8.0,0.0,10.0,-7.0,0.0,10.0,-6.0,0.0,10.0,-5.0,0.0,10.0,-4.0,0.0,10.0,-3.0,0.0,10.0,-2.0,0.0,10.0], Java.type("float[]"))))
	.append(new MFVec3f(Java.to([-1.0,0.0,10.0,0.0,0.0,10.0,1.0,0.0,10.0,2.0,0.0,10.0,3.0,0.0,10.0,4.0,0.0,10.0,5.0,0.0,10.0,6.0,0.0,10.0,7.0,0.0,10.0,8.0,0.0,10.0], Java.type("float[]"))))
	.append(new MFVec3f(Java.to([9.0,0.0,10.0,10.0,0.0,10.0,-10.0,0.0,-10.0,-9.0,0.0,-10.0,-8.0,0.0,-10.0,-7.0,0.0,-10.0,-6.0,0.0,-10.0,-5.0,0.0,-10.0,-4.0,0.0,-10.0,-3.0,0.0,-10.0], Java.type("float[]"))))
	.append(new MFVec3f(Java.to([-2.0,0.0,-10.0,-1.0,0.0,-10.0,0.0,0.0,-10.0,1.0,0.0,-10.0,2.0,0.0,-10.0,3.0,0.0,-10.0,4.0,0.0,-10.0,5.0,0.0,-10.0,6.0,0.0,-10.0,7.0,0.0,-10.0], Java.type("float[]"))))
	.append(new MFVec3f(Java.to([8.0,0.0,-10.0,9.0,0.0,-10.0,10.0,0.0,-10.0], Java.type("float[]"))));
  this.x3dModel = new X3D().setProfile("Immersive").setVersion("3.0")
  .setHead(new head()
    .addMeta(new meta().setName("title").setContent("GridXZ_20x20Fixed.x3d"))
    .addMeta(new meta().setName("creator").setContent("MV4204 class"))
    .addMeta(new meta().setName("created").setContent("3 September 2000"))
    .addMeta(new meta().setName("modified").setContent("30 March 2016"))
    .addMeta(new meta().setName("reference").setContent("GridXY_20x20Fixed.x3d"))
    .addMeta(new meta().setName("reference").setContent("GridYZ_20x20Fixed.x3d"))
    .addMeta(new meta().setName("description").setContent("Line grid authoring tool to enable precise visual measurement of objects in 3D space - fixed position. Oriented along XZ plane, size 20m by 20m, default block size 1m by 1m."))
    .addMeta(new meta().setName("identifier").setContent("https://savage.nps.edu/Savage/Tools/Authoring/GridXZ_20x20Fixed.x3d"))
    .addMeta(new meta().setName("generator").setContent("X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName("license").setContent("../../license.html")))
  .setScene(new Scene()
    .addChild(new Viewpoint().setDescription("XZ horizontal grid, perpendicular to Y axis (seen from 0 10 25)").setPosition(0.0,10.0,25.0).setOrientation(1.0,0.0,0.0,-0.4))
    .addChild(new Transform("GridLocation")
      .addChild(new Group()
        .addChild(new Shape("LinesAlignedAlongZ")
          .setGeometry(new IndexedLineSet().setColorPerVertex(false).setColorIndex(Java.to([1,0,0,0,0,2,0,0,0,0,1,0,0,0,0,2,0,0,0,0,1], Java.type("int[]"))).setCoordIndex(this.IndexedLineSet_6_13_coordIndex)
            .setCoord(new Coordinate("EndPoints").setPoint(this.EndPoints_7_13_point))
            .setColor(new Color().setColor(new MFColor(Java.to([0.4,0.4,0.4,0.8,0.2,0.0,0.4,0.1,0.05], Java.type("float[]")))))))
        .addChild(new Transform("LinesAlignedAlongX").setRotation(0.0,1.0,0.0,1.57079)
          .addChild(new Shape().setUSE("LinesAlignedAlongZ")))
        .addChild(new Transform().setTranslation(0.0,-0.5,0.0)
          .addChild(new Billboard()
            .addChild(new Shape()
              .setGeometry(new Text("CenterTextNode").setString(new MFString("\"origin\""))
                .setFontStyle(new FontStyle("FS4").setJustify(new MFString("\"MIDDLE\" \"MIDDLE\"")).setSize(0.4)))
              .setAppearance(new Appearance("DefaultAppearance")
                .setMaterial(new Material())))))
        .addChild(new Transform().setTranslation(10.0,-0.5,10.0)
          .addChild(new Billboard()
            .addChild(new Shape()
              .setGeometry(new Text().setString(new MFString("\"10 0 10\""))
                .setFontStyle(new FontStyle().setUSE("FS4")))
              .setAppearance(new Appearance().setUSE("DefaultAppearance")))))
        .addChild(new Transform().setTranslation(10.0,-0.5,-10.0)
          .addChild(new Billboard()
            .addChild(new Shape()
              .setGeometry(new Text().setString(new MFString("\"10 0 -10\""))
                .setFontStyle(new FontStyle().setUSE("FS4")))
              .setAppearance(new Appearance().setUSE("DefaultAppearance")))))
        .addChild(new Transform().setTranslation(-10.0,-0.5,10.0)
          .addChild(new Billboard()
            .addChild(new Shape()
              .setGeometry(new Text().setString(new MFString("\"-10 0 10\""))
                .setFontStyle(new FontStyle().setUSE("FS4")))
              .setAppearance(new Appearance().setUSE("DefaultAppearance")))))
        .addChild(new Transform().setTranslation(-10.0,-0.5,-10.0)
          .addChild(new Billboard()
            .addChild(new Shape()
              .setGeometry(new Text().setString(new MFString("\"-10 0 -10\""))
                .setFontStyle(new FontStyle().setUSE("FS4")))
              .setAppearance(new Appearance().setUSE("DefaultAppearance"))))))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return GridXZ_20x20Fixed model
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
			if (meta.getName().equals(meta.NAME_ERROR) ||
				meta.getName().equals(meta.NAME_WARNING) ||
				meta.getName().equals(meta.NAME_HINT) ||
				meta.getName().equals(meta.NAME_INFO) ||
				meta.getName().equals(meta.NAME_TODO))
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
		var testObject = new GridXZ_20x20Fixed();
		print ("GridXZ_20x20Fixed execution self-validation test results: " + testObject.validateSelf());
	}
}
new GridXZ_20x20Fixed().main();