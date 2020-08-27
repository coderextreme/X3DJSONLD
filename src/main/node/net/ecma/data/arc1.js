'use strict';
import fs from 'fs';
import { * } from './x3d.js';
var ProtoInstance0 = null;
var ProtoInstance1 = null;
var ProtoInstance2 = null;
var X3D0 =  new X3D({
profile : new SFString("Immersive"),
version : new SFString("3.3"),

      head : (new head({

        meta : (new meta({
name : new SFString("title"),
content : new SFString("arc1.x3d"),
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
        children : (new ProtoDeclare({
name : new SFString("point"),

          protoInterface : (new ProtoInterface({

            field : (new field({
type : new SFVec3f(field.TYPE_SFVEC3F),
name : new SFString("translation"),
accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
value : new SFString("0 0 0"),
}))}))
          protoBody : (new ProtoBody({

            children : (new Transform({
dEF : new SFString("node"),
bboxCenter : new SFVec3f([0,0,0]),
bboxSize : new SFVec3f([-1,-1,-1]),

              iS : (new IS({

                connect : (new connect({
nodeField : new SFString("translation"),
protoField : new SFString("translation"),
}))}))
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
dEF : new SFString("PI1"),
key : new MFFloat([0,1]),
keyValue : new MFVec3f([0,0,0,0,5,0]),
}))
              children : (new Script({
dEF : new SFString("MB1"),

                field : (new field({
type : new SFVec3f(field.TYPE_SFVEC3F),
name : new SFString("translation"),
accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
value : new SFString("50 50 0"),
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
}))
                .setSourceCode("ecmascript:\n"+
"               function set_location(value) {\n"+
"                    old = translation;\n"+
"                    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f([old, translation]);\n"+
"               }")}))
              children : (new TimeSensor({
dEF : new SFString("CL1"),
cycleInterval : new SFTime(3),
loop : new SFBool(true),
}))
              children : (new ROUTE({
fromNode : new SFString("CL1"),
fromField : new SFString("cycleTime"),
toNode : new SFString("MB1"),
toField : new SFString("set_location"),
}))
              children : (new ROUTE({
fromNode : new SFString("CL1"),
fromField : new SFString("fraction_changed"),
toNode : new SFString("PI1"),
toField : new SFString("set_fraction"),
}))
              children : (new ROUTE({
fromNode : new SFString("MB1"),
fromField : new SFString("keyValue"),
toNode : new SFString("PI1"),
toField : new SFString("keyValue"),
}))
              children : (new ROUTE({
fromNode : new SFString("PI1"),
fromField : new SFString("value_changed"),
toNode : new SFString("node"),
toField : new SFString("set_translation"),
}))
              children : (new ROUTE({
fromNode : new SFString("MB1"),
fromField : new SFString("translation_changed"),
toNode : new SFString("node"),
toField : new SFString("set_translation"),
}))}))}))}))
        children : (new Transform({
dEF : new SFString("G1"),
bboxCenter : new SFVec3f([0,0,0]),
bboxSize : new SFVec3f([-1,-1,-1]),

          children : (ProtoInstance0 = new ProtoInstance({
name : new SFString("point"),
}))}))
        children : (new Transform({
dEF : new SFString("G2"),
bboxCenter : new SFVec3f([0,0,0]),
bboxSize : new SFVec3f([-1,-1,-1]),

          children : (ProtoInstance1 = new ProtoInstance({
name : new SFString("point"),
}))}))
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
        children : (new ProtoDeclare({
name : new SFString("x3dconnector"),

          protoInterface : (new ProtoInterface({

            field : (new field({
type : new SFNode(field.TYPE_SFNODE),
name : new SFString("startnode"),
accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
}))
            field : (new field({
type : new SFNode(field.TYPE_SFNODE),
name : new SFString("endnode"),
accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
}))
            field : (new field({
type : new SFNode(field.TYPE_SFNODE),
name : new SFString("transnode"),
accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
}))
            field : (new field({
type : new SFNode(field.TYPE_SFNODE),
name : new SFString("rotscalenode"),
accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
}))
            field : (new field({
type : new SFVec3f(field.TYPE_SFVEC3F),
name : new SFString("set_startpoint"),
accessType : new SFString(field.ACCESSTYPE_INPUTONLY),
}))
            field : (new field({
type : new SFVec3f(field.TYPE_SFVEC3F),
name : new SFString("set_endpoint"),
accessType : new SFString(field.ACCESSTYPE_INPUTONLY),
}))}))
          protoBody : (new ProtoBody({

            children : (new Script({
dEF : new SFString("S1"),

              field : (new field({
type : new SFNode(field.TYPE_SFNODE),
name : new SFString("startnode"),
accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
}))
              field : (new field({
type : new SFNode(field.TYPE_SFNODE),
name : new SFString("endnode"),
accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
}))
              field : (new field({
type : new SFNode(field.TYPE_SFNODE),
name : new SFString("transnode"),
accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
}))
              field : (new field({
type : new SFNode(field.TYPE_SFNODE),
name : new SFString("rotscalenode"),
accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
}))
              field : (new field({
type : new SFVec3f(field.TYPE_SFVEC3F),
name : new SFString("set_startpoint"),
accessType : new SFString(field.ACCESSTYPE_INPUTONLY),
}))
              field : (new field({
type : new SFVec3f(field.TYPE_SFVEC3F),
name : new SFString("set_endpoint"),
accessType : new SFString(field.ACCESSTYPE_INPUTONLY),
}))
              iS : (new IS({

                connect : (new connect({
nodeField : new SFString("startnode"),
protoField : new SFString("startnode"),
}))
                connect : (new connect({
nodeField : new SFString("endnode"),
protoField : new SFString("endnode"),
}))
                connect : (new connect({
nodeField : new SFString("transnode"),
protoField : new SFString("transnode"),
}))
                connect : (new connect({
nodeField : new SFString("rotscalenode"),
protoField : new SFString("rotscalenode"),
}))
                connect : (new connect({
nodeField : new SFString("set_startpoint"),
protoField : new SFString("set_startpoint"),
}))
                connect : (new connect({
nodeField : new SFString("set_endpoint"),
protoField : new SFString("set_endpoint"),
}))}))
              .setSourceCode("ecmascript:\n"+
"        function recompute(startpoint,endpoint){\n"+
"	    if (typeof endpoint === 'undefined') {\n"+
"		return;\n"+
"	    }\n"+
"            var dif = endpoint.subtract(startpoint);\n"+
"            var dist = dif.length()*0.5;\n"+
"            var dif2 = dif.multiply(0.5);\n"+
"            var norm = dif.normalize();\n"+
"            var transl = startpoint.add(dif2);\n"+
"	    if (typeof Quaternion !== 'undefined') {\n"+
"		    return {\n"+
"			    scale : new SFVec3f(1.0,dist,1.0),\n"+
"			    translation : transl,\n"+
"			    rotation : new Quaternion.rotateFromTo(new SFVec3f(0.0,1.0,0.0), norm)\n"+
"		    };\n"+
"	    } else {\n"+
"		    return {\n"+
"			    scale : new SFVec3f(1.0,dist,1.0),\n"+
"			    translation : transl,\n"+
"			    rotation : new SFRotation(new SFVec3f(0.0,1.0,0.0),norm)\n"+
"		    };\n"+
"	    }\n"+
"	}\n"+
"	function recompute_and_route(startpoint, endpoint) {\n"+
"	      var trafo = recompute(startpoint, endpoint);\n"+
"	      if (trafo) {\n"+
"		      transnode.translation = trafo.translation;\n"+
"		      rotscalenode.rotation = trafo.rotation;\n"+
"		      rotscalenode.scale = trafo.scale;\n"+
"	      }\n"+
"	}\n"+
"        function initialize(){\n"+
"            recompute_and_route(startnode.translation,endnode.translation);\n"+
"        }\n"+
"        function set_startpoint(val,t){\n"+
"            recompute_and_route(val,endnode.translation);\n"+
"        }\n"+
"        function set_endpoint(val,t){\n"+
"            recompute_and_route(startnode.translation,val);\n"+
"        }")}))}))}))
        children : (ProtoInstance2 = new ProtoInstance({
name : new SFString("x3dconnector"),
dEF : new SFString("connector1"),
}))
        children : (new ROUTE({
fromNode : new SFString("G1"),
fromField : new SFString("translation_changed"),
toNode : new SFString("connector1"),
toField : new SFString("set_startpoint"),
}))
        children : (new ROUTE({
fromNode : new SFString("G2"),
fromField : new SFString("translation_changed"),
toNode : new SFString("connector1"),
toField : new SFString("set_endpoint"),
}))}))});
ProtoInstance2
          fieldValue : (new fieldValue({
name : new SFString("startnode"),

            children : (new Transform({
uSE : new SFString("G1"),
}))}));
ProtoInstance2
          fieldValue : (new fieldValue({
name : new SFString("endnode"),

            children : (new Transform({
uSE : new SFString("G2"),
}))}));
ProtoInstance2
          fieldValue : (new fieldValue({
name : new SFString("transnode"),

            children : (new Transform({
uSE : new SFString("transC1"),
}))}));
ProtoInstance2
          fieldValue : (new fieldValue({
name : new SFString("rotscalenode"),

            children : (new Transform({
uSE : new SFString("rotscaleC1"),
}))}));
ProtoInstance2
          fieldValue : (new fieldValue({
name : new SFString("set_startpoint"),
}));
ProtoInstance2
          fieldValue : (new fieldValue({
name : new SFString("set_endpoint"),
}));
console.log(X3D0.toXMLNode());
