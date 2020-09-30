'use strict';
import fs from 'fs';
import { X3D } from './x3d.mjs';
import { SFString } from './x3d.mjs';
import { SFNode } from './x3d.mjs';
import { head } from './x3d.mjs';
import { component } from './x3d.mjs';
import { SFInt32 } from './x3d.mjs';
import { MFNode } from './x3d.mjs';
import { meta } from './x3d.mjs';
import { Scene } from './x3d.mjs';
import { NavigationInfo } from './x3d.mjs';
import { SFFloat } from './x3d.mjs';
import { MFFloat } from './x3d.mjs';
import { WorldInfo } from './x3d.mjs';
import { Viewpoint } from './x3d.mjs';
import { SFVec3f } from './x3d.mjs';
import { SFRotation } from './x3d.mjs';
import { ProtoDeclare } from './x3d.mjs';
import { ProtoInterface } from './x3d.mjs';
import { field } from './x3d.mjs';
import { ProtoBody } from './x3d.mjs';
import { Transform } from './x3d.mjs';
import { Shape } from './x3d.mjs';
import { Appearance } from './x3d.mjs';
import { Material } from './x3d.mjs';
import { SFColor } from './x3d.mjs';
import { IndexedFaceSet } from './x3d.mjs';
import { MFInt32 } from './x3d.mjs';
import { Coordinate } from './x3d.mjs';
import { MFVec3f } from './x3d.mjs';
import { IS } from './x3d.mjs';
import { connect } from './x3d.mjs';
import { Box } from './x3d.mjs';
import { SFBool } from './x3d.mjs';
import { Sphere } from './x3d.mjs';
import { ProtoInstance } from './x3d.mjs';
import { fieldValue } from './x3d.mjs';
import { Inline } from './x3d.mjs';
import { MFString } from './x3d.mjs';
import { Anchor } from './x3d.mjs';
import { IndexedLineSet } from './x3d.mjs';
var X3D0 =  new X3D({

      profile : new SFString("Interchange"),
      version : new SFString("3.0"),
      head : new SFNode(
        new head({
          component : new SFNode(
            new component({
              name : new SFString("Networking"),
              level : new SFInt32(2)})),
          meta : new MFNode([
            new meta({
              name : new SFString("generator"),
              content : new SFString("view3dscene, https://castle-engine.io/view3dscene.php")}),

            new meta({
              name : new SFString("source"),
              content : new SFString("t1.wrl")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new NavigationInfo({
              type : ["EXAMINE","FLY","WALK"],
              speed : new SFFloat(3),
              avatarSize : new MFFloat([200,200,120])}),

            new WorldInfo({
              title : new SFString("Arts Mapper")}),

            new Viewpoint({
              description : new SFString("looking North"),
              position : new SFVec3f([0,60,110]),
              orientation : new SFRotation([1,0,0,-0.699999988079071]),
              fieldOfView : new SFFloat(0.785398125648499)}),

            new Viewpoint({
              description : new SFString("looking East"),
              position : new SFVec3f([-140,30,0]),
              orientation : new SFRotation([0,0.400000005960464,0,-1.39999997615814]),
              fieldOfView : new SFFloat(0.785398125648499)}),

            new Viewpoint({
              description : new SFString("Overhead"),
              position : new SFVec3f([0,150,0]),
              orientation : new SFRotation([1,0,0,-1.57000005245209]),
              fieldOfView : new SFFloat(0.785398125648499)}),

            new ProtoDeclare({
              name : new SFString("school"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("pos"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      value : new SFString("0 0 0")})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Transform({
                      bboxCenter : new SFVec3f([0,0,0]),
                      bboxSize : new SFVec3f([-1,-1,-1]),
                      children : new MFNode([
                        new Shape({
                          bboxCenter : new SFVec3f([0,0,0]),
                          bboxSize : new SFVec3f([-1,-1,-1]),
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  transparency : new SFFloat(0.200000002980232),
                                  diffuseColor : new SFColor([0.5,0,1])}))})),
                          geometry : new SFNode(
                            new IndexedFaceSet({
                              coordIndex : new MFInt32([0,1,4,-1,1,2,4,-1,2,3,4,-1,3,0,4,-1,0,3,2,1,-1]),
                              coord : new SFNode(
                                new Coordinate({
                                  point : new MFVec3f([-0.349999994039536,-0.349999994039536,0.349999994039536,0.349999994039536,-0.349999994039536,0.349999994039536,0.349999994039536,-0.349999994039536,-0.349999994039536,-0.349999994039536,-0.349999994039536,-0.349999994039536,0,0.349999994039536,0])}))}))}),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("translation"),
                              protoField : new SFString("pos")})])}))])})])}))}),

            new ProtoDeclare({
              name : new SFString("institute"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("pos"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      value : new SFString("0 0 0")})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Transform({
                      bboxCenter : new SFVec3f([0,0,0]),
                      bboxSize : new SFVec3f([-1,-1,-1]),
                      children : new MFNode([
                        new Shape({
                          bboxCenter : new SFVec3f([0,0,0]),
                          bboxSize : new SFVec3f([-1,-1,-1]),
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  transparency : new SFFloat(0.200000002980232),
                                  diffuseColor : new SFColor([1,1,0])}))})),
                          geometry : new SFNode(
                            new Box({
                              size : new SFVec3f([0.699999988079071,0.699999988079071,0.699999988079071]),
                              solid : new SFBool(true)}))}),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("translation"),
                              protoField : new SFString("pos")})])}))])})])}))}),

            new ProtoDeclare({
              name : new SFString("disart_org"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("pos"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      value : new SFString("0 0 0")})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Transform({
                      bboxCenter : new SFVec3f([0,0,0]),
                      bboxSize : new SFVec3f([-1,-1,-1]),
                      children : new MFNode([
                        new Shape({
                          bboxCenter : new SFVec3f([0,0,0]),
                          bboxSize : new SFVec3f([-1,-1,-1]),
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  diffuseColor : new SFColor([1,1,0])}))})),
                          geometry : new SFNode(
                            new Sphere({
                              radius : new SFFloat(0.699999988079071)}))}),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("translation"),
                              protoField : new SFString("pos")})])}))])})])}))}),

            new ProtoDeclare({
              name : new SFString("org"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("posi"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      value : new SFString("0 0 0")}),

                    new field({
                      type : field.TYPE_SFCOLOR,
                      name : new SFString("col"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      value : new SFString("0 0 0")})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Transform({
                      bboxCenter : new SFVec3f([0,0,0]),
                      bboxSize : new SFVec3f([-1,-1,-1]),
                      children : new MFNode([
                        new Shape({
                          bboxCenter : new SFVec3f([0,0,0]),
                          bboxSize : new SFVec3f([-1,-1,-1]),
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  transparency : new SFFloat(0.400000005960464),
                                  IS : new SFNode(
                                    new IS({
                                      connect : new MFNode([
                                        new connect({
                                          nodeField : new SFString("emissiveColor"),
                                          protoField : new SFString("col")})])}))}))})),
                          geometry : new SFNode(
                            new Sphere({
                              radius : new SFFloat(1.10000002384186)}))}),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("translation"),
                              protoField : new SFString("posi")})])}))])})])}))}),

            new ProtoDeclare({
              name : new SFString("l"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("pos"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      value : new SFString("0 0 0")})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("org"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("col"),
                          value : new SFString("0 0.600000023841858 0")}),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("posi"),
                              protoField : new SFString("pos")})])}))])})])}))}),

            new ProtoDeclare({
              name : new SFString("r"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("pos"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      value : new SFString("0 0 0")})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("org"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("col"),
                          value : new SFString("0 0.300000011920929 1")}),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("posi"),
                              protoField : new SFString("pos")})])}))])})])}))}),

            new ProtoDeclare({
              name : new SFString("n"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("pos"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      value : new SFString("0 0 0")})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("org"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("col"),
                          value : new SFString("1 0 0.200000002980232")}),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("posi"),
                              protoField : new SFString("pos")})])}))])})])}))}),

            new ProtoDeclare({
              name : new SFString("i"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("pos"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      value : new SFString("0 0 0")})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("org"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("col"),
                          value : new SFString("0.600000023841858 0 0.600000023841858")}),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("posi"),
                              protoField : new SFString("pos")})])}))])})])}))}),

            new Transform({
              translation : new SFVec3f([-468,0,315]),
              bboxCenter : new SFVec3f([0,0,0]),
              bboxSize : new SFVec3f([-1,-1,-1]),
              children : new MFNode([
                new Inline({
                  url : new MFString(["t.wrl"]),
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('./data/566.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("Derby Women's Centre"),
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1]),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("institute"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("435.299987792969 0.100000001490116 -335.600006103516")})])})])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('./data/574.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("High Peak Community Arts"),
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1]),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("r"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("400 0.100000001490116 -385")})])})])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('./data/576.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("Charlesworth Primary School"),
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1]),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("school"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("400.600006103516 0.100000001490116 -392.899993896484")})])})])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('./data/579.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("Hope Valley College"),
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1]),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("school"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("416.700012207031 0.100000001490116 -383.399993896484")})])})])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('./data/583.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("People Express"),
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1]),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("i"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("429.899993896484 0.100000001490116 -319.600006103516")})])})])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('./data/589.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("QArts/Studios"),
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1]),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("i"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("430 0.100000001490116 -335")})])})])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('./data/591.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("Stroke Unit, Derbyshire Royal Infirmary"),
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1]),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("institute"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("435.799987792969 0.100000001490116 -335.299987792969")})])})])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('./data/592.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("Park View Primary, Derby"),
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1]),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("school"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("438.299987792969 0.100000001490116 -338.600006103516")})])})])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('./data/593.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("First Movement"),
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1]),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("n"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("429.899993896484 0.100000001490116 -360.299987792969")})])})])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('./data/594.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("St. Benedict R.C. School, Visual Impairment Unit"),
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1]),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("institute"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("434.600006103516 0.100000001490116 -338.600006103516")})])})])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('./data/595.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("Beckett Primary, Derby"),
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1]),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("school"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("434.799987792969 0.100000001490116 -336")})])})])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('./data/597.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("Brackensdale Junior School, Communty Unit"),
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1]),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("institute"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("432.700012207031 0.100000001490116 -336.600006103516")})])})])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('./data/598.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("Moorhead Primary, Derby"),
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1]),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("school"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("437.600006103516 0.100000001490116 -332.600006103516")})])})])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('./data/600.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("Derby Deaf Club"),
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1]),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("institute"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("434.700012207031 0.100000001490116 -336.899993896484")})])})])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('./data/601.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("Nightingale Junior, Derby"),
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1]),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("school"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("436.299987792969 0.100000001490116 -333.399993896484")})])})])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('./data/603.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("St Mary's Primary, Derby"),
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1]),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("school"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("435.200012207031 0.100000001490116 -336.799987792969")})])})])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('./data/604.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("Griffe Field Primary, Derby"),
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1]),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("school"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("432.5 0.100000001490116 -332.5")})])})])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('./data/605.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("Leicester Road Day Centre, Melton Mowbray"),
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1]),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("institute"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("474.700012207031 0.100000001490116 -318.799987792969")})])})])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('./data/606.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("Ivy House Special School, Derby"),
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1]),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("school"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("436.100006103516 0.100000001490116 -334.899993896484")})])})])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('./data/607.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("Oakham Day Centre, Rutland"),
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1]),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("institute"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("485.600006103516 0.100000001490116 -309")})])})])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('./data/608.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("Parkwood School, Alfreton"),
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1]),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("school"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("440.5 0.100000001490116 -355.5")})])})])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('./data/609.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("Ash Green, Specialist Learning Disability Resource"),
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1]),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("institute"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("434.799987792969 0.100000001490116 -371.5")})])})])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('./data/610.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("Ashgate Croft School, Chesterfield"),
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1]),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("school"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("436.299987792969 0.100000001490116 -371.700012207031")})])})])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('./data/611.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("Highfields School, Matlock"),
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1]),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("school"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("431.200012207031 0.100000001490116 -361.200012207031")})])})])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('./data/612.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("City Arts"),
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1]),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("i"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("455.899993896484 0.100000001490116 -341.299987792969")})])})])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('./data/615.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("Indigo Dance Group (Salamanda Tandem)"),
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1]),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("r"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("456.100006103516 0.100000001490116 -341.5")})])})])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('./data/623.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("Watering Seeds"),
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1]),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("r"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("454 0.100000001490116 -361.299987792969")})])})])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('./data/625.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("Red oaks"),
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1]),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("institute"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("457.399993896484 0.100000001490116 -359.600006103516")})])})])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('./data/626.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("West Notts College"),
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1]),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("school"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("454.200012207031 0.100000001490116 -358.600006103516")})])})])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('./data/628.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("Willow Wood Day Centre"),
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1]),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("institute"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("450.600006103516 0.100000001490116 -358.600006103516")})])})])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('./data/630.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("Fased In The Arts"),
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1]),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("r"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("440 0.100000001490116 -350")})])})])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('./data/633.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("27a Access Artspace"),
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1]),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("n"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("458.899993896484 0.100000001490116 -304.299987792969")})])})])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('./data/635.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("Roman Way Day Centre, Market Harborough"),
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1]),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("institute"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("473.5 0.100000001490116 -287.5")})])})])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('./data/637.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("Mosaic, Leicester Disability Services"),
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1]),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("institute"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("458 0.100000001490116 -304.5")})])})])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('./data/638.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("Bamboozle Theatre Company"),
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1]),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("r"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("457.100006103516 0.100000001490116 -300.799987792969")})])})])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('./data/640.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("Ellesmere College, Leicester"),
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1]),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("school"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("456.799987792969 0.100000001490116 -302.600006103516")})])})])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('./data/642.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("Ashmount School, Loughborough"),
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1]),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("school"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("453.299987792969 0.100000001490116 -318.600006103516")})])})])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('./data/648.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("Mantle Community Arts"),
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1]),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("r"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("442.399993896484 0.100000001490116 -314.5")})])})])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('./data/650.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("Forrest Way School"),
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1]),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("school"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("444.600006103516 0.100000001490116 -313.700012207031")})])})])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('./data/652.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("Ibstock Community College"),
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1]),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("school"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("440.600006103516 0.100000001490116 -310.399993896484")})])})])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('./data/658.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("Artlink East"),
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1]),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("r"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("491.600006103516 0.100000001490116 -335.700012207031")})])})])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('./data/660.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("United Hospitals and NHS Trust Lincolnshire"),
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1]),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("institute"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("491.399993896484 0.100000001490116 -336.799987792969")})])})])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('./data/662.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("Ancaster Day Centre"),
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1]),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("institute"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("496.899993896484 0.100000001490116 -368.899993896484")})])})])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('./data/665.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("Creations"),
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1]),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("r"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("467 0.100000001490116 -243.899993896484")})])})])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('./data/667.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("Nene Day Centre, Northamtpon"),
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1]),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("institute"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("477.100006103516 0.100000001490116 -260")})])})])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('./data/668.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("Delapre Middle School, Northampton"),
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1]),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("school"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("474.700012207031 0.100000001490116 -259.100006103516")})])})])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('./data/669.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("The Links, Brackley"),
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1]),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("institute"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("459 0.100000001490116 -236.399993896484")})])})])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('./data/670.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("New Perspectives"),
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1]),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("n"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("457.399993896484 0.100000001490116 -262.700012207031")})])})])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('./data/671.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("UKan2"),
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1]),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("r"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("458.700012207031 0.100000001490116 -262.700012207031")})])})])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('./data/672.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("Silverstone County Infants School"),
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1]),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("school"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("466.899993896484 0.100000001490116 -243.800003051758")})])})])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('./data/677.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("Riverside Resource Centre, Towcester"),
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1]),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("institute"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("469.5 0.100000001490116 -249.800003051758")})])})])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('./data/678.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("Daventry Tertiary College"),
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1]),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("school"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("456.700012207031 0.100000001490116 -261.799987792969")})])})])}),

                new Shape({
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1]),
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({
                          transparency : new SFFloat(0.200000002980232),
                          emissiveColor : new SFColor([1,0,0])}))})),
                  geometry : new SFNode(
                    new IndexedLineSet({
                      coordIndex : new MFInt32([0,1,-1,2,3,-1,4,5,-1,6,7,-1,8,9,-1,10,11,-1,12,13,-1,14,15,-1,16,17,-1,18,19,-1,20,21,-1,22,23,-1,24,25,-1,26,27,-1,28,29,-1,30,31,-1,32,33,-1,34,35,-1]),
                      coord : new SFNode(
                        new Coordinate({
                          point : new MFVec3f([430,0.0199999995529652,-335,435.799987792969,0.100000001490116,-335.299987792969,430,0.0199999995529652,-335,434.600006103516,0.100000001490116,-338.600006103516,430,0.0199999995529652,-335,432.700012207031,0.100000001490116,-336.600006103516,430,0.0199999995529652,-335,434.700012207031,0.100000001490116,-336.899993896484,429.899993896484,0.0199999995529652,-360.299987792969,474.700012207031,0.100000001490116,-318.799987792969,429.899993896484,0.0199999995529652,-360.299987792969,485.600006103516,0.100000001490116,-309,429.899993896484,0.0199999995529652,-360.299987792969,434.799987792969,0.100000001490116,-371.5,454,0.0199999995529652,-361.299987792969,457.399993896484,0.100000001490116,-359.600006103516,454,0.0199999995529652,-361.299987792969,454.200012207031,0.100000001490116,-358.600006103516,454,0.0199999995529652,-361.299987792969,450.600006103516,0.100000001490116,-358.600006103516,458.899993896484,0.0199999995529652,-304.299987792969,473.5,0.100000001490116,-287.5,458.899993896484,0.0199999995529652,-304.299987792969,458,0.100000001490116,-304.5,491.600006103516,0.0199999995529652,-335.700012207031,491.399993896484,0.100000001490116,-336.799987792969,491.600006103516,0.0199999995529652,-335.700012207031,496.899993896484,0.100000001490116,-368.899993896484,467,0.0199999995529652,-243.899993896484,477.100006103516,0.100000001490116,-260,467,0.0199999995529652,-243.899993896484,459,0.100000001490116,-236.399993896484,458.700012207031,0.0199999995529652,-262.700012207031,469.5,0.100000001490116,-249.800003051758,458.700012207031,0.0199999995529652,-262.700012207031,456.700012207031,0.100000001490116,-261.799987792969])}))}))}),

                new Shape({
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1]),
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({
                          transparency : new SFFloat(0.200000002980232),
                          emissiveColor : new SFColor([0,1,0])}))})),
                  geometry : new SFNode(
                    new IndexedLineSet({
                      coordIndex : new MFInt32([0,1,-1,2,3,-1,4,5,-1,6,7,-1,8,9,-1,10,11,-1,12,13,-1,14,15,-1,16,17,-1,18,19,-1,20,21,-1,22,23,-1,24,25,-1,26,27,-1,28,29,-1,30,31,-1,32,33,-1,34,35,-1]),
                      coord : new SFNode(
                        new Coordinate({
                          point : new MFVec3f([400,0.0199999995529652,-385,400.600006103516,0.100000001490116,-392.899993896484,400,0.0199999995529652,-385,416.700012207031,0.100000001490116,-383.399993896484,430,0.0199999995529652,-335,438.299987792969,0.100000001490116,-338.600006103516,430,0.0199999995529652,-335,434.799987792969,0.100000001490116,-336,430,0.0199999995529652,-335,437.600006103516,0.100000001490116,-332.600006103516,430,0.0199999995529652,-335,436.299987792969,0.100000001490116,-333.399993896484,430,0.0199999995529652,-335,435.200012207031,0.100000001490116,-336.799987792969,430,0.0199999995529652,-335,432.5,0.100000001490116,-332.5,429.899993896484,0.0199999995529652,-360.299987792969,436.100006103516,0.100000001490116,-334.899993896484,429.899993896484,0.0199999995529652,-360.299987792969,440.5,0.100000001490116,-355.5,429.899993896484,0.0199999995529652,-360.299987792969,436.299987792969,0.100000001490116,-371.700012207031,429.899993896484,0.0199999995529652,-360.299987792969,431.200012207031,0.100000001490116,-361.200012207031,457.100006103516,0.0199999995529652,-300.799987792969,456.799987792969,0.100000001490116,-302.600006103516,457.100006103516,0.0199999995529652,-300.799987792969,453.299987792969,0.100000001490116,-318.600006103516,442.399993896484,0.0199999995529652,-314.5,444.600006103516,0.100000001490116,-313.700012207031,442.399993896484,0.0199999995529652,-314.5,440.600006103516,0.100000001490116,-310.399993896484,467,0.0199999995529652,-243.899993896484,474.700012207031,0.100000001490116,-259.100006103516,457.399993896484,0.0199999995529652,-262.700012207031,466.899993896484,0.100000001490116,-243.800003051758])}))}))}),

                new Shape({
                  bboxCenter : new SFVec3f([0,0,0]),
                  bboxSize : new SFVec3f([-1,-1,-1]),
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({
                          transparency : new SFFloat(0.200000002980232),
                          emissiveColor : new SFColor([1,0,1])}))})),
                  geometry : new SFNode(
                    new IndexedLineSet({
                      coordIndex : new MFInt32([0,1,-1,2,3,-1,4,5,-1,6,7,-1,8,9,-1]),
                      coord : new SFNode(
                        new Coordinate({
                          point : new MFVec3f([430,0.0199999995529652,-335,429.899993896484,0.100000001490116,-360.299987792969,442.399993896484,0.0199999995529652,-314.5,429.899993896484,0.100000001490116,-319.600006103516,457.399993896484,0.0199999995529652,-262.700012207031,467,0.100000001490116,-243.899993896484,458.700012207031,0.0199999995529652,-262.700012207031,457.399993896484,0.100000001490116,-262.700012207031,458.700012207031,0.0199999995529652,-262.700012207031,467,0.100000001490116,-243.899993896484])}))}))})])})])}))});
console.log(X3D0.toXMLNode());
