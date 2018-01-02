load('X3Dautoclass.js');
var ConfigurationProperties = Packages.org.web3d.x3d.jsail.ConfigurationProperties;
ConfigurationProperties.xsltEngine = ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA;
ConfigurationProperties.deleteIntermediateFiles = false;
ConfigurationProperties.setStripTrailingZeroes(true);
var ProtoInstance0 = null;
var ProtoInstance1 = null;
var ProtoInstance2 = null;
      var X3D0 =  new X3DObject().setProfile("Immersive").setVersion("3.3")
      .setHead(new headObject()
        .addMeta(new metaObject().setName("creator").setContent("John W Carlson"))
        .addMeta(new metaObject().setName("created").setContent("December 13 2015"))
        .addMeta(new metaObject().setName("modified").setContent("April 18 2017"))
        .addMeta(new metaObject().setName("title").setContent("fors2.x3d"))
        .addMeta(new metaObject().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/fors2.x3d"))
        .addMeta(new metaObject().setName("description").setContent("beginnings of a force directed graph in 3D"))
        .addMeta(new metaObject().setName("generator").setContent("Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit")))
      .setScene(new SceneObject()
        .addChild(new ProtoDeclareObject().setName("node")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("position").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0")))
          .setProtoBody(new ProtoBodyObject()
            .addChild(new TransformObject().setDEF("transform")
              .setIS(new ISObject()
                .addConnect(new connectObject().setNodeField("translation").setProtoField("position")))
              .addChild(new ShapeObject()
                .addComments(new CommentsBlock("comment before Sphere"))
                .addComments(new CommentsBlock("comment after Sphere"))
                .addComments(new CommentsBlock("comment after Appearance"))
                .setGeometry(new SphereObject())
                .setAppearance(new AppearanceObject()
                  .addComments(new CommentsBlock("comment before Material"))
                  .addComments(new CommentsBlock("comment after Material"))
                  .setMaterial(new MaterialObject().setDiffuseColor(Java.to([1,0,0], Java.type("float[]")))))))
            .addChild(new PositionInterpolatorObject().setDEF("NodePosition").setKey(Java.to([0,1], Java.type("float[]"))).setKeyValue(Java.to([0,0,0,0,5,0], Java.type("float[]"))))
            .addChild(new ScriptObject().setDEF("MoveBall")
              .addField(new fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("translation").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("50 50 0"))
              .addField(new fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("old").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 0 0"))
              .addField(new fieldObject().setType(fieldObject.TYPE_SFTIME).setName("set_cycle").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
              .addField(new fieldObject().setType(fieldObject.TYPE_MFVEC3F).setName("keyValue").setAccessType(fieldObject.ACCESSTYPE_OUTPUTONLY))
              .setSourceCode("ecmascript:\n"+
"					function set_cycle(value) {\n"+
"                                                old = translation;\n"+
"						translation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);\n"+
"                                                keyValue = new MFVec3f([old, translation]);\n"+
"						// Browser.println(translation);\n"+
"					}\n"+
""))
            .addChild(new TimeSensorObject().setDEF("nodeClock").setCycleInterval(3).setLoop(true))
            .addChild(new ROUTEObject().setFromNode("nodeClock").setFromField("cycleTime").setToNode("MoveBall").setToField("set_cycle"))
            .addChild(new ROUTEObject().setFromNode("nodeClock").setFromField("fraction_changed").setToNode("NodePosition").setToField("set_fraction"))
            .addChild(new ROUTEObject().setFromNode("MoveBall").setFromField("keyValue").setToNode("NodePosition").setToField("keyValue"))
            .addChild(new ROUTEObject().setFromNode("NodePosition").setFromField("value_changed").setToNode("transform").setToField("set_translation"))))
        .addChild(new ProtoDeclareObject().setName("cylinder")
          .setProtoInterface(new ProtoInterfaceObject()
            .addField(new fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("positionA").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
            .addField(new fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("positionB").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY)))
          .setProtoBody(new ProtoBodyObject()
            .addChild(new ShapeObject()
              .setGeometry(new ExtrusionObject().setDEF("extrusion").setCreaseAngle(0.785).setCrossSection(Java.to([1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0], Java.type("float[]"))).setSpine(Java.to([0,-50,0,0,0,0,0,50,0], Java.type("float[]"))))
              .setAppearance(new AppearanceObject()
                .setMaterial(new MaterialObject().setDiffuseColor(Java.to([0,1,0], Java.type("float[]"))))))
            .addChild(new ScriptObject().setDEF("MoveCylinder")
              .addField(new fieldObject().setType(fieldObject.TYPE_MFVEC3F).setName("spine").setAccessType(fieldObject.ACCESSTYPE_INPUTOUTPUT).setValue("0 -50 0 0 0 0 0 50 0"))
              .addField(new fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("set_endA").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
              .addField(new fieldObject().setType(fieldObject.TYPE_SFVEC3F).setName("set_endB").setAccessType(fieldObject.ACCESSTYPE_INPUTONLY))
              .setIS(new ISObject()
                .addConnect(new connectObject().setNodeField("set_endA").setProtoField("positionA"))
                .addConnect(new connectObject().setNodeField("set_endB").setProtoField("positionB")))
              .setSourceCode("ecmascript:\n"+
"\n"+
"                function set_endA(value) {\n"+
"		    if (typeof spine === \"undefined\") {\n"+
"		        spine = new MFVec3f([value, value]);\n"+
"		    } else {\n"+
"		        spine = new MFVec3f([value, spine[1]]);\n"+
"		    }\n"+
"                }\n"+
"                \n"+
"                function set_endB(value) {\n"+
"		    if (typeof spine === \"undefined\") {\n"+
"		        spine = new MFVec3f([value, value]);\n"+
"		    } else {\n"+
"		        spine = new MFVec3f([spine[0], value]);\n"+
"		    }\n"+
"                }\n"+
"                \n"+
"                function set_spine(value) {\n"+
"		    Browser.print('\\n'+'\"');\n"+
"                    spine = value;\n"+
"                }\n"+
""))
            .addChild(new ROUTEObject().setFromNode("MoveCylinder").setFromField("spine").setToNode("extrusion").setToField("set_spine"))))
        .addChild(new TransformObject().setScale(Java.to([0.1,0.1,0.1], Java.type("float[]")))
          .addChild(ProtoInstance0 = new ProtoInstanceObject().setName("node").setDEF("nodeA"))
          .addChild(ProtoInstance1 = new ProtoInstanceObject().setName("node").setDEF("nodeB"))
          .addChild(ProtoInstance2 = new ProtoInstanceObject().setName("cylinder").setDEF("linkA")))
        .addChild(new ROUTEObject().setFromNode("nodeA").setFromField("position").setToNode("linkA").setToField("positionA"))
        .addChild(new ROUTEObject().setFromNode("nodeB").setFromField("position").setToNode("linkA").setToField("positionB")))      ;
ProtoInstance0
            .addFieldValue(new fieldValueObject().setName("position").setValue("-50 -50 -50"));
ProtoInstance1
            .addFieldValue(new fieldValueObject().setName("position").setValue("50 50 50"));
ProtoInstance2
            .addFieldValue(new fieldValueObject().setName("positionA").setValue("0 0 0"));
ProtoInstance2
            .addFieldValue(new fieldValueObject().setName("positionB").setValue("50 50 50"));
    X3D0.toFileX3D("../data/fors2.new.x3d");
