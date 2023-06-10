'use strict';
import { X3D } from './x3d.mjs';
import fs from 'fs';
import { SFString } from './x3d.mjs';
import { SFNode } from './x3d.mjs';
import { head } from './x3d.mjs';
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
          meta : new MFNode([
            new meta({
              name : new SFString("generator"),
              content : new SFString("tovrmlx3d, http://castle-engine.sourceforge.net/view3dscene.php#section_converting")}),

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
              fieldOfView : new SFFloat(0.7853981256484985)}),

            new Viewpoint({
              description : new SFString("looking East"),
              position : new SFVec3f([-140,30,0]),
              orientation : new SFRotation([0,0.4000000059604645,0,-1.399999976158142]),
              fieldOfView : new SFFloat(0.7853981256484985)}),

            new Viewpoint({
              description : new SFString("Overhead"),
              position : new SFVec3f([0,150,0]),
              orientation : new SFRotation([1,0,0,-1.5700000524520874]),
              fieldOfView : new SFFloat(0.7853981256484985)}),

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
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  transparency : new SFFloat(0.20000000298023224),
                                  diffuseColor : new SFColor([0.5,0,1])}))})),
                          geometry : new SFNode(
                            new IndexedFaceSet({
                              coordIndex : new MFInt32([0,1,4,-1,1,2,4,-1,2,3,4,-1,3,0,4,-1,0,3,2,1,-1]),
                              coord : new SFNode(
                                new Coordinate({
                                  point : new MFVec3f([-0.3499999940395355,-0.3499999940395355,0.3499999940395355,0.3499999940395355,-0.3499999940395355,0.3499999940395355,0.3499999940395355,-0.3499999940395355,-0.3499999940395355,-0.3499999940395355,-0.3499999940395355,-0.3499999940395355,0,0.3499999940395355,0])}))}))}),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("translation"),
                              protoField : new SFString("pos")})])})])})])}))}),

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
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  transparency : new SFFloat(0.20000000298023224),
                                  diffuseColor : new SFColor([1,1,0])}))})),
                          geometry : new SFNode(
                            new Box({
                              size : new SFVec3f([0.699999988079071,0.699999988079071,0.699999988079071])}))}),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("translation"),
                              protoField : new SFString("pos")})])})])})])}))}),

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
                      children : new MFNode([
                        new Shape({
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
                              protoField : new SFString("pos")})])})])})])}))}),

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
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  transparency : new SFFloat(0.4000000059604645),
                                  IS : new SFNode(
                                    new IS({
                                      connect : new MFNode([
                                        new connect({
                                          nodeField : new SFString("emissiveColor"),
                                          protoField : new SFString("col")})])}))}))})),
                          geometry : new SFNode(
                            new Sphere({
                              radius : new SFFloat(1.100000023841858)}))}),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("translation"),
                              protoField : new SFString("posi")})])})])})])}))}),

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
                          value : new SFString("0 0.6000000238418579 0")}),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("posi"),
                              protoField : new SFString("pos")})])})])})])}))}),

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
                          value : new SFString("0 0.30000001192092896 1")}),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("posi"),
                              protoField : new SFString("pos")})])})])})])}))}),

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
                          value : new SFString("1 0 0.20000000298023224")}),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("posi"),
                              protoField : new SFString("pos")})])})])})])}))}),

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
                          value : new SFString("0.6000000238418579 0 0.6000000238418579")}),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("posi"),
                              protoField : new SFString("pos")})])})])})])}))}),

            new Transform({
              translation : new SFVec3f([-468,0,315]),
              children : new MFNode([
                new Inline({
                  url : new MFString(["t.wrl"])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('./data/566.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("Derby Women's Centre"),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("institute"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("435.29998779296875 0.10000000149011612 -335.6000061035156")})])})])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('./data/574.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("High Peak Community Arts"),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("r"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("400 0.10000000149011612 -385")})])})])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('./data/576.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("Charlesworth Primary School"),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("school"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("400.6000061035156 0.10000000149011612 -392.8999938964844")})])})])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('./data/579.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("Hope Valley College"),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("school"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("416.70001220703125 0.10000000149011612 -383.3999938964844")})])})])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('./data/583.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("People Express"),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("i"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("429.8999938964844 0.10000000149011612 -319.6000061035156")})])})])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('./data/589.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("QArts/Studios"),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("i"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("430 0.10000000149011612 -335")})])})])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('./data/591.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("Stroke Unit, Derbyshire Royal Infirmary"),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("institute"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("435.79998779296875 0.10000000149011612 -335.29998779296875")})])})])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('./data/592.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("Park View Primary, Derby"),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("school"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("438.29998779296875 0.10000000149011612 -338.6000061035156")})])})])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('./data/593.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("First Movement"),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("n"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("429.8999938964844 0.10000000149011612 -360.29998779296875")})])})])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('./data/594.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("St. Benedict R.C. School, Visual Impairment Unit"),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("institute"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("434.6000061035156 0.10000000149011612 -338.6000061035156")})])})])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('./data/595.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("Beckett Primary, Derby"),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("school"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("434.79998779296875 0.10000000149011612 -336")})])})])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('./data/597.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("Brackensdale Junior School, Communty Unit"),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("institute"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("432.70001220703125 0.10000000149011612 -336.6000061035156")})])})])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('./data/598.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("Moorhead Primary, Derby"),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("school"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("437.6000061035156 0.10000000149011612 -332.6000061035156")})])})])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('./data/600.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("Derby Deaf Club"),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("institute"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("434.70001220703125 0.10000000149011612 -336.8999938964844")})])})])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('./data/601.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("Nightingale Junior, Derby"),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("school"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("436.29998779296875 0.10000000149011612 -333.3999938964844")})])})])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('./data/603.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("St Mary's Primary, Derby"),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("school"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("435.20001220703125 0.10000000149011612 -336.79998779296875")})])})])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('./data/604.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("Griffe Field Primary, Derby"),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("school"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("432.5 0.10000000149011612 -332.5")})])})])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('./data/605.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("Leicester Road Day Centre, Melton Mowbray"),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("institute"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("474.70001220703125 0.10000000149011612 -318.79998779296875")})])})])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('./data/606.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("Ivy House Special School, Derby"),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("school"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("436.1000061035156 0.10000000149011612 -334.8999938964844")})])})])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('./data/607.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("Oakham Day Centre, Rutland"),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("institute"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("485.6000061035156 0.10000000149011612 -309")})])})])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('./data/608.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("Parkwood School, Alfreton"),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("school"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("440.5 0.10000000149011612 -355.5")})])})])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('./data/609.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("Ash Green, Specialist Learning Disability Resource"),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("institute"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("434.79998779296875 0.10000000149011612 -371.5")})])})])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('./data/610.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("Ashgate Croft School, Chesterfield"),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("school"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("436.29998779296875 0.10000000149011612 -371.70001220703125")})])})])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('./data/611.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("Highfields School, Matlock"),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("school"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("431.20001220703125 0.10000000149011612 -361.20001220703125")})])})])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('./data/612.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("City Arts"),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("i"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("455.8999938964844 0.10000000149011612 -341.29998779296875")})])})])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('./data/615.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("Indigo Dance Group (Salamanda Tandem)"),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("r"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("456.1000061035156 0.10000000149011612 -341.5")})])})])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('./data/623.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("Watering Seeds"),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("r"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("454 0.10000000149011612 -361.29998779296875")})])})])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('./data/625.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("Red oaks"),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("institute"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("457.3999938964844 0.10000000149011612 -359.6000061035156")})])})])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('./data/626.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("West Notts College"),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("school"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("454.20001220703125 0.10000000149011612 -358.6000061035156")})])})])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('./data/628.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("Willow Wood Day Centre"),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("institute"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("450.6000061035156 0.10000000149011612 -358.6000061035156")})])})])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('./data/630.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("Fased In The Arts"),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("r"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("440 0.10000000149011612 -350")})])})])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('./data/633.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("27a Access Artspace"),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("n"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("458.8999938964844 0.10000000149011612 -304.29998779296875")})])})])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('./data/635.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("Roman Way Day Centre, Market Harborough"),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("institute"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("473.5 0.10000000149011612 -287.5")})])})])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('./data/637.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("Mosaic, Leicester Disability Services"),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("institute"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("458 0.10000000149011612 -304.5")})])})])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('./data/638.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("Bamboozle Theatre Company"),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("r"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("457.1000061035156 0.10000000149011612 -300.79998779296875")})])})])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('./data/640.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("Ellesmere College, Leicester"),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("school"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("456.79998779296875 0.10000000149011612 -302.6000061035156")})])})])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('./data/642.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("Ashmount School, Loughborough"),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("school"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("453.29998779296875 0.10000000149011612 -318.6000061035156")})])})])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('./data/648.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("Mantle Community Arts"),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("r"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("442.3999938964844 0.10000000149011612 -314.5")})])})])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('./data/650.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("Forrest Way School"),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("school"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("444.6000061035156 0.10000000149011612 -313.70001220703125")})])})])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('./data/652.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("Ibstock Community College"),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("school"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("440.6000061035156 0.10000000149011612 -310.3999938964844")})])})])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('./data/658.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("Artlink East"),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("r"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("491.6000061035156 0.10000000149011612 -335.70001220703125")})])})])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('./data/660.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("United Hospitals and NHS Trust Lincolnshire"),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("institute"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("491.3999938964844 0.10000000149011612 -336.79998779296875")})])})])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('./data/662.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("Ancaster Day Centre"),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("institute"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("496.8999938964844 0.10000000149011612 -368.8999938964844")})])})])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('./data/665.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("Creations"),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("r"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("467 0.10000000149011612 -243.89999389648438")})])})])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('./data/667.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("Nene Day Centre, Northamtpon"),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("institute"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("477.1000061035156 0.10000000149011612 -260")})])})])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('./data/668.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("Delapre Middle School, Northampton"),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("school"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("474.70001220703125 0.10000000149011612 -259.1000061035156")})])})])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('./data/669.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("The Links, Brackley"),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("institute"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("459 0.10000000149011612 -236.39999389648438")})])})])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('./data/670.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("New Perspectives"),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("n"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("457.3999938964844 0.10000000149011612 -262.70001220703125")})])})])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('./data/671.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("UKan2"),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("r"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("458.70001220703125 0.10000000149011612 -262.70001220703125")})])})])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('./data/672.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("Silverstone County Infants School"),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("school"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("466.8999938964844 0.10000000149011612 -243.8000030517578")})])})])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('./data/677.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("Riverside Resource Centre, Towcester"),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("institute"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("469.5 0.10000000149011612 -249.8000030517578")})])})])}),

                new Anchor({
                  url : new MFString(["javascript:window.open('./data/678.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"]),
                  description : new SFString("Daventry Tertiary College"),
                  children : new MFNode([
                    new ProtoInstance({
                      name : new SFString("school"),
                      fieldValue : new MFNode([
                        new fieldValue({
                          name : new SFString("pos"),
                          value : new SFString("456.70001220703125 0.10000000149011612 -261.79998779296875")})])})])}),

                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({
                          transparency : new SFFloat(0.20000000298023224),
                          emissiveColor : new SFColor([1,0,0])}))})),
                  geometry : new SFNode(
                    new IndexedLineSet({
                      coordIndex : new MFInt32([0,1,-1,2,3,-1,4,5,-1,6,7,-1,8,9,-1,10,11,-1,12,13,-1,14,15,-1,16,17,-1,18,19,-1,20,21,-1,22,23,-1,24,25,-1,26,27,-1,28,29,-1,30,31,-1,32,33,-1,34,35,-1]),
                      coord : new SFNode(
                        new Coordinate({
                          point : new MFVec3f([430,0.019999999552965164,-335,435.79998779296875,0.10000000149011612,-335.29998779296875,430,0.019999999552965164,-335,434.6000061035156,0.10000000149011612,-338.6000061035156,430,0.019999999552965164,-335,432.70001220703125,0.10000000149011612,-336.6000061035156,430,0.019999999552965164,-335,434.70001220703125,0.10000000149011612,-336.8999938964844,429.8999938964844,0.019999999552965164,-360.29998779296875,474.70001220703125,0.10000000149011612,-318.79998779296875,429.8999938964844,0.019999999552965164,-360.29998779296875,485.6000061035156,0.10000000149011612,-309,429.8999938964844,0.019999999552965164,-360.29998779296875,434.79998779296875,0.10000000149011612,-371.5,454,0.019999999552965164,-361.29998779296875,457.3999938964844,0.10000000149011612,-359.6000061035156,454,0.019999999552965164,-361.29998779296875,454.20001220703125,0.10000000149011612,-358.6000061035156,454,0.019999999552965164,-361.29998779296875,450.6000061035156,0.10000000149011612,-358.6000061035156,458.8999938964844,0.019999999552965164,-304.29998779296875,473.5,0.10000000149011612,-287.5,458.8999938964844,0.019999999552965164,-304.29998779296875,458,0.10000000149011612,-304.5,491.6000061035156,0.019999999552965164,-335.70001220703125,491.3999938964844,0.10000000149011612,-336.79998779296875,491.6000061035156,0.019999999552965164,-335.70001220703125,496.8999938964844,0.10000000149011612,-368.8999938964844,467,0.019999999552965164,-243.89999389648438,477.1000061035156,0.10000000149011612,-260,467,0.019999999552965164,-243.89999389648438,459,0.10000000149011612,-236.39999389648438,458.70001220703125,0.019999999552965164,-262.70001220703125,469.5,0.10000000149011612,-249.8000030517578,458.70001220703125,0.019999999552965164,-262.70001220703125,456.70001220703125,0.10000000149011612,-261.79998779296875])}))}))}),

                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({
                          transparency : new SFFloat(0.20000000298023224),
                          emissiveColor : new SFColor([0,1,0])}))})),
                  geometry : new SFNode(
                    new IndexedLineSet({
                      coordIndex : new MFInt32([0,1,-1,2,3,-1,4,5,-1,6,7,-1,8,9,-1,10,11,-1,12,13,-1,14,15,-1,16,17,-1,18,19,-1,20,21,-1,22,23,-1,24,25,-1,26,27,-1,28,29,-1,30,31,-1,32,33,-1,34,35,-1]),
                      coord : new SFNode(
                        new Coordinate({
                          point : new MFVec3f([400,0.019999999552965164,-385,400.6000061035156,0.10000000149011612,-392.8999938964844,400,0.019999999552965164,-385,416.70001220703125,0.10000000149011612,-383.3999938964844,430,0.019999999552965164,-335,438.29998779296875,0.10000000149011612,-338.6000061035156,430,0.019999999552965164,-335,434.79998779296875,0.10000000149011612,-336,430,0.019999999552965164,-335,437.6000061035156,0.10000000149011612,-332.6000061035156,430,0.019999999552965164,-335,436.29998779296875,0.10000000149011612,-333.3999938964844,430,0.019999999552965164,-335,435.20001220703125,0.10000000149011612,-336.79998779296875,430,0.019999999552965164,-335,432.5,0.10000000149011612,-332.5,429.8999938964844,0.019999999552965164,-360.29998779296875,436.1000061035156,0.10000000149011612,-334.8999938964844,429.8999938964844,0.019999999552965164,-360.29998779296875,440.5,0.10000000149011612,-355.5,429.8999938964844,0.019999999552965164,-360.29998779296875,436.29998779296875,0.10000000149011612,-371.70001220703125,429.8999938964844,0.019999999552965164,-360.29998779296875,431.20001220703125,0.10000000149011612,-361.20001220703125,457.1000061035156,0.019999999552965164,-300.79998779296875,456.79998779296875,0.10000000149011612,-302.6000061035156,457.1000061035156,0.019999999552965164,-300.79998779296875,453.29998779296875,0.10000000149011612,-318.6000061035156,442.3999938964844,0.019999999552965164,-314.5,444.6000061035156,0.10000000149011612,-313.70001220703125,442.3999938964844,0.019999999552965164,-314.5,440.6000061035156,0.10000000149011612,-310.3999938964844,467,0.019999999552965164,-243.89999389648438,474.70001220703125,0.10000000149011612,-259.1000061035156,457.3999938964844,0.019999999552965164,-262.70001220703125,466.8999938964844,0.10000000149011612,-243.8000030517578])}))}))}),

                new Shape({
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({
                          transparency : new SFFloat(0.20000000298023224),
                          emissiveColor : new SFColor([1,0,1])}))})),
                  geometry : new SFNode(
                    new IndexedLineSet({
                      coordIndex : new MFInt32([0,1,-1,2,3,-1,4,5,-1,6,7,-1,8,9,-1]),
                      coord : new SFNode(
                        new Coordinate({
                          point : new MFVec3f([430,0.019999999552965164,-335,429.8999938964844,0.10000000149011612,-360.29998779296875,442.3999938964844,0.019999999552965164,-314.5,429.8999938964844,0.10000000149011612,-319.6000061035156,457.3999938964844,0.019999999552965164,-262.70001220703125,467,0.10000000149011612,-243.89999389648438,458.70001220703125,0.019999999552965164,-262.70001220703125,457.3999938964844,0.10000000149011612,-262.70001220703125,458.70001220703125,0.019999999552965164,-262.70001220703125,467,0.10000000149011612,-243.89999389648438])}))}))})])})])}))});
console.log(X3D0.toXMLNode());
