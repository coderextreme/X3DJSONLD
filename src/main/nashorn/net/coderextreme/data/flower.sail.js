load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
      var X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.3")
      .setScene(new SceneObject()
        .addChild(new NavigationInfoObject().setType(Java.to(["EXAMINE","ANY"], Java.type("java.lang.String[]"))))
        .addChild(new DirectionalLightObject().setDirection(Java.to([0,-0.8,-0.2], Java.type("float[]"))).setIntensity(0.5))
        .addChild(new BackgroundObject().setSkyColor(Java.to([1,1,1], Java.type("float[]"))))
        .addChild(new ViewpointObject().setDescription("One mathematical orbital").setPosition(Java.to([0,0,50], Java.type("float[]"))))
        .addChild(new TransformObject().setTranslation(Java.to([0,-1,1], Java.type("float[]"))).setRotation(Java.to([0,1,0,3.1415926], Java.type("float[]"))).setScale(Java.to([1.5,1.5,1.5], Java.type("float[]")))
          .addChild(new ShapeObject()
            .setAppearance(new AppearanceObject()
              .setMaterial(new MaterialObject().setTransparency(0.1).setDiffuseColor(Java.to([0.9,0.3,0.3], Java.type("float[]"))).setSpecularColor(Java.to([0.8,0.8,0.8], Java.type("float[]"))).setShininess(0.145)))
            .setGeometry(new IndexedFaceSetObject().setCcw(false).setConvex(false).setCoordIndex(Java.to([0,1,2,-1], Java.type("int[]"))).setCreaseAngle(0).setDEF("ifs").setSolid(true)
              .setCoord(new CoordinateObject().setDEF("crd").setPoint(Java.to([0,0,1,0,1,0,1,0,0], Java.type("float[]")))))))
        .addChild(new ScriptObject().setDEF("FlowerScript")
          .addField(new fieldObject().setType(fieldObject.TYPE_SFFLOAT).setAccessType(fieldObject.ACCESSTYPE_INPUTONLY).setName("set_fraction"))
          .addField(new fieldObject().setType(fieldObject.TYPE_MFVEC3F).setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setName("coordinates"))
          .addField(new fieldObject().setType(fieldObject.TYPE_MFINT32).setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY).setName("coordIndexes"))
          .setSourceCode("ecmascript:
    
var e = 5;
var f = 5;
var g = 5;
var h = 5;
var resolution = 150;
var t = 0;
var p = 0;

function initialize() {
     var localci = new Array();
     var ci = 0;
     var buf = [];
     for (var i = 0; i < resolution-1; i++) {
     	for (var j = 0; j < resolution-1; j++) {
	     localci[ci] = i*resolution+j;
	     localci[ci+1] = i*resolution+j+1;
	     localci[ci+2] = (i+1)*resolution+j+1;
	     localci[ci+3] = (i+1)*resolution+j;
	     localci[ci+4] = -1;
	     buf.push(localci[ci]);
	     buf.push(localci[ci+1]);
	     buf.push(localci[ci+3]);
	     buf.push(localci[ci+4]);

	     buf.push(localci[ci+1]);
	     buf.push(localci[ci+2]);
	     buf.push(localci[ci+3]);
	     buf.push(localci[ci+4]);
	     ci += 5;
	}
    }
    updateCoordinates(resolution);
    coordIndexes = new x3dom.fields.MFInt32(buf);
}

function updateCoordinates(resolution) {
     theta = 0.0;
     phi = 0.0;
     delta = (2 * 3.141592653) / (resolution-1);
     var buf = [];
     for ( i = 0; i < resolution; i++) {
     	for ( j = 0; j < resolution; j++) {
		rho = e + f * Math.cos(g * theta + t) * Math.cos(h * phi + p);
		var coord = new x3dom.fields.SFVec3f(
			rho * Math.cos(phi) * Math.cos(theta),
			rho * Math.cos(phi) * Math.sin(theta),
			rho * Math.sin(phi)
		);
	     	buf.push(coord);
		theta += delta;
	}
	phi += delta;
     }
     coordinates = new x3dom.fields.MFVec3f(buf);
}

function set_fraction() {
	choice = Math.floor(Math.random() * 4);
	switch (choice) {
	case 0:
		e += Math.floor(Math.random() * 2) * 2 - 1;
		break;
	case 1:
		f += Math.floor(Math.random() * 2) * 2 - 1;
		break;
	case 2:
		g += Math.floor(Math.random() * 2) * 2 - 1;
		break;
	case 3:
		h += Math.floor(Math.random() * 2) * 2 - 1;
		break;
	}
	t += 0.5;
	p += 0.5;
	if (f < 1) {
		f = 10;
	}
	if (g < 1) {
		g = 4;
	}
	if (h < 1) {
		h = 4;
	}
	updateCoordinates(resolution);
}
\n"+
""))
        .addChild(new TimeSensorObject().setDEF("Clock").setCycleInterval(16).setLoop(true))
        .addChild(new ROUTEObject().setFromNode("FlowerScript").setFromField("coordIndexes").setToNode("ifs").setToField("coordIndex"))
        .addChild(new ROUTEObject().setFromNode("FlowerScript").setFromField("coordinates").setToNode("crd").setToField("point"))
        .addChild(new ROUTEObject().setFromNode("Clock").setFromField("fraction_changed").setToNode("FlowerScript").setToField("set_fraction")))      ;
    X3D0.toFileX3D("../data/flower.new.x3d");
