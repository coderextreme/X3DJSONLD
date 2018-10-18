var java = require('java');
var autoclass = require('../../../X3Dautoclass.js');
var ConfigurationProperties = autoclass.ConfigurationProperties;
ConfigurationProperties.showDefaultAttributes = false;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroesSync(true);
      var X3D0 =  new autoclass.X3D().setProfileSync("Interchange").setVersionSync("3.0")
      .setHeadSync(new autoclass.head()
        .addMetaSync(new autoclass.meta().setNameSync("title").setContentSync("indexedfaceset_pixeltexture_plus.x3d"))
        .addMetaSync(new autoclass.meta().setNameSync("Image").setContentSync("indexedfaceset_pixeltexture_plus-front.jpg"))
        .addMetaSync(new autoclass.meta().setNameSync("Image").setContentSync("indexedfaceset_pixeltexture_plus-rear.jpg"))
        .addMetaSync(new autoclass.meta().setNameSync("Image").setContentSync("indexedfaceset_pixeltexture_plus-top.jpg"))
        .addMetaSync(new autoclass.meta().setNameSync("Image").setContentSync("indexedfaceset_pixeltexture_plus-bottom.jpg"))
        .addMetaSync(new autoclass.meta().setNameSync("Image").setContentSync("indexedfaceset_pixeltexture_plus-left.jpg"))
        .addMetaSync(new autoclass.meta().setNameSync("Image").setContentSync("indexedfaceset_pixeltexture_plus-right.jpg"))
        .addMetaSync(new autoclass.meta().setNameSync("reference").setContentSync("http://www.nist.gov/vrml.html"))
        .addMetaSync(new autoclass.meta().setNameSync("reference").setContentSync("http://www.itl.nist.gov/div897/ctg/vrml/vrml.html"))
        .addMetaSync(new autoclass.meta().setNameSync("creator").setContentSync("http://www.itl.nist.gov/div897/ctg/vrml/members.html"))
        .addMetaSync(new autoclass.meta().setNameSync("disclaimer").setContentSync("This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified."))
        .addMetaSync(new autoclass.meta().setNameSync("info").setContentSync("Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, http://www.web3d.org/working-groups/x3d"))
        .addMetaSync(new autoclass.meta().setNameSync("translator").setContentSync("Michael Kass NIST, Don Brutzman NPS"))
        .addMetaSync(new autoclass.meta().setNameSync("translated").setContentSync("21 January 2001"))
        .addMetaSync(new autoclass.meta().setNameSync("modified").setContentSync("13 January 2014"))
        .addMetaSync(new autoclass.meta().setNameSync("description").setContentSync("Test of browser ability to map a 3 times multiple of an PixelTexture onto an IndexedFaceSet geometry. A 3 by 3 matrix of four equal sized red, green, white and yellow squares in the pixel texture map all the faces of the cube."))
        .addMetaSync(new autoclass.meta().setNameSync("identifier").setContentSync("http://www.web3d.org/x3d/content/examples/ConformanceNist/GeometricProperties/TextureCoordinate/indexedfaceset_pixeltexture_plus.x3d"))
        .addMetaSync(new autoclass.meta().setNameSync("generator").setContentSync("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html"))
        .addMetaSync(new autoclass.meta().setNameSync("generator").setContentSync("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"))
        .addMetaSync(new autoclass.meta().setNameSync("license").setContentSync("../../license.html")))
      .setSceneSync(new autoclass.Scene()
        .addChildSync(new autoclass.Viewpoint().setDescriptionSync("Front View"))
        .addChildSync(new autoclass.Viewpoint().setDescriptionSync("Rear View").setOrientationSync(java.newArray("float", [java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(3.14)])).setPositionSync(java.newArray("float", [java.newFloat(0), java.newFloat(0), java.newFloat(-10)])))
        .addChildSync(new autoclass.Viewpoint().setDescriptionSync("Top View").setOrientationSync(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(-1.57)])).setPositionSync(java.newArray("float", [java.newFloat(0), java.newFloat(10), java.newFloat(0)])))
        .addChildSync(new autoclass.Viewpoint().setDescriptionSync("Bottom View").setOrientationSync(java.newArray("float", [java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(1.57)])).setPositionSync(java.newArray("float", [java.newFloat(0), java.newFloat(-10), java.newFloat(0)])))
        .addChildSync(new autoclass.Viewpoint().setDescriptionSync("Right View").setOrientationSync(java.newArray("float", [java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(1.57)])).setPositionSync(java.newArray("float", [java.newFloat(10), java.newFloat(0), java.newFloat(0)])))
        .addChildSync(new autoclass.Viewpoint().setDescriptionSync("Left View").setOrientationSync(java.newArray("float", [java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(-1.57)])).setPositionSync(java.newArray("float", [java.newFloat(-10), java.newFloat(0), java.newFloat(0)])))
        .addChildSync(new autoclass.NavigationInfo().setTypeSync(java.newArray("java.lang.String", ["EXAMINE","WALK","FLY","ANY"])))
        .addChildSync(new autoclass.Shape()
          .setAppearanceSync(new autoclass.Appearance()
            .setMaterialSync(new autoclass.Material())
            .setTextureSync(new autoclass.PixelTexture().setImageSync(java.newArray("int", [2,2,4,4278190335,16711935,4294967295,4294902015]))))
          .setGeometrySync(new autoclass.IndexedFaceSet().setColorPerVertexSync(false).setCoordIndexSync(java.newArray("int", [0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1])).setCreaseAngleSync(java.newFloat(0.5)).setTexCoordIndexSync(java.newArray("int", [0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1]))
            .setColorSync(new autoclass.Color().setColorSync(java.newArray("float", [java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(0), java.newFloat(0), java.newFloat(1), java.newFloat(0)])))
            .setCoordSync(new autoclass.Coordinate().setPointSync(java.newArray("float", [java.newFloat(-2), java.newFloat(1), java.newFloat(1), java.newFloat(-2), java.newFloat(-1), java.newFloat(1), java.newFloat(2), java.newFloat(1), java.newFloat(1), java.newFloat(2), java.newFloat(-1), java.newFloat(1), java.newFloat(2), java.newFloat(1), java.newFloat(-1), java.newFloat(2), java.newFloat(-1), java.newFloat(-1), java.newFloat(-2), java.newFloat(1), java.newFloat(-1), java.newFloat(-2), java.newFloat(-1), java.newFloat(-1)])))
            .setTexCoordSync(new autoclass.TextureCoordinate().setPointSync(java.newArray("float", [java.newFloat(-1), java.newFloat(2), java.newFloat(-1), java.newFloat(-1), java.newFloat(2), java.newFloat(2), java.newFloat(2), java.newFloat(-1)]))))))      ;
    X3D0.toFileX3D("../data/indexedfaceset_pixeltexture_plus.new.x3d");
