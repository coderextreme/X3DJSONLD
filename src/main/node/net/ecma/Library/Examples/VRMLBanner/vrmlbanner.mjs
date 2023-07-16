'use strict';
var X3D = require('./x3d.mjs');
try {
	var fs = require('fs');
} catch (e) {
console.log("Problems loading fs. On browser?",e);
}
var SFString = require('./x3d.mjs');
var SFNode = require('./x3d.mjs');
var head = require('./x3d.mjs');
var MFNode = require('./x3d.mjs');
var meta = require('./x3d.mjs');
var Scene = require('./x3d.mjs');
var ProtoDeclare = require('./x3d.mjs');
var ProtoInterface = require('./x3d.mjs');
var field = require('./x3d.mjs');
var ProtoBody = require('./x3d.mjs');
var Script = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var IS = require('./x3d.mjs');
var connect = require('./x3d.mjs');
var ROUTE = require('./x3d.mjs');
var Group = require('./x3d.mjs');
var Switch = require('./x3d.mjs');
var SFInt32 = require('./x3d.mjs');
var PointLight = require('./x3d.mjs');
var SpotLight = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var ImageTexture = require('./x3d.mjs');
var TextureTransform = require('./x3d.mjs');
var TouchSensor = require('./x3d.mjs');
var TimeSensor = require('./x3d.mjs');
var SFTime = require('./x3d.mjs');
var IndexedFaceSet = require('./x3d.mjs');
var TextureCoordinate = require('./x3d.mjs');
var Coordinate = require('./x3d.mjs');
var Color = require('./x3d.mjs');
var Text = require('./x3d.mjs');
var FontStyle = require('./x3d.mjs');
var SphereSensor = require('./x3d.mjs');
var PositionInterpolator = require('./x3d.mjs');
var IndexedLineSet = require('./x3d.mjs');
var Sound = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var AudioClip = require('./x3d.mjs');
var WorldInfo = require('./x3d.mjs');
var MFString = require('./x3d.mjs');
var MetadataSet = require('./x3d.mjs');
var MetadataString = require('./x3d.mjs');
var MetadataDouble = require('./x3d.mjs');
var MFDouble = require('./x3d.mjs');
var ProtoInstance = require('./x3d.mjs');
var Viewpoint = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var NavigationInfo = require('./x3d.mjs');
var Background = require('./x3d.mjs');
var MFColor = require('./x3d.mjs');
var fieldValue = require('./x3d.mjs');
var SFRotation = require('./x3d.mjs');
var Cone = require('./x3d.mjs');
var Sphere = require('./x3d.mjs');
var Cylinder = require('./x3d.mjs');
var Box = require('./x3d.mjs');
var X3D0 =  new X3D({

      profile : new SFString("Full"),
      version : new SFString("3.3"),
      head : new SFNode(
        new head({
          meta : new MFNode([
            new meta({
              name : new SFString("comment"),
              content : new SFString("World of Titania")}),

            new meta({
              name : new SFString("created"),
              content : new SFString("Sun, 01 Nov 2015 04:01:17 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V1.2.0, http://titania.create3000.de")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Sun, 01 Nov 2015 04:01:17 GMT")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new ProtoDeclare({
              name : new SFString("f"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("h"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("i"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("j"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Script({
                      DEF : new SFString("k_1"),
                      directOutput : new SFBool(true),
                      field : new MFNode([
                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("l"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("h"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("i"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("m"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("j"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("h"),
                              protoField : new SFString("h")}),

                            new connect({
                              nodeField : new SFString("i"),
                              protoField : new SFString("i")}),

                            new connect({
                              nodeField : new SFString("j"),
                              protoField : new SFString("j")})])})]),
                      javascript:
, function initialize(){
m=0;
}
, function l(n,time){
j=time;
}
, function h(n,time){
i=time;
})}),

                    new ROUTE({
                      fromNode : new SFString("k_1"),
                      fromField : new SFString("m"),
                      toNode : new SFString("k_1"),
                      toField : new SFString("l")})])}))}),

            new ProtoDeclare({
              name : new SFString("o"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("set_p"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("set_transparency"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_SFCOLOR,
                      name : new SFString("set_diffuseColor"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_SFCOLOR,
                      name : new SFString("set_emissiveColor"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_SFCOLOR,
                      name : new SFString("set_specularColor"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("set_shininess"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_SFVEC2F,
                      name : new SFString("set_q"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("set_s"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_SFVEC2F,
                      name : new SFString("set_t"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_SFVEC2F,
                      name : new SFString("set_u"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_SFNODE,
                      name : new SFString("set_v"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_MFSTRING,
                      name : new SFString("set_url"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("w"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("p_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("transparency_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFCOLOR,
                      name : new SFString("diffuseColor_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFCOLOR,
                      name : new SFString("emissiveColor_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFCOLOR,
                      name : new SFString("specularColor_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("shininess_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFVEC2F,
                      name : new SFString("q_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("s_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFVEC2F,
                      name : new SFString("t_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFVEC2F,
                      name : new SFString("u_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFNODE,
                      name : new SFString("v_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFSTRING,
                      name : new SFString("url_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFNODE,
                      name : new SFString("A_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFNODE,
                      name : new SFString("B"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                    new field({
                      type : field.TYPE_MFNODE,
                      name : new SFString("C"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                    new field({
                      type : field.TYPE_SFNODE,
                      name : new SFString("D"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                    new field({
                      type : field.TYPE_SFINT32,
                      name : new SFString("F"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("-1")}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("G"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                    new field({
                      type : field.TYPE_MFNODE,
                      name : new SFString("children"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("H"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      value : new SFString("true")}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("p"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      value : new SFString("true")}),

                    new field({
                      type : field.TYPE_MFNODE,
                      name : new SFString("A"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Group({
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("children"),
                              protoField : new SFString("children")})])}))}),

                    new Script({
                      DEF : new SFString("I"),
                      directOutput : new SFBool(true),
                      field : new MFNode([
                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("set_p"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("set_transparency"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFCOLOR,
                          name : new SFString("set_diffuseColor"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFCOLOR,
                          name : new SFString("set_emissiveColor"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFCOLOR,
                          name : new SFString("set_specularColor"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("set_shininess"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFVEC2F,
                          name : new SFString("set_q"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("set_s"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFVEC2F,
                          name : new SFString("set_t"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFVEC2F,
                          name : new SFString("set_u"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_MFSTRING,
                          name : new SFString("set_url"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFNODE,
                          name : new SFString("set_v"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("w"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("p_changed"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("transparency_changed"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_SFCOLOR,
                          name : new SFString("diffuseColor_changed"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_SFCOLOR,
                          name : new SFString("emissiveColor_changed"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_SFCOLOR,
                          name : new SFString("specularColor_changed"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("shininess_changed"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_SFVEC2F,
                          name : new SFString("q_changed"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("s_changed"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_SFVEC2F,
                          name : new SFString("t_changed"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_SFVEC2F,
                          name : new SFString("u_changed"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_MFSTRING,
                          name : new SFString("url_changed"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_SFNODE,
                          name : new SFString("v_changed"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_MFNODE,
                          name : new SFString("A_changed"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("p"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_MFNODE,
                          name : new SFString("A"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("set_p"),
                              protoField : new SFString("set_p")}),

                            new connect({
                              nodeField : new SFString("set_transparency"),
                              protoField : new SFString("set_transparency")}),

                            new connect({
                              nodeField : new SFString("set_diffuseColor"),
                              protoField : new SFString("set_diffuseColor")}),

                            new connect({
                              nodeField : new SFString("set_emissiveColor"),
                              protoField : new SFString("set_emissiveColor")}),

                            new connect({
                              nodeField : new SFString("set_specularColor"),
                              protoField : new SFString("set_specularColor")}),

                            new connect({
                              nodeField : new SFString("set_shininess"),
                              protoField : new SFString("set_shininess")}),

                            new connect({
                              nodeField : new SFString("set_q"),
                              protoField : new SFString("set_q")}),

                            new connect({
                              nodeField : new SFString("set_s"),
                              protoField : new SFString("set_s")}),

                            new connect({
                              nodeField : new SFString("set_t"),
                              protoField : new SFString("set_t")}),

                            new connect({
                              nodeField : new SFString("set_u"),
                              protoField : new SFString("set_u")}),

                            new connect({
                              nodeField : new SFString("set_url"),
                              protoField : new SFString("set_url")}),

                            new connect({
                              nodeField : new SFString("set_v"),
                              protoField : new SFString("set_v")}),

                            new connect({
                              nodeField : new SFString("w"),
                              protoField : new SFString("w")}),

                            new connect({
                              nodeField : new SFString("p_changed"),
                              protoField : new SFString("p_changed")}),

                            new connect({
                              nodeField : new SFString("transparency_changed"),
                              protoField : new SFString("transparency_changed")}),

                            new connect({
                              nodeField : new SFString("diffuseColor_changed"),
                              protoField : new SFString("diffuseColor_changed")}),

                            new connect({
                              nodeField : new SFString("emissiveColor_changed"),
                              protoField : new SFString("emissiveColor_changed")}),

                            new connect({
                              nodeField : new SFString("specularColor_changed"),
                              protoField : new SFString("specularColor_changed")}),

                            new connect({
                              nodeField : new SFString("shininess_changed"),
                              protoField : new SFString("shininess_changed")}),

                            new connect({
                              nodeField : new SFString("q_changed"),
                              protoField : new SFString("q_changed")}),

                            new connect({
                              nodeField : new SFString("s_changed"),
                              protoField : new SFString("s_changed")}),

                            new connect({
                              nodeField : new SFString("t_changed"),
                              protoField : new SFString("t_changed")}),

                            new connect({
                              nodeField : new SFString("u_changed"),
                              protoField : new SFString("u_changed")}),

                            new connect({
                              nodeField : new SFString("url_changed"),
                              protoField : new SFString("url_changed")}),

                            new connect({
                              nodeField : new SFString("v_changed"),
                              protoField : new SFString("v_changed")}),

                            new connect({
                              nodeField : new SFString("A_changed"),
                              protoField : new SFString("A_changed")}),

                            new connect({
                              nodeField : new SFString("p"),
                              protoField : new SFString("p")}),

                            new connect({
                              nodeField : new SFString("A"),
                              protoField : new SFString("A")})])})]),
                      javascript:
, function set_p(n){
for(J=0;J<A.length;J++){
A[J].set_p=n;
}
p=n;
p_changed=n;
}
, function initialize(){
p_changed=p;
A_changed=A;
}
, function set_diffuseColor(n){
for(J=0;J<A.length;J++){
A[J].set_diffuseColor=n;
}
diffuseColor_changed=n;
}
, function set_specularColor(n){
for(J=0;J<A.length;J++){
A[J].set_specularColor=n;
}
specularColor_changed=n;
}
, function set_emissiveColor(n){
for(J=0;J<A.length;J++){
A[J].set_emissiveColor=n;
}
emissiveColor_changed=n;
}
, function set_transparency(n){
for(J=0;J<A.length;J++){
A[J].set_transparency=n;
}
transparency_changed=n;
}
, function set_shininess(n){
for(J=0;J<A.length;J++){
A[J].set_shininess=n;
}
shininess_changed=n;
}
, function set_q(n){
for(J=0;J<A.length;J++){
A[J].set_q=n;
}
q_changed=n;
}
, function set_u(n){
for(J=0;J<A.length;J++){
A[J].set_u=n;
}
u_changed=n;
}
, function set_t(n){
for(J=0;J<A.length;J++){
A[J].set_t=n;
}
t_changed=n;
}
, function set_s(n){
for(J=0;J<A.length;J++){
A[J].set_s=n;
}
s_changed=n;
}
, function set_url(n){
for(J=0;J<A.length;J++){
A[J].set_url=n;
}
url_changed=n;
}
, function set_v(n){
for(J=0;J<A.length;J++){
A[J].set_v=n;
}
v_changed=n;
}
, function w(){
})})])}))}),

            new ProtoDeclare({
              name : new SFString("K"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("set_transparency"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("set_intensity"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("w"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("transparency_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("intensity_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("p"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("true")}),

                    new field({
                      type : field.TYPE_SFCOLOR,
                      name : new SFString("diffuseColor"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("1 1 1")}),

                    new field({
                      type : field.TYPE_SFNODE,
                      name : new SFString("B"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                    new field({
                      type : field.TYPE_MFNODE,
                      name : new SFString("C"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                    new field({
                      type : field.TYPE_SFNODE,
                      name : new SFString("D"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                    new field({
                      type : field.TYPE_SFINT32,
                      name : new SFString("F"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("-1")}),

                    new field({
                      type : field.TYPE_SFINT32,
                      name : new SFString("type"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("radius"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      value : new SFString("1000")}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("L"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("attenuation"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      value : new SFString("1 0 0")}),

                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("direction"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      value : new SFString("0 0 -1")}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("beamWidth"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      value : new SFString("0.131")}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("cutOffAngle"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      value : new SFString("1.57")}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("intensity"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      value : new SFString("1")}),

                    new field({
                      type : field.TYPE_MFNODE,
                      name : new SFString("M"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Group({
                      children : new MFNode([
                        new Switch({
                          whichChoice : new SFInt32(-1),
                          IS : new SFNode(
                            new IS({
                              connect : new MFNode([
                                new connect({
                                  nodeField : new SFString("whichChoice"),
                                  protoField : new SFString("type")})])})),
                          children : new MFNode([
                            new PointLight({
                              DEF : new SFString("N_1"),
                              IS : new SFNode(
                                new IS({
                                  connect : new MFNode([
                                    new connect({
                                      nodeField : new SFString("on"),
                                      protoField : new SFString("p")}),

                                    new connect({
                                      nodeField : new SFString("color"),
                                      protoField : new SFString("diffuseColor")}),

                                    new connect({
                                      nodeField : new SFString("intensity"),
                                      protoField : new SFString("intensity")}),

                                    new connect({
                                      nodeField : new SFString("attenuation"),
                                      protoField : new SFString("attenuation")}),

                                    new connect({
                                      nodeField : new SFString("radius"),
                                      protoField : new SFString("radius")})])}))}),

                            new SpotLight({
                              DEF : new SFString("O_1"),
                              IS : new SFNode(
                                new IS({
                                  connect : new MFNode([
                                    new connect({
                                      nodeField : new SFString("on"),
                                      protoField : new SFString("p")}),

                                    new connect({
                                      nodeField : new SFString("color"),
                                      protoField : new SFString("diffuseColor")}),

                                    new connect({
                                      nodeField : new SFString("intensity"),
                                      protoField : new SFString("intensity")}),

                                    new connect({
                                      nodeField : new SFString("attenuation"),
                                      protoField : new SFString("attenuation")}),

                                    new connect({
                                      nodeField : new SFString("direction"),
                                      protoField : new SFString("direction")}),

                                    new connect({
                                      nodeField : new SFString("beamWidth"),
                                      protoField : new SFString("beamWidth")}),

                                    new connect({
                                      nodeField : new SFString("cutOffAngle"),
                                      protoField : new SFString("cutOffAngle")})])}))})])}),

                        new Group({
                          IS : new SFNode(
                            new IS({
                              connect : new MFNode([
                                new connect({
                                  nodeField : new SFString("children"),
                                  protoField : new SFString("M")})])}))})])}),

                    new Script({
                      DEF : new SFString("P_1"),
                      directOutput : new SFBool(true),
                      field : new MFNode([
                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("set_transparency"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("set_intensity"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("w"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("intensity_changed"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("transparency_changed"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("intensity"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("set_transparency"),
                              protoField : new SFString("set_transparency")}),

                            new connect({
                              nodeField : new SFString("set_intensity"),
                              protoField : new SFString("set_intensity")}),

                            new connect({
                              nodeField : new SFString("w"),
                              protoField : new SFString("w")}),

                            new connect({
                              nodeField : new SFString("intensity_changed"),
                              protoField : new SFString("intensity_changed")}),

                            new connect({
                              nodeField : new SFString("transparency_changed"),
                              protoField : new SFString("transparency_changed")}),

                            new connect({
                              nodeField : new SFString("intensity"),
                              protoField : new SFString("intensity")})])})]),
                      javascript:
, function set_transparency(n){
intensity=1-n;
intensity_changed=intensity;
transparency_changed=n;
}
, function set_intensity(n){
intensity=n;
intensity_changed=n;
transparency_changed=1-n;
}
, function w(){
})}),

                    new ROUTE({
                      fromNode : new SFString("P_1"),
                      fromField : new SFString("intensity_changed"),
                      toNode : new SFString("N_1"),
                      toField : new SFString("set_intensity")}),

                    new ROUTE({
                      fromNode : new SFString("P_1"),
                      fromField : new SFString("intensity_changed"),
                      toNode : new SFString("O_1"),
                      toField : new SFString("set_intensity")})])}))}),

            new ProtoDeclare({
              name : new SFString("Q"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("R"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("S"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("set_fraction"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("R_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("translation"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("scale"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("1 1 1")}),

                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("center"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("T"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("true")}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("rotation"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("scaleOrientation"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                    new field({
                      type : field.TYPE_SFNODE,
                      name : new SFString("U"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                    new field({
                      type : field.TYPE_MFNODE,
                      name : new SFString("children"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("V"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                    new field({
                      type : field.TYPE_SFINT32,
                      name : new SFString("W"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Transform({
                      DEF : new SFString("X_1"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("translation"),
                              protoField : new SFString("translation")}),

                            new connect({
                              nodeField : new SFString("rotation"),
                              protoField : new SFString("rotation")}),

                            new connect({
                              nodeField : new SFString("scale"),
                              protoField : new SFString("scale")}),

                            new connect({
                              nodeField : new SFString("scaleOrientation"),
                              protoField : new SFString("scaleOrientation")}),

                            new connect({
                              nodeField : new SFString("center"),
                              protoField : new SFString("center")}),

                            new connect({
                              nodeField : new SFString("children"),
                              protoField : new SFString("children")})])}))}),

                    new Script({
                      DEF : new SFString("Y_1"),
                      directOutput : new SFBool(true),
                      field : new MFNode([
                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("R"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("S"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("set_fraction"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("R_changed"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_SFROTATION,
                          name : new SFString("Z_changed"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_SFNODE,
                          name : new SFString("U"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("V"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFINT32,
                          name : new SFString("W"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("aa"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFROTATION,
                          name : new SFString("Z"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("ba"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("ca"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("da"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          value : new SFString("true")}),

                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("ea"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("fa"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("R"),
                              protoField : new SFString("R")}),

                            new connect({
                              nodeField : new SFString("S"),
                              protoField : new SFString("S")}),

                            new connect({
                              nodeField : new SFString("set_fraction"),
                              protoField : new SFString("set_fraction")}),

                            new connect({
                              nodeField : new SFString("R_changed"),
                              protoField : new SFString("R_changed")}),

                            new connect({
                              nodeField : new SFString("U"),
                              protoField : new SFString("U")}),

                            new connect({
                              nodeField : new SFString("V"),
                              protoField : new SFString("V")}),

                            new connect({
                              nodeField : new SFString("W"),
                              protoField : new SFString("W")})])})]),
                      javascript:
, function initialize(){
aa=FALSE;
if(W==0){
Z[0]=1.;
Z[1]=0.;
Z[2]=0.;
return;
}
if(W==1){
Z[0]=0.;
Z[1]=1.;
Z[2]=0.;
return;
}
if(W==2){
Z[0]=0.;
Z[1]=0.;
Z[2]=1.;
return;
}
}
, function R(n){
if(fa==n){
return;
}
if(aa==TRUE){
ea=n;
return;
}
aa=TRUE;
da=TRUE;
R_changed=n;
fa=n;
}
, function S(n){
aa=FALSE;
if(ea==n){
R(n);
}
}
, function set_fraction(n){
if(da){
ba=n;
da=FALSE;
}else if(n<ca){
ba=(1.0-ca)+n;
}else{
ba=n-ca;
}
ca=n;
if(V==TRUE)Z[3]-=2.*Math.PI*ba;
else Z[3]+=2.*Math.PI*ba;
Z_changed=Z;
})}),

                    new ROUTE({
                      fromNode : new SFString("Y_1"),
                      fromField : new SFString("Z_changed"),
                      toNode : new SFString("X_1"),
                      toField : new SFString("set_rotation")})])}))}),

            new ProtoDeclare({
              name : new SFString("ga"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("set_p"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("w"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_SFNODE,
                      name : new SFString("set_v"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("p_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFNODE,
                      name : new SFString("v_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFSTRING,
                      name : new SFString("url"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("transparency"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                    new field({
                      type : field.TYPE_SFCOLOR,
                      name : new SFString("diffuseColor"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("0 0.48 0.8")}),

                    new field({
                      type : field.TYPE_SFCOLOR,
                      name : new SFString("emissiveColor"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("0 0.09 0.15")}),

                    new field({
                      type : field.TYPE_SFCOLOR,
                      name : new SFString("specularColor"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("0.5 0.5 0.5")}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("shininess"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("0.2")}),

                    new field({
                      type : field.TYPE_SFVEC2F,
                      name : new SFString("q"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("-0.5 -0.5")}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("s"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                    new field({
                      type : field.TYPE_SFVEC2F,
                      name : new SFString("t"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("1 1")}),

                    new field({
                      type : field.TYPE_SFVEC2F,
                      name : new SFString("u"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                    new field({
                      type : field.TYPE_SFNODE,
                      name : new SFString("B"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                    new field({
                      type : field.TYPE_MFNODE,
                      name : new SFString("C"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                    new field({
                      type : field.TYPE_SFNODE,
                      name : new SFString("D"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                    new field({
                      type : field.TYPE_SFINT32,
                      name : new SFString("F"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("-1")}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("p"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      value : new SFString("true")}),

                    new field({
                      type : field.TYPE_SFNODE,
                      name : new SFString("geometry"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                    new field({
                      type : field.TYPE_SFINT32,
                      name : new SFString("choice"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("ha"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      value : new SFString("0 0 0.5")})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Switch({
                      DEF : new SFString("ia_1"),
                      whichChoice : new SFInt32(-1),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("whichChoice"),
                              protoField : new SFString("choice")})])})),
                      children : new MFNode([
                        new Shape({
                          IS : new SFNode(
                            new IS({
                              connect : new MFNode([
                                new connect({
                                  nodeField : new SFString("geometry"),
                                  protoField : new SFString("geometry")})])})),
                          appearance : new SFNode(
                            new Appearance({
                              DEF : new SFString("ja_1"),
                              material : new SFNode(
                                new Material({
                                  IS : new SFNode(
                                    new IS({
                                      connect : new MFNode([
                                        new connect({
                                          nodeField : new SFString("diffuseColor"),
                                          protoField : new SFString("diffuseColor")}),

                                        new connect({
                                          nodeField : new SFString("specularColor"),
                                          protoField : new SFString("specularColor")}),

                                        new connect({
                                          nodeField : new SFString("emissiveColor"),
                                          protoField : new SFString("emissiveColor")}),

                                        new connect({
                                          nodeField : new SFString("shininess"),
                                          protoField : new SFString("shininess")}),

                                        new connect({
                                          nodeField : new SFString("transparency"),
                                          protoField : new SFString("transparency")})])}))})),
                              texture : new SFNode(
                                new ImageTexture({
                                  IS : new SFNode(
                                    new IS({
                                      connect : new MFNode([
                                        new connect({
                                          nodeField : new SFString("url"),
                                          protoField : new SFString("url")})])}))})),
                              textureTransform : new SFNode(
                                new TextureTransform({
                                  IS : new SFNode(
                                    new IS({
                                      connect : new MFNode([
                                        new connect({
                                          nodeField : new SFString("translation"),
                                          protoField : new SFString("u")}),

                                        new connect({
                                          nodeField : new SFString("rotation"),
                                          protoField : new SFString("s")}),

                                        new connect({
                                          nodeField : new SFString("scale"),
                                          protoField : new SFString("t")}),

                                        new connect({
                                          nodeField : new SFString("center"),
                                          protoField : new SFString("q")})])}))}))}))})])}),

                    new Script({
                      DEF : new SFString("ka"),
                      directOutput : new SFBool(true),
                      field : new MFNode([
                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("set_p"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("w"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFNODE,
                          name : new SFString("set_v"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("p_changed"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_SFNODE,
                          name : new SFString("v_changed"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("p"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFNODE,
                          name : new SFString("la"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          children : new MFNode([
                            new Appearance({
                              USE : new SFString("ja_1")})])}),

                        new field({
                          type : field.TYPE_SFNODE,
                          name : new SFString("ma"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          children : new MFNode([
                            new Switch({
                              USE : new SFString("ia_1")})])}),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("set_p"),
                              protoField : new SFString("set_p")}),

                            new connect({
                              nodeField : new SFString("w"),
                              protoField : new SFString("w")}),

                            new connect({
                              nodeField : new SFString("set_v"),
                              protoField : new SFString("set_v")}),

                            new connect({
                              nodeField : new SFString("p_changed"),
                              protoField : new SFString("p_changed")}),

                            new connect({
                              nodeField : new SFString("v_changed"),
                              protoField : new SFString("v_changed")}),

                            new connect({
                              nodeField : new SFString("p"),
                              protoField : new SFString("p")})])})]),
                      javascript:
, function set_p(n){
if(n==TRUE){
ma.whichChoice=0;
}else{
ma.whichChoice=-1;
}
p=n;
p_changed=n;
}
, function initialize(){
v_changed=la.texture_changed;
set_p(p);
}
, function set_v(n){
la.set_texture=n;
v_changed=n;
}
, function w(){
})})])}))}),

            new ProtoDeclare({
              name : new SFString("na"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("set_enabled"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("isOver"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("isActive"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("hitPoint_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFVEC2F,
                      name : new SFString("hitTexCoord_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFINT32,
                      name : new SFString("oa"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new TouchSensor({
                      DEF : new SFString("pa_1"),
                      enabled : new SFBool(false),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("hitTexCoord_changed"),
                              protoField : new SFString("hitTexCoord_changed")}),

                            new connect({
                              nodeField : new SFString("hitPoint_changed"),
                              protoField : new SFString("hitPoint_changed")}),

                            new connect({
                              nodeField : new SFString("isOver"),
                              protoField : new SFString("isOver")}),

                            new connect({
                              nodeField : new SFString("isActive"),
                              protoField : new SFString("isActive")})])}))}),

                    new Script({
                      DEF : new SFString("qa_1"),
                      directOutput : new SFBool(true),
                      field : new MFNode([
                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("set_enabled"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("enabled_changed"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_SFINT32,
                          name : new SFString("oa"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("set_enabled"),
                              protoField : new SFString("set_enabled")}),

                            new connect({
                              nodeField : new SFString("oa"),
                              protoField : new SFString("oa")})])})]),
                      javascript:
, function initialize(){
if(oa>0){
enabled_changed=TRUE;
}
}
, function set_enabled(n){
if(n==TRUE){
if(oa==0){
enabled_changed=TRUE;
}
oa++;
}else{
if(oa==1){
enabled_changed=FALSE;
}
if(oa>0){
oa--;
}
}
})}),

                    new ROUTE({
                      fromNode : new SFString("qa_1"),
                      fromField : new SFString("enabled_changed"),
                      toNode : new SFString("pa_1"),
                      toField : new SFString("set_enabled")})])}))}),

            new ProtoDeclare({
              name : new SFString("ra"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("R"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("S"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("sa"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("ta"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("fraction"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("ua"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("va"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("wa_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("xa_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFVEC2F,
                      name : new SFString("ya_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("startTime"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("stopTime"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("za"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("Aa"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("Ba"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("cycleInterval"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      value : new SFString("2")}),

                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("Ca"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("Da"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      value : new SFString("true")}),

                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("xa"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      value : new SFString("5")}),

                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("Ea"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("Fa"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("Ga"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("Ha"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                    new field({
                      type : field.TYPE_SFINT32,
                      name : new SFString("direction"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("loop"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      value : new SFString("true")}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("Ia"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("Ja"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      value : new SFString("true")}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("Ka"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new TimeSensor({
                      DEF : new SFString("La_1"),
                      enabled : new SFBool(false),
                      loop : new SFBool(true),
                      startTime : new SFTime(1),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("cycleInterval"),
                              protoField : new SFString("cycleInterval")})])}))}),

                    new Script({
                      DEF : new SFString("Ma_1"),
                      directOutput : new SFBool(true),
                      field : new MFNode([
                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("R"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("S"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("set_fraction"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("sa"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("ta"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("fraction"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("ua"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("va"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("wa_changed"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("xa_changed"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_SFVEC2F,
                          name : new SFString("ya_changed"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("startTime"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("stopTime"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("za"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("Aa"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("cycleInterval_changed"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("Na"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("Oa"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("Pa"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("Ba"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("da"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          value : new SFString("true")}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("Qa"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("Ra"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFINT32,
                          name : new SFString("direction"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("Sa"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("Ja"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("loop"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("Ia"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("cycleInterval"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("Ca"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("Da"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("xa"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("Ea"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("Fa"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("Ga"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("Ta"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("Ha"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("Ua"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("Va"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFVEC2F,
                          name : new SFString("ya"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("Ka"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("R"),
                              protoField : new SFString("R")}),

                            new connect({
                              nodeField : new SFString("S"),
                              protoField : new SFString("S")}),

                            new connect({
                              nodeField : new SFString("sa"),
                              protoField : new SFString("sa")}),

                            new connect({
                              nodeField : new SFString("ta"),
                              protoField : new SFString("ta")}),

                            new connect({
                              nodeField : new SFString("fraction"),
                              protoField : new SFString("fraction")}),

                            new connect({
                              nodeField : new SFString("ua"),
                              protoField : new SFString("ua")}),

                            new connect({
                              nodeField : new SFString("va"),
                              protoField : new SFString("va")}),

                            new connect({
                              nodeField : new SFString("wa_changed"),
                              protoField : new SFString("wa_changed")}),

                            new connect({
                              nodeField : new SFString("xa_changed"),
                              protoField : new SFString("xa_changed")}),

                            new connect({
                              nodeField : new SFString("ya_changed"),
                              protoField : new SFString("ya_changed")}),

                            new connect({
                              nodeField : new SFString("startTime"),
                              protoField : new SFString("startTime")}),

                            new connect({
                              nodeField : new SFString("stopTime"),
                              protoField : new SFString("stopTime")}),

                            new connect({
                              nodeField : new SFString("za"),
                              protoField : new SFString("za")}),

                            new connect({
                              nodeField : new SFString("Aa"),
                              protoField : new SFString("Aa")}),

                            new connect({
                              nodeField : new SFString("Ba"),
                              protoField : new SFString("Ba")}),

                            new connect({
                              nodeField : new SFString("direction"),
                              protoField : new SFString("direction")}),

                            new connect({
                              nodeField : new SFString("Ja"),
                              protoField : new SFString("Ja")}),

                            new connect({
                              nodeField : new SFString("loop"),
                              protoField : new SFString("loop")}),

                            new connect({
                              nodeField : new SFString("Ia"),
                              protoField : new SFString("Ia")}),

                            new connect({
                              nodeField : new SFString("cycleInterval"),
                              protoField : new SFString("cycleInterval")}),

                            new connect({
                              nodeField : new SFString("Ca"),
                              protoField : new SFString("Ca")}),

                            new connect({
                              nodeField : new SFString("Da"),
                              protoField : new SFString("Da")}),

                            new connect({
                              nodeField : new SFString("xa"),
                              protoField : new SFString("xa")}),

                            new connect({
                              nodeField : new SFString("Ea"),
                              protoField : new SFString("Ea")}),

                            new connect({
                              nodeField : new SFString("Fa"),
                              protoField : new SFString("Fa")}),

                            new connect({
                              nodeField : new SFString("Ga"),
                              protoField : new SFString("Ga")}),

                            new connect({
                              nodeField : new SFString("Ha"),
                              protoField : new SFString("Ha")}),

                            new connect({
                              nodeField : new SFString("Ka"),
                              protoField : new SFString("Ka")})])})]),
                      javascript:
, function Wa(){
var Xa=Math.random();
Va=
(cycleInterval-Ca)*(1-Xa)+
(cycleInterval+Ca)*Xa;
cycleInterval_changed=Va;
}
, function Ya(){
var Xa=Math.random();
Ua=(xa-Ea)*(1-Xa)+
(xa+Ea)*Xa;
}
, function initialize(){
if(direction==2){
cycleInterval*=2;
Ca*=2;
cycleInterval_changed=cycleInterval;
}
Wa();
if(Da==TRUE){
Ya();
}else{
Ua=-1;
}
if(Ka==FALSE){
Na=FALSE;
}else{
R(1,1);
}
}
, function R(n,Za){
da=TRUE;
if((Ja==TRUE)||
((Ua>0)&&(ua==1))){
Sa=0;
if(Ca>0){
Wa();
}else{
Va=cycleInterval;
}
if(Da==TRUE){
if(Ea>0){
Ya();
}else{
Ua=xa;
}
}
}
ya[0]=Ua;
ya[1]=Va;
xa_changed=ya[0];
wa_changed=ya[1];
ya_changed=ya;
Na=TRUE;
startTime=Za;
Oa=Za;
}
, function S(n,Za){
if((Ha==TRUE)||(Ga==0)){
Na=FALSE;
stopTime=Za;
}else{
Ta=Za;
}
}
, function sa(n,Za){
if(Na==TRUE){
Na=FALSE;
stopTime=Za;
}
Ba=Za;
}
, function ta(n,Za){
xa=n;
if(xa<(Fa+Ga)){
xa=Fa+Ga;
}
xa_changed=xa;
Ua=xa;
}
, function ab(n,Za){
Na=FALSE;
stopTime=Za;
Ta=0;
va=0;
}
, function bb(n,Za){
Na=FALSE;
stopTime=Za;
Ta=0;
va=0;
}
, function cb(n,Za){
Na=FALSE;
stopTime=Ra+Ua;
if((Ca==0)&&
(Ea==0)){
var db=Ua;
while(db>cycleInterval){
db-=cycleInterval;
}
var eb=db/cycleInterval;
if(db>cycleInterval){
eb=1;
}
if((Ia==FALSE)||
((Fa==0)&&
(Ga==0))){
if(direction==0){
fraction=eb;
}else if(direction==1){
fraction=1-eb;
}else{
if(eb>.5){
fraction=2*(1-eb);
}else{
fraction=2*eb;
}
}
}
}
if(Ua>0){
ua=1;
if(direction==1){
ua=1-ua;
}
}
Ta=0;
va=0;
}
, function set_fraction(n,Za){
if(Na==FALSE){
return;
}
if(da==FALSE){
if((Fa>0)&&
((Za-Ra)<=Fa)){
if(Ta>0){
if(Za-Ta>=Ga){
ab(n,Za);
}else{
fb=1-((Za-Ta)/Ga);
if(fb>va){
va=va;
}else{
va=fb;
}
}
}else{
va=(Za-Ra)/Fa;
}
}else if((Ga>0)&&
(Ua>0)&&
((Za-Ra)>=(Ua-Ga))){
fb=((Ua-(Za-Ra))/Ga);
if(fb>va){
va=va;
}else{
va=fb;
}
}else if((Ga>0)&&
(loop==FALSE)&&
((Za-Ra)>=(cycleInterval_changed-Ga))){
if(Sa>0){
fb=((cycleInterval_changed-(Za-Ra))/Ga);
if(fb>va){
va=va;
}else{
va=fb;
}
}
}else if(Ta>0){
if(Za-Ta>=Ga){
ab(n,Za);
}else{
fb=1-((Za-Ta)/Ga);
if(fb>va){
va=va;
}else{
va=fb;
}
}
}else{
va=1;
}
}else{
va=0;
}
if(da==TRUE){
da=FALSE;
if(!Ja&&(Ua>0)&&
(ua>0)&&(ua<1)){
Ra=Ra+(Za-stopTime);
}else{
Ra=Za;
if((loop==TRUE)&&(Ja)){
za=Za;
}
}
}else{
if(n>Qa){
if(Ia==FALSE){
Sa=Sa+(n-Qa);
}else{
Sa=Sa+(n-Qa)*va;
}
}else{
if(Ia==FALSE){
Sa=Sa+(1-Qa)+n;
}else{
Sa=Sa+((1-Qa)+n)*va;
}
}
if(direction==0){
fraction=Sa;
if(fraction>=1){
if(loop==TRUE){
fraction=fraction-1;
}else{
fraction=1;
}
}
}else if(direction==1){
fraction=1-Sa;
if(fraction<=0){
if(loop==TRUE){
fraction=fraction+1;
}else{
fraction=0;
}
}
}else if(direction==2){
fraction=Sa;
if(fraction>=1){
if(loop==TRUE){
fraction=fraction-1;
}else{
fraction=1;
}
}
if(fraction>.5){
fraction=2*(1-fraction);
}else{
fraction=2*fraction;
}
}
if(Sa>=1){
if(loop==TRUE){
Sa-=1;
Aa=Za;
za=Aa;
}else{
Sa=0;
bb(n,Za);
}
}
}
if(Ua>0){
if((Za-Ra)>Ua){
cb(n,Za);
}else{
ua=(Za-Ra)/Ua;
if(direction==1){
ua=1-ua;
}
}
}
Qa=n;
})}),

                    new ROUTE({
                      fromNode : new SFString("Ma_1"),
                      fromField : new SFString("Na"),
                      toNode : new SFString("La_1"),
                      toField : new SFString("set_enabled")}),

                    new ROUTE({
                      fromNode : new SFString("Ma_1"),
                      fromField : new SFString("Oa"),
                      toNode : new SFString("La_1"),
                      toField : new SFString("set_startTime")}),

                    new ROUTE({
                      fromNode : new SFString("Ma_1"),
                      fromField : new SFString("Pa"),
                      toNode : new SFString("La_1"),
                      toField : new SFString("set_stopTime")}),

                    new ROUTE({
                      fromNode : new SFString("Ma_1"),
                      fromField : new SFString("cycleInterval_changed"),
                      toNode : new SFString("La_1"),
                      toField : new SFString("set_cycleInterval")}),

                    new ROUTE({
                      fromNode : new SFString("La_1"),
                      fromField : new SFString("fraction_changed"),
                      toNode : new SFString("Ma_1"),
                      toField : new SFString("set_fraction")})])}))}),

            new ProtoDeclare({
              name : new SFString("gb"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("R"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("S"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("set_fraction"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("R_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFNODE,
                      name : new SFString("U"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                    new field({
                      type : field.TYPE_SFINT32,
                      name : new SFString("direction"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("hb"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("ib"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Script({
                      DEF : new SFString("jb"),
                      directOutput : new SFBool(true),
                      field : new MFNode([
                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("R"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("S"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("set_fraction"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("R_changed"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_SFNODE,
                          name : new SFString("U"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFINT32,
                          name : new SFString("direction"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("aa"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_MFVEC2F,
                          name : new SFString("kb"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("ba"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("ca"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("da"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          value : new SFString("true")}),

                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("ea"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("fa"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("hb"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("ib"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFINT32,
                          name : new SFString("lb"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_MFNODE,
                          name : new SFString("mb"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("R"),
                              protoField : new SFString("R")}),

                            new connect({
                              nodeField : new SFString("S"),
                              protoField : new SFString("S")}),

                            new connect({
                              nodeField : new SFString("set_fraction"),
                              protoField : new SFString("set_fraction")}),

                            new connect({
                              nodeField : new SFString("R_changed"),
                              protoField : new SFString("R_changed")}),

                            new connect({
                              nodeField : new SFString("U"),
                              protoField : new SFString("U")}),

                            new connect({
                              nodeField : new SFString("direction"),
                              protoField : new SFString("direction")}),

                            new connect({
                              nodeField : new SFString("hb"),
                              protoField : new SFString("hb")}),

                            new connect({
                              nodeField : new SFString("ib"),
                              protoField : new SFString("ib")})])})]),
                      javascript:
, function initialize(){
U.w=TRUE;
aa=FALSE;
}
, function R(n){
if(ib&&!hb){
return;
}
if(fa==n){
return;
}
if(aa==TRUE){
ea=n;
return;
}
aa=TRUE;
da=TRUE;
if(hb==FALSE){
mb.length=1;
mb[0]=U;
}else{
mb=U.A_changed;
}
kb.length=mb.length;
for(lb=0;lb<mb.length;lb++){
kb[lb].x=mb[lb].u_changed.x;
kb[lb].y=mb[lb].u_changed.y;
}
R_changed=n;
fa=n;
}
, function S(n){
aa=FALSE;
if(ea==n){
R(n);
}
}
, function set_fraction(n){
if(ib&&!hb){
return;
}
if(da){
ba=n;
da=FALSE;
}else if(n<ca){
ba=(1.0-ca)+n;
}else{
ba=n-ca;
}
ca=n;
for(lb=0;lb<mb.length;lb++){
if(direction==0)kb[lb].y+=-ba;
if(direction==1)kb[lb].y+=ba;
if(direction==2)kb[lb].x+=ba;
if(direction==3)kb[lb].x+=-ba;
mb[lb].set_u=kb[lb];
}
})})])}))}),

            new ProtoDeclare({
              name : new SFString("nb"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("ob"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("pb"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("qb"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("rb"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("sb"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_SFVEC2F,
                      name : new SFString("tb"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("ub"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("vb"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("enterTime"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("exitTime"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("wb"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("xb"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("coord"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFVEC2F,
                      name : new SFString("texCoord"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("yb_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("enabled"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      value : new SFString("true")})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Script({
                      DEF : new SFString("I_1"),
                      directOutput : new SFBool(true),
                      field : new MFNode([
                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("ob"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("pb"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("qb"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("rb"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFVEC3F,
                          name : new SFString("sb"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFVEC2F,
                          name : new SFString("tb"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("ub"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("vb"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("wb"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("xb"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("enterTime"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("exitTime"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_SFVEC3F,
                          name : new SFString("coord"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_SFVEC2F,
                          name : new SFString("texCoord"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("yb_changed"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("enabled"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("ob"),
                              protoField : new SFString("ob")}),

                            new connect({
                              nodeField : new SFString("pb"),
                              protoField : new SFString("pb")}),

                            new connect({
                              nodeField : new SFString("qb"),
                              protoField : new SFString("qb")}),

                            new connect({
                              nodeField : new SFString("rb"),
                              protoField : new SFString("rb")}),

                            new connect({
                              nodeField : new SFString("sb"),
                              protoField : new SFString("sb")}),

                            new connect({
                              nodeField : new SFString("tb"),
                              protoField : new SFString("tb")}),

                            new connect({
                              nodeField : new SFString("ub"),
                              protoField : new SFString("ub")}),

                            new connect({
                              nodeField : new SFString("vb"),
                              protoField : new SFString("vb")}),

                            new connect({
                              nodeField : new SFString("wb"),
                              protoField : new SFString("wb")}),

                            new connect({
                              nodeField : new SFString("xb"),
                              protoField : new SFString("xb")}),

                            new connect({
                              nodeField : new SFString("enterTime"),
                              protoField : new SFString("enterTime")}),

                            new connect({
                              nodeField : new SFString("exitTime"),
                              protoField : new SFString("exitTime")}),

                            new connect({
                              nodeField : new SFString("coord"),
                              protoField : new SFString("coord")}),

                            new connect({
                              nodeField : new SFString("texCoord"),
                              protoField : new SFString("texCoord")}),

                            new connect({
                              nodeField : new SFString("yb_changed"),
                              protoField : new SFString("yb_changed")}),

                            new connect({
                              nodeField : new SFString("enabled"),
                              protoField : new SFString("enabled")})])})]),
                      javascript:
, function initialize(){
yb_changed=enabled;
}
, function ob(n,time){
if(!enabled){
enabled=TRUE;
yb_changed=TRUE;
wb=time;
}
}
, function pb(n,time){
if(enabled){
enabled=FALSE;
yb_changed=FALSE;
xb=time;
}
}
, function rb(n,Za){
if(enabled){
if(n==TRUE){
ub=Za;
}else{
vb=Za;
}
}
}
, function qb(n,Za){
if(enabled){
if(n==TRUE){
enterTime=Za;
}else{
exitTime=Za;
}
}
}
, function sb(n,Za){
if(enabled){
coord=n;
}
}
, function tb(n,Za){
if(enabled){
texCoord=n;
}
})})])}))}),

            new ProtoDeclare({
              name : new SFString("zb"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("set_p"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_MFVEC3F,
                      name : new SFString("set_coord"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_MFVEC2F,
                      name : new SFString("set_texCoord"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_SFCOLOR,
                      name : new SFString("set_diffuseColor"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("w"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_SFNODE,
                      name : new SFString("set_v"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("p_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFVEC3F,
                      name : new SFString("coord_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFVEC2F,
                      name : new SFString("texCoord_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFCOLOR,
                      name : new SFString("diffuseColor_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFNODE,
                      name : new SFString("v_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFSTRING,
                      name : new SFString("url"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("transparency"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                    new field({
                      type : field.TYPE_SFCOLOR,
                      name : new SFString("emissiveColor"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("0 0.09 0.15")}),

                    new field({
                      type : field.TYPE_SFCOLOR,
                      name : new SFString("specularColor"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("0.5 0.5 0.5")}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("shininess"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("0.2")}),

                    new field({
                      type : field.TYPE_SFVEC2F,
                      name : new SFString("q"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("-0.5 -0.5")}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("s"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                    new field({
                      type : field.TYPE_SFVEC2F,
                      name : new SFString("t"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("1 1")}),

                    new field({
                      type : field.TYPE_SFVEC2F,
                      name : new SFString("u"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                    new field({
                      type : field.TYPE_SFVEC2F,
                      name : new SFString("Ab"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("1 1")}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("Bb"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("Cb"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("Db"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("Eb"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                    new field({
                      type : field.TYPE_SFNODE,
                      name : new SFString("B"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                    new field({
                      type : field.TYPE_MFNODE,
                      name : new SFString("C"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                    new field({
                      type : field.TYPE_SFNODE,
                      name : new SFString("D"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                    new field({
                      type : field.TYPE_SFINT32,
                      name : new SFString("F"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("-1")}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("p"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      value : new SFString("true")}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("Fb"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("Gb"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      value : new SFString("true")}),

                    new field({
                      type : field.TYPE_SFVEC2F,
                      name : new SFString("Hb"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                    new field({
                      type : field.TYPE_SFVEC2F,
                      name : new SFString("Ib"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      value : new SFString("1 1")}),

                    new field({
                      type : field.TYPE_SFCOLOR,
                      name : new SFString("Jb"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                    new field({
                      type : field.TYPE_SFCOLOR,
                      name : new SFString("Kb"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                    new field({
                      type : field.TYPE_SFINT32,
                      name : new SFString("Lb"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      value : new SFString("-1")}),

                    new field({
                      type : field.TYPE_MFVEC3F,
                      name : new SFString("coord"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                    new field({
                      type : field.TYPE_MFVEC2F,
                      name : new SFString("texCoord"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                    new field({
                      type : field.TYPE_MFINT32,
                      name : new SFString("coordIndex"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                    new field({
                      type : field.TYPE_MFCOLOR,
                      name : new SFString("color"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                    new field({
                      type : field.TYPE_SFNODE,
                      name : new SFString("Mb"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                    new field({
                      type : field.TYPE_SFNODE,
                      name : new SFString("Nb"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("Ob"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      value : new SFString("0.02")}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("Pb"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      value : new SFString("1")}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("creaseAngle"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      value : new SFString("0.524")}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("H"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      value : new SFString("true")}),

                    new field({
                      type : field.TYPE_SFINT32,
                      name : new SFString("choice"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                    new field({
                      type : field.TYPE_MFSTRING,
                      name : new SFString("Qb"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                    new field({
                      type : field.TYPE_MFSTRING,
                      name : new SFString("Rb"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      value : new SFString("\"SERIF\"")}),

                    new field({
                      type : field.TYPE_SFSTRING,
                      name : new SFString("fontStyle"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      value : new SFString("PLAIN")}),

                    new field({
                      type : field.TYPE_SFSTRING,
                      name : new SFString("Sb"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                    new field({
                      type : field.TYPE_SFCOLOR,
                      name : new SFString("diffuseColor"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      value : new SFString("0 0.48 0.8")})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Switch({
                      DEF : new SFString("Tb_1"),
                      whichChoice : new SFInt32(-1),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("whichChoice"),
                              protoField : new SFString("choice")})])})),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              DEF : new SFString("Ub_1"),
                              material : new SFNode(
                                new Material({
                                  IS : new SFNode(
                                    new IS({
                                      connect : new MFNode([
                                        new connect({
                                          nodeField : new SFString("diffuseColor"),
                                          protoField : new SFString("diffuseColor")}),

                                        new connect({
                                          nodeField : new SFString("specularColor"),
                                          protoField : new SFString("specularColor")}),

                                        new connect({
                                          nodeField : new SFString("emissiveColor"),
                                          protoField : new SFString("emissiveColor")}),

                                        new connect({
                                          nodeField : new SFString("shininess"),
                                          protoField : new SFString("shininess")}),

                                        new connect({
                                          nodeField : new SFString("transparency"),
                                          protoField : new SFString("transparency")})])}))})),
                              texture : new SFNode(
                                new ImageTexture({
                                  DEF : new SFString("Vb_1"),
                                  IS : new SFNode(
                                    new IS({
                                      connect : new MFNode([
                                        new connect({
                                          nodeField : new SFString("url"),
                                          protoField : new SFString("url")})])}))})),
                              textureTransform : new SFNode(
                                new TextureTransform({
                                  DEF : new SFString("Wb_1"),
                                  IS : new SFNode(
                                    new IS({
                                      connect : new MFNode([
                                        new connect({
                                          nodeField : new SFString("translation"),
                                          protoField : new SFString("u")}),

                                        new connect({
                                          nodeField : new SFString("rotation"),
                                          protoField : new SFString("s")}),

                                        new connect({
                                          nodeField : new SFString("scale"),
                                          protoField : new SFString("t")}),

                                        new connect({
                                          nodeField : new SFString("center"),
                                          protoField : new SFString("q")})])}))}))})),
                          geometry : new SFNode(
                            new IndexedFaceSet({
                              DEF : new SFString("Xb_1"),
                              convex : new SFBool(false),
                              IS : new SFNode(
                                new IS({
                                  connect : new MFNode([
                                    new connect({
                                      nodeField : new SFString("solid"),
                                      protoField : new SFString("Gb")}),

                                    new connect({
                                      nodeField : new SFString("creaseAngle"),
                                      protoField : new SFString("creaseAngle")}),

                                    new connect({
                                      nodeField : new SFString("coordIndex"),
                                      protoField : new SFString("coordIndex")})])})),
                              texCoord : new SFNode(
                                new TextureCoordinate({
                                  DEF : new SFString("Zb_1"),
                                  IS : new SFNode(
                                    new IS({
                                      connect : new MFNode([
                                        new connect({
                                          nodeField : new SFString("point"),
                                          protoField : new SFString("texCoord")})])}))})),
                              coord : new SFNode(
                                new Coordinate({
                                  DEF : new SFString("Yb_1"),
                                  IS : new SFNode(
                                    new IS({
                                      connect : new MFNode([
                                        new connect({
                                          nodeField : new SFString("point"),
                                          protoField : new SFString("coord")})])}))}))}))}),

                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              DEF : new SFString("ac_1"),
                              texture : new SFNode(
                                new ImageTexture({
                                  USE : new SFString("Vb_1")})),
                              textureTransform : new SFNode(
                                new TextureTransform({
                                  USE : new SFString("Wb_1")}))})),
                          geometry : new SFNode(
                            new IndexedFaceSet({
                              DEF : new SFString("bc_1"),
                              convex : new SFBool(false),
                              IS : new SFNode(
                                new IS({
                                  connect : new MFNode([
                                    new connect({
                                      nodeField : new SFString("solid"),
                                      protoField : new SFString("Gb")}),

                                    new connect({
                                      nodeField : new SFString("creaseAngle"),
                                      protoField : new SFString("creaseAngle")}),

                                    new connect({
                                      nodeField : new SFString("coordIndex"),
                                      protoField : new SFString("coordIndex")})])})),
                              color : new SFNode(
                                new Color({
                                  DEF : new SFString("dc_1"),
                                  IS : new SFNode(
                                    new IS({
                                      connect : new MFNode([
                                        new connect({
                                          nodeField : new SFString("color"),
                                          protoField : new SFString("color")})])}))})),
                              texCoord : new SFNode(
                                new TextureCoordinate({
                                  DEF : new SFString("ec_1"),
                                  IS : new SFNode(
                                    new IS({
                                      connect : new MFNode([
                                        new connect({
                                          nodeField : new SFString("point"),
                                          protoField : new SFString("texCoord")})])}))})),
                              coord : new SFNode(
                                new Coordinate({
                                  DEF : new SFString("cc_1"),
                                  IS : new SFNode(
                                    new IS({
                                      connect : new MFNode([
                                        new connect({
                                          nodeField : new SFString("point"),
                                          protoField : new SFString("coord")})])}))}))}))}),

                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              USE : new SFString("Ub_1")})),
                          geometry : new SFNode(
                            new IndexedFaceSet({
                              USE : new SFString("bc_1")}))}),

                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              USE : new SFString("ac_1")})),
                          geometry : new SFNode(
                            new IndexedFaceSet({
                              USE : new SFString("bc_1")}))}),

                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              USE : new SFString("Ub_1")})),
                          geometry : new SFNode(
                            new Text({
                              DEF : new SFString("fc_1"),
                              IS : new SFNode(
                                new IS({
                                  connect : new MFNode([
                                    new connect({
                                      nodeField : new SFString("string"),
                                      protoField : new SFString("Qb")})])})),
                              fontStyle : new SFNode(
                                new FontStyle({
                                  IS : new SFNode(
                                    new IS({
                                      connect : new MFNode([
                                        new connect({
                                          nodeField : new SFString("language"),
                                          protoField : new SFString("Sb")}),

                                        new connect({
                                          nodeField : new SFString("family"),
                                          protoField : new SFString("Rb")}),

                                        new connect({
                                          nodeField : new SFString("style"),
                                          protoField : new SFString("fontStyle")})])}))}))}))}),

                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              USE : new SFString("ac_1")})),
                          geometry : new SFNode(
                            new Text({
                              USE : new SFString("fc_1")}))})])}),

                    new Script({
                      DEF : new SFString("gc_1"),
                      directOutput : new SFBool(true),
                      field : new MFNode([
                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("set_p"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_MFVEC3F,
                          name : new SFString("set_coord"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_MFVEC2F,
                          name : new SFString("set_texCoord"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFCOLOR,
                          name : new SFString("set_diffuseColor"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("w"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFNODE,
                          name : new SFString("set_v"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFINT32,
                          name : new SFString("choice"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_MFINT32,
                          name : new SFString("coordIndex"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_MFCOLOR,
                          name : new SFString("color_changed"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("p_changed"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_MFVEC3F,
                          name : new SFString("coord_changed"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_MFVEC2F,
                          name : new SFString("texCoord_changed"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_SFCOLOR,
                          name : new SFString("diffuseColor_changed"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_SFNODE,
                          name : new SFString("v_changed"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_SFINT32,
                          name : new SFString("hc"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("p"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_MFVEC3F,
                          name : new SFString("coord"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_MFVEC2F,
                          name : new SFString("texCoord"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("H"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_MFCOLOR,
                          name : new SFString("color"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFVEC2F,
                          name : new SFString("Hb"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFVEC2F,
                          name : new SFString("Ib"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFCOLOR,
                          name : new SFString("Jb"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFCOLOR,
                          name : new SFString("Kb"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFINT32,
                          name : new SFString("Lb"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFCOLOR,
                          name : new SFString("diffuseColor"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFNODE,
                          name : new SFString("Mb"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFNODE,
                          name : new SFString("Nb"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("Ob"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("Pb"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("Fb"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("Gb"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFNODE,
                          name : new SFString("ma"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          children : new MFNode([
                            new Switch({
                              USE : new SFString("Tb_1")})])}),

                        new field({
                          type : field.TYPE_SFNODE,
                          name : new SFString("ic"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          children : new MFNode([
                            new Appearance({
                              USE : new SFString("Ub_1")})])}),

                        new field({
                          type : field.TYPE_SFNODE,
                          name : new SFString("jc"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          children : new MFNode([
                            new Appearance({
                              USE : new SFString("ac_1")})])}),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("set_p"),
                              protoField : new SFString("set_p")}),

                            new connect({
                              nodeField : new SFString("set_coord"),
                              protoField : new SFString("set_coord")}),

                            new connect({
                              nodeField : new SFString("set_texCoord"),
                              protoField : new SFString("set_texCoord")}),

                            new connect({
                              nodeField : new SFString("set_diffuseColor"),
                              protoField : new SFString("set_diffuseColor")}),

                            new connect({
                              nodeField : new SFString("w"),
                              protoField : new SFString("w")}),

                            new connect({
                              nodeField : new SFString("set_v"),
                              protoField : new SFString("set_v")}),

                            new connect({
                              nodeField : new SFString("p_changed"),
                              protoField : new SFString("p_changed")}),

                            new connect({
                              nodeField : new SFString("coord_changed"),
                              protoField : new SFString("coord_changed")}),

                            new connect({
                              nodeField : new SFString("texCoord_changed"),
                              protoField : new SFString("texCoord_changed")}),

                            new connect({
                              nodeField : new SFString("diffuseColor_changed"),
                              protoField : new SFString("diffuseColor_changed")}),

                            new connect({
                              nodeField : new SFString("v_changed"),
                              protoField : new SFString("v_changed")}),

                            new connect({
                              nodeField : new SFString("hc"),
                              protoField : new SFString("choice")}),

                            new connect({
                              nodeField : new SFString("p"),
                              protoField : new SFString("p")}),

                            new connect({
                              nodeField : new SFString("H"),
                              protoField : new SFString("H")}),

                            new connect({
                              nodeField : new SFString("Hb"),
                              protoField : new SFString("Hb")}),

                            new connect({
                              nodeField : new SFString("Ib"),
                              protoField : new SFString("Ib")}),

                            new connect({
                              nodeField : new SFString("Jb"),
                              protoField : new SFString("Jb")}),

                            new connect({
                              nodeField : new SFString("Kb"),
                              protoField : new SFString("Kb")}),

                            new connect({
                              nodeField : new SFString("Lb"),
                              protoField : new SFString("Lb")}),

                            new connect({
                              nodeField : new SFString("diffuseColor"),
                              protoField : new SFString("diffuseColor")}),

                            new connect({
                              nodeField : new SFString("Mb"),
                              protoField : new SFString("Mb")}),

                            new connect({
                              nodeField : new SFString("Nb"),
                              protoField : new SFString("Nb")}),

                            new connect({
                              nodeField : new SFString("Ob"),
                              protoField : new SFString("Ob")}),

                            new connect({
                              nodeField : new SFString("Pb"),
                              protoField : new SFString("Pb")}),

                            new connect({
                              nodeField : new SFString("Fb"),
                              protoField : new SFString("Fb")}),

                            new connect({
                              nodeField : new SFString("Gb"),
                              protoField : new SFString("Gb")})])})]),
                      javascript:
, function kc()
{
R=0;
lc=-1;
for(J=0;J<Mb.mc.length-1;J++){
R=J;
nc=Mb.mc[J];
oc=Mb.mc[J+1];
for(J+=2;J<Mb.mc.length-1
&&Mb.mc[J]!=-1;J++);
lc=J-1;
pc=Mb.mc[lc];
for(qc=R;qc<=lc;qc++){
rc=coord[pc].x;
sc=coord[pc].y;
tc=coord[nc].x;
uc=coord[nc].y;
vc=coord[oc].x;
wc=coord[oc].y;
xc=sc-uc;
yc=tc-rc;
zc=rc*(uc-sc)-sc*(tc-rc);
Ac=uc-wc;
Bc=vc-tc;
Cc=tc*(wc-uc)-uc*(vc-tc);
Dc=1.0/Math.sqrt(xc*xc+yc*yc);
xc*=Dc;
yc*=Dc;
zc*=Dc;
Ec=1.0/Math.sqrt(Ac*Ac+Bc*Bc);
Ac*=Ec;
Bc*=Ec;
Cc*=Ec;
for(Fc=0;Fc<Nb.Gc.length;Fc++){
Hc=Nb.Gc[Fc].y*Ob;
if(Hc==0)
continue;
Ic=zc+Hc;
Jc=Cc+Hc;
Kc=xc*Bc-Ac*yc;
if(Math.abs(Kc)<0.001){
Lc=yc;
Mc=-xc;
Nc=-xc*uc-yc*tc+Hc;
Oc=1.0/(xc*Mc-Lc*yc);
Pc=(yc*Jc-Bc*Ic)*Oc;
Qc=(Ac*Ic-xc*Jc)*Oc;
}else{
Oc=1.0/Kc;
Pc=(yc*Jc-Bc*Ic)*Oc;
Qc=(Ac*Ic-xc*Jc)*Oc;
}
Rc=nc+(Fc*Mb.coord.length);
coord[Rc].x=Pc;
coord[Rc].y=Qc;
}
pc=nc;
nc=oc;
if(qc<lc-1)
oc=Mb.mc[qc+2];
else
oc=Mb.mc[R];
}
}
}
, function Sc()
{
coord.length=Mb.coord.length*Nb.Gc.length;
Tc=FALSE;
Uc=0;
for(Fc=0;Fc<Nb.Gc.length;Fc++){
Vc=-1*Nb.Gc[Fc].x*Pb;
if(Nb.Gc[Fc].y!=0)
Tc=TRUE;
for(Wc=0;Wc<Mb.coord.length;Wc++){
coord[Uc].x=Mb.coord[Wc].x;
coord[Uc].y=Mb.coord[Wc].y;
coord[Uc].z=Vc;
Uc++;
}
}
coordIndex=Mb.coordIndex;
coordIndex.length=Mb.coordIndex.length*2
+(Mb.mc.length-1)*(Nb.Gc.length-1);
Xc=TRUE;
for(qc=Mb.coordIndex.length,Fc=0;
Fc<Nb.Gc.length-1;Fc++){
Yc=Mb.coord.length*Fc;
for(J=0;J<Mb.mc.length-1;J++){
Zc=Mb.mc[J];
if(Xc){
R=Zc;
Xc=FALSE;
}
ad=Mb.mc[J+1];
if(J>=Mb.mc.length-2||ad==-1){
ad=R;
Xc=TRUE;
}
if(Zc!=-1&&ad!=-1){
Zc+=Yc;
ad+=Yc;
bd=Zc+Mb.coord.length;
cd=ad+Mb.coord.length;
coordIndex[qc++]=Zc;
coordIndex[qc++]=bd;
coordIndex[qc++]=ad;
coordIndex[qc++]=-1;
coordIndex[qc++]=ad;
coordIndex[qc++]=bd;
coordIndex[qc++]=cd;
coordIndex[qc++]=-1;
}
else
Xc=TRUE;
}
}
dd=Mb.coord.length*(Nb.Gc.length-1);
for(J=Mb.coordIndex.length-2;J>=0;J--,qc++){
ed=Mb.coordIndex[J];
if(ed!=-1){
ed+=dd;
}
coordIndex[qc]=ed;
}
coordIndex[qc]=-1;qc++;
coordIndex.length=qc;
if(Tc){
kc();
}
coord_changed=coord;
}
, function fd(){
coord=Mb.coord;
coordIndex=Mb.coordIndex;
coord_changed=coord;
}
, function gd(){
if((H==TRUE)&&(Lb==-1))return;
if(Lb==0){
min=Hb.x;
max=Ib.x;
}
else{
min=Hb.y;
max=Ib.y;
}
hd=max-min;
color.length=coord.length;
for(id=0;id<coord.length;id++){
if(hd==0.0){
fraction=0.0;
}else{
if(Lb==0){
fraction=(coord[id].x-min)/hd;
}else{
fraction=(coord[id].y-min)/hd;
}
}
jd=new SFColor(0,0,0);
if(Lb==-1){
jd=diffuseColor;
}else{
if(fraction<0){fraction=0;}
if(fraction>1){fraction=1;}
jd.r=Kb.r*(1-fraction)+
Jb.r*fraction;
jd.g=Kb.g*(1-fraction)+
Jb.g*fraction;
jd.b=Kb.b*(1-fraction)+
Jb.b*fraction;
}
color[id]=jd;
}
color_changed=color;
}
, function kd(){
hd=new SFVec2f(0,0);
hd.x=Ib.x-Hb.x;
hd.y=Ib.y-Hb.y;
texCoord.length=coord.length;
for(id=0;id<coord.length;id++){
if(hd.x==0.0){
texCoord[id].x=0.0;
}else{
texCoord[id].x=(coord[id].x-Hb.x)/hd.x;
}
if(hd.y==0.0){
texCoord[id].y=0.0;
}else{
texCoord[id].y=(coord[id].y-Hb.y)/hd.y;
}
}
texCoord_changed=texCoord;
}
, function set_p(n){
if(n==TRUE){
if(H==TRUE){
if(hc>=4){
ma.whichChoice=4;
choice=4;
}
else if(Lb>=0){
ma.whichChoice=2;
choice=2;
}else{
ma.whichChoice=0;
choice=0;
}
}else{
if(hc>=4){
ma.whichChoice=5;
choice=5;
}
else if(Lb>=0){
ma.whichChoice=3;
choice=3;
}else{
ma.whichChoice=1;
choice=1;
}
}
}else{
ma.whichChoice=-1;
choice=-1;
}
p=n;
p_changed=n;
}
, function ld()
{
if(Fb){
fd();
}
else{
Sc();
}
}
, function initialize(){
set_p(p);
v_changed=ic.texture_changed;
diffuseColor_changed=diffuseColor;
if(hc<4){
ld();
kd();
gd();
}
}
, function set_diffuseColor(n){
diffuseColor=n;
diffuseColor_changed=n;
gd();
}
, function set_v(n){
ic.set_texture=n;
jc.set_texture=n;
v_changed=n;
}
, function w(){
})}),

                    new ROUTE({
                      fromNode : new SFString("gc_1"),
                      fromField : new SFString("coord_changed"),
                      toNode : new SFString("Yb_1"),
                      toField : new SFString("set_point")}),

                    new ROUTE({
                      fromNode : new SFString("gc_1"),
                      fromField : new SFString("texCoord_changed"),
                      toNode : new SFString("Zb_1"),
                      toField : new SFString("set_point")}),

                    new ROUTE({
                      fromNode : new SFString("gc_1"),
                      fromField : new SFString("coordIndex"),
                      toNode : new SFString("Xb_1"),
                      toField : new SFString("set_coordIndex")}),

                    new ROUTE({
                      fromNode : new SFString("gc_1"),
                      fromField : new SFString("coord_changed"),
                      toNode : new SFString("cc_1"),
                      toField : new SFString("set_point")}),

                    new ROUTE({
                      fromNode : new SFString("gc_1"),
                      fromField : new SFString("color_changed"),
                      toNode : new SFString("dc_1"),
                      toField : new SFString("set_color")}),

                    new ROUTE({
                      fromNode : new SFString("gc_1"),
                      fromField : new SFString("texCoord_changed"),
                      toNode : new SFString("ec_1"),
                      toField : new SFString("set_point")}),

                    new ROUTE({
                      fromNode : new SFString("gc_1"),
                      fromField : new SFString("coordIndex"),
                      toNode : new SFString("bc_1"),
                      toField : new SFString("set_coordIndex")}),

                    new ROUTE({
                      fromNode : new SFString("gc_1"),
                      fromField : new SFString("coordIndex"),
                      toNode : new SFString("bc_1"),
                      toField : new SFString("set_colorIndex")}),

                    new ROUTE({
                      fromNode : new SFString("gc_1"),
                      fromField : new SFString("choice"),
                      toNode : new SFString("Tb_1"),
                      toField : new SFString("set_whichChoice")})])}))}),

            new ProtoDeclare({
              name : new SFString("md"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_MFVEC3F,
                      name : new SFString("coord"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                    new field({
                      type : field.TYPE_MFINT32,
                      name : new SFString("coordIndex"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                    new field({
                      type : field.TYPE_MFINT32,
                      name : new SFString("mc"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Group({})])}))}),

            new ProtoDeclare({
              name : new SFString("nd"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("R"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("S"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("set_od"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("set_fraction"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("R_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFNODE,
                      name : new SFString("U"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("hb"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("ib"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("pd"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("qd"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("rd"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("sd"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("td"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("ud"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("vd"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("wd"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("xd"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                    new field({
                      type : field.TYPE_SFCOLOR,
                      name : new SFString("diffuseColor"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      value : new SFString("1 0 0")}),

                    new field({
                      type : field.TYPE_SFCOLOR,
                      name : new SFString("emissiveColor"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      value : new SFString("0 0 1")}),

                    new field({
                      type : field.TYPE_SFCOLOR,
                      name : new SFString("specularColor"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      value : new SFString("0 1 0")}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("transparency"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("shininess"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      value : new SFString("0.2")}),

                    new field({
                      type : field.TYPE_SFVEC2F,
                      name : new SFString("q"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      value : new SFString("-0.5 -0.5")}),

                    new field({
                      type : field.TYPE_SFVEC2F,
                      name : new SFString("t"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      value : new SFString("1 1")}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("s"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                    new field({
                      type : field.TYPE_SFVEC2F,
                      name : new SFString("u"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("ha"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Script({
                      DEF : new SFString("jb_1"),
                      directOutput : new SFBool(true),
                      field : new MFNode([
                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("R"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("S"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("set_od"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("set_fraction"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("R_changed"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_SFNODE,
                          name : new SFString("U"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("hb"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("ib"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("pd"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("qd"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("rd"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("sd"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("td"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("ud"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("vd"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("wd"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("xd"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFCOLOR,
                          name : new SFString("diffuseColor"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFCOLOR,
                          name : new SFString("emissiveColor"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFCOLOR,
                          name : new SFString("specularColor"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("transparency"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("shininess"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFVEC2F,
                          name : new SFString("q"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFVEC2F,
                          name : new SFString("t"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("s"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFVEC2F,
                          name : new SFString("u"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_MFCOLOR,
                          name : new SFString("yd"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          value : new SFString("0 0 0")}),

                        new field({
                          type : field.TYPE_MFCOLOR,
                          name : new SFString("zd"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          value : new SFString("0 0 0")}),

                        new field({
                          type : field.TYPE_MFCOLOR,
                          name : new SFString("Ad"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          value : new SFString("0 0 0")}),

                        new field({
                          type : field.TYPE_MFFLOAT,
                          name : new SFString("Bd"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          value : new SFString("0")}),

                        new field({
                          type : field.TYPE_MFFLOAT,
                          name : new SFString("Cd"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          value : new SFString("0")}),

                        new field({
                          type : field.TYPE_MFVEC2F,
                          name : new SFString("Dd"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          value : new SFString("0 0")}),

                        new field({
                          type : field.TYPE_MFVEC2F,
                          name : new SFString("Ed"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          value : new SFString("0 0")}),

                        new field({
                          type : field.TYPE_MFFLOAT,
                          name : new SFString("Fd"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          value : new SFString("0")}),

                        new field({
                          type : field.TYPE_MFVEC2F,
                          name : new SFString("Gd"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          value : new SFString("0 0")}),

                        new field({
                          type : field.TYPE_MFCOLOR,
                          name : new SFString("Hd"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          value : new SFString("0 0 0")}),

                        new field({
                          type : field.TYPE_MFCOLOR,
                          name : new SFString("Id"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          value : new SFString("0 0 0")}),

                        new field({
                          type : field.TYPE_MFCOLOR,
                          name : new SFString("Jd"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          value : new SFString("0 0 0")}),

                        new field({
                          type : field.TYPE_MFSTRING,
                          name : new SFString("Kd"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFCOLOR,
                          name : new SFString("Ld"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFCOLOR,
                          name : new SFString("Md"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("aa"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFINT32,
                          name : new SFString("lb"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_MFNODE,
                          name : new SFString("mb"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFVEC2F,
                          name : new SFString("Nd"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("od"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("Od"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("Pd"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("Qd"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("ea"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("fa"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("Rd"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFVEC2F,
                          name : new SFString("Sd"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          value : new SFString("1 1")}),

                        new field({
                          type : field.TYPE_SFVEC2F,
                          name : new SFString("Td"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFVEC2F,
                          name : new SFString("Za"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("Ud"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFVEC2F,
                          name : new SFString("Vd"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFVEC2F,
                          name : new SFString("Wd"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFVEC2F,
                          name : new SFString("Xd"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFVEC2F,
                          name : new SFString("Yd"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("R"),
                              protoField : new SFString("R")}),

                            new connect({
                              nodeField : new SFString("S"),
                              protoField : new SFString("S")}),

                            new connect({
                              nodeField : new SFString("set_od"),
                              protoField : new SFString("set_od")}),

                            new connect({
                              nodeField : new SFString("set_fraction"),
                              protoField : new SFString("set_fraction")}),

                            new connect({
                              nodeField : new SFString("R_changed"),
                              protoField : new SFString("R_changed")}),

                            new connect({
                              nodeField : new SFString("U"),
                              protoField : new SFString("U")}),

                            new connect({
                              nodeField : new SFString("hb"),
                              protoField : new SFString("hb")}),

                            new connect({
                              nodeField : new SFString("ib"),
                              protoField : new SFString("ib")}),

                            new connect({
                              nodeField : new SFString("pd"),
                              protoField : new SFString("pd")}),

                            new connect({
                              nodeField : new SFString("qd"),
                              protoField : new SFString("qd")}),

                            new connect({
                              nodeField : new SFString("rd"),
                              protoField : new SFString("rd")}),

                            new connect({
                              nodeField : new SFString("sd"),
                              protoField : new SFString("sd")}),

                            new connect({
                              nodeField : new SFString("td"),
                              protoField : new SFString("td")}),

                            new connect({
                              nodeField : new SFString("ud"),
                              protoField : new SFString("ud")}),

                            new connect({
                              nodeField : new SFString("vd"),
                              protoField : new SFString("vd")}),

                            new connect({
                              nodeField : new SFString("wd"),
                              protoField : new SFString("wd")}),

                            new connect({
                              nodeField : new SFString("xd"),
                              protoField : new SFString("xd")}),

                            new connect({
                              nodeField : new SFString("diffuseColor"),
                              protoField : new SFString("diffuseColor")}),

                            new connect({
                              nodeField : new SFString("emissiveColor"),
                              protoField : new SFString("emissiveColor")}),

                            new connect({
                              nodeField : new SFString("specularColor"),
                              protoField : new SFString("specularColor")}),

                            new connect({
                              nodeField : new SFString("transparency"),
                              protoField : new SFString("transparency")}),

                            new connect({
                              nodeField : new SFString("shininess"),
                              protoField : new SFString("shininess")}),

                            new connect({
                              nodeField : new SFString("q"),
                              protoField : new SFString("q")}),

                            new connect({
                              nodeField : new SFString("t"),
                              protoField : new SFString("t")}),

                            new connect({
                              nodeField : new SFString("s"),
                              protoField : new SFString("s")}),

                            new connect({
                              nodeField : new SFString("u"),
                              protoField : new SFString("u")})])})]),
                      javascript:
, function Zd(lb){
Sd.x=lb.t_changed.x;
Sd.y=lb.t_changed.y;
Td.x=lb.q_changed.x;
Td.y=lb.q_changed.y;
Za.x=lb.u_changed.x;
Za.y=lb.u_changed.y;
Ud=lb.s_changed;
var ae,be;
ae=Math.cos(Ud);
be=Math.sin(Ud);
Vd.x=q.x;
Vd.y=q.y;
Yd.x=((-Td.x)+(Sd.x*(Td.x-Vd.x+Za.x)*ae)-(Sd.x*(Td.y-Vd.y+Za.y)*be));
Yd.y=((-Td.y)+(Sd.y*(Td.y-Vd.y+Za.y)*ae)+(Sd.y*(Td.x-Vd.x+Za.x)*be));
Vd.x=-Yd.x;
Vd.y=-Yd.y;
lb.set_q=Vd;
Wd.x=(Td.x-Vd.x+Za.x-((Td.x-Vd.x)*Math.cos(Ud))/Sd.x-((Td.y-Vd.y)*Math.sin(Ud))/Sd.y);
Wd.y=(Td.y-Vd.y+Za.y-((Td.y-Vd.y)*Math.cos(Ud))/Sd.y+((Td.x-Vd.x)*Math.sin(Ud))/Sd.x);
lb.set_u=Wd;
Xd.x=Wd.x-Za.x;
Xd.y=Wd.y-Za.y;
u.x+=Xd.x;
u.y+=Xd.y;
}
, function initialize(){
U.w=TRUE;
Rd=FALSE;
aa=FALSE;
od=0.;
}
, function R(n){
if(ib&&!hb){
return;
}
if(fa==n){
return;
}
if(aa==TRUE){
ea=n;
return;
}
aa=TRUE;
od=0.;
if(hb==FALSE){
mb.length=1;
mb[0]=U;
}else{
mb=U.A_changed;
}
yd.length=
zd.length=
Ad.length=
Hd.length=
Id.length=
Jd.length=
Bd.length=
Cd.length=
Dd.length=
Ed.length=
Fd.length=
Gd.length=mb.length;
for(lb=0;lb<mb.length;lb++){
if(pd==TRUE){
ce(mb[lb].diffuseColor_changed,yd[lb]);
ce(diffuseColor,Hd[lb]);
if((yd[lb][1]<=Qd)||(yd[lb][2]<=Qd)){
yd[lb][0]=Hd[lb][0];
}else if((Hd[lb][1]<=Qd)||(Hd[lb][2]<=Qd)){
Hd[lb][0]=yd[lb][0];
}
}
if(rd==TRUE){
ce(mb[lb].specularColor_changed,Ad[lb]);
ce(specularColor,Jd[lb]);
if((Ad[lb][1]<=Qd)||(Ad[lb][2]<=Qd)){
Ad[lb][0]=Jd[lb][0];
}else if((Jd[lb][1]<=Qd)||(Jd[lb][2]<=Qd)){
Jd[lb][0]=Ad[lb][0];
}
}
if(qd==TRUE){
ce(mb[lb].emissiveColor_changed,zd[lb]);
ce(emissiveColor,Id[lb]);
if((zd[lb][1]<=Qd)||(zd[lb][2]<=Qd)){
zd[lb][0]=Id[lb][0];
}else if((Id[lb][1]<=Qd)||(Id[lb][2]<=Qd)){
Id[lb][0]=zd[lb][0];
}
}
if(sd==TRUE)Bd[lb]=mb[lb].transparency_changed;
if(td==TRUE)Cd[lb]=mb[lb].shininess_changed;
if(vd==TRUE||wd==TRUE||xd==TRUE){
Kd=mb[lb].v_changed.url;
if(Kd.length>0){
if(Kd[0].length>0){
if(lb==0)Rd=TRUE;
Zd(mb[lb]);
Ed[lb]=mb[lb].t_changed;
Fd[lb]=mb[lb].s_changed;
Gd[lb]=mb[lb].u_changed;
}
}
}
}
R_changed=n;
fa=n;
}
, function S(n){
aa=FALSE;
if(ea==n){
R(n);
}
}
, function set_od(n){
od=n;
if(od<0.)od=0.;
else if(od>1.)od=1.;
}
, function set_fraction(n){
if(ib&&!hb){
return;
}
Pd=od*(1.+Math.sin(2.*Math.PI*n-(Math.PI/2.)))/2.;
Od=od*Math.sin(2.*Math.PI*n);
for(lb=0;lb<mb.length;lb++){
if(pd==TRUE){
Ld[0]=(1.-Pd)*yd[lb][0]+Pd*Hd[lb][0];
Ld[1]=(1.-Pd)*yd[lb][1]+Pd*Hd[lb][1];
Ld[2]=(1.-Pd)*yd[lb][2]+Pd*Hd[lb][2];
de(Ld,Md);
mb[lb].set_diffuseColor=Md;
}
if(rd==TRUE){
Ld[0]=(1.-Pd)*Ad[lb][0]+Pd*Jd[lb][0];
Ld[1]=(1.-Pd)*Ad[lb][1]+Pd*Jd[lb][1];
Ld[2]=(1.-Pd)*Ad[lb][2]+Pd*Jd[lb][2];
de(Ld,Md);
mb[lb].set_specularColor=Md;
}
if(qd==TRUE){
Ld[0]=(1.-Pd)*zd[lb][0]+Pd*Id[lb][0];
Ld[1]=(1.-Pd)*zd[lb][1]+Pd*Id[lb][1];
Ld[2]=(1.-Pd)*zd[lb][2]+Pd*Id[lb][2];
de(Ld,Md);
mb[lb].set_emissiveColor=Md;
}
if(sd==TRUE)mb[lb].set_transparency=(1.-Pd)*Bd[lb]+Pd*transparency;
if(td==TRUE)mb[lb].set_shininess=(1.-Pd)*Cd[lb]+Pd*shininess;
if(Rd==TRUE){
if(vd==TRUE){
Nd.x=(1.-Pd)*Ed[lb].x+Pd*t.x;
Nd.y=(1.-Pd)*Ed[lb].y+Pd*t.y;
mb[lb].set_t=Nd;
}
if(wd==TRUE){
mb[lb].set_s=Fd[lb]+Od*s;
}
if(xd==TRUE){
Nd.x=Gd[lb].x+Od*u.x;
Nd.y=Gd[lb].y+Od*u.y;
mb[lb].set_u=Nd;
}
}
}
}
, function ce(ee,fe){
var max,min;
max=(ee[0]>ee[1])?
((ee[0]>ee[2])?ee[0]:ee[2]):
((ee[1]>ee[2])?ee[1]:ee[2]);
min=(ee[0]<ee[1])?
((ee[0]<ee[2])?ee[0]:ee[2]):
((ee[1]<ee[2])?ee[1]:ee[2]);
fe[2]=max;
if(max!=0.)fe[1]=(max-min)/max;
else fe[1]=0.;
if(fe[1]!=0.){
if(ee[0]==max)fe[0]=(ee[1]-ee[2])/(max-min);
else if(ee[1]==max)fe[0]=2.+(ee[2]-ee[0])/(max-min);
else fe[0]=4.+(ee[0]-ee[1])/(max-min);
if(fe[0]<0.)fe[0]+=6.;
fe[0]/=6.;
}else fe[0]=0.;
}
, function de(fe,ee){
var ge,he,Za,ie;
var J;
if(fe[0]==1.)fe[0]=0.;
else fe[0]*=6.;
J=Math.floor(fe[0]);
ge=fe[0]-J;
ie=fe[2]*(1.-fe[1]);
he=fe[2]*(1.-(fe[1]*ge));
Za=fe[2]*(1.-(fe[1]*(1.-ge)));
switch(J){
case 0:ee[0]=fe[2];ee[1]=Za;ee[2]=ie;break;
case 1:ee[0]=he;ee[1]=fe[2];ee[2]=ie;break;
case 2:ee[0]=ie;ee[1]=fe[2];ee[2]=Za;break;
case 3:ee[0]=ie;ee[1]=he;ee[2]=fe[2];break;
case 4:ee[0]=Za;ee[1]=ie;ee[2]=fe[2];break;
case 5:ee[0]=fe[2];ee[1]=ie;ee[2]=he;break;
}
})})])}))}),

            new ProtoDeclare({
              name : new SFString("je"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("set_enabled"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("isOver"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("isActive"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("trackPoint_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("rotation_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFINT32,
                      name : new SFString("oa"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new SphereSensor({
                      DEF : new SFString("ke_1"),
                      enabled : new SFBool(false),
                      autoOffset : new SFBool(false),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("trackPoint_changed"),
                              protoField : new SFString("trackPoint_changed")}),

                            new connect({
                              nodeField : new SFString("rotation_changed"),
                              protoField : new SFString("rotation_changed")}),

                            new connect({
                              nodeField : new SFString("isActive"),
                              protoField : new SFString("isActive")})])}))}),

                    new Script({
                      DEF : new SFString("le_1"),
                      directOutput : new SFBool(true),
                      field : new MFNode([
                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("set_enabled"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("enabled_changed"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_SFINT32,
                          name : new SFString("oa"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("set_enabled"),
                              protoField : new SFString("set_enabled")}),

                            new connect({
                              nodeField : new SFString("oa"),
                              protoField : new SFString("oa")})])})]),
                      javascript:
, function initialize(){
if(oa>0){
enabled_changed=TRUE;
}
}
, function set_enabled(n){
if(n==TRUE){
enabled_changed=TRUE;
oa++;
}else{
enabled_changed=FALSE;
enabled_changed=TRUE;
if(oa>0){
oa--;
}
}
})}),

                    new ROUTE({
                      fromNode : new SFString("le_1"),
                      fromField : new SFString("enabled_changed"),
                      toNode : new SFString("ke_1"),
                      toField : new SFString("set_enabled")})])}))}),

            new ProtoDeclare({
              name : new SFString("me"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("R"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("sa"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("rb"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("ne"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("oe"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("yb_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("stopTime"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFINT32,
                      name : new SFString("pe"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("qe"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      value : new SFString("0 0 1")}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("enabled"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      value : new SFString("true")}),

                    new field({
                      type : field.TYPE_SFNODE,
                      name : new SFString("re"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("center"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Script({
                      DEF : new SFString("I_2"),
                      directOutput : new SFBool(true),
                      field : new MFNode([
                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("isActive"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFROTATION,
                          name : new SFString("se"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFVEC3F,
                          name : new SFString("te"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("ob"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("pb"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("yb_changed"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("stopTime"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_SFINT32,
                          name : new SFString("pe"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFVEC3F,
                          name : new SFString("qe"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("enabled"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFNODE,
                          name : new SFString("ue"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFROTATION,
                          name : new SFString("ve"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("isActive"),
                              protoField : new SFString("rb")}),

                            new connect({
                              nodeField : new SFString("se"),
                              protoField : new SFString("ne")}),

                            new connect({
                              nodeField : new SFString("te"),
                              protoField : new SFString("oe")}),

                            new connect({
                              nodeField : new SFString("ob"),
                              protoField : new SFString("R")}),

                            new connect({
                              nodeField : new SFString("pb"),
                              protoField : new SFString("sa")}),

                            new connect({
                              nodeField : new SFString("yb_changed"),
                              protoField : new SFString("yb_changed")}),

                            new connect({
                              nodeField : new SFString("stopTime"),
                              protoField : new SFString("stopTime")}),

                            new connect({
                              nodeField : new SFString("pe"),
                              protoField : new SFString("pe")}),

                            new connect({
                              nodeField : new SFString("qe"),
                              protoField : new SFString("qe")}),

                            new connect({
                              nodeField : new SFString("enabled"),
                              protoField : new SFString("enabled")}),

                            new connect({
                              nodeField : new SFString("ue"),
                              protoField : new SFString("re")})])})]),
                      javascript:
, function initialize(){
yb_changed=enabled;
}
, function ob(n,time){
if(!enabled){
enabled=TRUE;
yb_changed=TRUE;
ve=ue.rotation;
}
}
, function pb(n,time){
if(enabled){
enabled=FALSE;
yb_changed=FALSE;
stopTime=time;
}
}
, function isActive(n,Za){
ve=ue.rotation;
if(n==TRUE){
yb_changed=TRUE;
}
else{
yb_changed=FALSE;
}
}
, function se(n){
if(pe==0){
ue.rotation=n.multiply(ve);
}
}
, function te(n){
if(pe==1){
we=new SFRotation(qe,n);
ue.rotation=we.multiply(ve);
}
})})])}))}),

            new ProtoDeclare({
              name : new SFString("xe"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("R"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("S"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("startTime"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFNODE,
                      name : new SFString("ye"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                    new field({
                      type : field.TYPE_SFNODE,
                      name : new SFString("ze"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                    new field({
                      type : field.TYPE_SFNODE,
                      name : new SFString("Ae"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("Be"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                    new field({
                      type : field.TYPE_SFINT32,
                      name : new SFString("Ce"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      value : new SFString("-1")}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("De"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Script({
                      directOutput : new SFBool(true),
                      field : new MFNode([
                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("R"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("S"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("startTime"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_SFNODE,
                          name : new SFString("Ee"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFNODE,
                          name : new SFString("Fe"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFNODE,
                          name : new SFString("U"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("Be"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFINT32,
                          name : new SFString("Ce"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("ea"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("De"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("R"),
                              protoField : new SFString("R")}),

                            new connect({
                              nodeField : new SFString("S"),
                              protoField : new SFString("S")}),

                            new connect({
                              nodeField : new SFString("startTime"),
                              protoField : new SFString("startTime")}),

                            new connect({
                              nodeField : new SFString("Ee"),
                              protoField : new SFString("ye")}),

                            new connect({
                              nodeField : new SFString("Fe"),
                              protoField : new SFString("ze")}),

                            new connect({
                              nodeField : new SFString("U"),
                              protoField : new SFString("Ae")}),

                            new connect({
                              nodeField : new SFString("Be"),
                              protoField : new SFString("Be")}),

                            new connect({
                              nodeField : new SFString("Ce"),
                              protoField : new SFString("Ce")}),

                            new connect({
                              nodeField : new SFString("De"),
                              protoField : new SFString("De")})])})]),
                      javascript:
, function R(n,Za){
if(startTime==Za){
return;
}
if(!Be){
if(U.D!=null){
if(U.F!=Ce){
if(!De){
U.D.sa=Za;
}
}
}
U.D=Fe;
U.F=Ce;
Ee.R=Za;
Be=TRUE;
startTime=Za;
}else{
ea=Za;
}
}
, function S(n,Za){
Be=FALSE;
if(ea==Za){
R(n,Za);
}
})})])}))}),

            new ProtoDeclare({
              name : new SFString("Ge"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("R"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("set_fraction"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("He"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("Ie"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("Je"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      value : new SFString("true")}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("Ke"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      value : new SFString("5")}),

                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("qe"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      value : new SFString("0 0 1")}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("T"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      value : new SFString("true")}),

                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("center"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                    new field({
                      type : field.TYPE_SFNODE,
                      name : new SFString("U"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                    new field({
                      type : field.TYPE_SFNODE,
                      name : new SFString("Le"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Script({
                      directOutput : new SFBool(true),
                      field : new MFNode([
                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("R"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("set_fraction"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("He"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("Ie"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_SFNODE,
                          name : new SFString("U"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFNODE,
                          name : new SFString("Me"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFVEC3F,
                          name : new SFString("center"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("Je"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("Ke"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFVEC3F,
                          name : new SFString("qe"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFVEC3F,
                          name : new SFString("Ne"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          value : new SFString("0 1 0")}),

                        new field({
                          type : field.TYPE_SFINT32,
                          name : new SFString("Oe"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          value : new SFString("2")}),

                        new field({
                          type : field.TYPE_SFVEC3F,
                          name : new SFString("Pe"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFROTATION,
                          name : new SFString("Qe"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("R"),
                              protoField : new SFString("R")}),

                            new connect({
                              nodeField : new SFString("set_fraction"),
                              protoField : new SFString("set_fraction")}),

                            new connect({
                              nodeField : new SFString("He"),
                              protoField : new SFString("He")}),

                            new connect({
                              nodeField : new SFString("Ie"),
                              protoField : new SFString("Ie")}),

                            new connect({
                              nodeField : new SFString("U"),
                              protoField : new SFString("U")}),

                            new connect({
                              nodeField : new SFString("Me"),
                              protoField : new SFString("Le")}),

                            new connect({
                              nodeField : new SFString("center"),
                              protoField : new SFString("center")}),

                            new connect({
                              nodeField : new SFString("Je"),
                              protoField : new SFString("Je")}),

                            new connect({
                              nodeField : new SFString("Ke"),
                              protoField : new SFString("Ke")}),

                            new connect({
                              nodeField : new SFString("qe"),
                              protoField : new SFString("qe")})])})]),
                      vrmlscript:
, function Re(U,Se){
var Te=new VrmlMatrix();
for(var J=U.C.length-2;J>=0;J--){
Te.setTransform(U.C[J].translation,
U.C[J].rotation,
U.C[J].scale,
U.C[J].scaleOrientation,
U.C[J].center);
Se.multRight(Te);
}
}
, function Ue(Ve,Se){
var We=Ve;
while(We.G==FALSE){
Re(We,Se);
We=We.B;
}
}
, function Xe()
{
var Se=new VrmlMatrix();
Re(Me,Se);
Ue(Me.B,Se);
var Ye=Me.C[0].center;
return Se.multVecMatrix(Ye);
}
, function Ze(Se)
{
Re(Me,Se);
Ue(Me.B,Se);
}
, function af()
{
var Se=new VrmlMatrix();
Re(U,Se);
Ue(U.B,Se);
return Se;
}
, function R(n,Za)
{
He=Za;
U.C[0].center=center;
Ne=new SFVec3f(0,1,0);
Oe=2;
if(Math.abs(qe.x)>0.5){
Oe=0;
}
else if(Math.abs(qe.y)>0.5){
Oe=1;
Ne=new SFVec3f(0,0,1);
}
}
, function set_fraction(n)
{
var bf=new SFVec3f(0,0,0);
if(Je){
bf=new SFVec3f(0.0,0.0,Ke);
}
else{
bf=Xe();
}
var cf=af();
var df=cf.inverse();
var vec=df.multVecMatrix(bf);
vec=vec.subtract(U.C[0].center);
var we=new SFRotation(qe,vec);
if(n<1.0){
we=Qe.slerp(we,n);
}
U.C[0].rotation=we.multiply(U.C[0].rotation);
if(Je){
cf=af();
df=cf.inverse();
var ef=df.multVecMatrix(new SFVec3f(0,1,0));
var ff=new SFVec3f(0,0,0);
var gf=df.multVecMatrix(ff);
ef=ef.subtract(gf);
ef[Oe]=0.0;
we=new SFRotation(Ne,ef);
U.C[0].rotation=we.multiply(U.C[0].rotation);
}
})})])}))}),

            new ProtoDeclare({
              name : new SFString("hf"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("R"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("S"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("set_od"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("set_fraction"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("jf"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("R_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("translation"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("scale"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("1 1 1")}),

                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("center"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("T"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("true")}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("rotation"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("scaleOrientation"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                    new field({
                      type : field.TYPE_MFNODE,
                      name : new SFString("children"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                    new field({
                      type : field.TYPE_SFNODE,
                      name : new SFString("U"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                    new field({
                      type : field.TYPE_SFINT32,
                      name : new SFString("kf"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      value : new SFString("8")}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("lf"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      value : new SFString("1.5")}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("mf"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      value : new SFString("true")}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("nf"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      value : new SFString("true")}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("of"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      value : new SFString("true")})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Transform({
                      DEF : new SFString("pf_1"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("translation"),
                              protoField : new SFString("translation")}),

                            new connect({
                              nodeField : new SFString("rotation"),
                              protoField : new SFString("rotation")}),

                            new connect({
                              nodeField : new SFString("scale"),
                              protoField : new SFString("scale")}),

                            new connect({
                              nodeField : new SFString("scaleOrientation"),
                              protoField : new SFString("scaleOrientation")}),

                            new connect({
                              nodeField : new SFString("center"),
                              protoField : new SFString("center")}),

                            new connect({
                              nodeField : new SFString("children"),
                              protoField : new SFString("children")})])}))}),

                    new PositionInterpolator({
                      DEF : new SFString("qf_1")}),

                    new Script({
                      DEF : new SFString("rf_1"),
                      directOutput : new SFBool(true),
                      field : new MFNode([
                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("R"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("S"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("set_od"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("set_fraction"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("jf"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFVEC3F,
                          name : new SFString("set_sf"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("R_changed"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_MFFLOAT,
                          name : new SFString("key_changed"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_MFVEC3F,
                          name : new SFString("keyValue_changed"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_SFVEC3F,
                          name : new SFString("sf_changed"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("fraction_changed"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_SFNODE,
                          name : new SFString("U"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFINT32,
                          name : new SFString("kf"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("lf"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("mf"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("nf"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("of"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("aa"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("tf"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          value : new SFString("1")}),

                        new field({
                          type : field.TYPE_MFFLOAT,
                          name : new SFString("key"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          value : new SFString("0")}),

                        new field({
                          type : field.TYPE_MFVEC3F,
                          name : new SFString("keyValue"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          value : new SFString("0 0 0")}),

                        new field({
                          type : field.TYPE_SFNODE,
                          name : new SFString("uf"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          children : new MFNode([
                            new Transform({
                              USE : new SFString("pf_1")})])}),

                        new field({
                          type : field.TYPE_SFVEC3F,
                          name : new SFString("vf"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFVEC3F,
                          name : new SFString("sf"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("od"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("wf"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("xf"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("ea"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("fa"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("R"),
                              protoField : new SFString("R")}),

                            new connect({
                              nodeField : new SFString("S"),
                              protoField : new SFString("S")}),

                            new connect({
                              nodeField : new SFString("set_od"),
                              protoField : new SFString("set_od")}),

                            new connect({
                              nodeField : new SFString("set_fraction"),
                              protoField : new SFString("set_fraction")}),

                            new connect({
                              nodeField : new SFString("jf"),
                              protoField : new SFString("jf")}),

                            new connect({
                              nodeField : new SFString("R_changed"),
                              protoField : new SFString("R_changed")}),

                            new connect({
                              nodeField : new SFString("U"),
                              protoField : new SFString("U")}),

                            new connect({
                              nodeField : new SFString("kf"),
                              protoField : new SFString("kf")}),

                            new connect({
                              nodeField : new SFString("lf"),
                              protoField : new SFString("lf")}),

                            new connect({
                              nodeField : new SFString("mf"),
                              protoField : new SFString("mf")}),

                            new connect({
                              nodeField : new SFString("nf"),
                              protoField : new SFString("nf")}),

                            new connect({
                              nodeField : new SFString("of"),
                              protoField : new SFString("of")})])})]),
                      javascript:
, function initialize(){
aa=FALSE;
tf=1.;
sf.x=sf.y=sf.z=1.;
key.length=kf;
keyValue.length=kf;
ge=0.0;
g=kf-1.0;
g=1./g;
for(J=0;J<kf;J++){
key[J]=ge;
keyValue[J].x=keyValue[J].y=keyValue[J].z=1.;
if(mf==TRUE){
xf=Math.random();
wf=(1.-xf)+xf*(lf);
keyValue[J].x=wf;
}
if(nf==TRUE){
xf=Math.random();
wf=(1.-xf)+xf*(lf);
keyValue[J].y=wf;
}
if(of==TRUE){
xf=Math.random();
wf=(1.-xf)+xf*(lf);
keyValue[J].z=wf;
}
ge+=g;
}
}
, function R(n){
if(fa==n){
return;
}
if(aa==TRUE){
ea=n;
return;
}
aa=TRUE;
vf=uf.scale_changed;
key_changed=key;
keyValue_changed=keyValue;
R_changed=n;
fa=n;
}
, function S(n){
uf.set_scale=vf;
aa=FALSE;
if(ea==n){
R(n);
}
}
, function set_od(n){
od=n;
if(od<0.)od=0.;
else if(od>1.)od=1.;
}
, function set_sf(n){
if(mf==TRUE)sf.x=(1.-od)+od*(n.x);
if(nf==TRUE)sf.y=(1.-od)+od*(n.y);
if(of==TRUE)sf.z=(1.-od)+od*(n.z);
sf_changed=sf;
}
, function set_fraction(n){
fraction_changed=n;
}
, function jf(n){
if(n>tf){
tf=n;
return;
}
tf=n;
keyValue[0].x=keyValue[kf-1].x;
keyValue[0].y=keyValue[kf-1].y;
keyValue[0].z=keyValue[kf-1].z;
for(J=1;J<kf;J++){
if(mf==TRUE){
xf=Math.random();
wf=(1.-xf)+xf*(lf);
keyValue[J].x=wf;
}
if(nf==TRUE){
xf=Math.random();
wf=(1.-xf)+xf*(lf);
keyValue[J].y=wf;
}
if(of==TRUE){
xf=Math.random();
wf=(1.-xf)+xf*(lf);
keyValue[J].z=wf;
}
}
keyValue_changed=keyValue;
})}),

                    new ROUTE({
                      fromNode : new SFString("rf_1"),
                      fromField : new SFString("sf_changed"),
                      toNode : new SFString("pf_1"),
                      toField : new SFString("set_scale")}),

                    new ROUTE({
                      fromNode : new SFString("rf_1"),
                      fromField : new SFString("key_changed"),
                      toNode : new SFString("qf_1"),
                      toField : new SFString("set_key")}),

                    new ROUTE({
                      fromNode : new SFString("rf_1"),
                      fromField : new SFString("fraction_changed"),
                      toNode : new SFString("qf_1"),
                      toField : new SFString("set_fraction")}),

                    new ROUTE({
                      fromNode : new SFString("rf_1"),
                      fromField : new SFString("keyValue_changed"),
                      toNode : new SFString("qf_1"),
                      toField : new SFString("set_keyValue")}),

                    new ROUTE({
                      fromNode : new SFString("qf_1"),
                      fromField : new SFString("value_changed"),
                      toNode : new SFString("rf_1"),
                      toField : new SFString("set_sf")})])}))}),

            new ProtoDeclare({
              name : new SFString("yf"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("set_p"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("w"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_MFVEC3F,
                      name : new SFString("point_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFINT32,
                      name : new SFString("zf_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("Sd_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFVEC2F,
                      name : new SFString("Af_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFINT32,
                      name : new SFString("Bf_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("Cf_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("p_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFCOLOR,
                      name : new SFString("diffuseColor"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("0.3 0.5 1")}),

                    new field({
                      type : field.TYPE_SFNODE,
                      name : new SFString("B"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                    new field({
                      type : field.TYPE_MFNODE,
                      name : new SFString("C"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                    new field({
                      type : field.TYPE_SFNODE,
                      name : new SFString("D"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                    new field({
                      type : field.TYPE_SFINT32,
                      name : new SFString("F"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("-1")}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("G"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                    new field({
                      type : field.TYPE_MFVEC3F,
                      name : new SFString("point"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                    new field({
                      type : field.TYPE_MFINT32,
                      name : new SFString("zf"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                    new field({
                      type : field.TYPE_MFFLOAT,
                      name : new SFString("Sd"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                    new field({
                      type : field.TYPE_MFVEC2F,
                      name : new SFString("Af"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                    new field({
                      type : field.TYPE_MFINT32,
                      name : new SFString("Bf"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("Cf"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("p"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      value : new SFString("true")}),

                    new field({
                      type : field.TYPE_MFVEC3F,
                      name : new SFString("coord"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                    new field({
                      type : field.TYPE_MFINT32,
                      name : new SFString("coordIndex"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                    new field({
                      type : field.TYPE_SFINT32,
                      name : new SFString("choice"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                    new field({
                      type : field.TYPE_SFINT32,
                      name : new SFString("Df"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      value : new SFString("8")}),

                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("scale"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      value : new SFString("1 1 1")})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Switch({
                      DEF : new SFString("Ef_1"),
                      whichChoice : new SFInt32(-1),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("whichChoice"),
                              protoField : new SFString("choice")})])})),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  DEF : new SFString("Ff"),
                                  IS : new SFNode(
                                    new IS({
                                      connect : new MFNode([
                                        new connect({
                                          nodeField : new SFString("emissiveColor"),
                                          protoField : new SFString("diffuseColor")})])}))}))})),
                          geometry : new SFNode(
                            new IndexedLineSet({
                              DEF : new SFString("Gf_1"),
                              IS : new SFNode(
                                new IS({
                                  connect : new MFNode([
                                    new connect({
                                      nodeField : new SFString("coordIndex"),
                                      protoField : new SFString("coordIndex")})])})),
                              coord : new SFNode(
                                new Coordinate({
                                  DEF : new SFString("Hf_1"),
                                  IS : new SFNode(
                                    new IS({
                                      connect : new MFNode([
                                        new connect({
                                          nodeField : new SFString("point"),
                                          protoField : new SFString("coord")})])}))}))}))})])}),

                    new Script({
                      DEF : new SFString("If_1"),
                      directOutput : new SFBool(true),
                      field : new MFNode([
                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("set_p"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("w"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("p_changed"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_MFVEC3F,
                          name : new SFString("point_changed"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_MFINT32,
                          name : new SFString("zf_changed"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_MFFLOAT,
                          name : new SFString("Sd_changed"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_MFVEC2F,
                          name : new SFString("Af_changed"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_MFINT32,
                          name : new SFString("Bf_changed"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("Cf_changed"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_MFVEC3F,
                          name : new SFString("coord"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_MFINT32,
                          name : new SFString("coordIndex"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("p"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_MFVEC3F,
                          name : new SFString("point"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_MFINT32,
                          name : new SFString("zf"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_MFFLOAT,
                          name : new SFString("Sd"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_MFVEC2F,
                          name : new SFString("Af"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_MFINT32,
                          name : new SFString("Bf"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("Cf"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFINT32,
                          name : new SFString("Df"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFNODE,
                          name : new SFString("ma"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          children : new MFNode([
                            new Switch({
                              USE : new SFString("Ef_1")})])}),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("set_p"),
                              protoField : new SFString("set_p")}),

                            new connect({
                              nodeField : new SFString("w"),
                              protoField : new SFString("w")}),

                            new connect({
                              nodeField : new SFString("p_changed"),
                              protoField : new SFString("p_changed")}),

                            new connect({
                              nodeField : new SFString("point_changed"),
                              protoField : new SFString("point_changed")}),

                            new connect({
                              nodeField : new SFString("zf_changed"),
                              protoField : new SFString("zf_changed")}),

                            new connect({
                              nodeField : new SFString("Sd_changed"),
                              protoField : new SFString("Sd_changed")}),

                            new connect({
                              nodeField : new SFString("Af_changed"),
                              protoField : new SFString("Af_changed")}),

                            new connect({
                              nodeField : new SFString("Bf_changed"),
                              protoField : new SFString("Bf_changed")}),

                            new connect({
                              nodeField : new SFString("Cf_changed"),
                              protoField : new SFString("Cf_changed")}),

                            new connect({
                              nodeField : new SFString("p"),
                              protoField : new SFString("p")}),

                            new connect({
                              nodeField : new SFString("point"),
                              protoField : new SFString("point")}),

                            new connect({
                              nodeField : new SFString("zf"),
                              protoField : new SFString("zf")}),

                            new connect({
                              nodeField : new SFString("Sd"),
                              protoField : new SFString("Sd")}),

                            new connect({
                              nodeField : new SFString("Af"),
                              protoField : new SFString("Af")}),

                            new connect({
                              nodeField : new SFString("Bf"),
                              protoField : new SFString("Bf")}),

                            new connect({
                              nodeField : new SFString("Cf"),
                              protoField : new SFString("Cf")}),

                            new connect({
                              nodeField : new SFString("Df"),
                              protoField : new SFString("Df")})])})]),
                      javascript:
, function Jf(Kf,Lf,
Mf,Nf,Of,Pf,Qf,Rf){
Sf=coord.length;
coord.length+=Df;
for(J=0;J<Df;J++){
var Tf=Kf.multiply(Of[J]);
Tf=Tf.add(Lf.multiply(Pf[J]));
Tf=Tf.add(Mf.multiply(Qf[J]));
Tf=Tf.add(Nf.multiply(Rf[J]));
coord[Sf+J]=Tf;
}
}
, function Uf(){
if(point.length==0)return;
var index=0;
var Vf=new SFVec3f();
var Kf=new SFVec3f();
var Lf=new SFVec3f();
var Mf=new SFVec3f();
var Nf=new SFVec3f();
var Wf=new SFVec3f();
var Xf=new SFVec3f();
var Yf=new SFVec3f();
var Zf=new SFVec3f();
var ag=FALSE;
var bg=FALSE;
var cg=FALSE;
var dg=FALSE;
var eg=FALSE;
var fg=FALSE;
if(zf[index]==1){
Vf=point[index];
ag=TRUE;
Xf=point[index];
cg=TRUE;
index++;
}
if(zf[index]==0){
Kf=point[index];
Yf=point[index];
index++;
}
if(zf[index]==2){
Lf=point[index];
dg=TRUE;
Zf=point[index];
fg=TRUE;
index++;
}
var Of=new MFFloat();
var Pf=new MFFloat();
var Qf=new MFFloat();
var Rf=new MFFloat();
Of.length=Pf.length=Qf.length=Rf.length=Df;
Of[0]=1;
Pf[0]=Qf[0]=Rf[0]=0;
for(J=1;J<Df;J++){
gg=(J*1.0)/Df;
Of[J]=(1-gg)*(1-gg)*(1-gg);
Pf[J]=3*gg*(1-gg)*(1-gg);
Qf[J]=3*gg*gg*(1-gg);
Rf[J]=gg*gg*gg;
}
while(index<zf.length){
bg=FALSE;
eg=FALSE;
if(zf[index]==1){
Mf=point[index];
bg=TRUE;
index++;
}
if((index<zf.length)&&(zf[index]==0)){
Nf=point[index];
index++;
}
if((index<zf.length)&&(zf[index]==2)){
Wf=point[index];
eg=TRUE;
index++;
}
if(dg&&bg){
Jf(Kf,Lf,
Mf,Nf,
Of,Pf,Qf,Rf);
}else if(dg){
Jf(Kf,Lf,
Nf,Nf,
Of,Pf,Qf,Rf);
}else if(bg){
Jf(Kf,Kf,
Mf,Nf,
Of,Pf,Qf,Rf);
}else{
coord[coord.length]=Kf;
}
Vf=Mf;
Kf=Nf;
Lf=Wf;
ag=bg;
dg=eg;
}
if(Cf){
if(eg&&cg){
Jf(Nf,Wf,
Xf,Yf,
Of,Pf,Qf,Rf);
}else if(eg){
Jf(Nf,Wf,
Yf,Yf,
Of,Pf,Qf,Rf);
}else if(cg){
Jf(Nf,Nf,
Xf,Yf,
Of,Pf,Qf,Rf);
}else{
coord[coord.length]=Nf;
}
coord[coord.length]=Yf;
}else{
coord[coord.length]=Nf;
}
coordIndex.length=coord.length+1;
for(J=0;J<coord.length;J++){
coordIndex[J]=J;
}
coordIndex[coordIndex.length-1]=-1;
}
, function set_p(n){
if(n==TRUE){
ma.whichChoice=0;
}else{
ma.whichChoice=-1;
}
p=n;
p_changed=n;
}
, function initialize(){
set_p(p);
Uf();
point_changed=point;
zf_changed=zf;
Sd_changed=Sd;
Af_changed=Af;
Bf_changed=Bf;
Cf_changed=Cf;
}
, function w(){
})}),

                    new ROUTE({
                      fromNode : new SFString("If_1"),
                      fromField : new SFString("coord"),
                      toNode : new SFString("Hf_1"),
                      toField : new SFString("set_point")}),

                    new ROUTE({
                      fromNode : new SFString("If_1"),
                      fromField : new SFString("coordIndex"),
                      toNode : new SFString("Gf_1"),
                      toField : new SFString("set_coordIndex")})])}))}),

            new ProtoDeclare({
              name : new SFString("hg"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("set_position"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("set_orientation"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_SFNODE,
                      name : new SFString("U"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("offset"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("ig"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("jg"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("center"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("T"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      value : new SFString("true")}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("kg"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      value : new SFString("true")})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Script({
                      directOutput : new SFBool(true),
                      field : new MFNode([
                        new field({
                          type : field.TYPE_SFVEC3F,
                          name : new SFString("set_position"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFROTATION,
                          name : new SFString("set_orientation"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFNODE,
                          name : new SFString("U"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFVEC3F,
                          name : new SFString("offset"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFROTATION,
                          name : new SFString("ig"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("kg"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFVEC3F,
                          name : new SFString("lg"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFVEC3F,
                          name : new SFString("ff"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("set_position"),
                              protoField : new SFString("set_position")}),

                            new connect({
                              nodeField : new SFString("set_orientation"),
                              protoField : new SFString("set_orientation")}),

                            new connect({
                              nodeField : new SFString("U"),
                              protoField : new SFString("U")}),

                            new connect({
                              nodeField : new SFString("offset"),
                              protoField : new SFString("offset")}),

                            new connect({
                              nodeField : new SFString("ig"),
                              protoField : new SFString("ig")}),

                            new connect({
                              nodeField : new SFString("kg"),
                              protoField : new SFString("kg")})])})]),
                      javascript:
, function Re(U,Se){
var Te=new VrmlMatrix();
for(var J=U.C.length-1;J>=0;J--){
Te.setTransform(U.C[J].translation,
U.C[J].rotation,
U.C[J].scale,
U.C[J].scaleOrientation,
U.C[J].center);
Se.multRight(Te);
}
}
, function Ue(Ve,Se){
var We=Ve;
while(We.G==FALSE){
Re(We,Se);
We=We.B;
}
}
, function set_orientation(mg)
{
if(!kg){
var ng=new VrmlMatrix();
Ue(U.B,ng);
var og=ng.inverse();
var pg=og.multVecMatrix(lg);
var qg=new SFVec3f();
var rg=new SFRotation();
var sg=new SFVec3f();
og.getTransform(qg,rg,sg);
var tg=mg.multiply(rg);
var ug=ig.multiply(tg);
var vg=ug.multVec(offset);
U.C[0].translation=pg.add(vg);
U.C[0].rotation=ug;
U.C[0].center=ff;
}
}
, function set_position(wg)
{
if(kg){
var ng=new VrmlMatrix();
Ue(U.B,ng);
var og=ng.inverse();
var pg=og.multVecMatrix(wg);
xg=new VrmlMatrix();
xg.setTransform(ff,
U.C[0].rotation,
U.C[0].scale,
U.C[0].scaleOrientation,
U.C[0].center);
vg=xg.multVecMatrix(offset);
U.C[0].translation=pg.add(vg);
U.C[0].center=ff;
}else{
lg=wg;
}
})})])}))}),

            new ProtoDeclare({
              name : new SFString("yg"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("set_fraction"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("R"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("zg"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("Ag"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("Bg"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("Cg"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("Dg"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFNODE,
                      name : new SFString("Eg"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("Fg"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("Gg"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("Hg"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      value : new SFString("0 0 1")}),

                    new field({
                      type : field.TYPE_SFINT32,
                      name : new SFString("reverse"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("Ig"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Script({
                      DEF : new SFString("I_3"),
                      directOutput : new SFBool(true),
                      field : new MFNode([
                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("set_fraction"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("R"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFVEC3F,
                          name : new SFString("zg"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_SFROTATION,
                          name : new SFString("Ag"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_SFVEC3F,
                          name : new SFString("Bg"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_SFROTATION,
                          name : new SFString("Cg"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("Dg"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_SFNODE,
                          name : new SFString("Jg"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("Fg"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("Gg"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFVEC3F,
                          name : new SFString("Hg"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFINT32,
                          name : new SFString("reverse"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("Ig"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("Kg"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("Lg"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("Qa"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("set_fraction"),
                              protoField : new SFString("set_fraction")}),

                            new connect({
                              nodeField : new SFString("R"),
                              protoField : new SFString("R")}),

                            new connect({
                              nodeField : new SFString("zg"),
                              protoField : new SFString("zg")}),

                            new connect({
                              nodeField : new SFString("Ag"),
                              protoField : new SFString("Ag")}),

                            new connect({
                              nodeField : new SFString("Bg"),
                              protoField : new SFString("Bg")}),

                            new connect({
                              nodeField : new SFString("Cg"),
                              protoField : new SFString("Cg")}),

                            new connect({
                              nodeField : new SFString("Dg"),
                              protoField : new SFString("Dg")}),

                            new connect({
                              nodeField : new SFString("Jg"),
                              protoField : new SFString("Eg")}),

                            new connect({
                              nodeField : new SFString("Fg"),
                              protoField : new SFString("Fg")}),

                            new connect({
                              nodeField : new SFString("Gg"),
                              protoField : new SFString("Gg")}),

                            new connect({
                              nodeField : new SFString("Hg"),
                              protoField : new SFString("Hg")}),

                            new connect({
                              nodeField : new SFString("reverse"),
                              protoField : new SFString("reverse")}),

                            new connect({
                              nodeField : new SFString("Ig"),
                              protoField : new SFString("Ig")})])})]),
                      javascript:
, function Re(U,Se){
var Te=new VrmlMatrix();
for(var J=U.C.length-1;J>=0;J--){
Te.setTransform(U.C[J].translation,
U.C[J].rotation,
U.C[J].scale,
U.C[J].scaleOrientation,
U.C[J].center);
Se.multRight(Te);
}
}
, function Ue(Ve,Se){
var We=Ve;
while(We.G==FALSE){
Re(We,Se);
We=We.B;
}
}
, function Mg(Se){
Re(Jg,Se);
Ue(Jg.B,Se);
}
, function R(n,Za)
{
Dg=Za;
var J=0;
var Ng=0;
while((J<Jg.zf_changed.length)&&(Ng<2)){
if(Jg.zf_changed[J]==0){
Ng=Ng+1;
}
J++;
}
if(Ng<2){
Kg=TRUE;
}
else{
Kg=FALSE;
}
if(Ig==FALSE){
Lg=0;
}else{
Lg=Qa;
}
}
, function Og(Pg,Za)
{
Qg=new MFVec3f();
Qg[0]=Pg[0].add((Pg[1].add(Pg[0].negate())).multiply(Za));
Qg[1]=Pg[1].add((Pg[2].add(Pg[1].negate())).multiply(Za));
Qg[2]=Pg[2].add((Pg[3].add(Pg[2].negate())).multiply(Za));
Rg=new MFVec3f();
Rg[0]=Qg[0].add((Qg[1].add(Qg[0].negate())).multiply(Za));
Rg[1]=Qg[1].add((Qg[2].add(Qg[1].negate())).multiply(Za));
Sg=Rg[0].add((Rg[1].add(Rg[0].negate())).multiply(Za));
return Sg;
}
, function Tg(index)
{
Pg=new MFVec3f();
Pg[0]=Jg.point_changed[index];
index=(index+1)%Jg.zf_changed.length;
if(Jg.zf_changed[index]==2)
{
Pg[1]=Jg.point_changed[index];
index=(index+1)%Jg.zf_changed.length;
}
else if(Jg.zf_changed[index]==0)
{
Pg[3]=Jg.point_changed[index];
Pg[1]=(Pg[3].subtract(Pg[0])).multiply(1.0/3.0).add(Pg[0]);
Pg[2]=(Pg[3].subtract(Pg[0])).multiply(2.0/3.0).add(Pg[0]);
return Pg;
}
else
{
Pg[1]=Pg[0];
}
Pg[2]=Jg.point_changed[index];
if(Jg.zf_changed[index]==1)
{
index=(index+1)%Jg.zf_changed.length;
}
Pg[3]=Jg.point_changed[index];
return Pg;
}
, function Ug(n)
{
var Vg=0;
for(J=0;J<Jg.Sd_changed.length-1;J++){
if((n>=Jg.Sd_changed[J])&&
(n<=Jg.Sd_changed[J+1])){
Vg=J;
break;
}
}
return Vg;
}
, function Wg(Za,Vg)
{
Sd=(Za-Jg.Sd_changed[Vg])/(Jg.Sd_changed[Vg+1]-Jg.Sd_changed[Vg]);
return Sd;
}
, function Xg(Vg)
{
Yg=0;
Zg=-1;
for(J=0;J<Jg.zf_changed.length;J++){
if(Jg.zf_changed[J]==0){
if(Yg==Vg){
Zg=J;
break;
}
Yg++;
}
}
return Zg;
}
, function ah(index,Za)
{
Pg=Tg(index);
bh=new MFVec3f();
bh[0]=Pg[1].add(Pg[0].negate());
bh[1]=Pg[2].add(Pg[1].negate());
bh[2]=Pg[3].add(Pg[2].negate());
ch=new MFVec3f();
ch[0]=bh[0].add((bh[1].add(bh[0].negate())).multiply(Za));
ch[1]=bh[1].add((bh[2].add(bh[1].negate())).multiply(Za));
dh=ch[0].add((ch[1].add(ch[0].negate())).multiply(Za));
eh=dh.length();
if(eh<1.e-5)
{
fh=Og(Pg,Za);
ba=(Za>0.5)?-0.01:0.01;
Yg=0;
while((eh<1.e-5)&&(Yg<10))
{
Yg=Yg+1;
Za=Za+ba;
gh=Og(Pg,Za);
dh=gh.subtract(fh);
eh=dh.length();
}
if(Za>0.5){dh=dh.negate();}
}
return dh;
}
, function hh(index,Za,ih)
{
ih=ih+Gg;
if(ih>1.0)
{
if(Jg.Cf_changed==TRUE)
{
ih=ih-1.0;
}
else
{
ih=1.0;
if(Za>=1.0){
return ah(index,Za);
}
}
}
Vg=Ug(ih);
jh=Wg(ih,Vg);
kh=Xg(Vg);
Pg=Tg(index);
fh=Og(Pg,Za);
if(kh!=index)
{
Pg=Tg(kh);
}
gh=Og(Pg,jh);
dh=gh.subtract(fh);
if(dh.length()<1.e-4)
{
return ah(index,Za);
}
return dh;
}
, function lh(index,Za,ih)
{
if(Kg){
return new SFVec3f(0,0,0);
}
if(Gg>0.0)
{
return hh(index,Za,ih);
}
else
{
return ah(index,Za);
}
}
, function mh()
{
return new SFVec3f(1.0,0.0,0.0);
}
, function nh(oh,ph)
{
if(Kg){
return 0.0;
}
if((oh.length()<0.0001)||(ph.length()<0.0001)){
return 0.0;
}
if(Hg.y>0.5){ph.y=0.0;}
oh=oh.normalize();
ph=ph.normalize();
dot=oh.dot(ph);
if(dot<-1.0){dot=-1.0;}
else if(dot>1.0){dot=1.0;}
angle=Math.acos(dot);
qh=oh.cross(ph);
if(qh.dot(Hg)<0.0)
{angle=-angle;}
return angle;
}
, function set_fraction(n){
n+=Lg;
if(n>1){
n-=1;
}
Qa=n;
if(reverse!=0){
n=1.0-n;
}
var rh=new VrmlMatrix();
Mg(rh);
sh=new SFVec3f;
th=new SFRotation;
uh=new SFVec3f;
rh.getTransform(sh,th,uh);
if(Kg)
{
var J=0;
while(J<Jg.point_changed.length){
if(Jg.zf_changed[J]==0){
zg=Jg.point_changed[J];
Bg=rh.multVecMatrix(zg);
if(Fg)
{
Ag=new SFRotation(0.0,0.0,0.0,1.0);
Cg=Ag.multiply(th);
}
return;
}
J=J+1;
}
return;
}
if(n<=0.0){
vh=-1;
if(Jg.zf_changed[0]==0){
vh=0;
}else if(Jg.zf_changed[0]==1){
vh=1;
}
zg=Jg.point_changed[vh];
Bg=rh.multVecMatrix(zg);
if(Fg)
{
wh=lh(vh,0.0,n);
xh=mh();
angle=nh(xh,wh);
Ag=new SFRotation(Hg,angle);
Cg=Ag.multiply(th);
}
return;
}
if(n>=1.0){
if(Jg.Cf_changed==FALSE){
yh=Jg.point_changed.length-1;
if(Jg.zf_changed[yh]==0){
zg=Jg.point_changed[yh];
}else if(Jg.zf_changed[yh]==2){
zg=Jg.point_changed[yh-1];
}
}else{
if(Jg.zf_changed[0]==0){
zg=Jg.point_changed[0];
}else if(Jg.zf_changed[0]==1){
zg=Jg.point_changed[1];
}
}
Bg=rh.multVecMatrix(zg);
if(Fg)
{
J=Jg.point_changed.length;
Ng=1;
if(Jg.Cf_changed==FALSE){
Ng=Ng+1;
}
Yg=0;
while((J>=0)&&(Yg<Ng)){
J--;
if(Jg.zf_changed[J]==0){
Yg=Yg+1;
}
}
if(J>=0)
{
wh=lh(J,1.0,n);
xh=mh();
angle=nh(xh,wh);
Ag=new SFRotation(Hg,angle);
Cg=Ag.multiply(th);
}
else
{
Ag=new SFRotation(0.0,0.0,0.0,1.0);
Cg=Ag.multiply(th);
}
}
return;
}
Vg=Ug(n);
Sd=Wg(n,Vg);
zh=-1;
Zg=Xg(Vg);
if(Jg.zf_changed[(Zg+1)%Jg.zf_changed.length]==0){
zh=(Zg+1)%Jg.zf_changed.length;
Ah=Jg.point_changed[Zg].multiply(1-Sd);
Bh=Jg.point_changed[zh].multiply(Sd);
zg=Ah.add(Bh);
Bg=rh.multVecMatrix(zg);
if(Fg)
{
wh=lh(Zg,Sd,n);
xh=mh();
angle=nh(xh,wh);
Ag=new SFRotation(Hg,angle);
Cg=Ag.multiply(th);
}
return;
}
if(Jg.zf_changed[(Zg+2)%Jg.zf_changed.length]==0){
zh=(Zg+2)%Jg.zf_changed.length;
}else{
zh=(Zg+3)%Jg.zf_changed.length;
}
index=Jg.Bf_changed[Vg];
Ch=Jg.Af_changed[index][0];
while(Ch<=Jg.Af_changed[index][0]){
Dh=Jg.Af_changed[index+1][0];
if((Sd>=Ch)&&(Sd<=Dh)){
Eh=(Sd-Ch)/(Dh-Ch);
gg=Jg.Af_changed[index][1]*(1.0-Eh)+
Jg.Af_changed[index+1][1]*Eh;
break;
}
index++;
Ch=Dh;
}
Of=(1-gg)*(1-gg)*(1-gg);
Pf=3*(1-gg)*(1-gg)*gg;
Qf=3*(1-gg)*gg*gg;
Rf=gg*gg*gg;
Fh=(Zg+1)%Jg.point_changed.length;
if(((Zg+3)%Jg.point_changed.length)==zh){
Gh=Jg.point_changed[Zg].multiply(Of);
Ah=Jg.point_changed[Fh].multiply(Pf);
Bh=Jg.point_changed[zh-1].multiply(Qf);
Hh=Jg.point_changed[zh].multiply(Rf);
}else if(Jg.zf_changed[Fh]==2){
Gh=Jg.point_changed[Zg].multiply(Of);
Ah=Jg.point_changed[Fh].multiply(Pf);
Bh=Jg.point_changed[zh].multiply(Qf);
Hh=Jg.point_changed[zh].multiply(Rf);
}else if(Jg.zf_changed[Fh]==1){
Gh=Jg.point_changed[Zg].multiply(Of);
Ah=Jg.point_changed[Zg].multiply(Pf);
Bh=Jg.point_changed[zh-1].multiply(Qf);
Hh=Jg.point_changed[zh].multiply(Rf);
}
zg=Gh.add(Ah).add(Bh).add(Hh);
Bg=rh.multVecMatrix(zg);
if(Fg)
{
wh=lh(Zg,gg,n);
xh=mh();
Ag=new SFRotation(Hg,nh(xh,wh));
Cg=Ag.multiply(th);
}
}
, function initialize(){
Jg.w=TRUE;
})})])}))}),

            new ProtoDeclare({
              name : new SFString("Ih"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("set_intensity"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("set_startTime"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("set_stopTime"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("w"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("intensity_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("Jh"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("pitch"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("1")}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("loop"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                    new field({
                      type : field.TYPE_SFNODE,
                      name : new SFString("B"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                    new field({
                      type : field.TYPE_MFNODE,
                      name : new SFString("C"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                    new field({
                      type : field.TYPE_MFSTRING,
                      name : new SFString("url"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("intensity"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      value : new SFString("1")})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Sound({
                      DEF : new SFString("Kh_1"),
                      spatialize : new SFBool(false),
                      minBack : new SFFloat(1000000),
                      minFront : new SFFloat(1000000),
                      maxBack : new SFFloat(1000000),
                      maxFront : new SFFloat(1000000),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("intensity"),
                              protoField : new SFString("intensity")})])})),
                      source : new SFNode(
                        new AudioClip({
                          DEF : new SFString("Lh_1"),
                          IS : new SFNode(
                            new IS({
                              connect : new MFNode([
                                new connect({
                                  nodeField : new SFString("url"),
                                  protoField : new SFString("url")}),

                                new connect({
                                  nodeField : new SFString("pitch"),
                                  protoField : new SFString("pitch")}),

                                new connect({
                                  nodeField : new SFString("loop"),
                                  protoField : new SFString("loop")}),

                                new connect({
                                  nodeField : new SFString("duration_changed"),
                                  protoField : new SFString("Jh")})])}))}))}),

                    new Script({
                      DEF : new SFString("Mh_1"),
                      directOutput : new SFBool(true),
                      field : new MFNode([
                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("set_intensity"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("set_startTime"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("set_stopTime"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("w"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("intensity_changed"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("startTime_changed"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("stopTime_changed"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("intensity"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("set_intensity"),
                              protoField : new SFString("set_intensity")}),

                            new connect({
                              nodeField : new SFString("set_startTime"),
                              protoField : new SFString("set_startTime")}),

                            new connect({
                              nodeField : new SFString("set_stopTime"),
                              protoField : new SFString("set_stopTime")}),

                            new connect({
                              nodeField : new SFString("w"),
                              protoField : new SFString("w")}),

                            new connect({
                              nodeField : new SFString("intensity_changed"),
                              protoField : new SFString("intensity_changed")}),

                            new connect({
                              nodeField : new SFString("intensity"),
                              protoField : new SFString("intensity")})])})]),
                      javascript:
, function initialize(){
intensity_changed=intensity;
}
, function set_intensity(n){
intensity=n;
intensity_changed=n;
}
, function set_startTime(n){
startTime_changed=n;
}
, function set_stopTime(n){
stopTime_changed=n;
}
, function w(){
})}),

                    new ROUTE({
                      fromNode : new SFString("Mh_1"),
                      fromField : new SFString("startTime_changed"),
                      toNode : new SFString("Lh_1"),
                      toField : new SFString("set_startTime")}),

                    new ROUTE({
                      fromNode : new SFString("Mh_1"),
                      fromField : new SFString("stopTime_changed"),
                      toNode : new SFString("Lh_1"),
                      toField : new SFString("set_stopTime")}),

                    new ROUTE({
                      fromNode : new SFString("Mh_1"),
                      fromField : new SFString("intensity_changed"),
                      toNode : new SFString("Kh_1"),
                      toField : new SFString("set_intensity")})])}))}),

            new ProtoDeclare({
              name : new SFString("Nh"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("R"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("S"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("set_intensity"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("set_fraction"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("Jh"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("startTime"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("stopTime"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFNODE,
                      name : new SFString("Oh"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("loop"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("intensity"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      value : new SFString("1")}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("pitch"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      value : new SFString("1")}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("Qa"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("Ph"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("duration"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("Qh"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("Rh"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Script({
                      DEF : new SFString("Sh"),
                      directOutput : new SFBool(true),
                      field : new MFNode([
                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("R"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("S"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("set_intensity"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("set_fraction"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("Jh"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("startTime"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("stopTime"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_SFNODE,
                          name : new SFString("Oh"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("loop"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("intensity"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("pitch"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("duration"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("Qh"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("Rh"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("Th"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("Qa"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("Ph"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("Uh"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("Vh"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          value : new SFString("-1")}),

                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("ea"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("fa"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("R"),
                              protoField : new SFString("R")}),

                            new connect({
                              nodeField : new SFString("S"),
                              protoField : new SFString("S")}),

                            new connect({
                              nodeField : new SFString("set_intensity"),
                              protoField : new SFString("set_intensity")}),

                            new connect({
                              nodeField : new SFString("set_fraction"),
                              protoField : new SFString("set_fraction")}),

                            new connect({
                              nodeField : new SFString("Jh"),
                              protoField : new SFString("Jh")}),

                            new connect({
                              nodeField : new SFString("startTime"),
                              protoField : new SFString("startTime")}),

                            new connect({
                              nodeField : new SFString("stopTime"),
                              protoField : new SFString("stopTime")}),

                            new connect({
                              nodeField : new SFString("Oh"),
                              protoField : new SFString("Oh")}),

                            new connect({
                              nodeField : new SFString("loop"),
                              protoField : new SFString("loop")}),

                            new connect({
                              nodeField : new SFString("intensity"),
                              protoField : new SFString("intensity")}),

                            new connect({
                              nodeField : new SFString("pitch"),
                              protoField : new SFString("pitch")}),

                            new connect({
                              nodeField : new SFString("duration"),
                              protoField : new SFString("duration")}),

                            new connect({
                              nodeField : new SFString("Qh"),
                              protoField : new SFString("Qh")}),

                            new connect({
                              nodeField : new SFString("Rh"),
                              protoField : new SFString("Rh")}),

                            new connect({
                              nodeField : new SFString("Qa"),
                              protoField : new SFString("Qa")}),

                            new connect({
                              nodeField : new SFString("Ph"),
                              protoField : new SFString("Ph")})])})]),
                      javascript:
, function initialize(){
if(Qh){
Oh.set_intensity=0;
}else{
Oh.set_intensity=intensity;
}
Oh.loop=loop;
Oh.pitch=pitch;
}
, function R(n,time){
if(fa==n){
return;
}
if((Th==TRUE)&&(Vh==-1)){
ea=n;
return;
}
if(Uh==FALSE){
Vh=n;
startTime=n;
Th=TRUE;
return;
}
if(Qh){
Oh.set_intensity=0;
}else{
Oh.set_intensity=intensity;
}
Oh.loop=loop;
Oh.pitch=pitch;
if(Vh>0){
Oh.set_startTime=Vh;
Oh.set_stopTime=Vh-1;
}else{
var Wh=n-(duration/pitch)*Qa;
Oh.set_startTime=Wh;
Oh.set_stopTime=Wh-1;
}
if(Th==FALSE){
startTime=n;
Th=TRUE;
}
Vh=-1;
fa=n;
}
, function S(n,time){
if(!Th){
return;
}
if(Ph==FALSE){
Qa=0;
}
if(Qa==1){
Qa=0;
}
Oh.set_stopTime=n;
stopTime=n;
Th=FALSE;
Vh=-1;
if(Qh){
Oh.set_intensity=0;
}else{
Oh.set_intensity=intensity;
}
if(ea==n){
R(n,time);
}
}
, function set_intensity(n,time){
if(Qh||Rh){
Oh.set_intensity=n*intensity;
}
}
, function set_fraction(n){
Qa=n;
}
, function Jh(n,Za){
Uh=TRUE;
if(Vh>0){
R(Za,Za);
}
})})])}))}),

            new ProtoDeclare({
              name : new SFString("Xh"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("R"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("S"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("R_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("Yh"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Script({
                      DEF : new SFString("jb_2"),
                      directOutput : new SFBool(true),
                      field : new MFNode([
                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("R"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("S"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("R_changed"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("Yh"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("aa"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("ea"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("fa"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("R"),
                              protoField : new SFString("R")}),

                            new connect({
                              nodeField : new SFString("S"),
                              protoField : new SFString("S")}),

                            new connect({
                              nodeField : new SFString("R_changed"),
                              protoField : new SFString("R_changed")}),

                            new connect({
                              nodeField : new SFString("Yh"),
                              protoField : new SFString("Yh")})])})]),
                      javascript:
, function initialize(){
aa=FALSE;
}
, function R(n){
if(fa==n){
return;
}
if(aa==TRUE){
ea=n;
return;
}
aa=TRUE;
R_changed=n;
fa=n;
}
, function S(n){
Yh=n;
aa=FALSE;
if(ea==n){
R(n);
}
})})])}))}),

            new ProtoDeclare({
              name : new SFString("Zh"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("set_p"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_MFVEC3F,
                      name : new SFString("set_coord"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_MFVEC2F,
                      name : new SFString("set_texCoord"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("set_hd"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("set_height"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_SFCOLOR,
                      name : new SFString("set_diffuseColor"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("w"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_SFNODE,
                      name : new SFString("set_v"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("p_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFVEC3F,
                      name : new SFString("coord_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFVEC2F,
                      name : new SFString("texCoord_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("hd_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("height_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFCOLOR,
                      name : new SFString("diffuseColor_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_SFNODE,
                      name : new SFString("v_changed"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                    new field({
                      type : field.TYPE_MFSTRING,
                      name : new SFString("url"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("transparency"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                    new field({
                      type : field.TYPE_SFCOLOR,
                      name : new SFString("emissiveColor"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                    new field({
                      type : field.TYPE_SFCOLOR,
                      name : new SFString("specularColor"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("shininess"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("0.2")}),

                    new field({
                      type : field.TYPE_SFVEC2F,
                      name : new SFString("q"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("-0.5 -0.5")}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("s"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                    new field({
                      type : field.TYPE_SFVEC2F,
                      name : new SFString("t"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("1 1")}),

                    new field({
                      type : field.TYPE_SFVEC2F,
                      name : new SFString("u"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                    new field({
                      type : field.TYPE_SFNODE,
                      name : new SFString("B"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                    new field({
                      type : field.TYPE_MFNODE,
                      name : new SFString("C"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                    new field({
                      type : field.TYPE_SFNODE,
                      name : new SFString("D"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT)}),

                    new field({
                      type : field.TYPE_SFINT32,
                      name : new SFString("F"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      value : new SFString("-1")}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("p"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      value : new SFString("true")}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("hd"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      value : new SFString("72")}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("height"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      value : new SFString("72")}),

                    new field({
                      type : field.TYPE_MFINT32,
                      name : new SFString("ai"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      value : new SFString("1 1")}),

                    new field({
                      type : field.TYPE_SFINT32,
                      name : new SFString("bi"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      value : new SFString("-1")}),

                    new field({
                      type : field.TYPE_SFCOLOR,
                      name : new SFString("Jb"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                    new field({
                      type : field.TYPE_SFCOLOR,
                      name : new SFString("Kb"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                    new field({
                      type : field.TYPE_SFINT32,
                      name : new SFString("Lb"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      value : new SFString("-1")}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("H"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      value : new SFString("true")}),

                    new field({
                      type : field.TYPE_SFVEC2F,
                      name : new SFString("ci"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      value : new SFString("1 1")}),

                    new field({
                      type : field.TYPE_SFCOLOR,
                      name : new SFString("diffuseColor"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      value : new SFString("1 1 1")}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("di"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                    new field({
                      type : field.TYPE_SFINT32,
                      name : new SFString("choice"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("ha"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                    new field({
                      type : field.TYPE_MFVEC3F,
                      name : new SFString("coord"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                    new field({
                      type : field.TYPE_MFVEC2F,
                      name : new SFString("texCoord"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                    new field({
                      type : field.TYPE_MFINT32,
                      name : new SFString("coordIndex"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                    new field({
                      type : field.TYPE_MFCOLOR,
                      name : new SFString("color"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Switch({
                      DEF : new SFString("ei_1"),
                      whichChoice : new SFInt32(-1),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("whichChoice"),
                              protoField : new SFString("choice")})])})),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              DEF : new SFString("fi_1"),
                              material : new SFNode(
                                new Material({
                                  IS : new SFNode(
                                    new IS({
                                      connect : new MFNode([
                                        new connect({
                                          nodeField : new SFString("diffuseColor"),
                                          protoField : new SFString("diffuseColor")}),

                                        new connect({
                                          nodeField : new SFString("specularColor"),
                                          protoField : new SFString("specularColor")}),

                                        new connect({
                                          nodeField : new SFString("emissiveColor"),
                                          protoField : new SFString("emissiveColor")}),

                                        new connect({
                                          nodeField : new SFString("shininess"),
                                          protoField : new SFString("shininess")}),

                                        new connect({
                                          nodeField : new SFString("transparency"),
                                          protoField : new SFString("transparency")})])}))})),
                              texture : new SFNode(
                                new ImageTexture({
                                  DEF : new SFString("gi_1"),
                                  IS : new SFNode(
                                    new IS({
                                      connect : new MFNode([
                                        new connect({
                                          nodeField : new SFString("url"),
                                          protoField : new SFString("url")})])}))})),
                              textureTransform : new SFNode(
                                new TextureTransform({
                                  DEF : new SFString("hi_1"),
                                  IS : new SFNode(
                                    new IS({
                                      connect : new MFNode([
                                        new connect({
                                          nodeField : new SFString("translation"),
                                          protoField : new SFString("u")}),

                                        new connect({
                                          nodeField : new SFString("rotation"),
                                          protoField : new SFString("s")}),

                                        new connect({
                                          nodeField : new SFString("scale"),
                                          protoField : new SFString("t")}),

                                        new connect({
                                          nodeField : new SFString("center"),
                                          protoField : new SFString("q")})])}))}))})),
                          geometry : new SFNode(
                            new IndexedFaceSet({
                              DEF : new SFString("ii_1"),
                              solid : new SFBool(false),
                              creaseAngle : new SFFloat(3),
                              IS : new SFNode(
                                new IS({
                                  connect : new MFNode([
                                    new connect({
                                      nodeField : new SFString("coordIndex"),
                                      protoField : new SFString("coordIndex")})])})),
                              texCoord : new SFNode(
                                new TextureCoordinate({
                                  DEF : new SFString("ki_1"),
                                  IS : new SFNode(
                                    new IS({
                                      connect : new MFNode([
                                        new connect({
                                          nodeField : new SFString("point"),
                                          protoField : new SFString("texCoord")})])}))})),
                              coord : new SFNode(
                                new Coordinate({
                                  DEF : new SFString("ji_1"),
                                  IS : new SFNode(
                                    new IS({
                                      connect : new MFNode([
                                        new connect({
                                          nodeField : new SFString("point"),
                                          protoField : new SFString("coord")})])}))}))}))}),

                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              DEF : new SFString("li_1"),
                              texture : new SFNode(
                                new ImageTexture({
                                  USE : new SFString("gi_1")})),
                              textureTransform : new SFNode(
                                new TextureTransform({
                                  USE : new SFString("hi_1")}))})),
                          geometry : new SFNode(
                            new IndexedFaceSet({
                              DEF : new SFString("mi_1"),
                              solid : new SFBool(false),
                              creaseAngle : new SFFloat(3),
                              IS : new SFNode(
                                new IS({
                                  connect : new MFNode([
                                    new connect({
                                      nodeField : new SFString("coordIndex"),
                                      protoField : new SFString("coordIndex")})])})),
                              color : new SFNode(
                                new Color({
                                  DEF : new SFString("oi_1"),
                                  IS : new SFNode(
                                    new IS({
                                      connect : new MFNode([
                                        new connect({
                                          nodeField : new SFString("color"),
                                          protoField : new SFString("color")})])}))})),
                              texCoord : new SFNode(
                                new TextureCoordinate({
                                  DEF : new SFString("pi_1"),
                                  IS : new SFNode(
                                    new IS({
                                      connect : new MFNode([
                                        new connect({
                                          nodeField : new SFString("point"),
                                          protoField : new SFString("texCoord")})])}))})),
                              coord : new SFNode(
                                new Coordinate({
                                  DEF : new SFString("ni_1"),
                                  IS : new SFNode(
                                    new IS({
                                      connect : new MFNode([
                                        new connect({
                                          nodeField : new SFString("point"),
                                          protoField : new SFString("coord")})])}))}))}))}),

                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              USE : new SFString("fi_1")})),
                          geometry : new SFNode(
                            new IndexedFaceSet({
                              USE : new SFString("mi_1")}))}),

                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              USE : new SFString("li_1")})),
                          geometry : new SFNode(
                            new IndexedFaceSet({
                              USE : new SFString("mi_1")}))})])}),

                    new Script({
                      DEF : new SFString("qi_1"),
                      directOutput : new SFBool(true),
                      field : new MFNode([
                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("set_p"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_MFVEC3F,
                          name : new SFString("set_coord"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_MFVEC2F,
                          name : new SFString("set_texCoord"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("set_hd"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("set_height"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFCOLOR,
                          name : new SFString("set_diffuseColor"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("w"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_SFNODE,
                          name : new SFString("set_v"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                        new field({
                          type : field.TYPE_MFINT32,
                          name : new SFString("coordIndex"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("p_changed"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_MFVEC3F,
                          name : new SFString("coord_changed"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_MFVEC2F,
                          name : new SFString("texCoord_changed"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_MFCOLOR,
                          name : new SFString("color_changed"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("hd_changed"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("height_changed"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_SFCOLOR,
                          name : new SFString("diffuseColor_changed"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_SFNODE,
                          name : new SFString("v_changed"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("p"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_MFVEC3F,
                          name : new SFString("coord"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_MFVEC2F,
                          name : new SFString("texCoord"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_MFCOLOR,
                          name : new SFString("color"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_MFINT32,
                          name : new SFString("ai"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("H"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFCOLOR,
                          name : new SFString("Jb"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFCOLOR,
                          name : new SFString("Kb"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFINT32,
                          name : new SFString("Lb"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("hd"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("height"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("di"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFCOLOR,
                          name : new SFString("diffuseColor"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                        new field({
                          type : field.TYPE_SFNODE,
                          name : new SFString("ma"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          children : new MFNode([
                            new Switch({
                              USE : new SFString("ei_1")})])}),

                        new field({
                          type : field.TYPE_SFNODE,
                          name : new SFString("ic"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          children : new MFNode([
                            new Appearance({
                              USE : new SFString("fi_1")})])}),

                        new field({
                          type : field.TYPE_SFNODE,
                          name : new SFString("jc"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          children : new MFNode([
                            new Appearance({
                              USE : new SFString("li_1")})])}),

                        new field({
                          type : field.TYPE_SFVEC2F,
                          name : new SFString("ci"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("set_p"),
                              protoField : new SFString("set_p")}),

                            new connect({
                              nodeField : new SFString("set_coord"),
                              protoField : new SFString("set_coord")}),

                            new connect({
                              nodeField : new SFString("set_texCoord"),
                              protoField : new SFString("set_texCoord")}),

                            new connect({
                              nodeField : new SFString("set_hd"),
                              protoField : new SFString("set_hd")}),

                            new connect({
                              nodeField : new SFString("set_height"),
                              protoField : new SFString("set_height")}),

                            new connect({
                              nodeField : new SFString("set_diffuseColor"),
                              protoField : new SFString("set_diffuseColor")}),

                            new connect({
                              nodeField : new SFString("w"),
                              protoField : new SFString("w")}),

                            new connect({
                              nodeField : new SFString("set_v"),
                              protoField : new SFString("set_v")}),

                            new connect({
                              nodeField : new SFString("p_changed"),
                              protoField : new SFString("p_changed")}),

                            new connect({
                              nodeField : new SFString("coord_changed"),
                              protoField : new SFString("coord_changed")}),

                            new connect({
                              nodeField : new SFString("texCoord_changed"),
                              protoField : new SFString("texCoord_changed")}),

                            new connect({
                              nodeField : new SFString("hd_changed"),
                              protoField : new SFString("hd_changed")}),

                            new connect({
                              nodeField : new SFString("height_changed"),
                              protoField : new SFString("height_changed")}),

                            new connect({
                              nodeField : new SFString("diffuseColor_changed"),
                              protoField : new SFString("diffuseColor_changed")}),

                            new connect({
                              nodeField : new SFString("v_changed"),
                              protoField : new SFString("v_changed")}),

                            new connect({
                              nodeField : new SFString("p"),
                              protoField : new SFString("p")}),

                            new connect({
                              nodeField : new SFString("ai"),
                              protoField : new SFString("ai")}),

                            new connect({
                              nodeField : new SFString("H"),
                              protoField : new SFString("H")}),

                            new connect({
                              nodeField : new SFString("Jb"),
                              protoField : new SFString("Jb")}),

                            new connect({
                              nodeField : new SFString("Kb"),
                              protoField : new SFString("Kb")}),

                            new connect({
                              nodeField : new SFString("Lb"),
                              protoField : new SFString("Lb")}),

                            new connect({
                              nodeField : new SFString("hd"),
                              protoField : new SFString("hd")}),

                            new connect({
                              nodeField : new SFString("height"),
                              protoField : new SFString("height")}),

                            new connect({
                              nodeField : new SFString("di"),
                              protoField : new SFString("di")}),

                            new connect({
                              nodeField : new SFString("diffuseColor"),
                              protoField : new SFString("diffuseColor")}),

                            new connect({
                              nodeField : new SFString("ci"),
                              protoField : new SFString("ci")})])})]),
                      javascript:
, function ld(){
ri=-0.5*hd/72;
si=-ri;
ti=-0.5*height/72;
ui=-ti;
if(di==FALSE){
vi=(si-ri)/ai[0];
wi=(ui-ti)/ai[1];
xi=1/ai[0];
yi=1/ai[1];
coord.length=(ai[0]+1)*(ai[1]+1);
texCoord.length=coord.length;
for(J=0;J<=ai[1];J++){
for(qc=0;qc<=ai[0];qc++){
index=J*(ai[0]+1)+qc;
if(qc==ai[0]){
coord[index].x=si;
}else{
coord[index].x=ri+qc*vi;
}
if(J==ai[1]){
coord[index].y=ui;
}else{
coord[index].y=ti+J*wi;
}
coord[index].z=0;
if(qc==ai[0]){
texCoord[index].x=.5+.5*ci[0];
}else{
texCoord[index].x=.5-.5*ci[0]+qc*xi*ci[0];
}
if(J==ai[1]){
texCoord[index].y=.5+.5*ci[1];
}else{
texCoord[index].y=.5-.5*ci[1]+J*yi*ci[1];
}
}
}
index=0;
for(J=0;J<ai[1];J++){
for(qc=0;qc<ai[0];qc++){
coordIndex[index++]=J*(ai[0]+1)+qc;
coordIndex[index++]=J*(ai[0]+1)+qc+1;
coordIndex[index++]=(J+1)*(ai[0]+1)+qc+1;
coordIndex[index++]=(J+1)*(ai[0]+1)+qc;
coordIndex[index++]=-1;
}
}
}else{
coord.length=1+(ai[0])*(ai[1]);
texCoord.length=1+(ai[0])*(ai[1]);
index=0;
coord[index].x=0;
coord[index].y=0;
coord[index].z=0;
texCoord[index].x=.5;
texCoord[index].y=.5;
zi=new MFVec3f();
zi.length=ai[0];
angle=0;
Ai=2*Math.PI/ai[0];
for(J=0;J<ai[0];J++){
zi[J].x=Math.cos(angle);
zi[J].y=Math.sin(angle);
zi[J].z=0;
angle+=Ai;
}
for(J=0;J<ai[1];J++){
Bi=0.5*hd*(J+1)/(ai[1]*72);
Ci=0.5*height*(J+1)/(ai[1]*72);
Di=0.5*(J+1)/ai[1];
for(qc=0;qc<ai[0];qc++){
index=1+J*(ai[0])+qc;
coord[index].x=zi[qc].x*Bi;
coord[index].y=zi[qc].y*Ci;
texCoord[index].x=0.5+zi[qc].x*Di*ci[0];
texCoord[index].y=0.5+zi[qc].y*Di*ci[1];
coord[index].z=0;
}
}
index=0;
for(J=0;J<ai[1];J++){
if(J==0){
for(qc=0;qc<ai[0];qc++){
coordIndex[index++]=0;
coordIndex[index++]=1+(J*ai[0])+qc;
Ei=(qc+1)%ai[0];
coordIndex[index++]=1+(J*ai[0])+Ei;
coordIndex[index++]=-1;
}
}else{
for(qc=0;qc<ai[0];qc++){
coordIndex[index++]=1+((J-1)*ai[0])+qc;
Ei=(qc+1)%ai[0];
coordIndex[index++]=1+(J*ai[0])+qc;
coordIndex[index++]=1+(J*ai[0])+Ei;
coordIndex[index++]=1+((J-1)*ai[0])+Ei;
coordIndex[index++]=-1;
}
}
}
}
hd_changed=hd;
height_changed=height;
coord_changed=coord;
texCoord_changed=texCoord;
}
, function gd(){
if((H==TRUE)&&(Lb==-1))return;
ri=-0.5*hd/72;
si=-ri;
ti=-0.5*height/72;
ui=-ti;
for(id=0;id<coord.length;id++){
if(Lb==0){
fraction=(coord[id].x-ri)/(si-ri);
}else if(Lb==1){
fraction=(coord[id].y-ti)/(ui-ti);
}else if((Lb==2)&&(di==TRUE)){
if(id==0){
fraction=0;
Fi=1;
}else{
fraction=Fi/ai[1];
if((id%ai[0])==0){
Fi++;
}
}
}
jd=new SFColor(0,0,0);
if(Lb==-1){
jd=diffuseColor;
}else{
jd.r=Kb.r*(1-fraction)+
Jb.r*fraction;
jd.g=Kb.g*(1-fraction)+
Jb.g*fraction;
jd.b=Kb.b*(1-fraction)+
Jb.b*fraction;
}
color[id]=jd;
}
color_changed=color;
}
, function set_p(n){
if(n==TRUE){
if(H==TRUE){
if(Lb>=0){
ma.whichChoice=2;
}else{
ma.whichChoice=0;
}
}else{
if(Lb>=0){
ma.whichChoice=3;
}else{
ma.whichChoice=1;
}
}
}else{
ma.whichChoice=-1;
}
p=n;
p_changed=n;
}
, function initialize(){
ld();
v_changed=ic.texture_changed;
diffuseColor_changed=diffuseColor;
gd();
set_p(p);
}
, function set_coord(n){
coord_changed=n;
}
, function set_texCoord(n){
texCoord_changed=n;
}
, function set_v(n){
ic.set_texture=n;
jc.set_texture=n;
v_changed=n;
}
, function set_hd(n){
hd=n;
ld();
}
, function set_height(n){
height=n;
ld();
}
, function set_diffuseColor(n){
diffuseColor=n;
diffuseColor_changed=n;
gd();
}
, function w(){
})}),

                    new ROUTE({
                      fromNode : new SFString("qi_1"),
                      fromField : new SFString("coord_changed"),
                      toNode : new SFString("ji_1"),
                      toField : new SFString("set_point")}),

                    new ROUTE({
                      fromNode : new SFString("qi_1"),
                      fromField : new SFString("texCoord_changed"),
                      toNode : new SFString("ki_1"),
                      toField : new SFString("set_point")}),

                    new ROUTE({
                      fromNode : new SFString("qi_1"),
                      fromField : new SFString("coordIndex"),
                      toNode : new SFString("ii_1"),
                      toField : new SFString("set_coordIndex")}),

                    new ROUTE({
                      fromNode : new SFString("qi_1"),
                      fromField : new SFString("coord_changed"),
                      toNode : new SFString("ni_1"),
                      toField : new SFString("set_point")}),

                    new ROUTE({
                      fromNode : new SFString("qi_1"),
                      fromField : new SFString("color_changed"),
                      toNode : new SFString("oi_1"),
                      toField : new SFString("set_color")}),

                    new ROUTE({
                      fromNode : new SFString("qi_1"),
                      fromField : new SFString("texCoord_changed"),
                      toNode : new SFString("pi_1"),
                      toField : new SFString("set_point")}),

                    new ROUTE({
                      fromNode : new SFString("qi_1"),
                      fromField : new SFString("coordIndex"),
                      toNode : new SFString("mi_1"),
                      toField : new SFString("set_coordIndex")}),

                    new ROUTE({
                      fromNode : new SFString("qi_1"),
                      fromField : new SFString("coordIndex"),
                      toNode : new SFString("mi_1"),
                      toField : new SFString("set_colorIndex")})])}))}),

            new WorldInfo({
              info : new MFString(["Published by Cosmo PageFX V1.0"]),
              metadata : new MFNode([
                new MetadataSet({
                  name : new SFString("Titania"),
                  DEF : new SFString("Titania"),
                  reference : new SFString("http://titania.create3000.de"),
                  value : new SFNode(
                    new MetadataSet({
                      name : new SFString("NavigationInfo"),
                      DEF : new SFString("NavigationInfo"),
                      reference : new SFString("http://titania.create3000.de"),
                      value : new SFNode(
                        new MetadataString({
                          name : new SFString("type"),
                          DEF : new SFString("type"),
                          reference : new SFString("http://titania.create3000.de"),
                          value : new MFString(["EXAMINE"])}))})),
                  value : new SFNode(
                    new MetadataSet({
                      name : new SFString("Viewpoint"),
                      DEF : new SFString("Viewpoint"),
                      reference : new SFString("http://titania.create3000.de"),
                      value : new SFNode(
                        new MetadataDouble({
                          name : new SFString("position"),
                          DEF : new SFString("position"),
                          reference : new SFString("http://titania.create3000.de"),
                          value : new MFDouble([0,0,5])})),
                      value : new SFNode(
                        new MetadataDouble({
                          name : new SFString("orientation"),
                          DEF : new SFString("orientation"),
                          reference : new SFString("http://titania.create3000.de"),
                          value : new MFDouble([0,0,1,0])})),
                      value : new SFNode(
                        new MetadataDouble({
                          name : new SFString("centerOfRotation"),
                          DEF : new SFString("centerOfRotation"),
                          reference : new SFString("http://titania.create3000.de"),
                          value : new MFDouble([0,0,0])}))}))})])}),

            new Group({
              DEF : new SFString("Gi"),
              children : new MFNode([
                new ProtoInstance({
                  name : new SFString("f"),
                  DEF : new SFString("Hi")}),

                new Viewpoint({
                  DEF : new SFString("Ii"),
                  description : new SFString("Home"),
                  position : new SFVec3f([0,0,5]),
                  fieldOfView : new SFFloat(0.3519)}),

                new NavigationInfo({
                  type : ["NONE"],
                  DEF : new SFString("Ji")}),

                new Background({
                  DEF : new SFString("Ki"),
                  skyColor : new MFColor([0.749,0.749,0.749])}),

                new ProtoInstance({
                  name : new SFString("o"),
                  DEF : new SFString("Li"),
                  fieldValue : new MFNode([
                    new fieldValue({
                      name : new SFString("G"),
                      value : new SFString("true")}),

                    new fieldValue({
                      name : new SFString("children"),
                      children : new MFNode([
                        new Transform({
                          DEF : new SFString("Mi"),
                          translation : new SFVec3f([-0.951,0.2225,2.99]),
                          rotation : new SFRotation([-0.145494,-0.989359,0,0.7418]),
                          children : new MFNode([
                            new Transform({
                              DEF : new SFString("Ni"),
                              children : new MFNode([
                                new ProtoInstance({
                                  name : new SFString("K"),
                                  DEF : new SFString("Oi"),
                                  fieldValue : new MFNode([
                                    new fieldValue({
                                      name : new SFString("B"),
                                      children : new MFNode([
                                        new ProtoInstance({
                                          USE : new SFString("Li")})])}),

                                    new fieldValue({
                                      name : new SFString("C"),
                                      children : new MFNode([
                                        new Transform({
                                          USE : new SFString("Mi")}),

                                        new Transform({
                                          USE : new SFString("Ni")})])}),

                                    new fieldValue({
                                      name : new SFString("L"),
                                      value : new SFString("1.528")}),

                                    new fieldValue({
                                      name : new SFString("attenuation"),
                                      value : new SFString("0.001 0.6545 0")})])})])})])}),

                        new Transform({
                          DEF : new SFString("Pi"),
                          translation : new SFVec3f([-1.271,-0.1785,0.68]),
                          rotation : new SFRotation([1,0,0,3.166]),
                          center : new SFVec3f([0,0,1.94e-8]),
                          children : new MFNode([
                            new ProtoInstance({
                              name : new SFString("Q"),
                              DEF : new SFString("Qi"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("center"),
                                  value : new SFString("0 0 1.94e-8")}),

                                new fieldValue({
                                  name : new SFString("U"),
                                  children : new MFNode([
                                    new ProtoInstance({
                                      name : new SFString("ga"),
                                      DEF : new SFString("Ri"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("url"),
                                          value : new SFString("\"stripe.png\"")}),

                                        new fieldValue({
                                          name : new SFString("diffuseColor"),
                                          value : new SFString("1 0 1")}),

                                        new fieldValue({
                                          name : new SFString("emissiveColor"),
                                          value : new SFString("0 0 0")}),

                                        new fieldValue({
                                          name : new SFString("specularColor"),
                                          value : new SFString("0.04 0.16 0.28")}),

                                        new fieldValue({
                                          name : new SFString("shininess"),
                                          value : new SFString("0.02")}),

                                        new fieldValue({
                                          name : new SFString("s"),
                                          value : new SFString("1.047")}),

                                        new fieldValue({
                                          name : new SFString("t"),
                                          value : new SFString("2 2")}),

                                        new fieldValue({
                                          name : new SFString("B"),
                                          children : new MFNode([
                                            new ProtoInstance({
                                              USE : new SFString("Li")})])}),

                                        new fieldValue({
                                          name : new SFString("C"),
                                          children : new MFNode([
                                            new Transform({
                                              USE : new SFString("Pi")}),

                                            new ProtoInstance({
                                              USE : new SFString("Qi")}),

                                            new Transform({
                                              DEF : new SFString("Si"),
                                              scale : new SFVec3f([0.5154,0.6149,0.5154]),
                                              children : new MFNode([
                                                new ProtoInstance({
                                                  name : new SFString("na"),
                                                  DEF : new SFString("Ti"),
                                                  fieldValue : new MFNode([
                                                    new fieldValue({
                                                      name : new SFString("oa"),
                                                      value : new SFString("1")})])}),

                                                new ProtoInstance({
                                                  USE : new SFString("Ri")}),

                                                new ProtoInstance({
                                                  name : new SFString("ra"),
                                                  DEF : new SFString("Ui"),
                                                  fieldValue : new MFNode([
                                                    new fieldValue({
                                                      name : new SFString("cycleInterval"),
                                                      value : new SFString("3")}),

                                                    new fieldValue({
                                                      name : new SFString("Da"),
                                                      value : new SFString("false")}),

                                                    new fieldValue({
                                                      name : new SFString("Ia"),
                                                      value : new SFString("true")})])}),

                                                new ProtoInstance({
                                                  name : new SFString("gb"),
                                                  DEF : new SFString("Vi"),
                                                  fieldValue : new MFNode([
                                                    new fieldValue({
                                                      name : new SFString("U"),
                                                      children : new MFNode([
                                                        new ProtoInstance({
                                                          USE : new SFString("Ri")})])}),

                                                    new fieldValue({
                                                      name : new SFString("direction"),
                                                      value : new SFString("1")})])}),

                                                new ProtoInstance({
                                                  name : new SFString("nb"),
                                                  DEF : new SFString("Wi")}),

                                                new ProtoInstance({
                                                  name : new SFString("ra"),
                                                  DEF : new SFString("Xi"),
                                                  fieldValue : new MFNode([
                                                    new fieldValue({
                                                      name : new SFString("Da"),
                                                      value : new SFString("false")}),

                                                    new fieldValue({
                                                      name : new SFString("Ia"),
                                                      value : new SFString("true")})])})])})])}),

                                        new fieldValue({
                                          name : new SFString("geometry"),
                                          children : new MFNode([
                                            new Cone({
                                              DEF : new SFString("_1"),
                                              height : new SFFloat(1),
                                              bottomRadius : new SFFloat(0.5)})])}),

                                        new fieldValue({
                                          name : new SFString("ha"),
                                          value : new SFString("0 0 0.25")})])})])}),

                                new fieldValue({
                                  name : new SFString("children"),
                                  children : new MFNode([
                                    new Transform({
                                      USE : new SFString("Si")})])})])})])}),

                        new Transform({
                          DEF : new SFString("Yi"),
                          translation : new SFVec3f([-0.6985,-0.1547,0.7377]),
                          rotation : new SFRotation([0,0,1,0.3252]),
                          center : new SFVec3f([0,0,-1.282e-8]),
                          children : new MFNode([
                            new ProtoInstance({
                              name : new SFString("Q"),
                              DEF : new SFString("Zi"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("center"),
                                  value : new SFString("0 0 -1.282e-8")}),

                                new fieldValue({
                                  name : new SFString("U"),
                                  children : new MFNode([
                                    new ProtoInstance({
                                      name : new SFString("ga"),
                                      DEF : new SFString("aj"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("url"),
                                          value : new SFString("\"globe.jpg\"")}),

                                        new fieldValue({
                                          name : new SFString("diffuseColor"),
                                          value : new SFString("0.6 0.6 0.6")}),

                                        new fieldValue({
                                          name : new SFString("emissiveColor"),
                                          value : new SFString("0.2 0.2 0.12")}),

                                        new fieldValue({
                                          name : new SFString("specularColor"),
                                          value : new SFString("0.8 0.8 0.8")}),

                                        new fieldValue({
                                          name : new SFString("shininess"),
                                          value : new SFString("0.15")}),

                                        new fieldValue({
                                          name : new SFString("B"),
                                          children : new MFNode([
                                            new ProtoInstance({
                                              USE : new SFString("Li")})])}),

                                        new fieldValue({
                                          name : new SFString("C"),
                                          children : new MFNode([
                                            new Transform({
                                              USE : new SFString("Yi")}),

                                            new ProtoInstance({
                                              USE : new SFString("Zi")}),

                                            new Transform({
                                              DEF : new SFString("bj"),
                                              scale : new SFVec3f([0.4064,0.4064,0.4064]),
                                              children : new MFNode([
                                                new ProtoInstance({
                                                  USE : new SFString("aj")}),

                                                new ProtoInstance({
                                                  name : new SFString("ra"),
                                                  DEF : new SFString("cj"),
                                                  fieldValue : new MFNode([
                                                    new fieldValue({
                                                      name : new SFString("cycleInterval"),
                                                      value : new SFString("6")}),

                                                    new fieldValue({
                                                      name : new SFString("Da"),
                                                      value : new SFString("false")}),

                                                    new fieldValue({
                                                      name : new SFString("Ia"),
                                                      value : new SFString("true")})])})])})])}),

                                        new fieldValue({
                                          name : new SFString("geometry"),
                                          children : new MFNode([
                                            new Sphere({
                                              DEF : new SFString("_2"),
                                              radius : new SFFloat(0.5)})])})])})])}),

                                new fieldValue({
                                  name : new SFString("children"),
                                  children : new MFNode([
                                    new Transform({
                                      USE : new SFString("bj")})])}),

                                new fieldValue({
                                  name : new SFString("W"),
                                  value : new SFString("1")})])})])}),

                        new Transform({
                          DEF : new SFString("dj"),
                          translation : new SFVec3f([-0.7941,-0.386,0.7019]),
                          center : new SFVec3f([0,0,-5.221e-9]),
                          children : new MFNode([
                            new Transform({
                              DEF : new SFString("ej"),
                              scale : new SFVec3f([0.0876,0.3115,0.0876]),
                              children : new MFNode([
                                new ProtoInstance({
                                  name : new SFString("ga"),
                                  DEF : new SFString("fj"),
                                  fieldValue : new MFNode([
                                    new fieldValue({
                                      name : new SFString("url"),
                                      value : new SFString("\"\"")}),

                                    new fieldValue({
                                      name : new SFString("diffuseColor"),
                                      value : new SFString("0.8 0 0")}),

                                    new fieldValue({
                                      name : new SFString("emissiveColor"),
                                      value : new SFString("0.15 0 0")}),

                                    new fieldValue({
                                      name : new SFString("B"),
                                      children : new MFNode([
                                        new ProtoInstance({
                                          USE : new SFString("Li")})])}),

                                    new fieldValue({
                                      name : new SFString("C"),
                                      children : new MFNode([
                                        new Transform({
                                          USE : new SFString("dj")}),

                                        new Transform({
                                          USE : new SFString("ej")})])}),

                                    new fieldValue({
                                      name : new SFString("geometry"),
                                      children : new MFNode([
                                        new Cylinder({
                                          DEF : new SFString("_3"),
                                          height : new SFFloat(1),
                                          radius : new SFFloat(0.5)})])})])})])})])}),

                        new Transform({
                          DEF : new SFString("gj"),
                          translation : new SFVec3f([-0.5524,-0.4097,0.6894]),
                          rotation : new SFRotation([0,0,1,0.7457]),
                          center : new SFVec3f([0,0,-5.221e-9]),
                          children : new MFNode([
                            new Transform({
                              DEF : new SFString("hj"),
                              scale : new SFVec3f([0.0876,0.3115,0.0876]),
                              children : new MFNode([
                                new ProtoInstance({
                                  name : new SFString("ga"),
                                  DEF : new SFString("ij"),
                                  fieldValue : new MFNode([
                                    new fieldValue({
                                      name : new SFString("url"),
                                      value : new SFString("\"\"")}),

                                    new fieldValue({
                                      name : new SFString("diffuseColor"),
                                      value : new SFString("1 0 0")}),

                                    new fieldValue({
                                      name : new SFString("emissiveColor"),
                                      value : new SFString("0.2 0 0")}),

                                    new fieldValue({
                                      name : new SFString("specularColor"),
                                      value : new SFString("0 0 0")}),

                                    new fieldValue({
                                      name : new SFString("shininess"),
                                      value : new SFString("0")}),

                                    new fieldValue({
                                      name : new SFString("B"),
                                      children : new MFNode([
                                        new ProtoInstance({
                                          USE : new SFString("Li")})])}),

                                    new fieldValue({
                                      name : new SFString("C"),
                                      children : new MFNode([
                                        new Transform({
                                          USE : new SFString("gj")}),

                                        new Transform({
                                          USE : new SFString("hj")})])}),

                                    new fieldValue({
                                      name : new SFString("geometry"),
                                      children : new MFNode([
                                        new Cylinder({
                                          DEF : new SFString("_4"),
                                          height : new SFFloat(1),
                                          radius : new SFFloat(0.5)})])})])})])})])}),

                        new Transform({
                          DEF : new SFString("jj"),
                          translation : new SFVec3f([-0.4473,-0.3719,0.6801]),
                          children : new MFNode([
                            new Transform({
                              DEF : new SFString("kj"),
                              scale : new SFVec3f([0.9219,0.9219,0.9219]),
                              children : new MFNode([
                                new ProtoInstance({
                                  name : new SFString("o"),
                                  DEF : new SFString("lj"),
                                  fieldValue : new MFNode([
                                    new fieldValue({
                                      name : new SFString("B"),
                                      children : new MFNode([
                                        new ProtoInstance({
                                          USE : new SFString("Li")})])}),

                                    new fieldValue({
                                      name : new SFString("C"),
                                      children : new MFNode([
                                        new Transform({
                                          USE : new SFString("jj")}),

                                        new Transform({
                                          USE : new SFString("kj")})])}),

                                    new fieldValue({
                                      name : new SFString("children"),
                                      children : new MFNode([
                                        new Transform({
                                          DEF : new SFString("mj"),
                                          translation : new SFVec3f([0,0,-0.005423]),
                                          children : new MFNode([
                                            new Transform({
                                              DEF : new SFString("nj"),
                                              scale : new SFVec3f([0.96,0.96,1]),
                                              children : new MFNode([
                                                new ProtoInstance({
                                                  name : new SFString("zb"),
                                                  DEF : new SFString("oj"),
                                                  fieldValue : new MFNode([
                                                    new fieldValue({
                                                      name : new SFString("url"),
                                                      value : new SFString("\"\"")}),

                                                    new fieldValue({
                                                      name : new SFString("emissiveColor"),
                                                      value : new SFString("0.01 0.18 0.1")}),

                                                    new fieldValue({
                                                      name : new SFString("specularColor"),
                                                      value : new SFString("0 0 0")}),

                                                    new fieldValue({
                                                      name : new SFString("shininess"),
                                                      value : new SFString("0")}),

                                                    new fieldValue({
                                                      name : new SFString("Cb"),
                                                      value : new SFString("0.9888")}),

                                                    new fieldValue({
                                                      name : new SFString("B"),
                                                      children : new MFNode([
                                                        new ProtoInstance({
                                                          USE : new SFString("lj")})])}),

                                                    new fieldValue({
                                                      name : new SFString("C"),
                                                      children : new MFNode([
                                                        new Transform({
                                                          USE : new SFString("mj")}),

                                                        new Transform({
                                                          USE : new SFString("nj")})])}),

                                                    new fieldValue({
                                                      name : new SFString("Fb"),
                                                      value : new SFString("true")}),

                                                    new fieldValue({
                                                      name : new SFString("Gb"),
                                                      value : new SFString("false")}),

                                                    new fieldValue({
                                                      name : new SFString("Hb"),
                                                      value : new SFString("0.01 0")}),

                                                    new fieldValue({
                                                      name : new SFString("Ib"),
                                                      value : new SFString("0.79 0.6")}),

                                                    new fieldValue({
                                                      name : new SFString("Mb"),
                                                      children : new MFNode([
                                                        new ProtoInstance({
                                                          name : new SFString("md"),
                                                          DEF : new SFString("pj"),
                                                          fieldValue : new MFNode([
                                                            new fieldValue({
                                                              name : new SFString("coord"),
                                                              value : new SFString("0.37 0 0 0.38 0 0 0.62 0.51 0 0.62 0.11 0 0.61 0.07 0 0.6 0.04 0 0.58 0.02 0 0.55 0.01 0 0.53 0.01 0 0.53 0 0 0.79 0 0 0.79 0.01 0 0.76 0.01 0 0.73 0.02 0 0.71 0.04 0 0.7 0.06 0 0.7 0.54 0 0.71 0.57 0 0.73 0.59 0 0.79 0.59 0 0.79 0.6 0 0.62 0.6 0 0.39 0.13 0 0.18 0.6 0 0.01 0.6 0 0.01 0.59 0 0.04 0.59 0 0.06 0.58 0 0.09 0.56 0 0.09 0.53 0 0.1 0.49 0 0.1 0.11 0 0.09 0.07 0 0.08 0.04 0 0.06 0.02 0 0.03 0.01 0 0.01 0.01 0 0.01 0 0 0.23 0 0 0.23 0.01 0 0.2 0.01 0 0.17 0.02 0 0.15 0.04 0 0.14 0.06 0 0.14 0.51 0")}),

                                                            new fieldValue({
                                                              name : new SFString("coordIndex"),
                                                              value : new SFString("30 28 29 -1 38 36 37 -1 36 38 35 -1 35 38 34 -1 34 38 33 -1 33 38 40 -1 33 40 41 -1 33 41 32 -1 32 41 42 -1 32 42 31 -1 31 42 43 -1 31 43 30 -1 40 38 39 -1 10 8 9 -1 8 10 7 -1 7 10 6 -1 6 10 5 -1 5 10 13 -1 5 13 4 -1 4 13 3 -1 3 13 14 -1 3 14 15 -1 3 15 2 -1 2 15 21 -1 13 10 12 -1 12 10 11 -1 21 18 20 -1 18 21 17 -1 17 21 16 -1 16 21 15 -1 20 18 19 -1 26 24 25 -1 24 26 23 -1 23 26 27 -1 23 27 28 -1 23 28 30 -1 23 30 44 -1 44 30 43 -1 23 44 0 -1 23 0 22 -1 22 0 1 -1 22 1 2 -1 22 2 21 -1")}),

                                                            new fieldValue({
                                                              name : new SFString("mc"),
                                                              value : new SFString("0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 -1")})])})])}),

                                                    new fieldValue({
                                                      name : new SFString("Ob"),
                                                      value : new SFString("0.04")}),

                                                    new fieldValue({
                                                      name : new SFString("Pb"),
                                                      value : new SFString("0.1389")}),

                                                    new fieldValue({
                                                      name : new SFString("creaseAngle"),
                                                      value : new SFString("0")}),

                                                    new fieldValue({
                                                      name : new SFString("diffuseColor"),
                                                      value : new SFString("0.03 0.49 0.22")})])})])})])})])}),

                                    new fieldValue({
                                      name : new SFString("A"),
                                      children : new MFNode([
                                        new ProtoInstance({
                                          USE : new SFString("oj")})])})])}),

                                new ProtoInstance({
                                  name : new SFString("ra"),
                                  DEF : new SFString("qj"),
                                  fieldValue : new MFNode([
                                    new fieldValue({
                                      name : new SFString("cycleInterval"),
                                      value : new SFString("4")}),

                                    new fieldValue({
                                      name : new SFString("Ca"),
                                      value : new SFString("3")}),

                                    new fieldValue({
                                      name : new SFString("Da"),
                                      value : new SFString("false")})])}),

                                new ProtoInstance({
                                  name : new SFString("nd"),
                                  DEF : new SFString("rj"),
                                  fieldValue : new MFNode([
                                    new fieldValue({
                                      name : new SFString("U"),
                                      children : new MFNode([
                                        new ProtoInstance({
                                          USE : new SFString("lj")})])}),

                                    new fieldValue({
                                      name : new SFString("hb"),
                                      value : new SFString("true")}),

                                    new fieldValue({
                                      name : new SFString("ib"),
                                      value : new SFString("true")}),

                                    new fieldValue({
                                      name : new SFString("pd"),
                                      value : new SFString("true")}),

                                    new fieldValue({
                                      name : new SFString("qd"),
                                      value : new SFString("true")}),

                                    new fieldValue({
                                      name : new SFString("rd"),
                                      value : new SFString("true")}),

                                    new fieldValue({
                                      name : new SFString("sd"),
                                      value : new SFString("true")}),

                                    new fieldValue({
                                      name : new SFString("td"),
                                      value : new SFString("true")}),

                                    new fieldValue({
                                      name : new SFString("vd"),
                                      value : new SFString("true")}),

                                    new fieldValue({
                                      name : new SFString("wd"),
                                      value : new SFString("true")}),

                                    new fieldValue({
                                      name : new SFString("xd"),
                                      value : new SFString("true")}),

                                    new fieldValue({
                                      name : new SFString("diffuseColor"),
                                      value : new SFString("0.76 1 0.76")}),

                                    new fieldValue({
                                      name : new SFString("emissiveColor"),
                                      value : new SFString("0.04 0 0.06")}),

                                    new fieldValue({
                                      name : new SFString("specularColor"),
                                      value : new SFString("0 0 0")}),

                                    new fieldValue({
                                      name : new SFString("shininess"),
                                      value : new SFString("0")})])})])})])}),

                        new Transform({
                          DEF : new SFString("sj"),
                          translation : new SFVec3f([1.264,-0.3495,0.7311]),
                          center : new SFVec3f([1.639e-7,0.2337,-0.007482]),
                          children : new MFNode([
                            new Transform({
                              DEF : new SFString("tj"),
                              children : new MFNode([
                                new ProtoInstance({
                                  name : new SFString("je"),
                                  DEF : new SFString("uj"),
                                  fieldValue : new MFNode([
                                    new fieldValue({
                                      name : new SFString("oa"),
                                      value : new SFString("1")})])}),

                                new ProtoInstance({
                                  name : new SFString("na"),
                                  DEF : new SFString("vj"),
                                  fieldValue : new MFNode([
                                    new fieldValue({
                                      name : new SFString("oa"),
                                      value : new SFString("1")})])}),

                                new ProtoInstance({
                                  name : new SFString("o"),
                                  DEF : new SFString("wj"),
                                  fieldValue : new MFNode([
                                    new fieldValue({
                                      name : new SFString("B"),
                                      children : new MFNode([
                                        new ProtoInstance({
                                          USE : new SFString("Li")})])}),

                                    new fieldValue({
                                      name : new SFString("C"),
                                      children : new MFNode([
                                        new Transform({
                                          USE : new SFString("sj")}),

                                        new Transform({
                                          USE : new SFString("tj")})])}),

                                    new fieldValue({
                                      name : new SFString("children"),
                                      children : new MFNode([
                                        new Transform({
                                          DEF : new SFString("xj"),
                                          translation : new SFVec3f([-0.3425,0,-0.004982]),
                                          children : new MFNode([
                                            new Transform({
                                              DEF : new SFString("yj"),
                                              scale : new SFVec3f([0.72,0.72,1]),
                                              children : new MFNode([
                                                new ProtoInstance({
                                                  name : new SFString("zb"),
                                                  DEF : new SFString("zj"),
                                                  fieldValue : new MFNode([
                                                    new fieldValue({
                                                      name : new SFString("url"),
                                                      value : new SFString("\"\"")}),

                                                    new fieldValue({
                                                      name : new SFString("emissiveColor"),
                                                      value : new SFString("0.1 0.02 0")}),

                                                    new fieldValue({
                                                      name : new SFString("specularColor"),
                                                      value : new SFString("0.1 0.1 0.1")}),

                                                    new fieldValue({
                                                      name : new SFString("shininess"),
                                                      value : new SFString("0.08")}),

                                                    new fieldValue({
                                                      name : new SFString("Cb"),
                                                      value : new SFString("0.4848")}),

                                                    new fieldValue({
                                                      name : new SFString("B"),
                                                      children : new MFNode([
                                                        new ProtoInstance({
                                                          USE : new SFString("wj")})])}),

                                                    new fieldValue({
                                                      name : new SFString("C"),
                                                      children : new MFNode([
                                                        new Transform({
                                                          USE : new SFString("xj")}),

                                                        new Transform({
                                                          USE : new SFString("yj")})])}),

                                                    new fieldValue({
                                                      name : new SFString("Fb"),
                                                      value : new SFString("true")}),

                                                    new fieldValue({
                                                      name : new SFString("Gb"),
                                                      value : new SFString("false")}),

                                                    new fieldValue({
                                                      name : new SFString("Hb"),
                                                      value : new SFString("0.03214 -0.006429")}),

                                                    new fieldValue({
                                                      name : new SFString("Ib"),
                                                      value : new SFString("0.9193 0.6557")}),

                                                    new fieldValue({
                                                      name : new SFString("Mb"),
                                                      children : new MFNode([
                                                        new ProtoInstance({
                                                          name : new SFString("md"),
                                                          DEF : new SFString("Aj"),
                                                          fieldValue : new MFNode([
                                                            new fieldValue({
                                                              name : new SFString("coord"),
                                                              value : new SFString("0.3793 0.07071 0 0.1221 0.07071 0 0.1479 0.1157 0 0.1736 0.1479 0 0.2186 0.1993 0 0.2636 0.2443 0 0.2957 0.2893 0 0.3471 0.3536 0 0.3664 0.4114 0 0.3793 0.4757 0 0.3664 0.54 0 0.3343 0.6043 0 0.315 0.63 0 0.2507 0.6557 0 0.2121 0.6557 0 0.1479 0.6493 0 0.09643 0.6107 0 0.05786 0.5464 0 0.045 0.4629 0 0.1093 0.4564 0 0.1157 0.5143 0 0.135 0.5593 0 0.1671 0.585 0 0.2121 0.5914 0 0.2507 0.585 0 0.2829 0.5593 0 0.3021 0.5271 0 0.315 0.4821 0 0.3021 0.4307 0 0.2829 0.3857 0 0.2636 0.3536 0 0.2379 0.3214 0 0.2057 0.2829 0 0.1671 0.2379 0 0.09643 0.1671 0 0.05786 0.1029 0 0.03857 0.05143 0 0.03214 0 0 0.3793 0 0")}),

                                                            new fieldValue({
                                                              name : new SFString("coordIndex"),
                                                              value : new SFString("38 36 37 -1 36 38 1 -1 36 1 35 -1 35 1 34 -1 1 38 0 -1 1 33 34 -1 33 1 2 -1 33 2 3 -1 33 3 32 -1 32 3 4 -1 32 4 31 -1 31 4 5 -1 31 5 30 -1 30 5 6 -1 30 6 29 -1 29 6 28 -1 28 6 7 -1 28 7 27 -1 27 7 12 -1 12 7 11 -1 11 7 10 -1 10 7 8 -1 10 8 9 -1 19 17 18 -1 17 19 16 -1 16 19 20 -1 16 20 15 -1 15 20 21 -1 15 21 22 -1 15 22 14 -1 14 22 23 -1 14 23 24 -1 14 24 13 -1 13 24 25 -1 13 25 12 -1 12 25 26 -1 12 26 27 -1")}),

                                                            new fieldValue({
                                                              name : new SFString("mc"),
                                                              value : new SFString("0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 -1")})])})])}),

                                                    new fieldValue({
                                                      name : new SFString("Ob"),
                                                      value : new SFString("0.04")}),

                                                    new fieldValue({
                                                      name : new SFString("Pb"),
                                                      value : new SFString("0.1389")}),

                                                    new fieldValue({
                                                      name : new SFString("creaseAngle"),
                                                      value : new SFString("0")}),

                                                    new fieldValue({
                                                      name : new SFString("diffuseColor"),
                                                      value : new SFString("0.9 0.15 0")})])})])})])}),

                                        new Transform({
                                          DEF : new SFString("Bj"),
                                          translation : new SFVec3f([-0.07406,0,-0.009982]),
                                          children : new MFNode([
                                            new Transform({
                                              DEF : new SFString("Cj"),
                                              scale : new SFVec3f([0.72,0.72,1]),
                                              children : new MFNode([
                                                new ProtoInstance({
                                                  name : new SFString("zb"),
                                                  DEF : new SFString("Dj"),
                                                  fieldValue : new MFNode([
                                                    new fieldValue({
                                                      name : new SFString("url"),
                                                      value : new SFString("\"\"")}),

                                                    new fieldValue({
                                                      name : new SFString("emissiveColor"),
                                                      value : new SFString("0.1 0.02 0")}),

                                                    new fieldValue({
                                                      name : new SFString("specularColor"),
                                                      value : new SFString("0.1 0.1 0.1")}),

                                                    new fieldValue({
                                                      name : new SFString("shininess"),
                                                      value : new SFString("0.08")}),

                                                    new fieldValue({
                                                      name : new SFString("Cb"),
                                                      value : new SFString("0.4848")}),

                                                    new fieldValue({
                                                      name : new SFString("B"),
                                                      children : new MFNode([
                                                        new ProtoInstance({
                                                          USE : new SFString("wj")})])}),

                                                    new fieldValue({
                                                      name : new SFString("C"),
                                                      children : new MFNode([
                                                        new Transform({
                                                          USE : new SFString("Bj")}),

                                                        new Transform({
                                                          USE : new SFString("Cj")})])}),

                                                    new fieldValue({
                                                      name : new SFString("Fb"),
                                                      value : new SFString("true")}),

                                                    new fieldValue({
                                                      name : new SFString("Gb"),
                                                      value : new SFString("false")}),

                                                    new fieldValue({
                                                      name : new SFString("Hb"),
                                                      value : new SFString("-0.3407 -0.006429")}),

                                                    new fieldValue({
                                                      name : new SFString("Ib"),
                                                      value : new SFString("0.5464 0.6557")}),

                                                    new fieldValue({
                                                      name : new SFString("Mb"),
                                                      children : new MFNode([
                                                        new ProtoInstance({
                                                          name : new SFString("md"),
                                                          DEF : new SFString("Ej"),
                                                          fieldValue : new MFNode([
                                                            new fieldValue({
                                                              name : new SFString("coord"),
                                                              value : new SFString("0.06429 0 0 0.135 0 0 0.135 0.09 0 0.06429 0.09 0")}),

                                                            new fieldValue({
                                                              name : new SFString("coordIndex"),
                                                              value : new SFString("1 3 0 -1 3 1 2 -1")}),

                                                            new fieldValue({
                                                              name : new SFString("mc"),
                                                              value : new SFString("0 1 2 3 -1")})])})])}),

                                                    new fieldValue({
                                                      name : new SFString("Ob"),
                                                      value : new SFString("0.04")}),

                                                    new fieldValue({
                                                      name : new SFString("Pb"),
                                                      value : new SFString("0.1389")}),

                                                    new fieldValue({
                                                      name : new SFString("creaseAngle"),
                                                      value : new SFString("0")}),

                                                    new fieldValue({
                                                      name : new SFString("diffuseColor"),
                                                      value : new SFString("0.9 0.15 0")})])})])})])}),

                                        new Transform({
                                          DEF : new SFString("Fj"),
                                          translation : new SFVec3f([0.04629,0,-0.005]),
                                          children : new MFNode([
                                            new Transform({
                                              DEF : new SFString("Gj"),
                                              scale : new SFVec3f([0.72,0.72,1]),
                                              children : new MFNode([
                                                new ProtoInstance({
                                                  name : new SFString("zb"),
                                                  DEF : new SFString("Hj"),
                                                  fieldValue : new MFNode([
                                                    new fieldValue({
                                                      name : new SFString("url"),
                                                      value : new SFString("\"\"")}),

                                                    new fieldValue({
                                                      name : new SFString("emissiveColor"),
                                                      value : new SFString("0.1 0.02 0")}),

                                                    new fieldValue({
                                                      name : new SFString("specularColor"),
                                                      value : new SFString("0.1 0.1 0.1")}),

                                                    new fieldValue({
                                                      name : new SFString("shininess"),
                                                      value : new SFString("0.08")}),

                                                    new fieldValue({
                                                      name : new SFString("Cb"),
                                                      value : new SFString("0.4848")}),

                                                    new fieldValue({
                                                      name : new SFString("B"),
                                                      children : new MFNode([
                                                        new ProtoInstance({
                                                          USE : new SFString("wj")})])}),

                                                    new fieldValue({
                                                      name : new SFString("C"),
                                                      children : new MFNode([
                                                        new Transform({
                                                          USE : new SFString("Fj")}),

                                                        new Transform({
                                                          USE : new SFString("Gj")})])}),

                                                    new fieldValue({
                                                      name : new SFString("Fb"),
                                                      value : new SFString("true")}),

                                                    new fieldValue({
                                                      name : new SFString("Gb"),
                                                      value : new SFString("false")}),

                                                    new fieldValue({
                                                      name : new SFString("Hb"),
                                                      value : new SFString("-0.5079 -0.006429")}),

                                                    new fieldValue({
                                                      name : new SFString("Ib"),
                                                      value : new SFString("0.3793 0.6557")}),

                                                    new fieldValue({
                                                      name : new SFString("Mb"),
                                                      children : new MFNode([
                                                        new ProtoInstance({
                                                          name : new SFString("md"),
                                                          DEF : new SFString("Ij"),
                                                          fieldValue : new MFNode([
                                                            new fieldValue({
                                                              name : new SFString("coord"),
                                                              value : new SFString("0.09643 0.3986 0 0.1029 0.4564 0 0.1093 0.5079 0 0.1221 0.54 0 0.1414 0.5657 0 0.18 0.5914 0 0.225 0.5914 0 0.2636 0.5657 0 0.2829 0.54 0 0.2957 0.5079 0 0.3021 0.4629 0 0.3086 0.3986 0 0.315 0.3279 0 0.3086 0.2571 0 0.3021 0.1929 0 0.2957 0.1479 0 0.2829 0.1157 0 0.2636 0.09 0 0.225 0.06429 0 0.2057 0.05786 0 0.18 0.06429 0 0.1414 0.09 0 0.1221 0.1157 0 0.1093 0.1479 0 0.1029 0.1929 0 0.09643 0.2571 0 0.03214 0.2443 0 0.03857 0.1736 0 0.05786 0.1157 0 0.07714 0.07071 0 0.1029 0.03857 0 0.135 0.01286 0 0.1671 0 0 0.1993 -0.006429 0 0.2443 0 0 0.2764 0.01929 0 0.3086 0.045 0 0.3343 0.08357 0 0.3536 0.1286 0 0.3664 0.1864 0 0.3729 0.2507 0 0.3793 0.3279 0 0.3729 0.4114 0 0.36 0.4821 0 0.3471 0.54 0 0.3214 0.5914 0 0.3021 0.6171 0 0.27 0.6429 0 0.2379 0.6557 0 0.1607 0.6557 0 0.1286 0.6364 0 0.09643 0.6107 0 0.07071 0.5721 0 0.05143 0.5271 0 0.03857 0.4693 0 0.03214 0.405 0")}),

                                                            new fieldValue({
                                                              name : new SFString("coordIndex"),
                                                              value : new SFString("30 25 29 -1 25 30 24 -1 24 30 23 -1 23 30 31 -1 23 31 22 -1 22 31 21 -1 21 31 32 -1 21 32 20 -1 20 32 33 -1 20 33 19 -1 19 33 34 -1 19 34 18 -1 18 34 17 -1 17 34 35 -1 17 35 16 -1 16 35 36 -1 16 36 15 -1 15 36 14 -1 14 36 13 -1 13 36 37 -1 13 37 12 -1 12 37 45 -1 45 37 44 -1 44 37 38 -1 44 38 43 -1 43 38 39 -1 43 39 42 -1 42 39 40 -1 42 40 41 -1 27 55 26 -1 55 27 54 -1 54 27 28 -1 54 28 53 -1 53 28 52 -1 52 28 29 -1 52 29 51 -1 51 29 25 -1 51 25 0 -1 51 0 1 -1 51 1 2 -1 51 2 50 -1 50 2 3 -1 50 3 4 -1 50 4 49 -1 49 4 5 -1 49 5 48 -1 48 5 6 -1 48 6 7 -1 48 7 47 -1 47 7 8 -1 47 8 46 -1 46 8 9 -1 46 9 10 -1 46 10 11 -1 46 11 45 -1 45 11 12 -1")}),

                                                            new fieldValue({
                                                              name : new SFString("mc"),
                                                              value : new SFString("0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 -1 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 -1")})])})])}),

                                                    new fieldValue({
                                                      name : new SFString("Ob"),
                                                      value : new SFString("0.04")}),

                                                    new fieldValue({
                                                      name : new SFString("Pb"),
                                                      value : new SFString("0.1389")}),

                                                    new fieldValue({
                                                      name : new SFString("creaseAngle"),
                                                      value : new SFString("0")}),

                                                    new fieldValue({
                                                      name : new SFString("diffuseColor"),
                                                      value : new SFString("0.9 0.15 0")})])})])})])})])}),

                                    new fieldValue({
                                      name : new SFString("A"),
                                      children : new MFNode([
                                        new ProtoInstance({
                                          USE : new SFString("zj")}),

                                        new ProtoInstance({
                                          USE : new SFString("Dj")}),

                                        new ProtoInstance({
                                          USE : new SFString("Hj")})])})])}),

                                new ProtoInstance({
                                  name : new SFString("me"),
                                  DEF : new SFString("Jj"),
                                  fieldValue : new MFNode([
                                    new fieldValue({
                                      name : new SFString("re"),
                                      children : new MFNode([
                                        new Transform({
                                          USE : new SFString("sj")})])})])}),

                                new ProtoInstance({
                                  name : new SFString("xe"),
                                  DEF : new SFString("Kj"),
                                  fieldValue : new MFNode([
                                    new fieldValue({
                                      name : new SFString("ye"),
                                      children : new MFNode([
                                        new ProtoInstance({
                                          USE : new SFString("Jj")})])}),

                                    new fieldValue({
                                      name : new SFString("ze"),
                                      children : new MFNode([
                                        new ProtoInstance({
                                          USE : new SFString("Jj")})])}),

                                    new fieldValue({
                                      name : new SFString("Ae"),
                                      children : new MFNode([
                                        new ProtoInstance({
                                          USE : new SFString("wj")})])}),

                                    new fieldValue({
                                      name : new SFString("Ce"),
                                      value : new SFString("86")})])}),

                                new ProtoInstance({
                                  name : new SFString("nb"),
                                  DEF : new SFString("Lj")}),

                                new ProtoInstance({
                                  name : new SFString("ra"),
                                  DEF : new SFString("Mj"),
                                  fieldValue : new MFNode([
                                    new fieldValue({
                                      name : new SFString("Da"),
                                      value : new SFString("false")}),

                                    new fieldValue({
                                      name : new SFString("Fa"),
                                      value : new SFString("0.5")})])}),

                                new ProtoInstance({
                                  name : new SFString("Ge"),
                                  DEF : new SFString("Nj"),
                                  fieldValue : new MFNode([
                                    new fieldValue({
                                      name : new SFString("center"),
                                      value : new SFString("1.639e-7 0.2337 -0.007482")}),

                                    new fieldValue({
                                      name : new SFString("U"),
                                      children : new MFNode([
                                        new ProtoInstance({
                                          USE : new SFString("wj")})])})])}),

                                new ProtoInstance({
                                  name : new SFString("xe"),
                                  DEF : new SFString("Oj"),
                                  fieldValue : new MFNode([
                                    new fieldValue({
                                      name : new SFString("ye"),
                                      children : new MFNode([
                                        new ProtoInstance({
                                          USE : new SFString("Nj")})])}),

                                    new fieldValue({
                                      name : new SFString("ze"),
                                      children : new MFNode([
                                        new ProtoInstance({
                                          USE : new SFString("Mj")})])}),

                                    new fieldValue({
                                      name : new SFString("Ae"),
                                      children : new MFNode([
                                        new ProtoInstance({
                                          USE : new SFString("wj")})])}),

                                    new fieldValue({
                                      name : new SFString("Ce"),
                                      value : new SFString("90")})])})])})])}),

                        new Transform({
                          DEF : new SFString("Pj"),
                          translation : new SFVec3f([0.3736,-0.7009,0.7521]),
                          rotation : new SFRotation([1,0,0,3.13]),
                          center : new SFVec3f([0.253,0.2677,0]),
                          children : new MFNode([
                            new ProtoInstance({
                              name : new SFString("hf"),
                              DEF : new SFString("Qj"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("center"),
                                  value : new SFString("0.253 0.2677 0")}),

                                new fieldValue({
                                  name : new SFString("children"),
                                  children : new MFNode([
                                    new Transform({
                                      DEF : new SFString("Rj"),
                                      scale : new SFVec3f([0.1293,0.7015,0.1824]),
                                      children : new MFNode([
                                        new ProtoInstance({
                                          name : new SFString("ga"),
                                          DEF : new SFString("Sj"),
                                          fieldValue : new MFNode([
                                            new fieldValue({
                                              name : new SFString("url"),
                                              value : new SFString("\"\"")}),

                                            new fieldValue({
                                              name : new SFString("diffuseColor"),
                                              value : new SFString("0.8 0.8 0")}),

                                            new fieldValue({
                                              name : new SFString("emissiveColor"),
                                              value : new SFString("0.15 0.15 0")}),

                                            new fieldValue({
                                              name : new SFString("B"),
                                              children : new MFNode([
                                                new ProtoInstance({
                                                  USE : new SFString("Li")})])}),

                                            new fieldValue({
                                              name : new SFString("C"),
                                              children : new MFNode([
                                                new Transform({
                                                  USE : new SFString("Pj")}),

                                                new ProtoInstance({
                                                  USE : new SFString("Qj")}),

                                                new Transform({
                                                  USE : new SFString("Rj")})])}),

                                            new fieldValue({
                                              name : new SFString("geometry"),
                                              children : new MFNode([
                                                new Cone({
                                                  DEF : new SFString("_5"),
                                                  height : new SFFloat(1),
                                                  bottomRadius : new SFFloat(0.5)})])}),

                                            new fieldValue({
                                              name : new SFString("ha"),
                                              value : new SFString("0 0 0.25")})])}),

                                        new ProtoInstance({
                                          name : new SFString("ra"),
                                          DEF : new SFString("Tj"),
                                          fieldValue : new MFNode([
                                            new fieldValue({
                                              name : new SFString("Da"),
                                              value : new SFString("false")})])})])})])}),

                                new fieldValue({
                                  name : new SFString("U"),
                                  children : new MFNode([
                                    new ProtoInstance({
                                      USE : new SFString("Sj")})])}),

                                new fieldValue({
                                  name : new SFString("kf"),
                                  value : new SFString("17")}),

                                new fieldValue({
                                  name : new SFString("lf"),
                                  value : new SFString("0.6")})])})])}),

                        new Transform({
                          DEF : new SFString("Uj"),
                          translation : new SFVec3f([0.5037,-0.3512,0.749]),
                          rotation : new SFRotation([0.767059,-0.641566,0.0036798,3.133]),
                          scaleOrientation : new SFRotation([0.1555,-0.1734,-0.972498,0.7118]),
                          center : new SFVec3f([0,0,-2.608e-8]),
                          children : new MFNode([
                            new ProtoInstance({
                              name : new SFString("hf"),
                              DEF : new SFString("Vj"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("center"),
                                  value : new SFString("0 0 -2.608e-8")}),

                                new fieldValue({
                                  name : new SFString("children"),
                                  children : new MFNode([
                                    new Transform({
                                      DEF : new SFString("Wj"),
                                      scale : new SFVec3f([0.1583,0.4654,0.1583]),
                                      children : new MFNode([
                                        new ProtoInstance({
                                          name : new SFString("ga"),
                                          DEF : new SFString("Xj"),
                                          fieldValue : new MFNode([
                                            new fieldValue({
                                              name : new SFString("url"),
                                              value : new SFString("\"\"")}),

                                            new fieldValue({
                                              name : new SFString("diffuseColor"),
                                              value : new SFString("0.8 0.8 0")}),

                                            new fieldValue({
                                              name : new SFString("emissiveColor"),
                                              value : new SFString("0.15 0.15 0")}),

                                            new fieldValue({
                                              name : new SFString("B"),
                                              children : new MFNode([
                                                new ProtoInstance({
                                                  USE : new SFString("Li")})])}),

                                            new fieldValue({
                                              name : new SFString("C"),
                                              children : new MFNode([
                                                new Transform({
                                                  USE : new SFString("Uj")}),

                                                new ProtoInstance({
                                                  USE : new SFString("Vj")}),

                                                new Transform({
                                                  USE : new SFString("Wj")})])}),

                                            new fieldValue({
                                              name : new SFString("geometry"),
                                              children : new MFNode([
                                                new Cone({
                                                  DEF : new SFString("_6"),
                                                  height : new SFFloat(1),
                                                  bottomRadius : new SFFloat(0.5)})])}),

                                            new fieldValue({
                                              name : new SFString("ha"),
                                              value : new SFString("0 0 0.25")})])}),

                                        new ProtoInstance({
                                          name : new SFString("ra"),
                                          DEF : new SFString("Yj"),
                                          fieldValue : new MFNode([
                                            new fieldValue({
                                              name : new SFString("Da"),
                                              value : new SFString("false")})])})])})])}),

                                new fieldValue({
                                  name : new SFString("U"),
                                  children : new MFNode([
                                    new ProtoInstance({
                                      USE : new SFString("Xj")})])}),

                                new fieldValue({
                                  name : new SFString("kf"),
                                  value : new SFString("4")}),

                                new fieldValue({
                                  name : new SFString("lf"),
                                  value : new SFString("0.5")})])})])}),

                        new Transform({
                          DEF : new SFString("Zj"),
                          translation : new SFVec3f([-0.1469,-0.05878,1.385]),
                          rotation : new SFRotation([0.97098,-0.144597,-0.190496,4.532]),
                          center : new SFVec3f([0,0,1.49e-8]),
                          children : new MFNode([
                            new Transform({
                              DEF : new SFString("ak"),
                              children : new MFNode([
                                new ProtoInstance({
                                  name : new SFString("yf"),
                                  DEF : new SFString("bk"),
                                  fieldValue : new MFNode([
                                    new fieldValue({
                                      name : new SFString("B"),
                                      children : new MFNode([
                                        new ProtoInstance({
                                          USE : new SFString("Li")})])}),

                                    new fieldValue({
                                      name : new SFString("C"),
                                      children : new MFNode([
                                        new Transform({
                                          USE : new SFString("Zj")}),

                                        new Transform({
                                          USE : new SFString("ak")})])}),

                                    new fieldValue({
                                      name : new SFString("point"),
                                      value : new SFString("-0.7965 -0.8007 0 -0.7965 0 0 -0.7965 0.8007 0 -0.4399 1.45 0 0 1.45 0 0.4399 1.45 0 0.7965 0.8007 0 0.7965 0 0 0.7965 -0.8007 0 0.4399 -1.45 0 0 -1.45 0 -0.4399 -1.45 0")}),

                                    new fieldValue({
                                      name : new SFString("zf"),
                                      value : new SFString("1 0 2 1 0 2 1 0 2 1 0 2")}),

                                    new fieldValue({
                                      name : new SFString("Sd"),
                                      value : new SFString("0 0.25 0.5 0.75 1")}),

                                    new fieldValue({
                                      name : new SFString("Af"),
                                      value : new SFString("0 0 0.3311 0.263 0.5893 0.5 0.7889 0.72 1 1 0 0 0.2111 0.28 0.4107 0.5 0.6689 0.737 1 1 0 0 0.3311 0.263 0.5893 0.5 0.7889 0.72 1 1 0 0 0.2111 0.28 0.4107 0.5 0.6689 0.737 1 1")}),

                                    new fieldValue({
                                      name : new SFString("Bf"),
                                      value : new SFString("0 5 10 15")}),

                                    new fieldValue({
                                      name : new SFString("Cf"),
                                      value : new SFString("true")}),

                                    new fieldValue({
                                      name : new SFString("scale"),
                                      value : new SFString("1.593 2.9 1")})])})])})])}),

                        new Transform({
                          DEF : new SFString("ck"),
                          translation : new SFVec3f([0.9488,0.05581,4.768e-7]),
                          rotation : new SFRotation([0,0,1,0.1762]),
                          center : new SFVec3f([-1.063,-0.7111,-0.02255]),
                          children : new MFNode([
                            new ProtoInstance({
                              name : new SFString("Q"),
                              DEF : new SFString("dk"),
                              fieldValue : new MFNode([
                                new fieldValue({
                                  name : new SFString("center"),
                                  value : new SFString("-1.063 -0.7111 -0.02255")}),

                                new fieldValue({
                                  name : new SFString("U"),
                                  children : new MFNode([
                                    new ProtoInstance({
                                      name : new SFString("o"),
                                      DEF : new SFString("ek"),
                                      fieldValue : new MFNode([
                                        new fieldValue({
                                          name : new SFString("B"),
                                          children : new MFNode([
                                            new ProtoInstance({
                                              USE : new SFString("Li")})])}),

                                        new fieldValue({
                                          name : new SFString("C"),
                                          children : new MFNode([
                                            new Transform({
                                              USE : new SFString("ck")}),

                                            new ProtoInstance({
                                              USE : new SFString("dk")}),

                                            new ProtoInstance({
                                              name : new SFString("Q"),
                                              DEF : new SFString("rk"),
                                              fieldValue : new MFNode([
                                                new fieldValue({
                                                  name : new SFString("center"),
                                                  value : new SFString("-1.063 -0.7111 -0.02255")}),

                                                new fieldValue({
                                                  name : new SFString("U"),
                                                  children : new MFNode([
                                                    new ProtoInstance({
                                                      USE : new SFString("ek")})])}),

                                                new fieldValue({
                                                  name : new SFString("children"),
                                                  children : new MFNode([
                                                    new Transform({
                                                      DEF : new SFString("sk"),
                                                      children : new MFNode([
                                                        new ProtoInstance({
                                                          USE : new SFString("ek")}),

                                                        new ProtoInstance({
                                                          name : new SFString("ra"),
                                                          DEF : new SFString("tk"),
                                                          fieldValue : new MFNode([
                                                            new fieldValue({
                                                              name : new SFString("cycleInterval"),
                                                              value : new SFString("3")}),

                                                            new fieldValue({
                                                              name : new SFString("Da"),
                                                              value : new SFString("false")}),

                                                            new fieldValue({
                                                              name : new SFString("Ia"),
                                                              value : new SFString("true")})])}),

                                                        new ProtoInstance({
                                                          name : new SFString("ra"),
                                                          DEF : new SFString("uk"),
                                                          fieldValue : new MFNode([
                                                            new fieldValue({
                                                              name : new SFString("Da"),
                                                              value : new SFString("false")}),

                                                            new fieldValue({
                                                              name : new SFString("Ia"),
                                                              value : new SFString("true")})])}),

                                                        new ProtoInstance({
                                                          name : new SFString("ra"),
                                                          DEF : new SFString("vk"),
                                                          fieldValue : new MFNode([
                                                            new fieldValue({
                                                              name : new SFString("cycleInterval"),
                                                              value : new SFString("12")}),

                                                            new fieldValue({
                                                              name : new SFString("Da"),
                                                              value : new SFString("false")}),

                                                            new fieldValue({
                                                              name : new SFString("Ia"),
                                                              value : new SFString("true")})])}),

                                                        new ProtoInstance({
                                                          name : new SFString("hg"),
                                                          DEF : new SFString("wk"),
                                                          fieldValue : new MFNode([
                                                            new fieldValue({
                                                              name : new SFString("U"),
                                                              children : new MFNode([
                                                                new ProtoInstance({
                                                                  USE : new SFString("ek")})])}),

                                                            new fieldValue({
                                                              name : new SFString("offset"),
                                                              value : new SFString("1.063 0.7111 0.02255")}),

                                                            new fieldValue({
                                                              name : new SFString("center"),
                                                              value : new SFString("-1.063 -0.7111 -0.02255")}),

                                                            new fieldValue({
                                                              name : new SFString("T"),
                                                              value : new SFString("false")})])}),

                                                        new ProtoInstance({
                                                          name : new SFString("yg"),
                                                          DEF : new SFString("xk"),
                                                          fieldValue : new MFNode([
                                                            new fieldValue({
                                                              name : new SFString("Eg"),
                                                              children : new MFNode([
                                                                new ProtoInstance({
                                                                  USE : new SFString("bk")})])})])}),

                                                        new ProtoInstance({
                                                          name : new SFString("xe"),
                                                          DEF : new SFString("yk"),
                                                          fieldValue : new MFNode([
                                                            new fieldValue({
                                                              name : new SFString("ye"),
                                                              children : new MFNode([
                                                                new ProtoInstance({
                                                                  USE : new SFString("xk")})])}),

                                                            new fieldValue({
                                                              name : new SFString("ze"),
                                                              children : new MFNode([
                                                                new ProtoInstance({
                                                                  USE : new SFString("vk")})])}),

                                                            new fieldValue({
                                                              name : new SFString("Ae"),
                                                              children : new MFNode([
                                                                new ProtoInstance({
                                                                  USE : new SFString("ek")})])}),

                                                            new fieldValue({
                                                              name : new SFString("Ce"),
                                                              value : new SFString("103")})])})])})])})])}),

                                            new Transform({
                                              USE : new SFString("sk")})])}),

                                        new fieldValue({
                                          name : new SFString("children"),
                                          children : new MFNode([
                                            new Transform({
                                              DEF : new SFString("fk"),
                                              translation : new SFVec3f([-1.064,-0.7111,-0.02]),
                                              children : new MFNode([
                                                new Transform({
                                                  DEF : new SFString("gk"),
                                                  scale : new SFVec3f([0.02196,0.2431,0.02196]),
                                                  children : new MFNode([
                                                    new ProtoInstance({
                                                      name : new SFString("ga"),
                                                      DEF : new SFString("hk"),
                                                      fieldValue : new MFNode([
                                                        new fieldValue({
                                                          name : new SFString("url"),
                                                          value : new SFString("\"\"")}),

                                                        new fieldValue({
                                                          name : new SFString("diffuseColor"),
                                                          value : new SFString("0.38 0.38 0.38")}),

                                                        new fieldValue({
                                                          name : new SFString("emissiveColor"),
                                                          value : new SFString("0.18 0.18 0.18")}),

                                                        new fieldValue({
                                                          name : new SFString("specularColor"),
                                                          value : new SFString("1 0.86 0.46")}),

                                                        new fieldValue({
                                                          name : new SFString("shininess"),
                                                          value : new SFString("0.23")}),

                                                        new fieldValue({
                                                          name : new SFString("B"),
                                                          children : new MFNode([
                                                            new ProtoInstance({
                                                              USE : new SFString("ek")})])}),

                                                        new fieldValue({
                                                          name : new SFString("C"),
                                                          children : new MFNode([
                                                            new Transform({
                                                              USE : new SFString("fk")}),

                                                            new Transform({
                                                              USE : new SFString("gk")})])}),

                                                        new fieldValue({
                                                          name : new SFString("geometry"),
                                                          children : new MFNode([
                                                            new Box({
                                                              DEF : new SFString("_7"),
                                                              size : new SFVec3f([1,1,1])})])})])})])})])}),

                                            new Transform({
                                              DEF : new SFString("ik"),
                                              translation : new SFVec3f([-1.063,-0.7072,-0.02]),
                                              rotation : new SFRotation([0,0,1,4.711]),
                                              scaleOrientation : new SFRotation([0,0,-1,0.120801]),
                                              children : new MFNode([
                                                new Transform({
                                                  DEF : new SFString("jk"),
                                                  scale : new SFVec3f([0.02196,0.2431,0.02196]),
                                                  children : new MFNode([
                                                    new ProtoInstance({
                                                      name : new SFString("ga"),
                                                      DEF : new SFString("kk"),
                                                      fieldValue : new MFNode([
                                                        new fieldValue({
                                                          name : new SFString("url"),
                                                          value : new SFString("\"\"")}),

                                                        new fieldValue({
                                                          name : new SFString("diffuseColor"),
                                                          value : new SFString("0.38 0.38 0.38")}),

                                                        new fieldValue({
                                                          name : new SFString("emissiveColor"),
                                                          value : new SFString("0.18 0.18 0.18")}),

                                                        new fieldValue({
                                                          name : new SFString("specularColor"),
                                                          value : new SFString("1 0.86 0.46")}),

                                                        new fieldValue({
                                                          name : new SFString("shininess"),
                                                          value : new SFString("0.23")}),

                                                        new fieldValue({
                                                          name : new SFString("B"),
                                                          children : new MFNode([
                                                            new ProtoInstance({
                                                              USE : new SFString("ek")})])}),

                                                        new fieldValue({
                                                          name : new SFString("C"),
                                                          children : new MFNode([
                                                            new Transform({
                                                              USE : new SFString("ik")}),

                                                            new Transform({
                                                              USE : new SFString("jk")})])}),

                                                        new fieldValue({
                                                          name : new SFString("geometry"),
                                                          children : new MFNode([
                                                            new Box({
                                                              DEF : new SFString("_8"),
                                                              size : new SFVec3f([1,1,1])})])})])})])})])}),

                                            new Transform({
                                              DEF : new SFString("lk"),
                                              translation : new SFVec3f([-1.065,-0.7075,-0.02255]),
                                              rotation : new SFRotation([1,0,0,1.571]),
                                              children : new MFNode([
                                                new Transform({
                                                  DEF : new SFString("mk"),
                                                  scale : new SFVec3f([0.02196,0.2431,0.02196]),
                                                  children : new MFNode([
                                                    new ProtoInstance({
                                                      name : new SFString("ga"),
                                                      DEF : new SFString("nk"),
                                                      fieldValue : new MFNode([
                                                        new fieldValue({
                                                          name : new SFString("url"),
                                                          value : new SFString("\"\"")}),

                                                        new fieldValue({
                                                          name : new SFString("diffuseColor"),
                                                          value : new SFString("0.38 0.38 0.38")}),

                                                        new fieldValue({
                                                          name : new SFString("emissiveColor"),
                                                          value : new SFString("0.18 0.18 0.18")}),

                                                        new fieldValue({
                                                          name : new SFString("specularColor"),
                                                          value : new SFString("1 0.86 0.46")}),

                                                        new fieldValue({
                                                          name : new SFString("shininess"),
                                                          value : new SFString("0.23")}),

                                                        new fieldValue({
                                                          name : new SFString("B"),
                                                          children : new MFNode([
                                                            new ProtoInstance({
                                                              USE : new SFString("ek")})])}),

                                                        new fieldValue({
                                                          name : new SFString("C"),
                                                          children : new MFNode([
                                                            new Transform({
                                                              USE : new SFString("lk")}),

                                                            new Transform({
                                                              USE : new SFString("mk")})])}),

                                                        new fieldValue({
                                                          name : new SFString("geometry"),
                                                          children : new MFNode([
                                                            new Box({
                                                              DEF : new SFString("_9"),
                                                              size : new SFVec3f([1,1,1])})])})])})])})])}),

                                            new Transform({
                                              DEF : new SFString("ok"),
                                              translation : new SFVec3f([-1.063,-0.7112,-0.02]),
                                              children : new MFNode([
                                                new Transform({
                                                  DEF : new SFString("pk"),
                                                  scale : new SFVec3f([0.1604,0.1604,0.1604]),
                                                  children : new MFNode([
                                                    new ProtoInstance({
                                                      name : new SFString("ga"),
                                                      DEF : new SFString("qk"),
                                                      fieldValue : new MFNode([
                                                        new fieldValue({
                                                          name : new SFString("url"),
                                                          value : new SFString("\"\"")}),

                                                        new fieldValue({
                                                          name : new SFString("diffuseColor"),
                                                          value : new SFString("0.38 0.38 0.38")}),

                                                        new fieldValue({
                                                          name : new SFString("emissiveColor"),
                                                          value : new SFString("0.18 0.18 0.18")}),

                                                        new fieldValue({
                                                          name : new SFString("specularColor"),
                                                          value : new SFString("1 0.86 0.46")}),

                                                        new fieldValue({
                                                          name : new SFString("shininess"),
                                                          value : new SFString("0.23")}),

                                                        new fieldValue({
                                                          name : new SFString("B"),
                                                          children : new MFNode([
                                                            new ProtoInstance({
                                                              USE : new SFString("ek")})])}),

                                                        new fieldValue({
                                                          name : new SFString("C"),
                                                          children : new MFNode([
                                                            new Transform({
                                                              USE : new SFString("ok")}),

                                                            new Transform({
                                                              USE : new SFString("pk")})])}),

                                                        new fieldValue({
                                                          name : new SFString("geometry"),
                                                          children : new MFNode([
                                                            new Sphere({
                                                              DEF : new SFString("_10"),
                                                              radius : new SFFloat(0.5)})])})])})])})])})])}),

                                        new fieldValue({
                                          name : new SFString("A"),
                                          children : new MFNode([
                                            new ProtoInstance({
                                              USE : new SFString("hk")}),

                                            new ProtoInstance({
                                              USE : new SFString("kk")}),

                                            new ProtoInstance({
                                              USE : new SFString("nk")}),

                                            new ProtoInstance({
                                              USE : new SFString("qk")})])})])})])}),

                                new fieldValue({
                                  name : new SFString("children"),
                                  children : new MFNode([
                                    new ProtoInstance({
                                      USE : new SFString("rk")})])}),

                                new fieldValue({
                                  name : new SFString("W"),
                                  value : new SFString("2")})])})])}),

                        new Transform({
                          DEF : new SFString("zk"),
                          translation : new SFVec3f([2.022,0.2389,1.5]),
                          rotation : new SFRotation([-0.145494,0.989359,0,0.7418]),
                          children : new MFNode([
                            new Transform({
                              DEF : new SFString("Ak"),
                              children : new MFNode([
                                new ProtoInstance({
                                  name : new SFString("K"),
                                  DEF : new SFString("Bk"),
                                  fieldValue : new MFNode([
                                    new fieldValue({
                                      name : new SFString("B"),
                                      children : new MFNode([
                                        new ProtoInstance({
                                          USE : new SFString("Li")})])}),

                                    new fieldValue({
                                      name : new SFString("C"),
                                      children : new MFNode([
                                        new Transform({
                                          USE : new SFString("zk")}),

                                        new Transform({
                                          USE : new SFString("Ak")})])}),

                                    new fieldValue({
                                      name : new SFString("L"),
                                      value : new SFString("1.528")}),

                                    new fieldValue({
                                      name : new SFString("attenuation"),
                                      value : new SFString("0.001 0.6545 0")})])})])})])}),

                        new Transform({
                          DEF : new SFString("Ck"),
                          children : new MFNode([
                            new Transform({
                              DEF : new SFString("Dk"),
                              children : new MFNode([
                                new ProtoInstance({
                                  name : new SFString("Ih"),
                                  DEF : new SFString("Ek"),
                                  fieldValue : new MFNode([
                                    new fieldValue({
                                      name : new SFString("B"),
                                      children : new MFNode([
                                        new ProtoInstance({
                                          USE : new SFString("Li")})])}),

                                    new fieldValue({
                                      name : new SFString("C"),
                                      children : new MFNode([
                                        new Transform({
                                          USE : new SFString("Ck")}),

                                        new Transform({
                                          USE : new SFString("Dk")})])}),

                                    new fieldValue({
                                      name : new SFString("url"),
                                      value : new SFString("\"tonerow3d_16_22.wav\"")})])}),

                                new ProtoInstance({
                                  name : new SFString("ra"),
                                  DEF : new SFString("Fk"),
                                  fieldValue : new MFNode([
                                    new fieldValue({
                                      name : new SFString("cycleInterval"),
                                      value : new SFString("0.232925")}),

                                    new fieldValue({
                                      name : new SFString("xa"),
                                      value : new SFString("0.232925")})])}),

                                new ProtoInstance({
                                  name : new SFString("Nh"),
                                  DEF : new SFString("Gk"),
                                  fieldValue : new MFNode([
                                    new fieldValue({
                                      name : new SFString("Oh"),
                                      children : new MFNode([
                                        new ProtoInstance({
                                          USE : new SFString("Ek")})])}),

                                    new fieldValue({
                                      name : new SFString("intensity"),
                                      value : new SFString("0.49")}),

                                    new fieldValue({
                                      name : new SFString("duration"),
                                      value : new SFString("0.232925")})])}),

                                new ProtoInstance({
                                  name : new SFString("ra"),
                                  DEF : new SFString("Hk"),
                                  fieldValue : new MFNode([
                                    new fieldValue({
                                      name : new SFString("xa"),
                                      value : new SFString("1.268")})])}),

                                new ProtoInstance({
                                  name : new SFString("Xh"),
                                  DEF : new SFString("Ik")}),

                                new ProtoInstance({
                                  name : new SFString("ra"),
                                  DEF : new SFString("Jk"),
                                  fieldValue : new MFNode([
                                    new fieldValue({
                                      name : new SFString("cycleInterval"),
                                      value : new SFString("0.232925")}),

                                    new fieldValue({
                                      name : new SFString("xa"),
                                      value : new SFString("0.232925")})])}),

                                new ProtoInstance({
                                  name : new SFString("Nh"),
                                  DEF : new SFString("Kk"),
                                  fieldValue : new MFNode([
                                    new fieldValue({
                                      name : new SFString("Oh"),
                                      children : new MFNode([
                                        new ProtoInstance({
                                          USE : new SFString("Ek")})])}),

                                    new fieldValue({
                                      name : new SFString("intensity"),
                                      value : new SFString("0.3")}),

                                    new fieldValue({
                                      name : new SFString("duration"),
                                      value : new SFString("0.232925")})])}),

                                new ProtoInstance({
                                  name : new SFString("ra"),
                                  DEF : new SFString("Lk"),
                                  fieldValue : new MFNode([
                                    new fieldValue({
                                      name : new SFString("xa"),
                                      value : new SFString("1.268")})])}),

                                new ProtoInstance({
                                  name : new SFString("Xh"),
                                  DEF : new SFString("Mk")}),

                                new ProtoInstance({
                                  name : new SFString("ra"),
                                  DEF : new SFString("Nk"),
                                  fieldValue : new MFNode([
                                    new fieldValue({
                                      name : new SFString("cycleInterval"),
                                      value : new SFString("0.232925")}),

                                    new fieldValue({
                                      name : new SFString("xa"),
                                      value : new SFString("0.232925")})])}),

                                new ProtoInstance({
                                  name : new SFString("Nh"),
                                  DEF : new SFString("Ok"),
                                  fieldValue : new MFNode([
                                    new fieldValue({
                                      name : new SFString("Oh"),
                                      children : new MFNode([
                                        new ProtoInstance({
                                          USE : new SFString("Ek")})])}),

                                    new fieldValue({
                                      name : new SFString("intensity"),
                                      value : new SFString("0.2")}),

                                    new fieldValue({
                                      name : new SFString("duration"),
                                      value : new SFString("0.232925")})])}),

                                new ProtoInstance({
                                  name : new SFString("ra"),
                                  DEF : new SFString("Pk"),
                                  fieldValue : new MFNode([
                                    new fieldValue({
                                      name : new SFString("xa"),
                                      value : new SFString("1.268")})])}),

                                new ProtoInstance({
                                  name : new SFString("Xh"),
                                  DEF : new SFString("Qk")}),

                                new ProtoInstance({
                                  name : new SFString("ra"),
                                  DEF : new SFString("Rk"),
                                  fieldValue : new MFNode([
                                    new fieldValue({
                                      name : new SFString("cycleInterval"),
                                      value : new SFString("0.232925")}),

                                    new fieldValue({
                                      name : new SFString("xa"),
                                      value : new SFString("0.232925")})])}),

                                new ProtoInstance({
                                  name : new SFString("Nh"),
                                  DEF : new SFString("Sk"),
                                  fieldValue : new MFNode([
                                    new fieldValue({
                                      name : new SFString("Oh"),
                                      children : new MFNode([
                                        new ProtoInstance({
                                          USE : new SFString("Ek")})])}),

                                    new fieldValue({
                                      name : new SFString("intensity"),
                                      value : new SFString("0.3")}),

                                    new fieldValue({
                                      name : new SFString("duration"),
                                      value : new SFString("0.232925")})])}),

                                new ProtoInstance({
                                  name : new SFString("ra"),
                                  DEF : new SFString("Tk"),
                                  fieldValue : new MFNode([
                                    new fieldValue({
                                      name : new SFString("xa"),
                                      value : new SFString("1.268")})])}),

                                new ProtoInstance({
                                  name : new SFString("Xh"),
                                  DEF : new SFString("Uk")}),

                                new ProtoInstance({
                                  name : new SFString("ra"),
                                  DEF : new SFString("Vk"),
                                  fieldValue : new MFNode([
                                    new fieldValue({
                                      name : new SFString("cycleInterval"),
                                      value : new SFString("0.232925")}),

                                    new fieldValue({
                                      name : new SFString("xa"),
                                      value : new SFString("0.232925")})])}),

                                new ProtoInstance({
                                  name : new SFString("Nh"),
                                  DEF : new SFString("Wk"),
                                  fieldValue : new MFNode([
                                    new fieldValue({
                                      name : new SFString("Oh"),
                                      children : new MFNode([
                                        new ProtoInstance({
                                          USE : new SFString("Ek")})])}),

                                    new fieldValue({
                                      name : new SFString("intensity"),
                                      value : new SFString("0.49")}),

                                    new fieldValue({
                                      name : new SFString("duration"),
                                      value : new SFString("0.232925")})])}),

                                new ProtoInstance({
                                  name : new SFString("ra"),
                                  DEF : new SFString("Xk"),
                                  fieldValue : new MFNode([
                                    new fieldValue({
                                      name : new SFString("xa"),
                                      value : new SFString("1.268")})])}),

                                new ProtoInstance({
                                  name : new SFString("Xh"),
                                  DEF : new SFString("Yk")}),

                                new ProtoInstance({
                                  name : new SFString("ra"),
                                  DEF : new SFString("Zk"),
                                  fieldValue : new MFNode([
                                    new fieldValue({
                                      name : new SFString("cycleInterval"),
                                      value : new SFString("0.232925")}),

                                    new fieldValue({
                                      name : new SFString("xa"),
                                      value : new SFString("0.232925")})])}),

                                new ProtoInstance({
                                  name : new SFString("Nh"),
                                  DEF : new SFString("al"),
                                  fieldValue : new MFNode([
                                    new fieldValue({
                                      name : new SFString("Oh"),
                                      children : new MFNode([
                                        new ProtoInstance({
                                          USE : new SFString("Ek")})])}),

                                    new fieldValue({
                                      name : new SFString("intensity"),
                                      value : new SFString("0.75")}),

                                    new fieldValue({
                                      name : new SFString("duration"),
                                      value : new SFString("0.232925")})])}),

                                new ProtoInstance({
                                  name : new SFString("ra"),
                                  DEF : new SFString("bl"),
                                  fieldValue : new MFNode([
                                    new fieldValue({
                                      name : new SFString("xa"),
                                      value : new SFString("1.268")})])}),

                                new ProtoInstance({
                                  name : new SFString("Xh"),
                                  DEF : new SFString("cl")}),

                                new ProtoInstance({
                                  name : new SFString("ra"),
                                  DEF : new SFString("dl"),
                                  fieldValue : new MFNode([
                                    new fieldValue({
                                      name : new SFString("cycleInterval"),
                                      value : new SFString("0.232925")}),

                                    new fieldValue({
                                      name : new SFString("xa"),
                                      value : new SFString("0.232925")})])}),

                                new ProtoInstance({
                                  name : new SFString("Nh"),
                                  DEF : new SFString("el"),
                                  fieldValue : new MFNode([
                                    new fieldValue({
                                      name : new SFString("Oh"),
                                      children : new MFNode([
                                        new ProtoInstance({
                                          USE : new SFString("Ek")})])}),

                                    new fieldValue({
                                      name : new SFString("duration"),
                                      value : new SFString("0.232925")})])}),

                                new ProtoInstance({
                                  name : new SFString("ra"),
                                  DEF : new SFString("fl"),
                                  fieldValue : new MFNode([
                                    new fieldValue({
                                      name : new SFString("xa"),
                                      value : new SFString("1.268")})])}),

                                new ProtoInstance({
                                  name : new SFString("Xh"),
                                  DEF : new SFString("gl")})])})])}),

                        new Transform({
                          DEF : new SFString("hl"),
                          translation : new SFVec3f([-1.192e-7,-0.006944,0]),
                          children : new MFNode([
                            new Transform({
                              DEF : new SFString("il"),
                              scale : new SFVec3f([4.181,1.778,4.181]),
                              children : new MFNode([
                                new ProtoInstance({
                                  name : new SFString("Zh"),
                                  DEF : new SFString("jl"),
                                  fieldValue : new MFNode([
                                    new fieldValue({
                                      name : new SFString("url"),
                                      value : new SFString("\"\"")}),

                                    new fieldValue({
                                      name : new SFString("emissiveColor"),
                                      value : new SFString("0 0.09 0.15")}),

                                    new fieldValue({
                                      name : new SFString("specularColor"),
                                      value : new SFString("0.5 0.5 0.5")}),

                                    new fieldValue({
                                      name : new SFString("B"),
                                      children : new MFNode([
                                        new ProtoInstance({
                                          USE : new SFString("Li")})])}),

                                    new fieldValue({
                                      name : new SFString("C"),
                                      children : new MFNode([
                                        new Transform({
                                          USE : new SFString("hl")}),

                                        new Transform({
                                          USE : new SFString("il")})])}),

                                    new fieldValue({
                                      name : new SFString("ai"),
                                      value : new SFString("4 4")}),

                                    new fieldValue({
                                      name : new SFString("H"),
                                      value : new SFString("false")}),

                                    new fieldValue({
                                      name : new SFString("diffuseColor"),
                                      value : new SFString("0 0 0")}),

                                    new fieldValue({
                                      name : new SFString("choice"),
                                      value : new SFString("1")})])})])})])})])}),

                    new fieldValue({
                      name : new SFString("A"),
                      children : new MFNode([
                        new ProtoInstance({
                          USE : new SFString("Oi")}),

                        new ProtoInstance({
                          USE : new SFString("Ri")}),

                        new ProtoInstance({
                          USE : new SFString("aj")}),

                        new ProtoInstance({
                          USE : new SFString("fj")}),

                        new ProtoInstance({
                          USE : new SFString("ij")}),

                        new ProtoInstance({
                          USE : new SFString("lj")}),

                        new ProtoInstance({
                          USE : new SFString("wj")}),

                        new ProtoInstance({
                          USE : new SFString("Sj")}),

                        new ProtoInstance({
                          USE : new SFString("Xj")}),

                        new ProtoInstance({
                          USE : new SFString("bk")}),

                        new ProtoInstance({
                          USE : new SFString("ek")}),

                        new ProtoInstance({
                          USE : new SFString("Bk")}),

                        new ProtoInstance({
                          USE : new SFString("Ek")}),

                        new ProtoInstance({
                          USE : new SFString("jl")})])})])}),

                new ProtoInstance({
                  name : new SFString("f"),
                  DEF : new SFString("kl")})])}),

            new ROUTE({
              fromNode : new SFString("kl"),
              fromField : new SFString("j"),
              toNode : new SFString("Hi"),
              toField : new SFString("h")}),

            new ROUTE({
              fromNode : new SFString("Wi"),
              fromField : new SFString("yb_changed"),
              toNode : new SFString("Ti"),
              toField : new SFString("set_enabled")}),

            new ROUTE({
              fromNode : new SFString("Vi"),
              fromField : new SFString("R_changed"),
              toNode : new SFString("Ui"),
              toField : new SFString("R")}),

            new ROUTE({
              fromNode : new SFString("Hi"),
              fromField : new SFString("i"),
              toNode : new SFString("Vi"),
              toField : new SFString("R")}),

            new ROUTE({
              fromNode : new SFString("Ui"),
              fromField : new SFString("stopTime"),
              toNode : new SFString("Vi"),
              toField : new SFString("S")}),

            new ROUTE({
              fromNode : new SFString("Ui"),
              fromField : new SFString("fraction"),
              toNode : new SFString("Vi"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Ti"),
              fromField : new SFString("isOver"),
              toNode : new SFString("Wi"),
              toField : new SFString("qb")}),

            new ROUTE({
              fromNode : new SFString("Ti"),
              fromField : new SFString("isActive"),
              toNode : new SFString("Wi"),
              toField : new SFString("rb")}),

            new ROUTE({
              fromNode : new SFString("Ti"),
              fromField : new SFString("hitPoint_changed"),
              toNode : new SFString("Wi"),
              toField : new SFString("sb")}),

            new ROUTE({
              fromNode : new SFString("Ti"),
              fromField : new SFString("hitTexCoord_changed"),
              toNode : new SFString("Wi"),
              toField : new SFString("tb")}),

            new ROUTE({
              fromNode : new SFString("Qi"),
              fromField : new SFString("R_changed"),
              toNode : new SFString("Xi"),
              toField : new SFString("R")}),

            new ROUTE({
              fromNode : new SFString("Wi"),
              fromField : new SFString("exitTime"),
              toNode : new SFString("Xi"),
              toField : new SFString("S")}),

            new ROUTE({
              fromNode : new SFString("Wi"),
              fromField : new SFString("enterTime"),
              toNode : new SFString("Qi"),
              toField : new SFString("R")}),

            new ROUTE({
              fromNode : new SFString("Xi"),
              fromField : new SFString("stopTime"),
              toNode : new SFString("Qi"),
              toField : new SFString("S")}),

            new ROUTE({
              fromNode : new SFString("Xi"),
              fromField : new SFString("fraction"),
              toNode : new SFString("Qi"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Zi"),
              fromField : new SFString("R_changed"),
              toNode : new SFString("cj"),
              toField : new SFString("R")}),

            new ROUTE({
              fromNode : new SFString("Hi"),
              fromField : new SFString("i"),
              toNode : new SFString("Zi"),
              toField : new SFString("R")}),

            new ROUTE({
              fromNode : new SFString("cj"),
              fromField : new SFString("stopTime"),
              toNode : new SFString("Zi"),
              toField : new SFString("S")}),

            new ROUTE({
              fromNode : new SFString("cj"),
              fromField : new SFString("fraction"),
              toNode : new SFString("Zi"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("rj"),
              fromField : new SFString("R_changed"),
              toNode : new SFString("qj"),
              toField : new SFString("R")}),

            new ROUTE({
              fromNode : new SFString("Hi"),
              fromField : new SFString("i"),
              toNode : new SFString("rj"),
              toField : new SFString("R")}),

            new ROUTE({
              fromNode : new SFString("qj"),
              fromField : new SFString("stopTime"),
              toNode : new SFString("rj"),
              toField : new SFString("S")}),

            new ROUTE({
              fromNode : new SFString("qj"),
              fromField : new SFString("va"),
              toNode : new SFString("rj"),
              toField : new SFString("set_od")}),

            new ROUTE({
              fromNode : new SFString("qj"),
              fromField : new SFString("fraction"),
              toNode : new SFString("rj"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Jj"),
              fromField : new SFString("yb_changed"),
              toNode : new SFString("uj"),
              toField : new SFString("set_enabled")}),

            new ROUTE({
              fromNode : new SFString("Lj"),
              fromField : new SFString("yb_changed"),
              toNode : new SFString("vj"),
              toField : new SFString("set_enabled")}),

            new ROUTE({
              fromNode : new SFString("Lj"),
              fromField : new SFString("vb"),
              toNode : new SFString("Jj"),
              toField : new SFString("sa")}),

            new ROUTE({
              fromNode : new SFString("uj"),
              fromField : new SFString("isActive"),
              toNode : new SFString("Jj"),
              toField : new SFString("rb")}),

            new ROUTE({
              fromNode : new SFString("uj"),
              fromField : new SFString("rotation_changed"),
              toNode : new SFString("Jj"),
              toField : new SFString("ne")}),

            new ROUTE({
              fromNode : new SFString("uj"),
              fromField : new SFString("trackPoint_changed"),
              toNode : new SFString("Jj"),
              toField : new SFString("oe")}),

            new ROUTE({
              fromNode : new SFString("Lj"),
              fromField : new SFString("ub"),
              toNode : new SFString("Kj"),
              toField : new SFString("R")}),

            new ROUTE({
              fromNode : new SFString("Jj"),
              fromField : new SFString("stopTime"),
              toNode : new SFString("Kj"),
              toField : new SFString("S")}),

            new ROUTE({
              fromNode : new SFString("vj"),
              fromField : new SFString("isOver"),
              toNode : new SFString("Lj"),
              toField : new SFString("qb")}),

            new ROUTE({
              fromNode : new SFString("vj"),
              fromField : new SFString("isActive"),
              toNode : new SFString("Lj"),
              toField : new SFString("rb")}),

            new ROUTE({
              fromNode : new SFString("vj"),
              fromField : new SFString("hitPoint_changed"),
              toNode : new SFString("Lj"),
              toField : new SFString("sb")}),

            new ROUTE({
              fromNode : new SFString("vj"),
              fromField : new SFString("hitTexCoord_changed"),
              toNode : new SFString("Lj"),
              toField : new SFString("tb")}),

            new ROUTE({
              fromNode : new SFString("Nj"),
              fromField : new SFString("He"),
              toNode : new SFString("Mj"),
              toField : new SFString("R")}),

            new ROUTE({
              fromNode : new SFString("Mj"),
              fromField : new SFString("ua"),
              toNode : new SFString("Nj"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Mj"),
              fromField : new SFString("va"),
              toNode : new SFString("Nj"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Lj"),
              fromField : new SFString("vb"),
              toNode : new SFString("Oj"),
              toField : new SFString("R")}),

            new ROUTE({
              fromNode : new SFString("Mj"),
              fromField : new SFString("stopTime"),
              toNode : new SFString("Oj"),
              toField : new SFString("S")}),

            new ROUTE({
              fromNode : new SFString("Nj"),
              fromField : new SFString("Ie"),
              toNode : new SFString("Oj"),
              toField : new SFString("S")}),

            new ROUTE({
              fromNode : new SFString("Qj"),
              fromField : new SFString("R_changed"),
              toNode : new SFString("Tj"),
              toField : new SFString("R")}),

            new ROUTE({
              fromNode : new SFString("Hi"),
              fromField : new SFString("i"),
              toNode : new SFString("Qj"),
              toField : new SFString("R")}),

            new ROUTE({
              fromNode : new SFString("Tj"),
              fromField : new SFString("stopTime"),
              toNode : new SFString("Qj"),
              toField : new SFString("S")}),

            new ROUTE({
              fromNode : new SFString("Tj"),
              fromField : new SFString("va"),
              toNode : new SFString("Qj"),
              toField : new SFString("set_od")}),

            new ROUTE({
              fromNode : new SFString("Tj"),
              fromField : new SFString("fraction"),
              toNode : new SFString("Qj"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Tj"),
              fromField : new SFString("fraction"),
              toNode : new SFString("Qj"),
              toField : new SFString("jf")}),

            new ROUTE({
              fromNode : new SFString("Vj"),
              fromField : new SFString("R_changed"),
              toNode : new SFString("Yj"),
              toField : new SFString("R")}),

            new ROUTE({
              fromNode : new SFString("Hi"),
              fromField : new SFString("i"),
              toNode : new SFString("Vj"),
              toField : new SFString("R")}),

            new ROUTE({
              fromNode : new SFString("Yj"),
              fromField : new SFString("stopTime"),
              toNode : new SFString("Vj"),
              toField : new SFString("S")}),

            new ROUTE({
              fromNode : new SFString("Yj"),
              fromField : new SFString("va"),
              toNode : new SFString("Vj"),
              toField : new SFString("set_od")}),

            new ROUTE({
              fromNode : new SFString("Yj"),
              fromField : new SFString("fraction"),
              toNode : new SFString("Vj"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Yj"),
              fromField : new SFString("fraction"),
              toNode : new SFString("Vj"),
              toField : new SFString("jf")}),

            new ROUTE({
              fromNode : new SFString("dk"),
              fromField : new SFString("R_changed"),
              toNode : new SFString("tk"),
              toField : new SFString("R")}),

            new ROUTE({
              fromNode : new SFString("rk"),
              fromField : new SFString("R_changed"),
              toNode : new SFString("uk"),
              toField : new SFString("R")}),

            new ROUTE({
              fromNode : new SFString("xk"),
              fromField : new SFString("Dg"),
              toNode : new SFString("vk"),
              toField : new SFString("R")}),

            new ROUTE({
              fromNode : new SFString("xk"),
              fromField : new SFString("Bg"),
              toNode : new SFString("wk"),
              toField : new SFString("set_position")}),

            new ROUTE({
              fromNode : new SFString("vk"),
              fromField : new SFString("fraction"),
              toNode : new SFString("xk"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Hi"),
              fromField : new SFString("i"),
              toNode : new SFString("yk"),
              toField : new SFString("R")}),

            new ROUTE({
              fromNode : new SFString("vk"),
              fromField : new SFString("stopTime"),
              toNode : new SFString("yk"),
              toField : new SFString("S")}),

            new ROUTE({
              fromNode : new SFString("vk"),
              fromField : new SFString("Ba"),
              toNode : new SFString("yk"),
              toField : new SFString("S")}),

            new ROUTE({
              fromNode : new SFString("Hi"),
              fromField : new SFString("i"),
              toNode : new SFString("rk"),
              toField : new SFString("R")}),

            new ROUTE({
              fromNode : new SFString("uk"),
              fromField : new SFString("stopTime"),
              toNode : new SFString("rk"),
              toField : new SFString("S")}),

            new ROUTE({
              fromNode : new SFString("uk"),
              fromField : new SFString("fraction"),
              toNode : new SFString("rk"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Hi"),
              fromField : new SFString("i"),
              toNode : new SFString("dk"),
              toField : new SFString("R")}),

            new ROUTE({
              fromNode : new SFString("tk"),
              fromField : new SFString("stopTime"),
              toNode : new SFString("dk"),
              toField : new SFString("S")}),

            new ROUTE({
              fromNode : new SFString("tk"),
              fromField : new SFString("fraction"),
              toNode : new SFString("dk"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Gk"),
              fromField : new SFString("startTime"),
              toNode : new SFString("Fk"),
              toField : new SFString("R")}),

            new ROUTE({
              fromNode : new SFString("vk"),
              fromField : new SFString("Aa"),
              toNode : new SFString("Gk"),
              toField : new SFString("R")}),

            new ROUTE({
              fromNode : new SFString("vk"),
              fromField : new SFString("startTime"),
              toNode : new SFString("Gk"),
              toField : new SFString("R")}),

            new ROUTE({
              fromNode : new SFString("Fk"),
              fromField : new SFString("stopTime"),
              toNode : new SFString("Gk"),
              toField : new SFString("S")}),

            new ROUTE({
              fromNode : new SFString("Fk"),
              fromField : new SFString("va"),
              toNode : new SFString("Gk"),
              toField : new SFString("set_intensity")}),

            new ROUTE({
              fromNode : new SFString("Fk"),
              fromField : new SFString("fraction"),
              toNode : new SFString("Gk"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Ek"),
              fromField : new SFString("Jh"),
              toNode : new SFString("Gk"),
              toField : new SFString("Jh")}),

            new ROUTE({
              fromNode : new SFString("Ik"),
              fromField : new SFString("R_changed"),
              toNode : new SFString("Hk"),
              toField : new SFString("R")}),

            new ROUTE({
              fromNode : new SFString("Gk"),
              fromField : new SFString("stopTime"),
              toNode : new SFString("Ik"),
              toField : new SFString("R")}),

            new ROUTE({
              fromNode : new SFString("Hk"),
              fromField : new SFString("stopTime"),
              toNode : new SFString("Ik"),
              toField : new SFString("S")}),

            new ROUTE({
              fromNode : new SFString("Kk"),
              fromField : new SFString("startTime"),
              toNode : new SFString("Jk"),
              toField : new SFString("R")}),

            new ROUTE({
              fromNode : new SFString("Hk"),
              fromField : new SFString("stopTime"),
              toNode : new SFString("Kk"),
              toField : new SFString("R")}),

            new ROUTE({
              fromNode : new SFString("Jk"),
              fromField : new SFString("stopTime"),
              toNode : new SFString("Kk"),
              toField : new SFString("S")}),

            new ROUTE({
              fromNode : new SFString("Jk"),
              fromField : new SFString("va"),
              toNode : new SFString("Kk"),
              toField : new SFString("set_intensity")}),

            new ROUTE({
              fromNode : new SFString("Jk"),
              fromField : new SFString("fraction"),
              toNode : new SFString("Kk"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Ek"),
              fromField : new SFString("Jh"),
              toNode : new SFString("Kk"),
              toField : new SFString("Jh")}),

            new ROUTE({
              fromNode : new SFString("Mk"),
              fromField : new SFString("R_changed"),
              toNode : new SFString("Lk"),
              toField : new SFString("R")}),

            new ROUTE({
              fromNode : new SFString("Kk"),
              fromField : new SFString("stopTime"),
              toNode : new SFString("Mk"),
              toField : new SFString("R")}),

            new ROUTE({
              fromNode : new SFString("Lk"),
              fromField : new SFString("stopTime"),
              toNode : new SFString("Mk"),
              toField : new SFString("S")}),

            new ROUTE({
              fromNode : new SFString("Ok"),
              fromField : new SFString("startTime"),
              toNode : new SFString("Nk"),
              toField : new SFString("R")}),

            new ROUTE({
              fromNode : new SFString("Lk"),
              fromField : new SFString("stopTime"),
              toNode : new SFString("Ok"),
              toField : new SFString("R")}),

            new ROUTE({
              fromNode : new SFString("Nk"),
              fromField : new SFString("stopTime"),
              toNode : new SFString("Ok"),
              toField : new SFString("S")}),

            new ROUTE({
              fromNode : new SFString("Nk"),
              fromField : new SFString("va"),
              toNode : new SFString("Ok"),
              toField : new SFString("set_intensity")}),

            new ROUTE({
              fromNode : new SFString("Nk"),
              fromField : new SFString("fraction"),
              toNode : new SFString("Ok"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Ek"),
              fromField : new SFString("Jh"),
              toNode : new SFString("Ok"),
              toField : new SFString("Jh")}),

            new ROUTE({
              fromNode : new SFString("Qk"),
              fromField : new SFString("R_changed"),
              toNode : new SFString("Pk"),
              toField : new SFString("R")}),

            new ROUTE({
              fromNode : new SFString("Ok"),
              fromField : new SFString("stopTime"),
              toNode : new SFString("Qk"),
              toField : new SFString("R")}),

            new ROUTE({
              fromNode : new SFString("Pk"),
              fromField : new SFString("stopTime"),
              toNode : new SFString("Qk"),
              toField : new SFString("S")}),

            new ROUTE({
              fromNode : new SFString("Sk"),
              fromField : new SFString("startTime"),
              toNode : new SFString("Rk"),
              toField : new SFString("R")}),

            new ROUTE({
              fromNode : new SFString("Pk"),
              fromField : new SFString("stopTime"),
              toNode : new SFString("Sk"),
              toField : new SFString("R")}),

            new ROUTE({
              fromNode : new SFString("Rk"),
              fromField : new SFString("stopTime"),
              toNode : new SFString("Sk"),
              toField : new SFString("S")}),

            new ROUTE({
              fromNode : new SFString("Rk"),
              fromField : new SFString("va"),
              toNode : new SFString("Sk"),
              toField : new SFString("set_intensity")}),

            new ROUTE({
              fromNode : new SFString("Rk"),
              fromField : new SFString("fraction"),
              toNode : new SFString("Sk"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Ek"),
              fromField : new SFString("Jh"),
              toNode : new SFString("Sk"),
              toField : new SFString("Jh")}),

            new ROUTE({
              fromNode : new SFString("Uk"),
              fromField : new SFString("R_changed"),
              toNode : new SFString("Tk"),
              toField : new SFString("R")}),

            new ROUTE({
              fromNode : new SFString("Sk"),
              fromField : new SFString("stopTime"),
              toNode : new SFString("Uk"),
              toField : new SFString("R")}),

            new ROUTE({
              fromNode : new SFString("Tk"),
              fromField : new SFString("stopTime"),
              toNode : new SFString("Uk"),
              toField : new SFString("S")}),

            new ROUTE({
              fromNode : new SFString("Wk"),
              fromField : new SFString("startTime"),
              toNode : new SFString("Vk"),
              toField : new SFString("R")}),

            new ROUTE({
              fromNode : new SFString("Tk"),
              fromField : new SFString("stopTime"),
              toNode : new SFString("Wk"),
              toField : new SFString("R")}),

            new ROUTE({
              fromNode : new SFString("Vk"),
              fromField : new SFString("stopTime"),
              toNode : new SFString("Wk"),
              toField : new SFString("S")}),

            new ROUTE({
              fromNode : new SFString("Vk"),
              fromField : new SFString("va"),
              toNode : new SFString("Wk"),
              toField : new SFString("set_intensity")}),

            new ROUTE({
              fromNode : new SFString("Vk"),
              fromField : new SFString("fraction"),
              toNode : new SFString("Wk"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Ek"),
              fromField : new SFString("Jh"),
              toNode : new SFString("Wk"),
              toField : new SFString("Jh")}),

            new ROUTE({
              fromNode : new SFString("Yk"),
              fromField : new SFString("R_changed"),
              toNode : new SFString("Xk"),
              toField : new SFString("R")}),

            new ROUTE({
              fromNode : new SFString("Wk"),
              fromField : new SFString("stopTime"),
              toNode : new SFString("Yk"),
              toField : new SFString("R")}),

            new ROUTE({
              fromNode : new SFString("Xk"),
              fromField : new SFString("stopTime"),
              toNode : new SFString("Yk"),
              toField : new SFString("S")}),

            new ROUTE({
              fromNode : new SFString("al"),
              fromField : new SFString("startTime"),
              toNode : new SFString("Zk"),
              toField : new SFString("R")}),

            new ROUTE({
              fromNode : new SFString("Xk"),
              fromField : new SFString("stopTime"),
              toNode : new SFString("al"),
              toField : new SFString("R")}),

            new ROUTE({
              fromNode : new SFString("Zk"),
              fromField : new SFString("stopTime"),
              toNode : new SFString("al"),
              toField : new SFString("S")}),

            new ROUTE({
              fromNode : new SFString("Zk"),
              fromField : new SFString("va"),
              toNode : new SFString("al"),
              toField : new SFString("set_intensity")}),

            new ROUTE({
              fromNode : new SFString("Zk"),
              fromField : new SFString("fraction"),
              toNode : new SFString("al"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Ek"),
              fromField : new SFString("Jh"),
              toNode : new SFString("al"),
              toField : new SFString("Jh")}),

            new ROUTE({
              fromNode : new SFString("cl"),
              fromField : new SFString("R_changed"),
              toNode : new SFString("bl"),
              toField : new SFString("R")}),

            new ROUTE({
              fromNode : new SFString("al"),
              fromField : new SFString("stopTime"),
              toNode : new SFString("cl"),
              toField : new SFString("R")}),

            new ROUTE({
              fromNode : new SFString("bl"),
              fromField : new SFString("stopTime"),
              toNode : new SFString("cl"),
              toField : new SFString("S")}),

            new ROUTE({
              fromNode : new SFString("el"),
              fromField : new SFString("startTime"),
              toNode : new SFString("dl"),
              toField : new SFString("R")}),

            new ROUTE({
              fromNode : new SFString("bl"),
              fromField : new SFString("stopTime"),
              toNode : new SFString("el"),
              toField : new SFString("R")}),

            new ROUTE({
              fromNode : new SFString("dl"),
              fromField : new SFString("stopTime"),
              toNode : new SFString("el"),
              toField : new SFString("S")}),

            new ROUTE({
              fromNode : new SFString("dl"),
              fromField : new SFString("va"),
              toNode : new SFString("el"),
              toField : new SFString("set_intensity")}),

            new ROUTE({
              fromNode : new SFString("dl"),
              fromField : new SFString("fraction"),
              toNode : new SFString("el"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Ek"),
              fromField : new SFString("Jh"),
              toNode : new SFString("el"),
              toField : new SFString("Jh")}),

            new ROUTE({
              fromNode : new SFString("gl"),
              fromField : new SFString("R_changed"),
              toNode : new SFString("fl"),
              toField : new SFString("R")}),

            new ROUTE({
              fromNode : new SFString("el"),
              fromField : new SFString("stopTime"),
              toNode : new SFString("gl"),
              toField : new SFString("R")}),

            new ROUTE({
              fromNode : new SFString("fl"),
              fromField : new SFString("stopTime"),
              toNode : new SFString("gl"),
              toField : new SFString("S")}),

            new ROUTE({
              fromNode : new SFString("Hi"),
              fromField : new SFString("j"),
              toNode : new SFString("kl"),
              toField : new SFString("h")})])}))});
console.log(X3D0.toXMLNode());
