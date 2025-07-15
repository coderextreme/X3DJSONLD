// Copyright 2021 by John Carlson.  All rights reserved.
import 'dart:io';
import '../x3d.dart';
var X3D0 =  X3D(

      profile_ : SFString('Immersive'),
      version_ : SFString('4.0'),
      head_ : 
        head(
          component_ : 
            component(
              name_ : SFString('Shaders'),
              level_ : 1),
          meta_ : [
            meta(
              name_ : SFString('title'),
              content_ : SFString('SimpleShader.x3d')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('Simple shader example')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('John Stewart')),

            meta(
              name_ : SFString('translator'),
              content_ : SFString('Holger Seelig, John Carlson, Don Brutzman and Jeff Malnick')),

            meta(
              name_ : SFString('created'),
              content_ : SFString('26 May 2009')),

            meta(
              name_ : SFString('translated'),
              content_ : SFString('15 October 2009')),

            meta(
              name_ : SFString('modified'),
              content_ : SFString('20 October 2019')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('http://www.opengl.org/wiki/Fragment_Shader')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('http://www.opengl.org/wiki/http://www.opengl.org/wiki/Vertex_Shader')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('https://www.web3d.org/x3d/wiki/index.php/X3D_Plugfest')),

            meta(
              name_ : SFString('subject'),
              content_ : SFString('X3D shader example')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('originals/simpleShader.x3dv')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('ShaderTutorialInstantReality.pdf')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('Titania V3.0.3, http://titania.create3000.de')),

            meta(
              name_ : SFString('info'),
              content_ : SFString('World of Titania')),

            meta(
              name_ : SFString('outputStyle'),
              content_ : SFString('nicest')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('https://www.web3d.org/x3d/content/examples/Basic/Shaders/SimpleShader.x3d')),

            meta(
              name_ : SFString('license'),
              content_ : SFString('../../license.html')),
          /*meta content='under development' name='warning'/*/]),
      Scene_ : 
        Scene(
          children_ : [
            ProtoDeclare(
              name_ : SFString('myPrototype'),
              ProtoInterface_ : 
                ProtoInterface(
                  field_ : [
                    field(
                      type_ : SFString("SFVec3f"),
                      name_ : SFString('myInputRange'),
                      accessType_ : SFString("initializeOnly"),
                      value_ : SFString('0.95 0.44 0.22'))]),
              ProtoBody_ : 
                ProtoBody(
                  children_ : [
                    Transform(
                      DEF_ : SFString('TR'),
                      child_ : 
                        Shape(
                          appearance_ : 
                            Appearance(
                              material_ : 
                                Material(
                                  diffuseColor_ : SFColor([SFDouble(0.5), SFDouble(0.5), SFDouble(0.9)])),
                              shaders_ : 
                                ComposedShader(
                                  language_ : SFString('GLSL'),
                                  field_ : [
                                    field(
                                      type_ : SFString("SFVec3f"),
                                      name_ : SFString('decis'),
                                      accessType_ : SFString("initializeOnly"))],

                                  IS_ : 
                                    IS(
                                      connect_ : [
                                        connect(
                                          nodeField_ : SFString('decis'),
                                          protoField_ : SFString('myInputRange'))]),
                                  parts_ : 
                                    ShaderPart(
                                      type_ : SFString("VERTEX"),
                                  parts_ : 
                                    ShaderPart(
                                      type_ : SFString("FRAGMENT")),
                              shaders_ : 
                                ComposedShader(
                                  DEF_ : SFString('Cobweb'),
                                  language_ : SFString('GLSL'),
                                  field_ : [
                                    field(
                                      type_ : SFString("SFVec3f"),
                                      name_ : SFString('decis'),
                                      accessType_ : SFString("initializeOnly"),
                                      value_ : SFString('0.95 0.77 0.44')),
                                  parts_ : 
                                    ShaderPart(
                                      type_ : SFString("VERTEX")],
                                  parts_ : 
                                    ShaderPart(
                                      type_ : SFString("FRAGMENT",
                                      DEF_ : SFString('_1')))),
                          geometry_ : 
                            Sphere(
                              radius_ : 1.75)))])),

            WorldInfo(
              title_ : SFString('SimpleShader'),
              metadata_ : [
                MetadataSet(
                  name_ : SFString('Titania'),
                  DEF_ : SFString('Titania'),
                  reference_ : SFString('http://titania.create3000.de'),
                  value_ : 
                    MetadataSet(
                      name_ : SFString('Selection'),
                      DEF_ : SFString('Selection'),
                      reference_ : SFString('http://titania.create3000.de'),
                      value_ : 
                        MetadataSet(
                          name_ : SFString('nodes'),
                          DEF_ : SFString('nodes'),
                          reference_ : SFString('http://titania.create3000.de'),
                          /*NULL*/)),
                  value_ : 
                    MetadataSet(
                      name_ : SFString('NavigationInfo'),
                      DEF_ : SFString('NavigationInfo'),
                      reference_ : SFString('http://titania.create3000.de'),
                      value_ : 
                        MetadataString(
                          name_ : SFString('type'),
                          DEF_ : SFString('type'),
                          reference_ : SFString('http://titania.create3000.de'),
                          value_ : MFString([SFString("EXAMINE")]))),
                  value_ : 
                    MetadataSet(
                      name_ : SFString('Viewpoint'),
                      DEF_ : SFString('Viewpoint'),
                      reference_ : SFString('http://titania.create3000.de'),
                      value_ : 
                        MetadataDouble(
                          name_ : SFString('position'),
                          DEF_ : SFString('position'),
                          reference_ : SFString('http://titania.create3000.de'),
                          value_ : MFDouble([SFDouble(6.24067728185014), SFDouble(0.00250837343276661), SFDouble(2.92117542307615)])),
                      value_ : 
                        MetadataDouble(
                          name_ : SFString('orientation'),
                          DEF_ : SFString('orientation'),
                          reference_ : SFString('http://titania.create3000.de'),
                          value_ : MFDouble([SFDouble(-0.110173424710488), SFDouble(0.990158061907379), SFDouble(-0.0863065984000336), SFDouble(1.21146676119191)])),
                      value_ : 
                        MetadataDouble(
                          name_ : SFString('centerOfRotation'),
                          DEF_ : SFString('centerOfRotation'),
                          reference_ : SFString('http://titania.create3000.de'),
                          value_ : MFDouble([SFDouble(-0.808320198626341), SFDouble(-0.358072370409949), SFDouble(0.22817191560906)]))))]),

            ProtoInstance(
              name_ : SFString('myPrototype'))]));
void main() { exit(0); }
