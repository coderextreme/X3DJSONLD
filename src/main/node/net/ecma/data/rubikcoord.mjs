'use strict';
import fs from 'fs';
import { X3D } from './x3d.mjs';
import { SFString } from './x3d.mjs';
import { SFNode } from './x3d.mjs';
import { head } from './x3d.mjs';
import { MFNode } from './x3d.mjs';
import { meta } from './x3d.mjs';
import { Scene } from './x3d.mjs';
import { NavigationInfo } from './x3d.mjs';
import { Viewpoint } from './x3d.mjs';
import { SFVec3f } from './x3d.mjs';
import { Background } from './x3d.mjs';
import { MFColor } from './x3d.mjs';
import { ProtoDeclare } from './x3d.mjs';
import { ProtoInterface } from './x3d.mjs';
import { field } from './x3d.mjs';
import { ProtoBody } from './x3d.mjs';
import { Transform } from './x3d.mjs';
import { IS } from './x3d.mjs';
import { connect } from './x3d.mjs';
import { Shape } from './x3d.mjs';
import { Box } from './x3d.mjs';
import { Appearance } from './x3d.mjs';
import { Material } from './x3d.mjs';
import { SFColor } from './x3d.mjs';
import { ProtoInstance } from './x3d.mjs';
import { fieldValue } from './x3d.mjs';
var X3D0 =  new X3D({

      profile : new SFString("Immersive"),
      version : new SFString("3.3"),
      head : new SFNode(
        new head({
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("rubikcoord.x3d")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("John Carlson")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("manual")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("https://coderextreme.net/X3DJSONLD/rubik.x3d")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("a kind of 2x2x2 rubik cube")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new NavigationInfo({
              type : ["EXAMINE"]}),

            new Viewpoint({
              description : new SFString("Rubiks Cube"),
              position : new SFVec3f([0,0,12])}),

            new Background({
              skyColor : new MFColor([1,1,1])}),

            new ProtoDeclare({
              name : new SFString("boxproto"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("xtranslation"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("0 0 0")}),

                    new field({
                      type : field.TYPE_SFCOLOR,
                      name : new SFString("diffuseColor"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("1 1 1")})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Transform({
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("translation"),
                              protoField : new SFString("xtranslation")})])})),
                      children : new MFNode([
                        new Shape({
                          geometry : new SFNode(
                            new Box({})),
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  diffuseColor : new SFColor([1,1,1]),
                                  IS : new SFNode(
                                    new IS({
                                      connect : new MFNode([
                                        new connect({
                                          nodeField : new SFString("diffuseColor"),
                                          protoField : new SFString("diffuseColor")})])}))}))}))})])})])}))}),

            new ProtoDeclare({
              name : new SFString("two"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("ytranslation"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("0 0 0")}),

                    new field({
                      type : field.TYPE_SFCOLOR,
                      name : new SFString("diffuseColor"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("1 0 0")})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Transform({
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("translation"),
                              protoField : new SFString("ytranslation")})])})),
                      children : new MFNode([
                        new ProtoInstance({
                          name : new SFString("boxproto"),
                          fieldValue : new MFNode([
                            new fieldValue({
                              name : new SFString("xtranslation"),
                              value : new SFString("0 0 0")}),

                            new fieldValue({
                              name : new SFString("diffuseColor"),
                              value : new SFString("1 0 0"),
                              children : new MFNode([
                                new IS({
                                  connect : new MFNode([
                                    new connect({
                                      nodeField : new SFString("diffuseColor"),
                                      protoField : new SFString("diffuseColor")})])})])})])}),

                        new ProtoInstance({
                          name : new SFString("boxproto"),
                          fieldValue : new MFNode([
                            new fieldValue({
                              name : new SFString("xtranslation"),
                              value : new SFString("2 0 0")}),

                            new fieldValue({
                              name : new SFString("diffuseColor"),
                              value : new SFString("1 0 0"),
                              children : new MFNode([
                                new IS({
                                  connect : new MFNode([
                                    new connect({
                                      nodeField : new SFString("diffuseColor"),
                                      protoField : new SFString("diffuseColor")})])})])})])})])})])}))}),

            new ProtoDeclare({
              name : new SFString("four"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("ztranslation"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("0 0 0")}),

                    new field({
                      type : field.TYPE_SFCOLOR,
                      name : new SFString("x1diffuseColor"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("1 0 0")}),

                    new field({
                      type : field.TYPE_SFCOLOR,
                      name : new SFString("x2diffuseColor"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("0 1 0")})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Transform({
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("translation"),
                              protoField : new SFString("ztranslation")})])})),
                      children : new MFNode([
                        new ProtoInstance({
                          name : new SFString("two"),
                          fieldValue : new MFNode([
                            new fieldValue({
                              name : new SFString("ytranslation"),
                              value : new SFString("0 0 0")}),

                            new fieldValue({
                              name : new SFString("diffuseColor"),
                              value : new SFString("1 0 0"),
                              children : new MFNode([
                                new IS({
                                  connect : new MFNode([
                                    new connect({
                                      nodeField : new SFString("diffuseColor"),
                                      protoField : new SFString("x1diffuseColor")})])})])})])}),

                        new ProtoInstance({
                          name : new SFString("two"),
                          fieldValue : new MFNode([
                            new fieldValue({
                              name : new SFString("ytranslation"),
                              value : new SFString("0 2 0")}),

                            new fieldValue({
                              name : new SFString("diffuseColor"),
                              value : new SFString("0 1 0"),
                              children : new MFNode([
                                new IS({
                                  connect : new MFNode([
                                    new connect({
                                      nodeField : new SFString("diffuseColor"),
                                      protoField : new SFString("x2diffuseColor")})])})])})])})])})])}))}),

            new ProtoDeclare({
              name : new SFString("eight"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("ttranslation"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("0 0 0")})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Transform({
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("translation"),
                              protoField : new SFString("ttranslation")})])})),
                      children : new MFNode([
                        new ProtoInstance({
                          name : new SFString("four"),
                          fieldValue : new MFNode([
                            new fieldValue({
                              name : new SFString("ztranslation"),
                              value : new SFString("0 0 0")}),

                            new fieldValue({
                              name : new SFString("x1diffuseColor"),
                              value : new SFString("1 0 0")}),

                            new fieldValue({
                              name : new SFString("x2diffuseColor"),
                              value : new SFString("0 1 0")})])}),

                        new ProtoInstance({
                          name : new SFString("four"),
                          fieldValue : new MFNode([
                            new fieldValue({
                              name : new SFString("ztranslation"),
                              value : new SFString("0 0 2")}),

                            new fieldValue({
                              name : new SFString("x1diffuseColor"),
                              value : new SFString("0 0 1")}),

                            new fieldValue({
                              name : new SFString("x2diffuseColor"),
                              value : new SFString("1 1 0")})])})])})])}))}),

            new ProtoInstance({
              name : new SFString("eight"),
              fieldValue : new MFNode([
                new fieldValue({
                  name : new SFString("ttranslation"),
                  value : new SFString("0 0 0")})])}),
          /*Axes below <Group> <Group DEF='ArrowGreen'> <Shape> <Cylinder DEF='ArrowCylinder' radius='.025' top='false'/> <Appearance DEF='Green'> <Material diffuseColor='0 0 0'/> </Appearance> </Shape> <Transform translation='0 1 0'> <Shape> <Cone DEF='ArrowCone' bottomRadius='.05' height='.1'/> <Appearance USE='Green'/> </Shape> </Transform> </Group> <Transform translation='0 1.08 0'> <Billboard> <Shape> <Appearance DEF='LABEL_APPEARANCE'> <Material diffuseColor='0 0 0'/> </Appearance> <Text string='\"Y\"'> <FontStyle DEF='LABEL_FONT' family='\"SANS\"' justify='\"MIDDLE\" \"MIDDLE\"' size='.2'/> </Text> </Shape> </Billboard> </Transform> </Group> <Transform rotation='0 0 1 -1.57079'> <Group> <Group DEF='ArrowRed'> <Shape> <Cylinder USE='ArrowCylinder'/> <Appearance DEF='Red'> <Material diffuseColor='0 0 0'/> </Appearance> </Shape> <Transform translation='0 1 0'> <Shape> <Cone USE='ArrowCone'/> <Appearance USE='Red'/> </Shape> </Transform> </Group> <Transform rotation='0 0 1 1.57079' translation='.072 1.1 0'> <Billboard> <Shape> <Appearance USE='LABEL_APPEARANCE'/> <Text string='\"X\"'> <FontStyle USE='LABEL_FONT'/> </Text> </Shape> </Billboard> </Transform> </Group> </Transform> <Transform rotation='1 0 0 1.57079'> <Group> <Group DEF='ArrowBlue'> <Shape> <Cylinder USE='ArrowCylinder'/> <Appearance DEF='Blue'> <Material diffuseColor='0 0 0'/> </Appearance> </Shape> <Transform translation='0 1 0'> <Shape> <Cone USE='ArrowCone'/> <Appearance USE='Blue'/> </Shape> </Transform> </Group> <Transform rotation='1 0 0 -1.57079' translation='0 1.1 .072'> <Billboard> <Shape> <Appearance USE='LABEL_APPEARANCE'/> <Text string='\"Z\"'> <FontStyle USE='LABEL_FONT'/> </Text> </Shape> </Billboard> </Transform> </Group> </Transform>*/])}))});
console.log(X3D0.toXMLNode());
