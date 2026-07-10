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
var Viewpoint = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var ProtoDeclare = require('./x3d.mjs');
var ProtoInterface = require('./x3d.mjs');
var field = require('./x3d.mjs');
var ProtoBody = require('./x3d.mjs');
var Group = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var TouchSensor = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var Text = require('./x3d.mjs');
var IS = require('./x3d.mjs');
var connect = require('./x3d.mjs');
var FontStyle = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var MFString = require('./x3d.mjs');
var IndexedFaceSet = require('./x3d.mjs');
var MFInt32 = require('./x3d.mjs');
var Coordinate = require('./x3d.mjs');
var MFVec3f = require('./x3d.mjs');
var Switch = require('./x3d.mjs');
var SFInt32 = require('./x3d.mjs');
var Inline = require('./x3d.mjs');
var Script = require('./x3d.mjs');
var ROUTE = require('./x3d.mjs');
var ProtoInstance = require('./x3d.mjs');
var fieldValue = require('./x3d.mjs');
var X3D0 =  new X3D({

      profile : new SFString("Immersive"),
      version : new SFString("4.0"),
      head : new SFNode(
        new head({
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("Menu.x3d")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("X3D scene with a Switch of Inlines controlled by a menu")})])})),
      Scene : new SFNode(
        new Scene({
          /*Viewpoint and any other scene setup*/
          children : new MFNode([
            new Viewpoint({
              position : new SFVec3f([0,20,110])}),
          /*Menu prototype declaration*/

            new ProtoDeclare({
              name : new SFString("Menu"),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_MFSTRING,
                      name : new SFString("menuItems"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Group({
                      children : new MFNode([
                        new Transform({
                          DEF : new SFString("TextMenuTransform"),
                          translation : new SFVec3f([48,27,0]),
                          children : new MFNode([
                            new TouchSensor({
                              DEF : new SFString("MenuTouchSensor")}),
                          child : new SFNode(
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      diffuseColor : new SFColor([1,1,1])}))})),
                              geometry : new SFNode(
                                new Text({
                                  DEF : new SFString("MenuText"),
                                  IS : new SFNode(
                                    new IS({
                                      connect : new MFNode([
                                        new connect({
                                          nodeField : new SFString("string"),
                                          protoField : new SFString("menuItems")})])})),
                                  fontStyle : new SFNode(
                                    new FontStyle({
                                      size : new SFFloat(2.4),
                                      spacing : new SFFloat(1.2),
                                      justify : new MFString(["MIDDLE","MIDDLE"])}))}))})]),
                          child : new SFNode(
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      diffuseColor : new SFColor([0,0,1])}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  DEF : new SFString("Backing"),
                                  coordIndex : new MFInt32([0,1,2,3,-1]),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([25,36,-0.01,-25,36,-0.01,-25,-51,-0.01,25,-51,-0.01])}))}))}))}),

                        new Switch({
                          DEF : new SFString("SceneSwitcher"),
                          whichChoice : new SFInt32(0),
                          children : new MFNode([
                            new Inline({
                              DEF : new SFString("OPTION1"),
                              url : new MFString(["../resources/JinInnerBrowRaiser.x3d","JinInnerBrowRaiser.x3d"])}),

                            new Inline({
                              DEF : new SFString("OPTION2"),
                              url : new MFString(["../resources/JinOuterBrowRaiser.x3d","JinOuterBrowRaiser.x3d"])}),

                            new Inline({
                              DEF : new SFString("OPTION3"),
                              url : new MFString(["../resources/JinBrowLowerer.x3d","JinBrowLowerer.x3d"])}),

                            new Inline({
                              DEF : new SFString("OPTION4"),
                              url : new MFString(["../resources/JinUpperLidRaiser.x3d","JinUpperLidRaiser.x3d"])}),

                            new Inline({
                              DEF : new SFString("OPTION5"),
                              url : new MFString(["../resources/JinCheekRaiser.x3d","JinCheekRaiser.x3d"])}),

                            new Inline({
                              DEF : new SFString("OPTION6"),
                              url : new MFString(["../resources/JinLidTightener.x3d","JinLidTightener.x3d"])}),

                            new Inline({
                              DEF : new SFString("OPTION7"),
                              url : new MFString(["../resources/JinNoseWrinkler.x3d","JinNoseWrinkler.x3d"])}),

                            new Inline({
                              DEF : new SFString("OPTION8"),
                              url : new MFString(["../resources/JinUpperLipRaiser.x3d","JinUpperLipRaiser.x3d"])}),

                            new Inline({
                              DEF : new SFString("OPTION9"),
                              url : new MFString(["../resources/JinNasolabialDeepener.x3d","JinNasolabialDeepener.x3d"])}),

                            new Inline({
                              DEF : new SFString("OPTION10"),
                              url : new MFString(["../resources/JinLipCornerPuller.x3d","JinLipCornerPuller.x3d"])}),

                            new Inline({
                              DEF : new SFString("OPTION11"),
                              url : new MFString(["../resources/JinCheekPuffer.x3d","JinCheekPuffer.x3d"])}),

                            new Inline({
                              DEF : new SFString("OPTION12"),
                              url : new MFString(["../resources/JinDimpler.x3d","JinDimpler.x3d"])}),

                            new Inline({
                              DEF : new SFString("OPTION13"),
                              url : new MFString(["../resources/JinLipCornerDepressor.x3d","JinLipCornerDepressor.x3d"])}),

                            new Inline({
                              DEF : new SFString("OPTION14"),
                              url : new MFString(["../resources/JinLowerLipDepressor.x3d","JinLowerLipDepressor.x3d"])}),

                            new Inline({
                              DEF : new SFString("OPTION15"),
                              url : new MFString(["../resources/JinChinRaiser.x3d","JinChinRaiser.x3d"])}),

                            new Inline({
                              DEF : new SFString("OPTION16"),
                              url : new MFString(["../resources/JinLipPuckerer.x3d","JinLipPuckerer.x3d"])}),

                            new Inline({
                              DEF : new SFString("OPTION17"),
                              url : new MFString(["../resources/JinLipStretcher.x3d","JinLipStretcher.x3d"])}),

                            new Inline({
                              DEF : new SFString("OPTION18"),
                              url : new MFString(["../resources/JinLipFunneler.x3d","JinLipFunneler.x3d"])}),

                            new Inline({
                              DEF : new SFString("OPTION19"),
                              url : new MFString(["../resources/JinLipTightener.x3d","JinLipTightener.x3d"])}),

                            new Inline({
                              DEF : new SFString("OPTION20"),
                              url : new MFString(["../resources/JinLipPressor.x3d","JinLipPressor.x3d"])}),

                            new Inline({
                              DEF : new SFString("OPTION21"),
                              url : new MFString(["../resources/JinLipsPart.x3d","JinLipsPart.x3d"])}),

                            new Inline({
                              DEF : new SFString("OPTION22"),
                              url : new MFString(["../resources/JinJawDrop.x3d","JinJawDrop.x3d"])}),

                            new Inline({
                              DEF : new SFString("OPTION23"),
                              url : new MFString(["../resources/JinMouthStretch.x3d","JinMouthStretch.x3d"])}),

                            new Inline({
                              DEF : new SFString("OPTION24"),
                              url : new MFString(["../resources/JinLipSuck.x3d","JinLipSuck.x3d"])}),

                            new Inline({
                              DEF : new SFString("OPTION25"),
                              url : new MFString(["../resources/JinLidDroop.x3d","JinLidDroop.x3d"])}),

                            new Inline({
                              DEF : new SFString("OPTION26"),
                              url : new MFString(["../resources/JinSlit.x3d","JinSlit.x3d"])}),

                            new Inline({
                              DEF : new SFString("OPTION27"),
                              url : new MFString(["../resources/JinEyesClosed.x3d","JinEyesClosed.x3d"])}),

                            new Inline({
                              DEF : new SFString("OPTION28"),
                              url : new MFString(["../resources/JinSquint.x3d","JinSquint.x3d"])}),

                            new Inline({
                              DEF : new SFString("OPTION29"),
                              url : new MFString(["../resources/JinBlink.x3d","JinBlink.x3d"])}),

                            new Inline({
                              DEF : new SFString("OPTION30"),
                              url : new MFString(["../resources/JinWink.x3d","JinWink.x3d"])})])}),
                      /*Script to handle selection logic*/

                        new Script({
                          DEF : new SFString("MenuScript"),
                          field : new MFNode([
                            new field({
                              type : field.TYPE_MFSTRING,
                              name : new SFString("menuItems"),
                              accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                            new field({
                              type : field.TYPE_SFINT32,
                              name : new SFString("selection"),
                              accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY)}),

                            new field({
                              type : field.TYPE_SFVEC3F,
                              name : new SFString("touchPoint"),
                              accessType : new SFString(field.ACCESSTYPE_INPUTONLY)}),

                            new field({
                              type : field.TYPE_SFFLOAT,
                              name : new SFString("spacing"),
                              accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                              value : new SFString("1.2")}),

                            new field({
                              type : field.TYPE_SFFLOAT,
                              name : new SFString("size"),
                              accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                              value : new SFString("2.4")}),

                            new field({
                              type : field.TYPE_SFFLOAT,
                              name : new SFString("menuCenterY"),
                              accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),

                            new field({
                              type : field.TYPE_SFFLOAT,
                              name : new SFString("itemHeight"),
                              accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY)}),
                          IS : new SFNode(
                            new IS({
                              connect : new MFNode([
                                new connect({
                                  nodeField : new SFString("menuItems"),
                                  protoField : new SFString("menuItems")})])})]),
                          
ecmascript:eval (0
        , function initialize() {
          selection = 0;
          var spacingBetweenGlyphs = size * spacing - size; // Spacing calculation
          var menuHeight = (size + spacingBetweenGlyphs) * menuItems.length;
          menuCenterY = menuHeight / 2;
          itemHeight = menuHeight / menuItems.length;
        }

        , function touchPoint(value) {
          Browser.print("Hit "+value+" "+selection+"
");
          var index = Math.floor((menuCenterY - value.y) / itemHeight - 0.5);

          selection = index - 2;
          if (selection >= 0 && selection < menuItems.length) {
            Browser.print("Selected "+value+" "+selection+" "+menuItems[selection]+"
");
          }
        })}),
                      /*ROUTEs to connect everything*/

                        new ROUTE({
                          fromNode : new SFString("MenuTouchSensor"),
                          fromField : new SFString("hitPoint_changed"),
                          toNode : new SFString("MenuScript"),
                          toField : new SFString("touchPoint")}),

                        new ROUTE({
                          fromNode : new SFString("MenuScript"),
                          fromField : new SFString("selection"),
                          toNode : new SFString("SceneSwitcher"),
                          toField : new SFString("whichChoice")})])})])}))}),

            new ProtoInstance({
              name : new SFString("Menu"),
              DEF : new SFString("MainMenu"),
              fieldValue : new MFNode([
                new fieldValue({
                  name : new SFString("menuItems"),
                  value : new SFString("\"JinInnerBrowRaiser.x3d\" \"JinOuterBrowRaiser.x3d\" \"JinBrowLowerer.x3d\" \"JinUpperLidRaiser.x3d\" \"JinCheekRaiser.x3d\" \"JinLidTightener.x3d\" \"JinNoseWrinkler.x3d\" \"JinUpperLipRaiser.x3d\" \"JinNasolabialDeepener.x3d\" \"JinLipCornerPuller.x3d\" \"JinCheekPuffer.x3d\" \"JinDimpler.x3d\" \"JinLipCornerDepressor.x3d\" \"JinLowerLipDepressor.x3d\" \"JinChinRaiser.x3d\" \"JinLipPuckerer.x3d\" \"JinLipStretcher.x3d\" \"JinLipFunneler.x3d\" \"JinLipTightener.x3d\" \"JinLipPressor.x3d\" \"JinLipsPart.x3d\" \"JinJawDrop.x3d\" \"JinMouthStretch.x3d\" \"JinLipSuck.x3d\" \"JinLidDroop.x3d\" \"JinSlit.x3d\" \"JinEyesClosed.x3d\" \"JinSquint.x3d\" \"JinBlink.x3d\" \"JinWink.x3d\"")})])})])}))});
console.log(X3D0.toXMLNode());
