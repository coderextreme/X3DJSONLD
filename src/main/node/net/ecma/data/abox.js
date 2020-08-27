'use strict';
import fs from 'fs';
import { * } from './x3d.js';
var X3D0 =  new X3D({

      profile : new SFString("Immersive"),
      version : new SFString("3.3")
      head : (new head({

        meta : (new meta({

          name : new SFString("title"),
          content : new SFString("abox.x3d")}))
        meta : (new meta({

          name : new SFString("creator"),
          content : new SFString("John Carlson")}))
        meta : (new meta({

          name : new SFString("generator"),
          content : new SFString("manual")}))
        meta : (new meta({

          name : new SFString("identifier"),
          content : new SFString("https://coderextreme.net/X3DJSONLD/abox.x3d")}))
        meta : (new meta({

          name : new SFString("description"),
          content : new SFString("a box")}))}))
      scene : (new Scene({

        children : (new ProtoDeclare({

          name : new SFString("anyShape")
          protoInterface : (new ProtoInterface({

            field : (new field({

              type : new MFNode(field.TYPE_MFNODE),
              name : new SFString("myShape"),
              accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)
              children : (new Shape({

                bboxCenter : new SFVec3f([0,0,0]),
                bboxSize : new SFVec3f([-1,-1,-1])
                geometry : (new Sphere({
}))}))}))}))
          protoBody : (new ProtoBody({

            children : (new Transform({

              bboxCenter : new SFVec3f([0,0,0]),
              bboxSize : new SFVec3f([-1,-1,-1])
              iS : (new IS({

                connect : (new connect({

                  nodeField : new SFString("children"),
                  protoField : new SFString("myShape")}))}))}))}))}))
        children : (new ProtoDeclare({

          name : new SFString("one")
          protoInterface : (new ProtoInterface({

            field : (new field({

              type : new MFNode(field.TYPE_MFNODE),
              name : new SFString("myShape"),
              accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)
              children : (new Shape({

                bboxCenter : new SFVec3f([0,0,0]),
                bboxSize : new SFVec3f([-1,-1,-1])
                geometry : (new Cylinder({
}))}))}))}))
          protoBody : (new ProtoBody({

            children : (new Transform({

              bboxCenter : new SFVec3f([0,0,0]),
              bboxSize : new SFVec3f([-1,-1,-1])
              children : (new ProtoInstance({

                name : new SFString("anyShape")
                iS : (new IS({

                  connect : (new connect({

                    nodeField : new SFString("myShape"),
                    protoField : new SFString("myShape")}))}))}))}))}))}))
        children : (new ProtoInstance({

          name : new SFString("one")
          fieldValue : (new fieldValue({

            name : new SFString("myShape")
            children : (new Shape({

              bboxCenter : new SFVec3f([0,0,0]),
              bboxSize : new SFVec3f([-1,-1,-1])
              geometry : (new Box({

                size : new SFVec3f([140,140,140]),
                solid : new SFBool(true)}))}))}))}))}))});
console.log(X3D0.toXMLNode());
