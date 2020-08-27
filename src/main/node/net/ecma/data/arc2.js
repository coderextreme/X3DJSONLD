'use strict';
import fs from 'fs';
import { * } from './x3d.js';
var X3D0 =  new X3D({
profile : new SFString("Immersive"),
version : new SFString("3.3"),

      head : (new head({

        meta : (new meta({
name : new SFString("title"),
content : new SFString("arc2.x3d"),
}))
        meta : (new meta({
name : new SFString("creator"),
content : new SFString("Lost, Doug Sanden I think"),
}))
        meta : (new meta({
name : new SFString("generator"),
content : new SFString("manual"),
}))
        meta : (new meta({
name : new SFString("identifier"),
content : new SFString("https://coderextreme.net/X3DJSONLD/src/main/data/arc1.x3d"),
}))
        meta : (new meta({
name : new SFString("description"),
content : new SFString("a generic proto to connect two objects"),
}))}))
      scene : (new Scene({

        children : (new Viewpoint({
position : new SFVec3f([0,0,5]),
description : new SFString("Only Viewpoint"),
}))
        children : (new Background({
skyColor : new MFColor([0.4,0.4,0.4]),
transparency : new SFFloat(0),
}))
        children : (new Transform({
dEF : new SFString("G1"),
bboxCenter : new SFVec3f([0,0,0]),
bboxSize : new SFVec3f([-1,-1,-1]),

          children : (new Transform({
dEF : new SFString("DECLpoint_INSTANCE_node"),
bboxCenter : new SFVec3f([0,0,0]),
bboxSize : new SFVec3f([-1,-1,-1]),

            children : (new Shape({
bboxCenter : new SFVec3f([0,0,0]),
bboxSize : new SFVec3f([-1,-1,-1]),

              geometry : (new Sphere({
radius : new SFFloat(0.1),
}))
              appearance : (new Appearance({

                material : (new Material({
diffuseColor : new SFColor([1,0,0]),
}))}))}))
            children : (new PositionInterpolator({
dEF : new SFString("DECLpoint_INSTANCE_PI1"),
key : new MFFloat([0,1]),
keyValue : new MFVec3f([0,0,0,0,5,0]),
}))
            children : (new TimeSensor({
dEF : new SFString("DECLpoint_INSTANCE_CL1"),
cycleInterval : new SFTime(3),
loop : new SFBool(true),
}))
            children : (new ROUTE({
fromNode : new SFString("DECLpoint_INSTANCE_CL1"),
fromField : new SFString("cycleTime"),
toNode : new SFString("DECLpoint_INSTANCE_MB1"),
toField : new SFString("set_location"),
}))
            children : (new ROUTE({
fromNode : new SFString("DECLpoint_INSTANCE_CL1"),
fromField : new SFString("fraction_changed"),
toNode : new SFString("DECLpoint_INSTANCE_PI1"),
toField : new SFString("set_fraction"),
}))
            children : (new ROUTE({
fromNode : new SFString("DECLpoint_INSTANCE_MB1"),
fromField : new SFString("keyValue"),
toNode : new SFString("DECLpoint_INSTANCE_PI1"),
toField : new SFString("keyValue"),
}))
            children : (new ROUTE({
fromNode : new SFString("DECLpoint_INSTANCE_PI1"),
fromField : new SFString("value_changed"),
toNode : new SFString("DECLpoint_INSTANCE_node"),
toField : new SFString("set_translation"),
}))
            children : (new ROUTE({
fromNode : new SFString("DECLpoint_INSTANCE_MB1"),
fromField : new SFString("translation_changed"),
toNode : new SFString("DECLpoint_INSTANCE_node"),
toField : new SFString("set_translation"),
}))
            x3DScript : (new X3DScript({
dEF : new SFString("DECLpoint_INSTANCE_MB1"),

              field : (new field({
type : new SFVec3f(field.TYPE_SFVEC3F),
name : new SFString("translation"),
accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
value : new SFString("0 0 0"),
}))
              field : (new field({
type : new SFVec3f(field.TYPE_SFVEC3F),
name : new SFString("old"),
accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
value : new SFString("0 0 0"),
}))
              field : (new field({
type : new SFTime(field.TYPE_SFTIME),
name : new SFString("set_location"),
accessType : new SFString(field.ACCESSTYPE_INPUTONLY),
}))
              field : (new field({
type : new MFVec3f(field.TYPE_MFVEC3F),
name : new SFString("keyValue"),
accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
value : new SFString("0 0 0 0 5 0"),
}))}))}))}))
        children : (new Transform({
dEF : new SFString("G2"),
bboxCenter : new SFVec3f([0,0,0]),
bboxSize : new SFVec3f([-1,-1,-1]),

          children : (new Transform({
dEF : new SFString("DECLpoint_INSTANCE1000_node"),
bboxCenter : new SFVec3f([0,0,0]),
bboxSize : new SFVec3f([-1,-1,-1]),

            children : (new Shape({
bboxCenter : new SFVec3f([0,0,0]),
bboxSize : new SFVec3f([-1,-1,-1]),

              geometry : (new Sphere({
radius : new SFFloat(0.1),
}))
              appearance : (new Appearance({

                material : (new Material({
diffuseColor : new SFColor([1,0,0]),
}))}))}))
            children : (new PositionInterpolator({
dEF : new SFString("DECLpoint_INSTANCE1000_PI1"),
key : new MFFloat([0,1]),
keyValue : new MFVec3f([0,0,0,0,5,0]),
}))
            children : (new TimeSensor({
dEF : new SFString("DECLpoint_INSTANCE1000_CL1"),
cycleInterval : new SFTime(3),
loop : new SFBool(true),
}))
            children : (new ROUTE({
fromNode : new SFString("DECLpoint_INSTANCE1000_CL1"),
fromField : new SFString("cycleTime"),
toNode : new SFString("DECLpoint_INSTANCE1000_MB1"),
toField : new SFString("set_location"),
}))
            children : (new ROUTE({
fromNode : new SFString("DECLpoint_INSTANCE1000_CL1"),
fromField : new SFString("fraction_changed"),
toNode : new SFString("DECLpoint_INSTANCE1000_PI1"),
toField : new SFString("set_fraction"),
}))
            children : (new ROUTE({
fromNode : new SFString("DECLpoint_INSTANCE1000_MB1"),
fromField : new SFString("keyValue"),
toNode : new SFString("DECLpoint_INSTANCE1000_PI1"),
toField : new SFString("keyValue"),
}))
            children : (new ROUTE({
fromNode : new SFString("DECLpoint_INSTANCE1000_PI1"),
fromField : new SFString("value_changed"),
toNode : new SFString("DECLpoint_INSTANCE1000_node"),
toField : new SFString("set_translation"),
}))
            children : (new ROUTE({
fromNode : new SFString("DECLpoint_INSTANCE1000_MB1"),
fromField : new SFString("translation_changed"),
toNode : new SFString("DECLpoint_INSTANCE1000_node"),
toField : new SFString("set_translation"),
}))
            x3DScript : (new X3DScript({
dEF : new SFString("DECLpoint_INSTANCE1000_MB1"),

              field : (new field({
type : new SFVec3f(field.TYPE_SFVEC3F),
name : new SFString("translation"),
accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
value : new SFString("0 0 0"),
}))
              field : (new field({
type : new SFVec3f(field.TYPE_SFVEC3F),
name : new SFString("old"),
accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
value : new SFString("0 0 0"),
}))
              field : (new field({
type : new SFTime(field.TYPE_SFTIME),
name : new SFString("set_location"),
accessType : new SFString(field.ACCESSTYPE_INPUTONLY),
}))
              field : (new field({
type : new MFVec3f(field.TYPE_MFVEC3F),
name : new SFString("keyValue"),
accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
value : new SFString("0 0 0 0 5 0"),
}))}))}))}))
        children : (new Transform({
dEF : new SFString("transC1"),
bboxCenter : new SFVec3f([0,0,0]),
bboxSize : new SFVec3f([-1,-1,-1]),

          children : (new Transform({
dEF : new SFString("rotscaleC1"),
bboxCenter : new SFVec3f([0,0,0]),
bboxSize : new SFVec3f([-1,-1,-1]),

            children : (new Shape({
bboxCenter : new SFVec3f([0,0,0]),
bboxSize : new SFVec3f([-1,-1,-1]),

              appearance : (new Appearance({

                material : (new Material({
diffuseColor : new SFColor([0.2,0.7,0.7]),
transparency : new SFFloat(0.5),
}))}))
              geometry : (new Cylinder({
radius : new SFFloat(0.05),
}))}))}))}))
        children : (new ROUTE({
fromNode : new SFString("G1"),
fromField : new SFString("translation_changed"),
toNode : new SFString("DECLx3dconnector_connector1_S1"),
toField : new SFString("set_startpoint"),
}))
        children : (new ROUTE({
fromNode : new SFString("G2"),
fromField : new SFString("translation_changed"),
toNode : new SFString("DECLx3dconnector_connector1_S1"),
toField : new SFString("set_endpoint"),
}))}))});
console.log(X3D0.toXMLNode());
