load('X3Dautoclass.js');

// Javadoc annotations follow, see below for source.
/**
 * <p> Developer scene to explore Mantis Issue 528, providing a baseline example with no transformation of CADPart children. </p>
 <p> Related links: <a href="../../../CAD/CADPartChildNoTransformation.java">CADPartChildNoTransformation.java</a> source, <a href="../../../CAD/CADPartChildNoTransformationIndex.html" target="_top">CADPartChildNoTransformation catalog page</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dResources.html" target="_blank">X3D Resources</a>, <a href="https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html" target="_blank">X3D Scene Authoring Hints</a> and <a href="https://www.web3d.org/x3d/content/X3dTooltips.html" target="_blank">X3D Tooltips</a>. </p>
	<table style="color:black; border:0px solid; border-spacing:10px 0px;" summary="Scene Metadata">
		<tr style="background-color:silver; border-color:silver;">
			<td style="text-align:center; padding:10px 0px;"><i>meta tags</i></td>
			<td style="text-align:left;   padding:10px 0px;">&nbsp; Document Metadata </td>
		</tr>

		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> title </i> </td>
			<td> <a href="../../../CAD/CADPartChildNoTransformation.x3d">CADPartChildNoTransformation.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> description </i> </td>
			<td> Developer scene to explore Mantis Issue 528, providing a baseline example with no transformation of CADPart children. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> creator </i> </td>
			<td> Vince Marchetti, Don Brutzman, Hyokwang Lee, Dick Puk </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> translator </i> </td>
			<td> Vince Marchetti bushing generation using python scripts </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> reference </i> </td>
			<td> <a href="https://www.web3d.org/member-only/mantis/view.php?id=528" target="_blank">https://www.web3d.org/member-only/mantis/view.php?id=528</a> </td>
		</tr>
		<tr style="color:burntorange">
			<td style="text-align:right; vertical-align: text-top;"> <i> warning </i> </td>
			<td> This scene is intended for specification development only. </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> created </i> </td>
			<td> 29 June 2012 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> modified </i> </td>
			<td> 20 October 2019 </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> identifier </i> </td>
			<td> <a href="https://www.web3d.org/x3d/content/examples/Basic/CAD/CADPartChildNoTransformation.x3d" target="_blank">https://www.web3d.org/x3d/content/examples/Basic/CAD/CADPartChildNoTransformation.x3d</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> generator </i> </td>
			<td> X3D-Edit 3.3, <a href="https://savage.nps.edu/X3D-Edit" target="_blank">https://savage.nps.edu/X3D-Edit</a> </td>
		</tr>
		<tr>
			<td style="text-align:right; vertical-align: text-top;"> <i> license </i> </td>
			<td> <a href="../../../CAD/../license.html">../license.html</a> </td>
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

	* @author Vince Marchetti, Don Brutzman, Hyokwang Lee, Dick Puk
 */

function CADPartChildNoTransformation
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
CADPartChildNoTransformation.prototype = {
  /** Create and initialize the X3D model. */
  initialize : function ()
  {

	/** Large attribute array: IndexedTriangleSet index field, scene-graph level=7, element #27, 192 total numbers */
	this.IndexedTriangleSet_7_27_index = new MFInt32(Java.to([0,1,2,2,1,3,2,3,4,4,3,5,4,5,6,6,5,7,6,7,8,8,7,9,8,9,10,10,9,11,10,11,12,12,11,13,12,13,14,14,13,15,14,15,16,16,15,17,16,17,18,18,17,19,18,19,20,20,19,21,20,21,22,22,21,23,22,23,24,24,23,25,24,25,26,26,25,27,26,27,28,28,27,29,28,29,30,30,29,31,30,31,32,32,31,33,32,33,34,34,33,35,34,35,36,36,35,37,36,37,38,38,37,39,38,39,40,40,39,41,40,41,42,42,41,43,42,43,44,44,43,45,44,45,46,46,45,47,46,47,48,48,47,49,48,49,50,50,49,51,50,51,52,52,51,53,52,53,54,54,53,55,54,55,56,56,55,57,56,57,58,58,57,59,58,59,60,60,59,61,60,61,62,62,61,63,62,63,64,64,63,65], Java.type("int[]")));

	/** Large attribute array: Coordinate point field, scene-graph level=8, element #27, 198 total numbers made up of 66 3-tuple values */
	this.Coordinate_8_27_point = new MFVec3f() /* splitting up long array to improve readability */
	.append(new MFVec3f(Java.to([doubleToFloat(2.0000),doubleToFloat(1.5000),doubleToFloat(0.0000),doubleToFloat(1.0000),doubleToFloat(1.5000),doubleToFloat(0.0000),doubleToFloat(1.9616),doubleToFloat(1.5000),doubleToFloat(0.3902),doubleToFloat(0.9808),doubleToFloat(1.5000),doubleToFloat(0.1951),doubleToFloat(1.8478),doubleToFloat(1.5000),doubleToFloat(0.7654),doubleToFloat(0.9239),doubleToFloat(1.5000),doubleToFloat(0.3827),doubleToFloat(1.6629),doubleToFloat(1.5000),doubleToFloat(1.1111),doubleToFloat(0.8315),doubleToFloat(1.5000),doubleToFloat(0.5556),doubleToFloat(1.4142),doubleToFloat(1.5000),doubleToFloat(1.4142),doubleToFloat(0.7071),doubleToFloat(1.5000),doubleToFloat(0.7071)], Java.type("float[]"))))
	.append(new MFVec3f(Java.to([doubleToFloat(1.1111),doubleToFloat(1.5000),doubleToFloat(1.6629),doubleToFloat(0.5556),doubleToFloat(1.5000),doubleToFloat(0.8315),doubleToFloat(0.7654),doubleToFloat(1.5000),doubleToFloat(1.8478),doubleToFloat(0.3827),doubleToFloat(1.5000),doubleToFloat(0.9239),doubleToFloat(0.3902),doubleToFloat(1.5000),doubleToFloat(1.9616),doubleToFloat(0.1951),doubleToFloat(1.5000),doubleToFloat(0.9808),doubleToFloat(0.0000),doubleToFloat(1.5000),doubleToFloat(2.0000),doubleToFloat(0.0000),doubleToFloat(1.5000),doubleToFloat(1.0000),doubleToFloat(-0.3902),doubleToFloat(1.5000),doubleToFloat(1.9616),doubleToFloat(-0.1951),doubleToFloat(1.5000),doubleToFloat(0.9808)], Java.type("float[]"))))
	.append(new MFVec3f(Java.to([doubleToFloat(-0.7654),doubleToFloat(1.5000),doubleToFloat(1.8478),doubleToFloat(-0.3827),doubleToFloat(1.5000),doubleToFloat(0.9239),doubleToFloat(-1.1111),doubleToFloat(1.5000),doubleToFloat(1.6629),doubleToFloat(-0.5556),doubleToFloat(1.5000),doubleToFloat(0.8315),doubleToFloat(-1.4142),doubleToFloat(1.5000),doubleToFloat(1.4142),doubleToFloat(-0.7071),doubleToFloat(1.5000),doubleToFloat(0.7071),doubleToFloat(-1.6629),doubleToFloat(1.5000),doubleToFloat(1.1111),doubleToFloat(-0.8315),doubleToFloat(1.5000),doubleToFloat(0.5556),doubleToFloat(-1.8478),doubleToFloat(1.5000),doubleToFloat(0.7654),doubleToFloat(-0.9239),doubleToFloat(1.5000),doubleToFloat(0.3827)], Java.type("float[]"))))
	.append(new MFVec3f(Java.to([doubleToFloat(-1.9616),doubleToFloat(1.5000),doubleToFloat(0.3902),doubleToFloat(-0.9808),doubleToFloat(1.5000),doubleToFloat(0.1951),doubleToFloat(-2.0000),doubleToFloat(1.5000),doubleToFloat(0.0000),doubleToFloat(-1.0000),doubleToFloat(1.5000),doubleToFloat(0.0000),doubleToFloat(-1.9616),doubleToFloat(1.5000),doubleToFloat(-0.3902),doubleToFloat(-0.9808),doubleToFloat(1.5000),doubleToFloat(-0.1951),doubleToFloat(-1.8478),doubleToFloat(1.5000),doubleToFloat(-0.7654),doubleToFloat(-0.9239),doubleToFloat(1.5000),doubleToFloat(-0.3827),doubleToFloat(-1.6629),doubleToFloat(1.5000),doubleToFloat(-1.1111),doubleToFloat(-0.8315),doubleToFloat(1.5000),doubleToFloat(-0.5556)], Java.type("float[]"))))
	.append(new MFVec3f(Java.to([doubleToFloat(-1.4142),doubleToFloat(1.5000),doubleToFloat(-1.4142),doubleToFloat(-0.7071),doubleToFloat(1.5000),doubleToFloat(-0.7071),doubleToFloat(-1.1111),doubleToFloat(1.5000),doubleToFloat(-1.6629),doubleToFloat(-0.5556),doubleToFloat(1.5000),doubleToFloat(-0.8315),doubleToFloat(-0.7654),doubleToFloat(1.5000),doubleToFloat(-1.8478),doubleToFloat(-0.3827),doubleToFloat(1.5000),doubleToFloat(-0.9239),doubleToFloat(-0.3902),doubleToFloat(1.5000),doubleToFloat(-1.9616),doubleToFloat(-0.1951),doubleToFloat(1.5000),doubleToFloat(-0.9808),doubleToFloat(-0.0000),doubleToFloat(1.5000),doubleToFloat(-2.0000),doubleToFloat(-0.0000),doubleToFloat(1.5000),doubleToFloat(-1.0000)], Java.type("float[]"))))
	.append(new MFVec3f(Java.to([doubleToFloat(0.3902),doubleToFloat(1.5000),doubleToFloat(-1.9616),doubleToFloat(0.1951),doubleToFloat(1.5000),doubleToFloat(-0.9808),doubleToFloat(0.7654),doubleToFloat(1.5000),doubleToFloat(-1.8478),doubleToFloat(0.3827),doubleToFloat(1.5000),doubleToFloat(-0.9239),doubleToFloat(1.1111),doubleToFloat(1.5000),doubleToFloat(-1.6629),doubleToFloat(0.5556),doubleToFloat(1.5000),doubleToFloat(-0.8315),doubleToFloat(1.4142),doubleToFloat(1.5000),doubleToFloat(-1.4142),doubleToFloat(0.7071),doubleToFloat(1.5000),doubleToFloat(-0.7071),doubleToFloat(1.6629),doubleToFloat(1.5000),doubleToFloat(-1.1111),doubleToFloat(0.8315),doubleToFloat(1.5000),doubleToFloat(-0.5556)], Java.type("float[]"))))
	.append(new MFVec3f(Java.to([doubleToFloat(1.8478),doubleToFloat(1.5000),doubleToFloat(-0.7654),doubleToFloat(0.9239),doubleToFloat(1.5000),doubleToFloat(-0.3827),doubleToFloat(1.9616),doubleToFloat(1.5000),doubleToFloat(-0.3902),doubleToFloat(0.9808),doubleToFloat(1.5000),doubleToFloat(-0.1951),doubleToFloat(2.0000),doubleToFloat(1.5000),doubleToFloat(-0.0000),doubleToFloat(1.0000),doubleToFloat(1.5000),doubleToFloat(-0.0000)], Java.type("float[]"))));

	/** Large attribute array: IndexedTriangleSet index field, scene-graph level=7, element #32, 192 total numbers */
	this.IndexedTriangleSet_7_32_index = new MFInt32(Java.to([0,1,2,2,1,3,2,3,4,4,3,5,4,5,6,6,5,7,6,7,8,8,7,9,8,9,10,10,9,11,10,11,12,12,11,13,12,13,14,14,13,15,14,15,16,16,15,17,16,17,18,18,17,19,18,19,20,20,19,21,20,21,22,22,21,23,22,23,24,24,23,25,24,25,26,26,25,27,26,27,28,28,27,29,28,29,30,30,29,31,30,31,32,32,31,33,32,33,34,34,33,35,34,35,36,36,35,37,36,37,38,38,37,39,38,39,40,40,39,41,40,41,42,42,41,43,42,43,44,44,43,45,44,45,46,46,45,47,46,47,48,48,47,49,48,49,50,50,49,51,50,51,52,52,51,53,52,53,54,54,53,55,54,55,56,56,55,57,56,57,58,58,57,59,58,59,60,60,59,61,60,61,62,62,61,63,62,63,64,64,63,65], Java.type("int[]")));

	/** Large attribute array: Coordinate point field, scene-graph level=8, element #32, 198 total numbers made up of 66 3-tuple values */
	this.Coordinate_8_32_point = new MFVec3f() /* splitting up long array to improve readability */
	.append(new MFVec3f(Java.to([doubleToFloat(2.0000),doubleToFloat(-1.5000),doubleToFloat(-0.0000),doubleToFloat(1.0000),doubleToFloat(-1.5000),doubleToFloat(-0.0000),doubleToFloat(1.9616),doubleToFloat(-1.5000),doubleToFloat(-0.3902),doubleToFloat(0.9808),doubleToFloat(-1.5000),doubleToFloat(-0.1951),doubleToFloat(1.8478),doubleToFloat(-1.5000),doubleToFloat(-0.7654),doubleToFloat(0.9239),doubleToFloat(-1.5000),doubleToFloat(-0.3827),doubleToFloat(1.6629),doubleToFloat(-1.5000),doubleToFloat(-1.1111),doubleToFloat(0.8315),doubleToFloat(-1.5000),doubleToFloat(-0.5556),doubleToFloat(1.4142),doubleToFloat(-1.5000),doubleToFloat(-1.4142),doubleToFloat(0.7071),doubleToFloat(-1.5000),doubleToFloat(-0.7071)], Java.type("float[]"))))
	.append(new MFVec3f(Java.to([doubleToFloat(1.1111),doubleToFloat(-1.5000),doubleToFloat(-1.6629),doubleToFloat(0.5556),doubleToFloat(-1.5000),doubleToFloat(-0.8315),doubleToFloat(0.7654),doubleToFloat(-1.5000),doubleToFloat(-1.8478),doubleToFloat(0.3827),doubleToFloat(-1.5000),doubleToFloat(-0.9239),doubleToFloat(0.3902),doubleToFloat(-1.5000),doubleToFloat(-1.9616),doubleToFloat(0.1951),doubleToFloat(-1.5000),doubleToFloat(-0.9808),doubleToFloat(0.0000),doubleToFloat(-1.5000),doubleToFloat(-2.0000),doubleToFloat(0.0000),doubleToFloat(-1.5000),doubleToFloat(-1.0000),doubleToFloat(-0.3902),doubleToFloat(-1.5000),doubleToFloat(-1.9616),doubleToFloat(-0.1951),doubleToFloat(-1.5000),doubleToFloat(-0.9808)], Java.type("float[]"))))
	.append(new MFVec3f(Java.to([doubleToFloat(-0.7654),doubleToFloat(-1.5000),doubleToFloat(-1.8478),doubleToFloat(-0.3827),doubleToFloat(-1.5000),doubleToFloat(-0.9239),doubleToFloat(-1.1111),doubleToFloat(-1.5000),doubleToFloat(-1.6629),doubleToFloat(-0.5556),doubleToFloat(-1.5000),doubleToFloat(-0.8315),doubleToFloat(-1.4142),doubleToFloat(-1.5000),doubleToFloat(-1.4142),doubleToFloat(-0.7071),doubleToFloat(-1.5000),doubleToFloat(-0.7071),doubleToFloat(-1.6629),doubleToFloat(-1.5000),doubleToFloat(-1.1111),doubleToFloat(-0.8315),doubleToFloat(-1.5000),doubleToFloat(-0.5556),doubleToFloat(-1.8478),doubleToFloat(-1.5000),doubleToFloat(-0.7654),doubleToFloat(-0.9239),doubleToFloat(-1.5000),doubleToFloat(-0.3827)], Java.type("float[]"))))
	.append(new MFVec3f(Java.to([doubleToFloat(-1.9616),doubleToFloat(-1.5000),doubleToFloat(-0.3902),doubleToFloat(-0.9808),doubleToFloat(-1.5000),doubleToFloat(-0.1951),doubleToFloat(-2.0000),doubleToFloat(-1.5000),doubleToFloat(-0.0000),doubleToFloat(-1.0000),doubleToFloat(-1.5000),doubleToFloat(-0.0000),doubleToFloat(-1.9616),doubleToFloat(-1.5000),doubleToFloat(0.3902),doubleToFloat(-0.9808),doubleToFloat(-1.5000),doubleToFloat(0.1951),doubleToFloat(-1.8478),doubleToFloat(-1.5000),doubleToFloat(0.7654),doubleToFloat(-0.9239),doubleToFloat(-1.5000),doubleToFloat(0.3827),doubleToFloat(-1.6629),doubleToFloat(-1.5000),doubleToFloat(1.1111),doubleToFloat(-0.8315),doubleToFloat(-1.5000),doubleToFloat(0.5556)], Java.type("float[]"))))
	.append(new MFVec3f(Java.to([doubleToFloat(-1.4142),doubleToFloat(-1.5000),doubleToFloat(1.4142),doubleToFloat(-0.7071),doubleToFloat(-1.5000),doubleToFloat(0.7071),doubleToFloat(-1.1111),doubleToFloat(-1.5000),doubleToFloat(1.6629),doubleToFloat(-0.5556),doubleToFloat(-1.5000),doubleToFloat(0.8315),doubleToFloat(-0.7654),doubleToFloat(-1.5000),doubleToFloat(1.8478),doubleToFloat(-0.3827),doubleToFloat(-1.5000),doubleToFloat(0.9239),doubleToFloat(-0.3902),doubleToFloat(-1.5000),doubleToFloat(1.9616),doubleToFloat(-0.1951),doubleToFloat(-1.5000),doubleToFloat(0.9808),doubleToFloat(-0.0000),doubleToFloat(-1.5000),doubleToFloat(2.0000),doubleToFloat(-0.0000),doubleToFloat(-1.5000),doubleToFloat(1.0000)], Java.type("float[]"))))
	.append(new MFVec3f(Java.to([doubleToFloat(0.3902),doubleToFloat(-1.5000),doubleToFloat(1.9616),doubleToFloat(0.1951),doubleToFloat(-1.5000),doubleToFloat(0.9808),doubleToFloat(0.7654),doubleToFloat(-1.5000),doubleToFloat(1.8478),doubleToFloat(0.3827),doubleToFloat(-1.5000),doubleToFloat(0.9239),doubleToFloat(1.1111),doubleToFloat(-1.5000),doubleToFloat(1.6629),doubleToFloat(0.5556),doubleToFloat(-1.5000),doubleToFloat(0.8315),doubleToFloat(1.4142),doubleToFloat(-1.5000),doubleToFloat(1.4142),doubleToFloat(0.7071),doubleToFloat(-1.5000),doubleToFloat(0.7071),doubleToFloat(1.6629),doubleToFloat(-1.5000),doubleToFloat(1.1111),doubleToFloat(0.8315),doubleToFloat(-1.5000),doubleToFloat(0.5556)], Java.type("float[]"))))
	.append(new MFVec3f(Java.to([doubleToFloat(1.8478),doubleToFloat(-1.5000),doubleToFloat(0.7654),doubleToFloat(0.9239),doubleToFloat(-1.5000),doubleToFloat(0.3827),doubleToFloat(1.9616),doubleToFloat(-1.5000),doubleToFloat(0.3902),doubleToFloat(0.9808),doubleToFloat(-1.5000),doubleToFloat(0.1951),doubleToFloat(2.0000),doubleToFloat(-1.5000),doubleToFloat(0.0000),doubleToFloat(1.0000),doubleToFloat(-1.5000),doubleToFloat(0.0000)], Java.type("float[]"))));
  this.x3dModel = new X3D().setProfile("CADInterchange").setVersion("3.1")
  .setHead(new head()
    .addComponent(new component().setName("CADGeometry").setLevel(2))
    .addComponent(new component().setName("EnvironmentalEffects").setLevel(1))
    .addMeta(new meta().setName("title").setContent("CADPartChildNoTransformation.x3d"))
    .addMeta(new meta().setName("description").setContent("Developer scene to explore Mantis Issue 528, providing a baseline example with no transformation of CADPart children."))
    .addMeta(new meta().setName("creator").setContent("Vince Marchetti, Don Brutzman, Hyokwang Lee, Dick Puk"))
    .addMeta(new meta().setName("translator").setContent("Vince Marchetti bushing generation using python scripts"))
    .addMeta(new meta().setName("reference").setContent("https://www.web3d.org/member-only/mantis/view.php?id=528"))
    .addMeta(new meta().setName("warning").setContent("This scene is intended for specification development only."))
    .addMeta(new meta().setName("created").setContent("29 June 2012"))
    .addMeta(new meta().setName("modified").setContent("20 October 2019"))
    .addMeta(new meta().setName("identifier").setContent("https://www.web3d.org/x3d/content/examples/Basic/CAD/CADPartChildNoTransformation.x3d"))
    .addMeta(new meta().setName("generator").setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
    .addMeta(new meta().setName("license").setContent("../license.html")))
  .setScene(new Scene()
    .addChild(new WorldInfo().setTitle("CADPartChildNoTransformation.x3d"))
    .addChild(new Background().setSkyColor(new MFColor(Java.to([doubleToFloat(0.9607843),doubleToFloat(1.0),doubleToFloat(0.9607843)], Java.type("float[]")))))
    .addChild(new Viewpoint().setDescription("Hello CAD bushing").setOrientation(doubleToFloat(1.0),doubleToFloat(0.0),doubleToFloat(0.0),doubleToFloat(-0.321751)).setPosition(doubleToFloat(0.0),doubleToFloat(5.0),doubleToFloat(15.0)))
    .addChild(new CADAssembly().setName("DesignPatternAssembly")
      .addChild(new CADPart().setName("CADPartExample")
        .addComments(" the rotation and translation attributes serve to position the bushing within the assembly ")
        .addChild(new CADFace().setName("outerSurface")
          .setShape(new Shape()
            .addComments(" note solid='true' and so one-sided external rendering only ")
            .setGeometry(new Cylinder().setBottom(false).setHeight(3).setRadius(2).setTop(false))
            .setAppearance(new Appearance("AppearanceGrey")
              .setMaterial(new Material()))))
        .addChild(new CADFace().setName("innerSurface")
          .setShape(new Shape()
            .addComments(" note solid='false' and so two-sided internal + external rendering ")
            .setGeometry(new Cylinder().setBottom(false).setHeight(3).setSolid(false).setTop(false))
            .setAppearance(new Appearance().setUSE("AppearanceGrey"))))
        .addChild(new CADFace().setName("topCap")
          .setShape(new Shape()
            .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(this.IndexedTriangleSet_7_27_index).setNormalPerVertex(true).setSolid(true)
              .setCoord(new Coordinate().setPoint(this.Coordinate_8_27_point)))
            .setAppearance(new Appearance().setUSE("AppearanceGrey"))))
        .addChild(new CADFace().setName("bottomCap")
          .setShape(new Shape()
            .setGeometry(new IndexedTriangleSet().setCcw(true).setColorPerVertex(true).setIndex(this.IndexedTriangleSet_7_32_index).setNormalPerVertex(true).setSolid(true)
              .setCoord(new Coordinate().setPoint(this.Coordinate_8_32_point)))
            .setAppearance(new Appearance().setUSE("AppearanceGrey")))))));
  },
  // end of initialize() method


  /** Provide a shallow copy of the X3D model.
   * @return CADPartChildNoTransformation model
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
		var testObject = new CADPartChildNoTransformation();
		print ("CADPartChildNoTransformation execution self-validation test results: " + testObject.validateSelf());
	}
}
new CADPartChildNoTransformation().main();