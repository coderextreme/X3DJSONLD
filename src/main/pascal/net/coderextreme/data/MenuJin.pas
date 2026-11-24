unit MenuJin;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

function CreateMenuJin: TX3DRootNode;

implementation

uses CastleVectors;

var
X3D0: TX3DRootNode;
Group5: TGroupNode;
Viewpoint6: TViewpointNode;
Group7: TGroupNode;
Switch8: TSwitchNode;
Group9: TGroupNode;
Script10: TScriptNode;
SFTime11: TSFTime;
SFInt3212: TSFInt32;
Inline13: TInlineNode;
Group14: TGroupNode;
Script15: TScriptNode;
SFTime16: TSFTime;
SFInt3217: TSFInt32;
Inline18: TInlineNode;
Group19: TGroupNode;
Script20: TScriptNode;
SFTime21: TSFTime;
SFInt3222: TSFInt32;
Inline23: TInlineNode;
Group24: TGroupNode;
Script25: TScriptNode;
SFTime26: TSFTime;
SFInt3227: TSFInt32;
Inline28: TInlineNode;
Group29: TGroupNode;
Script30: TScriptNode;
SFTime31: TSFTime;
SFInt3232: TSFInt32;
Inline33: TInlineNode;
Group34: TGroupNode;
Script35: TScriptNode;
SFTime36: TSFTime;
SFInt3237: TSFInt32;
Inline38: TInlineNode;
Group39: TGroupNode;
Script40: TScriptNode;
SFTime41: TSFTime;
SFInt3242: TSFInt32;
Inline43: TInlineNode;
Group44: TGroupNode;
Script45: TScriptNode;
SFTime46: TSFTime;
SFInt3247: TSFInt32;
Inline48: TInlineNode;
Group49: TGroupNode;
Script50: TScriptNode;
SFTime51: TSFTime;
SFInt3252: TSFInt32;
Inline53: TInlineNode;
Group54: TGroupNode;
Script55: TScriptNode;
SFTime56: TSFTime;
SFInt3257: TSFInt32;
Inline58: TInlineNode;
Group59: TGroupNode;
Script60: TScriptNode;
SFTime61: TSFTime;
SFInt3262: TSFInt32;
Inline63: TInlineNode;
Group64: TGroupNode;
Script65: TScriptNode;
SFTime66: TSFTime;
SFInt3267: TSFInt32;
Inline68: TInlineNode;
Group69: TGroupNode;
Script70: TScriptNode;
SFTime71: TSFTime;
SFInt3272: TSFInt32;
Inline73: TInlineNode;
Group74: TGroupNode;
Script75: TScriptNode;
SFTime76: TSFTime;
SFInt3277: TSFInt32;
Inline78: TInlineNode;
Group79: TGroupNode;
Script80: TScriptNode;
SFTime81: TSFTime;
SFInt3282: TSFInt32;
Inline83: TInlineNode;
Group84: TGroupNode;
Script85: TScriptNode;
SFTime86: TSFTime;
SFInt3287: TSFInt32;
Inline88: TInlineNode;
Group89: TGroupNode;
Script90: TScriptNode;
SFTime91: TSFTime;
SFInt3292: TSFInt32;
Inline93: TInlineNode;
Group94: TGroupNode;
Script95: TScriptNode;
SFTime96: TSFTime;
SFInt3297: TSFInt32;
Inline98: TInlineNode;
Group99: TGroupNode;
Script100: TScriptNode;
SFTime101: TSFTime;
SFInt32102: TSFInt32;
Inline103: TInlineNode;
Group104: TGroupNode;
Script105: TScriptNode;
SFTime106: TSFTime;
SFInt32107: TSFInt32;
Inline108: TInlineNode;
Group109: TGroupNode;
Script110: TScriptNode;
SFTime111: TSFTime;
SFInt32112: TSFInt32;
Inline113: TInlineNode;
Group114: TGroupNode;
Script115: TScriptNode;
SFTime116: TSFTime;
SFInt32117: TSFInt32;
Inline118: TInlineNode;
Group119: TGroupNode;
Script120: TScriptNode;
SFTime121: TSFTime;
SFInt32122: TSFInt32;
Inline123: TInlineNode;
Group124: TGroupNode;
Script125: TScriptNode;
SFTime126: TSFTime;
SFInt32127: TSFInt32;
Inline128: TInlineNode;
Group129: TGroupNode;
Script130: TScriptNode;
SFTime131: TSFTime;
SFInt32132: TSFInt32;
Inline133: TInlineNode;
Group134: TGroupNode;
Script135: TScriptNode;
SFTime136: TSFTime;
SFInt32137: TSFInt32;
Inline138: TInlineNode;
Group139: TGroupNode;
Script140: TScriptNode;
SFTime141: TSFTime;
SFInt32142: TSFInt32;
Inline143: TInlineNode;
Group144: TGroupNode;
Script145: TScriptNode;
SFTime146: TSFTime;
SFInt32147: TSFInt32;
Inline148: TInlineNode;
Group149: TGroupNode;
Script150: TScriptNode;
SFTime151: TSFTime;
SFInt32152: TSFInt32;
Inline153: TInlineNode;
Group154: TGroupNode;
Script155: TScriptNode;
SFTime156: TSFTime;
SFInt32157: TSFInt32;
Inline158: TInlineNode;
Transform159: TTransformNode;
TouchSensor160: TTouchSensorNode;
Shape161: TShapeNode;
Appearance162: TAppearanceNode;
Material163: TMaterialNode;
Text164: TTextNode;
FontStyle165: TFontStyleNode;
Shape166: TShapeNode;
Appearance167: TAppearanceNode;
Material168: TMaterialNode;
IndexedFaceSet169: TIndexedFaceSetNode;
Coordinate170: TCoordinateNode;
Transform173: TTransformNode;
TouchSensor174: TTouchSensorNode;
Shape175: TShapeNode;
Appearance176: TAppearanceNode;
Material177: TMaterialNode;
Text178: TTextNode;
FontStyle179: TFontStyleNode;
Shape180: TShapeNode;
Appearance181: TAppearanceNode;
Material182: TMaterialNode;
IndexedFaceSet183: TIndexedFaceSetNode;
Coordinate184: TCoordinateNode;
Transform187: TTransformNode;
TouchSensor188: TTouchSensorNode;
Shape189: TShapeNode;
Appearance190: TAppearanceNode;
Material191: TMaterialNode;
Text192: TTextNode;
FontStyle193: TFontStyleNode;
Shape194: TShapeNode;
Appearance195: TAppearanceNode;
Material196: TMaterialNode;
IndexedFaceSet197: TIndexedFaceSetNode;
Coordinate198: TCoordinateNode;
Transform201: TTransformNode;
TouchSensor202: TTouchSensorNode;
Shape203: TShapeNode;
Appearance204: TAppearanceNode;
Material205: TMaterialNode;
Text206: TTextNode;
FontStyle207: TFontStyleNode;
Shape208: TShapeNode;
Appearance209: TAppearanceNode;
Material210: TMaterialNode;
IndexedFaceSet211: TIndexedFaceSetNode;
Coordinate212: TCoordinateNode;
Transform215: TTransformNode;
TouchSensor216: TTouchSensorNode;
Shape217: TShapeNode;
Appearance218: TAppearanceNode;
Material219: TMaterialNode;
Text220: TTextNode;
FontStyle221: TFontStyleNode;
Shape222: TShapeNode;
Appearance223: TAppearanceNode;
Material224: TMaterialNode;
IndexedFaceSet225: TIndexedFaceSetNode;
Coordinate226: TCoordinateNode;
Transform229: TTransformNode;
TouchSensor230: TTouchSensorNode;
Shape231: TShapeNode;
Appearance232: TAppearanceNode;
Material233: TMaterialNode;
Text234: TTextNode;
FontStyle235: TFontStyleNode;
Shape236: TShapeNode;
Appearance237: TAppearanceNode;
Material238: TMaterialNode;
IndexedFaceSet239: TIndexedFaceSetNode;
Coordinate240: TCoordinateNode;
Transform243: TTransformNode;
TouchSensor244: TTouchSensorNode;
Shape245: TShapeNode;
Appearance246: TAppearanceNode;
Material247: TMaterialNode;
Text248: TTextNode;
FontStyle249: TFontStyleNode;
Shape250: TShapeNode;
Appearance251: TAppearanceNode;
Material252: TMaterialNode;
IndexedFaceSet253: TIndexedFaceSetNode;
Coordinate254: TCoordinateNode;
Transform257: TTransformNode;
TouchSensor258: TTouchSensorNode;
Shape259: TShapeNode;
Appearance260: TAppearanceNode;
Material261: TMaterialNode;
Text262: TTextNode;
FontStyle263: TFontStyleNode;
Shape264: TShapeNode;
Appearance265: TAppearanceNode;
Material266: TMaterialNode;
IndexedFaceSet267: TIndexedFaceSetNode;
Coordinate268: TCoordinateNode;
Transform271: TTransformNode;
TouchSensor272: TTouchSensorNode;
Shape273: TShapeNode;
Appearance274: TAppearanceNode;
Material275: TMaterialNode;
Text276: TTextNode;
FontStyle277: TFontStyleNode;
Shape278: TShapeNode;
Appearance279: TAppearanceNode;
Material280: TMaterialNode;
IndexedFaceSet281: TIndexedFaceSetNode;
Coordinate282: TCoordinateNode;
Transform285: TTransformNode;
TouchSensor286: TTouchSensorNode;
Shape287: TShapeNode;
Appearance288: TAppearanceNode;
Material289: TMaterialNode;
Text290: TTextNode;
FontStyle291: TFontStyleNode;
Shape292: TShapeNode;
Appearance293: TAppearanceNode;
Material294: TMaterialNode;
IndexedFaceSet295: TIndexedFaceSetNode;
Coordinate296: TCoordinateNode;
Transform299: TTransformNode;
TouchSensor300: TTouchSensorNode;
Shape301: TShapeNode;
Appearance302: TAppearanceNode;
Material303: TMaterialNode;
Text304: TTextNode;
FontStyle305: TFontStyleNode;
Shape306: TShapeNode;
Appearance307: TAppearanceNode;
Material308: TMaterialNode;
IndexedFaceSet309: TIndexedFaceSetNode;
Coordinate310: TCoordinateNode;
Transform313: TTransformNode;
TouchSensor314: TTouchSensorNode;
Shape315: TShapeNode;
Appearance316: TAppearanceNode;
Material317: TMaterialNode;
Text318: TTextNode;
FontStyle319: TFontStyleNode;
Shape320: TShapeNode;
Appearance321: TAppearanceNode;
Material322: TMaterialNode;
IndexedFaceSet323: TIndexedFaceSetNode;
Coordinate324: TCoordinateNode;
Transform327: TTransformNode;
TouchSensor328: TTouchSensorNode;
Shape329: TShapeNode;
Appearance330: TAppearanceNode;
Material331: TMaterialNode;
Text332: TTextNode;
FontStyle333: TFontStyleNode;
Shape334: TShapeNode;
Appearance335: TAppearanceNode;
Material336: TMaterialNode;
IndexedFaceSet337: TIndexedFaceSetNode;
Coordinate338: TCoordinateNode;
Transform341: TTransformNode;
TouchSensor342: TTouchSensorNode;
Shape343: TShapeNode;
Appearance344: TAppearanceNode;
Material345: TMaterialNode;
Text346: TTextNode;
FontStyle347: TFontStyleNode;
Shape348: TShapeNode;
Appearance349: TAppearanceNode;
Material350: TMaterialNode;
IndexedFaceSet351: TIndexedFaceSetNode;
Coordinate352: TCoordinateNode;
Transform355: TTransformNode;
TouchSensor356: TTouchSensorNode;
Shape357: TShapeNode;
Appearance358: TAppearanceNode;
Material359: TMaterialNode;
Text360: TTextNode;
FontStyle361: TFontStyleNode;
Shape362: TShapeNode;
Appearance363: TAppearanceNode;
Material364: TMaterialNode;
IndexedFaceSet365: TIndexedFaceSetNode;
Coordinate366: TCoordinateNode;
Transform369: TTransformNode;
TouchSensor370: TTouchSensorNode;
Shape371: TShapeNode;
Appearance372: TAppearanceNode;
Material373: TMaterialNode;
Text374: TTextNode;
FontStyle375: TFontStyleNode;
Shape376: TShapeNode;
Appearance377: TAppearanceNode;
Material378: TMaterialNode;
IndexedFaceSet379: TIndexedFaceSetNode;
Coordinate380: TCoordinateNode;
Transform383: TTransformNode;
TouchSensor384: TTouchSensorNode;
Shape385: TShapeNode;
Appearance386: TAppearanceNode;
Material387: TMaterialNode;
Text388: TTextNode;
FontStyle389: TFontStyleNode;
Shape390: TShapeNode;
Appearance391: TAppearanceNode;
Material392: TMaterialNode;
IndexedFaceSet393: TIndexedFaceSetNode;
Coordinate394: TCoordinateNode;
Transform397: TTransformNode;
TouchSensor398: TTouchSensorNode;
Shape399: TShapeNode;
Appearance400: TAppearanceNode;
Material401: TMaterialNode;
Text402: TTextNode;
FontStyle403: TFontStyleNode;
Shape404: TShapeNode;
Appearance405: TAppearanceNode;
Material406: TMaterialNode;
IndexedFaceSet407: TIndexedFaceSetNode;
Coordinate408: TCoordinateNode;
Transform411: TTransformNode;
TouchSensor412: TTouchSensorNode;
Shape413: TShapeNode;
Appearance414: TAppearanceNode;
Material415: TMaterialNode;
Text416: TTextNode;
FontStyle417: TFontStyleNode;
Shape418: TShapeNode;
Appearance419: TAppearanceNode;
Material420: TMaterialNode;
IndexedFaceSet421: TIndexedFaceSetNode;
Coordinate422: TCoordinateNode;
Transform425: TTransformNode;
TouchSensor426: TTouchSensorNode;
Shape427: TShapeNode;
Appearance428: TAppearanceNode;
Material429: TMaterialNode;
Text430: TTextNode;
FontStyle431: TFontStyleNode;
Shape432: TShapeNode;
Appearance433: TAppearanceNode;
Material434: TMaterialNode;
IndexedFaceSet435: TIndexedFaceSetNode;
Coordinate436: TCoordinateNode;
Transform439: TTransformNode;
TouchSensor440: TTouchSensorNode;
Shape441: TShapeNode;
Appearance442: TAppearanceNode;
Material443: TMaterialNode;
Text444: TTextNode;
FontStyle445: TFontStyleNode;
Shape446: TShapeNode;
Appearance447: TAppearanceNode;
Material448: TMaterialNode;
IndexedFaceSet449: TIndexedFaceSetNode;
Coordinate450: TCoordinateNode;
Transform453: TTransformNode;
TouchSensor454: TTouchSensorNode;
Shape455: TShapeNode;
Appearance456: TAppearanceNode;
Material457: TMaterialNode;
Text458: TTextNode;
FontStyle459: TFontStyleNode;
Shape460: TShapeNode;
Appearance461: TAppearanceNode;
Material462: TMaterialNode;
IndexedFaceSet463: TIndexedFaceSetNode;
Coordinate464: TCoordinateNode;
Transform467: TTransformNode;
TouchSensor468: TTouchSensorNode;
Shape469: TShapeNode;
Appearance470: TAppearanceNode;
Material471: TMaterialNode;
Text472: TTextNode;
FontStyle473: TFontStyleNode;
Shape474: TShapeNode;
Appearance475: TAppearanceNode;
Material476: TMaterialNode;
IndexedFaceSet477: TIndexedFaceSetNode;
Coordinate478: TCoordinateNode;
Transform481: TTransformNode;
TouchSensor482: TTouchSensorNode;
Shape483: TShapeNode;
Appearance484: TAppearanceNode;
Material485: TMaterialNode;
Text486: TTextNode;
FontStyle487: TFontStyleNode;
Shape488: TShapeNode;
Appearance489: TAppearanceNode;
Material490: TMaterialNode;
IndexedFaceSet491: TIndexedFaceSetNode;
Coordinate492: TCoordinateNode;
Transform495: TTransformNode;
TouchSensor496: TTouchSensorNode;
Shape497: TShapeNode;
Appearance498: TAppearanceNode;
Material499: TMaterialNode;
Text500: TTextNode;
FontStyle501: TFontStyleNode;
Shape502: TShapeNode;
Appearance503: TAppearanceNode;
Material504: TMaterialNode;
IndexedFaceSet505: TIndexedFaceSetNode;
Coordinate506: TCoordinateNode;
Transform509: TTransformNode;
TouchSensor510: TTouchSensorNode;
Shape511: TShapeNode;
Appearance512: TAppearanceNode;
Material513: TMaterialNode;
Text514: TTextNode;
FontStyle515: TFontStyleNode;
Shape516: TShapeNode;
Appearance517: TAppearanceNode;
Material518: TMaterialNode;
IndexedFaceSet519: TIndexedFaceSetNode;
Coordinate520: TCoordinateNode;
Transform523: TTransformNode;
TouchSensor524: TTouchSensorNode;
Shape525: TShapeNode;
Appearance526: TAppearanceNode;
Material527: TMaterialNode;
Text528: TTextNode;
FontStyle529: TFontStyleNode;
Shape530: TShapeNode;
Appearance531: TAppearanceNode;
Material532: TMaterialNode;
IndexedFaceSet533: TIndexedFaceSetNode;
Coordinate534: TCoordinateNode;
Transform537: TTransformNode;
TouchSensor538: TTouchSensorNode;
Shape539: TShapeNode;
Appearance540: TAppearanceNode;
Material541: TMaterialNode;
Text542: TTextNode;
FontStyle543: TFontStyleNode;
Shape544: TShapeNode;
Appearance545: TAppearanceNode;
Material546: TMaterialNode;
IndexedFaceSet547: TIndexedFaceSetNode;
Coordinate548: TCoordinateNode;
Transform551: TTransformNode;
TouchSensor552: TTouchSensorNode;
Shape553: TShapeNode;
Appearance554: TAppearanceNode;
Material555: TMaterialNode;
Text556: TTextNode;
FontStyle557: TFontStyleNode;
Shape558: TShapeNode;
Appearance559: TAppearanceNode;
Material560: TMaterialNode;
IndexedFaceSet561: TIndexedFaceSetNode;
Coordinate562: TCoordinateNode;
Transform565: TTransformNode;
TouchSensor566: TTouchSensorNode;
Shape567: TShapeNode;
Appearance568: TAppearanceNode;
Material569: TMaterialNode;
Text570: TTextNode;
FontStyle571: TFontStyleNode;
Shape572: TShapeNode;
Appearance573: TAppearanceNode;
Material574: TMaterialNode;
IndexedFaceSet575: TIndexedFaceSetNode;
Coordinate576: TCoordinateNode;

procedure InitMenuJinPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'Menu.x3d';
{ METHOD .Meta }
X3D0.Meta['creator'] := 'John Carlson';
{ METHOD .Meta }
X3D0.Meta['description'] := 'X3D scene with a Switch of Inlines controlled by a menu';
{ METHOD .Meta }
{ METHOD .Head }
Group5 := TGroupNode.Create;;
{ Viewpoint and any other scene setup }
Viewpoint6 := TViewpointNode.Create;;
Viewpoint6.Position := Vector3(0,20,110);
{ METHOD .FdChildren.Add }
Group5.FdChildren.Add(Viewpoint6);
Group7 := TGroupNode.Create;;
Switch8 := TSwitchNode.Create;;
Switch8.WhichChoice := 0;
Group9 := TGroupNode.Create;;
Script10 := TScriptNode.Create;;
SFTime11 := TSFTime.CreateUndefined(Script10, false, 'touchTime');
{ METHOD .Fd.AddCustomField }
Script10.AddCustomField(SFTime11);
SFInt3212 := TSFInt32.CreateUndefined(Script10, false, 'choice');
{ METHOD .Fd.AddCustomField }
Script10.AddCustomField(SFInt3212);

Script10.SetSourceCode('''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 0;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 0;\n"+
"      }''');
{ METHOD .FdChildren.Add }
Group9.FdChildren.Add(Script10);
Inline13 := TInlineNode.Create;;
Inline13.SetUrl(['../resources/JinBlink.x3d','JinBlink.x3d']);
{ METHOD .FdChildren.Add }
Group9.FdChildren.Add(Inline13);
{ METHOD .FdChildren.Add }
Switch8.FdChildren.Add(Group9);
Group14 := TGroupNode.Create;;
Script15 := TScriptNode.Create;;
SFTime16 := TSFTime.CreateUndefined(Script15, false, 'touchTime');
{ METHOD .Fd.AddCustomField }
Script15.AddCustomField(SFTime16);
SFInt3217 := TSFInt32.CreateUndefined(Script15, false, 'choice');
{ METHOD .Fd.AddCustomField }
Script15.AddCustomField(SFInt3217);

Script15.SetSourceCode('''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 1;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 1;\n"+
"      }''');
{ METHOD .FdChildren.Add }
Group14.FdChildren.Add(Script15);
Inline18 := TInlineNode.Create;;
Inline18.SetUrl(['../resources/JinBrowLowerer.x3d','JinBrowLowerer.x3d']);
{ METHOD .FdChildren.Add }
Group14.FdChildren.Add(Inline18);
{ METHOD .FdChildren.Add }
Switch8.FdChildren.Add(Group14);
Group19 := TGroupNode.Create;;
Script20 := TScriptNode.Create;;
SFTime21 := TSFTime.CreateUndefined(Script20, false, 'touchTime');
{ METHOD .Fd.AddCustomField }
Script20.AddCustomField(SFTime21);
SFInt3222 := TSFInt32.CreateUndefined(Script20, false, 'choice');
{ METHOD .Fd.AddCustomField }
Script20.AddCustomField(SFInt3222);

Script20.SetSourceCode('''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 2;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 2;\n"+
"      }''');
{ METHOD .FdChildren.Add }
Group19.FdChildren.Add(Script20);
Inline23 := TInlineNode.Create;;
Inline23.SetUrl(['../resources/JinCheekPuffer.x3d','JinCheekPuffer.x3d']);
{ METHOD .FdChildren.Add }
Group19.FdChildren.Add(Inline23);
{ METHOD .FdChildren.Add }
Switch8.FdChildren.Add(Group19);
Group24 := TGroupNode.Create;;
Script25 := TScriptNode.Create;;
SFTime26 := TSFTime.CreateUndefined(Script25, false, 'touchTime');
{ METHOD .Fd.AddCustomField }
Script25.AddCustomField(SFTime26);
SFInt3227 := TSFInt32.CreateUndefined(Script25, false, 'choice');
{ METHOD .Fd.AddCustomField }
Script25.AddCustomField(SFInt3227);

Script25.SetSourceCode('''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 3;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 3;\n"+
"      }''');
{ METHOD .FdChildren.Add }
Group24.FdChildren.Add(Script25);
Inline28 := TInlineNode.Create;;
Inline28.SetUrl(['../resources/JinCheekRaiser.x3d','JinCheekRaiser.x3d']);
{ METHOD .FdChildren.Add }
Group24.FdChildren.Add(Inline28);
{ METHOD .FdChildren.Add }
Switch8.FdChildren.Add(Group24);
Group29 := TGroupNode.Create;;
Script30 := TScriptNode.Create;;
SFTime31 := TSFTime.CreateUndefined(Script30, false, 'touchTime');
{ METHOD .Fd.AddCustomField }
Script30.AddCustomField(SFTime31);
SFInt3232 := TSFInt32.CreateUndefined(Script30, false, 'choice');
{ METHOD .Fd.AddCustomField }
Script30.AddCustomField(SFInt3232);

Script30.SetSourceCode('''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 4;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 4;\n"+
"      }''');
{ METHOD .FdChildren.Add }
Group29.FdChildren.Add(Script30);
Inline33 := TInlineNode.Create;;
Inline33.SetUrl(['../resources/JinChinRaiser.x3d','JinChinRaiser.x3d']);
{ METHOD .FdChildren.Add }
Group29.FdChildren.Add(Inline33);
{ METHOD .FdChildren.Add }
Switch8.FdChildren.Add(Group29);
Group34 := TGroupNode.Create;;
Script35 := TScriptNode.Create;;
SFTime36 := TSFTime.CreateUndefined(Script35, false, 'touchTime');
{ METHOD .Fd.AddCustomField }
Script35.AddCustomField(SFTime36);
SFInt3237 := TSFInt32.CreateUndefined(Script35, false, 'choice');
{ METHOD .Fd.AddCustomField }
Script35.AddCustomField(SFInt3237);

Script35.SetSourceCode('''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 5;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 5;\n"+
"      }''');
{ METHOD .FdChildren.Add }
Group34.FdChildren.Add(Script35);
Inline38 := TInlineNode.Create;;
Inline38.SetUrl(['../resources/JinDimpler.x3d','JinDimpler.x3d']);
{ METHOD .FdChildren.Add }
Group34.FdChildren.Add(Inline38);
{ METHOD .FdChildren.Add }
Switch8.FdChildren.Add(Group34);
Group39 := TGroupNode.Create;;
Script40 := TScriptNode.Create;;
SFTime41 := TSFTime.CreateUndefined(Script40, false, 'touchTime');
{ METHOD .Fd.AddCustomField }
Script40.AddCustomField(SFTime41);
SFInt3242 := TSFInt32.CreateUndefined(Script40, false, 'choice');
{ METHOD .Fd.AddCustomField }
Script40.AddCustomField(SFInt3242);

Script40.SetSourceCode('''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 6;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 6;\n"+
"      }''');
{ METHOD .FdChildren.Add }
Group39.FdChildren.Add(Script40);
Inline43 := TInlineNode.Create;;
Inline43.SetUrl(['../resources/JinEyesClosed.x3d','JinEyesClosed.x3d']);
{ METHOD .FdChildren.Add }
Group39.FdChildren.Add(Inline43);
{ METHOD .FdChildren.Add }
Switch8.FdChildren.Add(Group39);
Group44 := TGroupNode.Create;;
Script45 := TScriptNode.Create;;
SFTime46 := TSFTime.CreateUndefined(Script45, false, 'touchTime');
{ METHOD .Fd.AddCustomField }
Script45.AddCustomField(SFTime46);
SFInt3247 := TSFInt32.CreateUndefined(Script45, false, 'choice');
{ METHOD .Fd.AddCustomField }
Script45.AddCustomField(SFInt3247);

Script45.SetSourceCode('''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 7;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 7;\n"+
"      }''');
{ METHOD .FdChildren.Add }
Group44.FdChildren.Add(Script45);
Inline48 := TInlineNode.Create;;
Inline48.SetUrl(['../resources/JinInnerBrowRaiser.x3d','JinInnerBrowRaiser.x3d']);
{ METHOD .FdChildren.Add }
Group44.FdChildren.Add(Inline48);
{ METHOD .FdChildren.Add }
Switch8.FdChildren.Add(Group44);
Group49 := TGroupNode.Create;;
Script50 := TScriptNode.Create;;
SFTime51 := TSFTime.CreateUndefined(Script50, false, 'touchTime');
{ METHOD .Fd.AddCustomField }
Script50.AddCustomField(SFTime51);
SFInt3252 := TSFInt32.CreateUndefined(Script50, false, 'choice');
{ METHOD .Fd.AddCustomField }
Script50.AddCustomField(SFInt3252);

Script50.SetSourceCode('''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 8;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 8;\n"+
"      }''');
{ METHOD .FdChildren.Add }
Group49.FdChildren.Add(Script50);
Inline53 := TInlineNode.Create;;
Inline53.SetUrl(['../resources/JinJawDrop.x3d','JinJawDrop.x3d']);
{ METHOD .FdChildren.Add }
Group49.FdChildren.Add(Inline53);
{ METHOD .FdChildren.Add }
Switch8.FdChildren.Add(Group49);
Group54 := TGroupNode.Create;;
Script55 := TScriptNode.Create;;
SFTime56 := TSFTime.CreateUndefined(Script55, false, 'touchTime');
{ METHOD .Fd.AddCustomField }
Script55.AddCustomField(SFTime56);
SFInt3257 := TSFInt32.CreateUndefined(Script55, false, 'choice');
{ METHOD .Fd.AddCustomField }
Script55.AddCustomField(SFInt3257);

Script55.SetSourceCode('''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 9;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 9;\n"+
"      }''');
{ METHOD .FdChildren.Add }
Group54.FdChildren.Add(Script55);
Inline58 := TInlineNode.Create;;
Inline58.SetUrl(['../resources/JinLidDroop.x3d','JinLidDroop.x3d']);
{ METHOD .FdChildren.Add }
Group54.FdChildren.Add(Inline58);
{ METHOD .FdChildren.Add }
Switch8.FdChildren.Add(Group54);
Group59 := TGroupNode.Create;;
Script60 := TScriptNode.Create;;
SFTime61 := TSFTime.CreateUndefined(Script60, false, 'touchTime');
{ METHOD .Fd.AddCustomField }
Script60.AddCustomField(SFTime61);
SFInt3262 := TSFInt32.CreateUndefined(Script60, false, 'choice');
{ METHOD .Fd.AddCustomField }
Script60.AddCustomField(SFInt3262);

Script60.SetSourceCode('''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 10;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 10;\n"+
"      }''');
{ METHOD .FdChildren.Add }
Group59.FdChildren.Add(Script60);
Inline63 := TInlineNode.Create;;
Inline63.SetUrl(['../resources/JinLidTightener.x3d','JinLidTightener.x3d']);
{ METHOD .FdChildren.Add }
Group59.FdChildren.Add(Inline63);
{ METHOD .FdChildren.Add }
Switch8.FdChildren.Add(Group59);
Group64 := TGroupNode.Create;;
Script65 := TScriptNode.Create;;
SFTime66 := TSFTime.CreateUndefined(Script65, false, 'touchTime');
{ METHOD .Fd.AddCustomField }
Script65.AddCustomField(SFTime66);
SFInt3267 := TSFInt32.CreateUndefined(Script65, false, 'choice');
{ METHOD .Fd.AddCustomField }
Script65.AddCustomField(SFInt3267);

Script65.SetSourceCode('''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 11;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 11;\n"+
"      }''');
{ METHOD .FdChildren.Add }
Group64.FdChildren.Add(Script65);
Inline68 := TInlineNode.Create;;
Inline68.SetUrl(['../resources/JinLipCornerDepressor.x3d','JinLipCornerDepressor.x3d']);
{ METHOD .FdChildren.Add }
Group64.FdChildren.Add(Inline68);
{ METHOD .FdChildren.Add }
Switch8.FdChildren.Add(Group64);
Group69 := TGroupNode.Create;;
Script70 := TScriptNode.Create;;
SFTime71 := TSFTime.CreateUndefined(Script70, false, 'touchTime');
{ METHOD .Fd.AddCustomField }
Script70.AddCustomField(SFTime71);
SFInt3272 := TSFInt32.CreateUndefined(Script70, false, 'choice');
{ METHOD .Fd.AddCustomField }
Script70.AddCustomField(SFInt3272);

Script70.SetSourceCode('''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 12;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 12;\n"+
"      }''');
{ METHOD .FdChildren.Add }
Group69.FdChildren.Add(Script70);
Inline73 := TInlineNode.Create;;
Inline73.SetUrl(['../resources/JinLipCornerPuller.x3d','JinLipCornerPuller.x3d']);
{ METHOD .FdChildren.Add }
Group69.FdChildren.Add(Inline73);
{ METHOD .FdChildren.Add }
Switch8.FdChildren.Add(Group69);
Group74 := TGroupNode.Create;;
Script75 := TScriptNode.Create;;
SFTime76 := TSFTime.CreateUndefined(Script75, false, 'touchTime');
{ METHOD .Fd.AddCustomField }
Script75.AddCustomField(SFTime76);
SFInt3277 := TSFInt32.CreateUndefined(Script75, false, 'choice');
{ METHOD .Fd.AddCustomField }
Script75.AddCustomField(SFInt3277);

Script75.SetSourceCode('''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 13;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 13;\n"+
"      }''');
{ METHOD .FdChildren.Add }
Group74.FdChildren.Add(Script75);
Inline78 := TInlineNode.Create;;
Inline78.SetUrl(['../resources/JinLipFunneler.x3d','JinLipFunneler.x3d']);
{ METHOD .FdChildren.Add }
Group74.FdChildren.Add(Inline78);
{ METHOD .FdChildren.Add }
Switch8.FdChildren.Add(Group74);
Group79 := TGroupNode.Create;;
Script80 := TScriptNode.Create;;
SFTime81 := TSFTime.CreateUndefined(Script80, false, 'touchTime');
{ METHOD .Fd.AddCustomField }
Script80.AddCustomField(SFTime81);
SFInt3282 := TSFInt32.CreateUndefined(Script80, false, 'choice');
{ METHOD .Fd.AddCustomField }
Script80.AddCustomField(SFInt3282);

Script80.SetSourceCode('''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 14;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 14;\n"+
"      }''');
{ METHOD .FdChildren.Add }
Group79.FdChildren.Add(Script80);
Inline83 := TInlineNode.Create;;
Inline83.SetUrl(['../resources/JinLipPressor.x3d','JinLipPressor.x3d']);
{ METHOD .FdChildren.Add }
Group79.FdChildren.Add(Inline83);
{ METHOD .FdChildren.Add }
Switch8.FdChildren.Add(Group79);
Group84 := TGroupNode.Create;;
Script85 := TScriptNode.Create;;
SFTime86 := TSFTime.CreateUndefined(Script85, false, 'touchTime');
{ METHOD .Fd.AddCustomField }
Script85.AddCustomField(SFTime86);
SFInt3287 := TSFInt32.CreateUndefined(Script85, false, 'choice');
{ METHOD .Fd.AddCustomField }
Script85.AddCustomField(SFInt3287);

Script85.SetSourceCode('''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 15;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 15;\n"+
"      }''');
{ METHOD .FdChildren.Add }
Group84.FdChildren.Add(Script85);
Inline88 := TInlineNode.Create;;
Inline88.SetUrl(['../resources/JinLipPuckerer.x3d','JinLipPuckerer.x3d']);
{ METHOD .FdChildren.Add }
Group84.FdChildren.Add(Inline88);
{ METHOD .FdChildren.Add }
Switch8.FdChildren.Add(Group84);
Group89 := TGroupNode.Create;;
Script90 := TScriptNode.Create;;
SFTime91 := TSFTime.CreateUndefined(Script90, false, 'touchTime');
{ METHOD .Fd.AddCustomField }
Script90.AddCustomField(SFTime91);
SFInt3292 := TSFInt32.CreateUndefined(Script90, false, 'choice');
{ METHOD .Fd.AddCustomField }
Script90.AddCustomField(SFInt3292);

Script90.SetSourceCode('''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 16;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 16;\n"+
"      }''');
{ METHOD .FdChildren.Add }
Group89.FdChildren.Add(Script90);
Inline93 := TInlineNode.Create;;
Inline93.SetUrl(['../resources/JinLipsPart.x3d','JinLipsPart.x3d']);
{ METHOD .FdChildren.Add }
Group89.FdChildren.Add(Inline93);
{ METHOD .FdChildren.Add }
Switch8.FdChildren.Add(Group89);
Group94 := TGroupNode.Create;;
Script95 := TScriptNode.Create;;
SFTime96 := TSFTime.CreateUndefined(Script95, false, 'touchTime');
{ METHOD .Fd.AddCustomField }
Script95.AddCustomField(SFTime96);
SFInt3297 := TSFInt32.CreateUndefined(Script95, false, 'choice');
{ METHOD .Fd.AddCustomField }
Script95.AddCustomField(SFInt3297);

Script95.SetSourceCode('''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 17;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 17;\n"+
"      }''');
{ METHOD .FdChildren.Add }
Group94.FdChildren.Add(Script95);
Inline98 := TInlineNode.Create;;
Inline98.SetUrl(['../resources/JinLipStretcher.x3d','JinLipStretcher.x3d']);
{ METHOD .FdChildren.Add }
Group94.FdChildren.Add(Inline98);
{ METHOD .FdChildren.Add }
Switch8.FdChildren.Add(Group94);
Group99 := TGroupNode.Create;;
Script100 := TScriptNode.Create;;
SFTime101 := TSFTime.CreateUndefined(Script100, false, 'touchTime');
{ METHOD .Fd.AddCustomField }
Script100.AddCustomField(SFTime101);
SFInt32102 := TSFInt32.CreateUndefined(Script100, false, 'choice');
{ METHOD .Fd.AddCustomField }
Script100.AddCustomField(SFInt32102);

Script100.SetSourceCode('''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 18;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 18;\n"+
"      }''');
{ METHOD .FdChildren.Add }
Group99.FdChildren.Add(Script100);
Inline103 := TInlineNode.Create;;
Inline103.SetUrl(['../resources/JinLipSuck.x3d','JinLipSuck.x3d']);
{ METHOD .FdChildren.Add }
Group99.FdChildren.Add(Inline103);
{ METHOD .FdChildren.Add }
Switch8.FdChildren.Add(Group99);
Group104 := TGroupNode.Create;;
Script105 := TScriptNode.Create;;
SFTime106 := TSFTime.CreateUndefined(Script105, false, 'touchTime');
{ METHOD .Fd.AddCustomField }
Script105.AddCustomField(SFTime106);
SFInt32107 := TSFInt32.CreateUndefined(Script105, false, 'choice');
{ METHOD .Fd.AddCustomField }
Script105.AddCustomField(SFInt32107);

Script105.SetSourceCode('''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 19;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 19;\n"+
"      }''');
{ METHOD .FdChildren.Add }
Group104.FdChildren.Add(Script105);
Inline108 := TInlineNode.Create;;
Inline108.SetUrl(['../resources/JinLipTightener.x3d','JinLipTightener.x3d']);
{ METHOD .FdChildren.Add }
Group104.FdChildren.Add(Inline108);
{ METHOD .FdChildren.Add }
Switch8.FdChildren.Add(Group104);
Group109 := TGroupNode.Create;;
Script110 := TScriptNode.Create;;
SFTime111 := TSFTime.CreateUndefined(Script110, false, 'touchTime');
{ METHOD .Fd.AddCustomField }
Script110.AddCustomField(SFTime111);
SFInt32112 := TSFInt32.CreateUndefined(Script110, false, 'choice');
{ METHOD .Fd.AddCustomField }
Script110.AddCustomField(SFInt32112);

Script110.SetSourceCode('''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 20;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 20;\n"+
"      }''');
{ METHOD .FdChildren.Add }
Group109.FdChildren.Add(Script110);
Inline113 := TInlineNode.Create;;
Inline113.SetUrl(['../resources/JinLowerLipDepressor.x3d','JinLowerLipDepressor.x3d']);
{ METHOD .FdChildren.Add }
Group109.FdChildren.Add(Inline113);
{ METHOD .FdChildren.Add }
Switch8.FdChildren.Add(Group109);
Group114 := TGroupNode.Create;;
Script115 := TScriptNode.Create;;
SFTime116 := TSFTime.CreateUndefined(Script115, false, 'touchTime');
{ METHOD .Fd.AddCustomField }
Script115.AddCustomField(SFTime116);
SFInt32117 := TSFInt32.CreateUndefined(Script115, false, 'choice');
{ METHOD .Fd.AddCustomField }
Script115.AddCustomField(SFInt32117);

Script115.SetSourceCode('''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 21;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 21;\n"+
"      }''');
{ METHOD .FdChildren.Add }
Group114.FdChildren.Add(Script115);
Inline118 := TInlineNode.Create;;
Inline118.SetUrl(['../resources/JinMouthStretch.x3d','JinMouthStretch.x3d']);
{ METHOD .FdChildren.Add }
Group114.FdChildren.Add(Inline118);
{ METHOD .FdChildren.Add }
Switch8.FdChildren.Add(Group114);
Group119 := TGroupNode.Create;;
Script120 := TScriptNode.Create;;
SFTime121 := TSFTime.CreateUndefined(Script120, false, 'touchTime');
{ METHOD .Fd.AddCustomField }
Script120.AddCustomField(SFTime121);
SFInt32122 := TSFInt32.CreateUndefined(Script120, false, 'choice');
{ METHOD .Fd.AddCustomField }
Script120.AddCustomField(SFInt32122);

Script120.SetSourceCode('''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 22;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 22;\n"+
"      }''');
{ METHOD .FdChildren.Add }
Group119.FdChildren.Add(Script120);
Inline123 := TInlineNode.Create;;
Inline123.SetUrl(['../resources/JinNasolabialDeepener.x3d','JinNasolabialDeepener.x3d']);
{ METHOD .FdChildren.Add }
Group119.FdChildren.Add(Inline123);
{ METHOD .FdChildren.Add }
Switch8.FdChildren.Add(Group119);
Group124 := TGroupNode.Create;;
Script125 := TScriptNode.Create;;
SFTime126 := TSFTime.CreateUndefined(Script125, false, 'touchTime');
{ METHOD .Fd.AddCustomField }
Script125.AddCustomField(SFTime126);
SFInt32127 := TSFInt32.CreateUndefined(Script125, false, 'choice');
{ METHOD .Fd.AddCustomField }
Script125.AddCustomField(SFInt32127);

Script125.SetSourceCode('''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 23;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 23;\n"+
"      }''');
{ METHOD .FdChildren.Add }
Group124.FdChildren.Add(Script125);
Inline128 := TInlineNode.Create;;
Inline128.SetUrl(['../resources/JinNoseWrinkler.x3d','JinNoseWrinkler.x3d']);
{ METHOD .FdChildren.Add }
Group124.FdChildren.Add(Inline128);
{ METHOD .FdChildren.Add }
Switch8.FdChildren.Add(Group124);
Group129 := TGroupNode.Create;;
Script130 := TScriptNode.Create;;
SFTime131 := TSFTime.CreateUndefined(Script130, false, 'touchTime');
{ METHOD .Fd.AddCustomField }
Script130.AddCustomField(SFTime131);
SFInt32132 := TSFInt32.CreateUndefined(Script130, false, 'choice');
{ METHOD .Fd.AddCustomField }
Script130.AddCustomField(SFInt32132);

Script130.SetSourceCode('''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 24;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 24;\n"+
"      }''');
{ METHOD .FdChildren.Add }
Group129.FdChildren.Add(Script130);
Inline133 := TInlineNode.Create;;
Inline133.SetUrl(['../resources/JinOuterBrowRaiser.x3d','JinOuterBrowRaiser.x3d']);
{ METHOD .FdChildren.Add }
Group129.FdChildren.Add(Inline133);
{ METHOD .FdChildren.Add }
Switch8.FdChildren.Add(Group129);
Group134 := TGroupNode.Create;;
Script135 := TScriptNode.Create;;
SFTime136 := TSFTime.CreateUndefined(Script135, false, 'touchTime');
{ METHOD .Fd.AddCustomField }
Script135.AddCustomField(SFTime136);
SFInt32137 := TSFInt32.CreateUndefined(Script135, false, 'choice');
{ METHOD .Fd.AddCustomField }
Script135.AddCustomField(SFInt32137);

Script135.SetSourceCode('''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 25;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 25;\n"+
"      }''');
{ METHOD .FdChildren.Add }
Group134.FdChildren.Add(Script135);
Inline138 := TInlineNode.Create;;
Inline138.SetUrl(['../resources/JinSlit.x3d','JinSlit.x3d']);
{ METHOD .FdChildren.Add }
Group134.FdChildren.Add(Inline138);
{ METHOD .FdChildren.Add }
Switch8.FdChildren.Add(Group134);
Group139 := TGroupNode.Create;;
Script140 := TScriptNode.Create;;
SFTime141 := TSFTime.CreateUndefined(Script140, false, 'touchTime');
{ METHOD .Fd.AddCustomField }
Script140.AddCustomField(SFTime141);
SFInt32142 := TSFInt32.CreateUndefined(Script140, false, 'choice');
{ METHOD .Fd.AddCustomField }
Script140.AddCustomField(SFInt32142);

Script140.SetSourceCode('''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 26;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 26;\n"+
"      }''');
{ METHOD .FdChildren.Add }
Group139.FdChildren.Add(Script140);
Inline143 := TInlineNode.Create;;
Inline143.SetUrl(['../resources/JinSquint.x3d','JinSquint.x3d']);
{ METHOD .FdChildren.Add }
Group139.FdChildren.Add(Inline143);
{ METHOD .FdChildren.Add }
Switch8.FdChildren.Add(Group139);
Group144 := TGroupNode.Create;;
Script145 := TScriptNode.Create;;
SFTime146 := TSFTime.CreateUndefined(Script145, false, 'touchTime');
{ METHOD .Fd.AddCustomField }
Script145.AddCustomField(SFTime146);
SFInt32147 := TSFInt32.CreateUndefined(Script145, false, 'choice');
{ METHOD .Fd.AddCustomField }
Script145.AddCustomField(SFInt32147);

Script145.SetSourceCode('''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 27;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 27;\n"+
"      }''');
{ METHOD .FdChildren.Add }
Group144.FdChildren.Add(Script145);
Inline148 := TInlineNode.Create;;
Inline148.SetUrl(['../resources/JinUpperLidRaiser.x3d','JinUpperLidRaiser.x3d']);
{ METHOD .FdChildren.Add }
Group144.FdChildren.Add(Inline148);
{ METHOD .FdChildren.Add }
Switch8.FdChildren.Add(Group144);
Group149 := TGroupNode.Create;;
Script150 := TScriptNode.Create;;
SFTime151 := TSFTime.CreateUndefined(Script150, false, 'touchTime');
{ METHOD .Fd.AddCustomField }
Script150.AddCustomField(SFTime151);
SFInt32152 := TSFInt32.CreateUndefined(Script150, false, 'choice');
{ METHOD .Fd.AddCustomField }
Script150.AddCustomField(SFInt32152);

Script150.SetSourceCode('''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 28;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 28;\n"+
"      }''');
{ METHOD .FdChildren.Add }
Group149.FdChildren.Add(Script150);
Inline153 := TInlineNode.Create;;
Inline153.SetUrl(['../resources/JinUpperLipRaiser.x3d','JinUpperLipRaiser.x3d']);
{ METHOD .FdChildren.Add }
Group149.FdChildren.Add(Inline153);
{ METHOD .FdChildren.Add }
Switch8.FdChildren.Add(Group149);
Group154 := TGroupNode.Create;;
Script155 := TScriptNode.Create;;
SFTime156 := TSFTime.CreateUndefined(Script155, false, 'touchTime');
{ METHOD .Fd.AddCustomField }
Script155.AddCustomField(SFTime156);
SFInt32157 := TSFInt32.CreateUndefined(Script155, false, 'choice');
{ METHOD .Fd.AddCustomField }
Script155.AddCustomField(SFInt32157);

Script155.SetSourceCode('''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 29;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 29;\n"+
"      }''');
{ METHOD .FdChildren.Add }
Group154.FdChildren.Add(Script155);
Inline158 := TInlineNode.Create;;
Inline158.SetUrl(['../resources/JinWink.x3d','JinWink.x3d']);
{ METHOD .FdChildren.Add }
Group154.FdChildren.Add(Inline158);
{ METHOD .FdChildren.Add }
Switch8.FdChildren.Add(Group154);
{ METHOD .FdChildren.Add }
Group7.FdChildren.Add(Switch8);
Transform159 := TTransformNode.Create;;
Transform159.Translation := Vector3(48,63.4,0);
TouchSensor160 := TTouchSensorNode.Create;;
TouchSensor160.Description := 'TSJinBlink';
{ METHOD .FdChildren.Add }
Transform159.FdChildren.Add(TouchSensor160);
Shape161 := TShapeNode.Create;;
Appearance162 := TAppearanceNode.Create;;
Material163 := TMaterialNode.Create;;
Material163.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance162.Material := Material163;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape161.Appearance := Appearance162;
Text164 := TTextNode.Create;;
Text164.SetText(['JinBlink']);
FontStyle165 := TFontStyleNode.Create;;
FontStyle165.Size := 2.4;
FontStyle165.Spacing := 1.2;
FontStyle165.Justify := fjMIDDLE;
FontStyle165.JustifyMinor := fjMIDDLE;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text164.FontStyle := FontStyle165;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape161.Geometry := Text164;
{ METHOD .FdChildren.Add }
Transform159.FdChildren.Add(Shape161);
Shape166 := TShapeNode.Create;;
Appearance167 := TAppearanceNode.Create;;
Material168 := TMaterialNode.Create;;
Material168.DiffuseColor := Vector3(0,0,1);
{ METHOD .SetMaterial }
Appearance167.Material := Material168;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape166.Appearance := Appearance167;
IndexedFaceSet169 := TIndexedFaceSetNode.Create;;
IndexedFaceSet169.SetCoordIndex([0,1,2,3,-1]);
Coordinate170 := TCoordinateNode.Create;;
Coordinate170.SetPoint([Vector3(20,1.3833333333333333,-0.1),Vector3(-20,1.3833333333333333,-0.1),Vector3(-20,-1.616666666666667,-0.1),Vector3(20,-1.616666666666667,-0.1)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet169.Coord := Coordinate170;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape166.Geometry := IndexedFaceSet169;
{ METHOD .FdChildren.Add }
Transform159.FdChildren.Add(Shape166);
{ METHOD .FdChildren.Add }
Group7.FdChildren.Add(Transform159);
{ Original "JinBlink_Sensor.EventTouchTime TO Choice0.touchTime }
{ Sample JinBlink_Sensor.EventTouchTime TO Choice0.touchTime}
Group7.AddRoute(TouchSensor160.EventTouchTime, SFTime11);
{ METHOD .AddX3DROUTE }
{ Original "Choice0.EventChoice TO SceneSwitcher.whichChoice }
{ Sample Choice0.EventChoice TO SceneSwitcher.whichChoice}
Group7.AddRoute(Script10.EventChoice, Switch8.whichChoice);
{ METHOD .AddX3DROUTE }
Transform173 := TTransformNode.Create;;
Transform173.Translation := Vector3(48,60.4,0);
TouchSensor174 := TTouchSensorNode.Create;;
TouchSensor174.Description := 'TSJinBrowLowerer';
{ METHOD .FdChildren.Add }
Transform173.FdChildren.Add(TouchSensor174);
Shape175 := TShapeNode.Create;;
Appearance176 := TAppearanceNode.Create;;
Material177 := TMaterialNode.Create;;
Material177.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance176.Material := Material177;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape175.Appearance := Appearance176;
Text178 := TTextNode.Create;;
Text178.SetText(['JinBrowLowerer']);
FontStyle179 := TFontStyleNode.Create;;
FontStyle179.Size := 2.4;
FontStyle179.Spacing := 1.2;
FontStyle179.Justify := fjMIDDLE;
FontStyle179.JustifyMinor := fjMIDDLE;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text178.FontStyle := FontStyle179;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape175.Geometry := Text178;
{ METHOD .FdChildren.Add }
Transform173.FdChildren.Add(Shape175);
Shape180 := TShapeNode.Create;;
Appearance181 := TAppearanceNode.Create;;
Material182 := TMaterialNode.Create;;
Material182.DiffuseColor := Vector3(0,0,1);
{ METHOD .SetMaterial }
Appearance181.Material := Material182;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape180.Appearance := Appearance181;
IndexedFaceSet183 := TIndexedFaceSetNode.Create;;
IndexedFaceSet183.SetCoordIndex([0,1,2,3,-1]);
Coordinate184 := TCoordinateNode.Create;;
Coordinate184.SetPoint([Vector3(20,1.3833333333333333,-0.1),Vector3(-20,1.3833333333333333,-0.1),Vector3(-20,-1.616666666666667,-0.1),Vector3(20,-1.616666666666667,-0.1)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet183.Coord := Coordinate184;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape180.Geometry := IndexedFaceSet183;
{ METHOD .FdChildren.Add }
Transform173.FdChildren.Add(Shape180);
{ METHOD .FdChildren.Add }
Group7.FdChildren.Add(Transform173);
{ Original "JinBrowLowerer_Sensor.EventTouchTime TO Choice1.touchTime }
{ Sample JinBrowLowerer_Sensor.EventTouchTime TO Choice1.touchTime}
Group7.AddRoute(TouchSensor174.EventTouchTime, SFTime16);
{ METHOD .AddX3DROUTE }
{ Original "Choice1.EventChoice TO SceneSwitcher.whichChoice }
{ Sample Choice1.EventChoice TO SceneSwitcher.whichChoice}
Group7.AddRoute(Script15.EventChoice, Switch8.whichChoice);
{ METHOD .AddX3DROUTE }
Transform187 := TTransformNode.Create;;
Transform187.Translation := Vector3(48,57.39999999999999,0);
TouchSensor188 := TTouchSensorNode.Create;;
TouchSensor188.Description := 'TSJinCheekPuffer';
{ METHOD .FdChildren.Add }
Transform187.FdChildren.Add(TouchSensor188);
Shape189 := TShapeNode.Create;;
Appearance190 := TAppearanceNode.Create;;
Material191 := TMaterialNode.Create;;
Material191.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance190.Material := Material191;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape189.Appearance := Appearance190;
Text192 := TTextNode.Create;;
Text192.SetText(['JinCheekPuffer']);
FontStyle193 := TFontStyleNode.Create;;
FontStyle193.Size := 2.4;
FontStyle193.Spacing := 1.2;
FontStyle193.Justify := fjMIDDLE;
FontStyle193.JustifyMinor := fjMIDDLE;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text192.FontStyle := FontStyle193;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape189.Geometry := Text192;
{ METHOD .FdChildren.Add }
Transform187.FdChildren.Add(Shape189);
Shape194 := TShapeNode.Create;;
Appearance195 := TAppearanceNode.Create;;
Material196 := TMaterialNode.Create;;
Material196.DiffuseColor := Vector3(0,0,1);
{ METHOD .SetMaterial }
Appearance195.Material := Material196;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape194.Appearance := Appearance195;
IndexedFaceSet197 := TIndexedFaceSetNode.Create;;
IndexedFaceSet197.SetCoordIndex([0,1,2,3,-1]);
Coordinate198 := TCoordinateNode.Create;;
Coordinate198.SetPoint([Vector3(20,1.3833333333333333,-0.1),Vector3(-20,1.3833333333333333,-0.1),Vector3(-20,-1.616666666666667,-0.1),Vector3(20,-1.616666666666667,-0.1)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet197.Coord := Coordinate198;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape194.Geometry := IndexedFaceSet197;
{ METHOD .FdChildren.Add }
Transform187.FdChildren.Add(Shape194);
{ METHOD .FdChildren.Add }
Group7.FdChildren.Add(Transform187);
{ Original "JinCheekPuffer_Sensor.EventTouchTime TO Choice2.touchTime }
{ Sample JinCheekPuffer_Sensor.EventTouchTime TO Choice2.touchTime}
Group7.AddRoute(TouchSensor188.EventTouchTime, SFTime21);
{ METHOD .AddX3DROUTE }
{ Original "Choice2.EventChoice TO SceneSwitcher.whichChoice }
{ Sample Choice2.EventChoice TO SceneSwitcher.whichChoice}
Group7.AddRoute(Script20.EventChoice, Switch8.whichChoice);
{ METHOD .AddX3DROUTE }
Transform201 := TTransformNode.Create;;
Transform201.Translation := Vector3(48,54.39999999999999,0);
TouchSensor202 := TTouchSensorNode.Create;;
TouchSensor202.Description := 'TSJinCheekRaiser';
{ METHOD .FdChildren.Add }
Transform201.FdChildren.Add(TouchSensor202);
Shape203 := TShapeNode.Create;;
Appearance204 := TAppearanceNode.Create;;
Material205 := TMaterialNode.Create;;
Material205.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance204.Material := Material205;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape203.Appearance := Appearance204;
Text206 := TTextNode.Create;;
Text206.SetText(['JinCheekRaiser']);
FontStyle207 := TFontStyleNode.Create;;
FontStyle207.Size := 2.4;
FontStyle207.Spacing := 1.2;
FontStyle207.Justify := fjMIDDLE;
FontStyle207.JustifyMinor := fjMIDDLE;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text206.FontStyle := FontStyle207;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape203.Geometry := Text206;
{ METHOD .FdChildren.Add }
Transform201.FdChildren.Add(Shape203);
Shape208 := TShapeNode.Create;;
Appearance209 := TAppearanceNode.Create;;
Material210 := TMaterialNode.Create;;
Material210.DiffuseColor := Vector3(0,0,1);
{ METHOD .SetMaterial }
Appearance209.Material := Material210;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape208.Appearance := Appearance209;
IndexedFaceSet211 := TIndexedFaceSetNode.Create;;
IndexedFaceSet211.SetCoordIndex([0,1,2,3,-1]);
Coordinate212 := TCoordinateNode.Create;;
Coordinate212.SetPoint([Vector3(20,1.3833333333333333,-0.1),Vector3(-20,1.3833333333333333,-0.1),Vector3(-20,-1.616666666666667,-0.1),Vector3(20,-1.616666666666667,-0.1)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet211.Coord := Coordinate212;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape208.Geometry := IndexedFaceSet211;
{ METHOD .FdChildren.Add }
Transform201.FdChildren.Add(Shape208);
{ METHOD .FdChildren.Add }
Group7.FdChildren.Add(Transform201);
{ Original "JinCheekRaiser_Sensor.EventTouchTime TO Choice3.touchTime }
{ Sample JinCheekRaiser_Sensor.EventTouchTime TO Choice3.touchTime}
Group7.AddRoute(TouchSensor202.EventTouchTime, SFTime26);
{ METHOD .AddX3DROUTE }
{ Original "Choice3.EventChoice TO SceneSwitcher.whichChoice }
{ Sample Choice3.EventChoice TO SceneSwitcher.whichChoice}
Group7.AddRoute(Script25.EventChoice, Switch8.whichChoice);
{ METHOD .AddX3DROUTE }
Transform215 := TTransformNode.Create;;
Transform215.Translation := Vector3(48,51.39999999999999,0);
TouchSensor216 := TTouchSensorNode.Create;;
TouchSensor216.Description := 'TSJinChinRaiser';
{ METHOD .FdChildren.Add }
Transform215.FdChildren.Add(TouchSensor216);
Shape217 := TShapeNode.Create;;
Appearance218 := TAppearanceNode.Create;;
Material219 := TMaterialNode.Create;;
Material219.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance218.Material := Material219;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape217.Appearance := Appearance218;
Text220 := TTextNode.Create;;
Text220.SetText(['JinChinRaiser']);
FontStyle221 := TFontStyleNode.Create;;
FontStyle221.Size := 2.4;
FontStyle221.Spacing := 1.2;
FontStyle221.Justify := fjMIDDLE;
FontStyle221.JustifyMinor := fjMIDDLE;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text220.FontStyle := FontStyle221;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape217.Geometry := Text220;
{ METHOD .FdChildren.Add }
Transform215.FdChildren.Add(Shape217);
Shape222 := TShapeNode.Create;;
Appearance223 := TAppearanceNode.Create;;
Material224 := TMaterialNode.Create;;
Material224.DiffuseColor := Vector3(0,0,1);
{ METHOD .SetMaterial }
Appearance223.Material := Material224;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape222.Appearance := Appearance223;
IndexedFaceSet225 := TIndexedFaceSetNode.Create;;
IndexedFaceSet225.SetCoordIndex([0,1,2,3,-1]);
Coordinate226 := TCoordinateNode.Create;;
Coordinate226.SetPoint([Vector3(20,1.3833333333333333,-0.1),Vector3(-20,1.3833333333333333,-0.1),Vector3(-20,-1.616666666666667,-0.1),Vector3(20,-1.616666666666667,-0.1)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet225.Coord := Coordinate226;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape222.Geometry := IndexedFaceSet225;
{ METHOD .FdChildren.Add }
Transform215.FdChildren.Add(Shape222);
{ METHOD .FdChildren.Add }
Group7.FdChildren.Add(Transform215);
{ Original "JinChinRaiser_Sensor.EventTouchTime TO Choice4.touchTime }
{ Sample JinChinRaiser_Sensor.EventTouchTime TO Choice4.touchTime}
Group7.AddRoute(TouchSensor216.EventTouchTime, SFTime31);
{ METHOD .AddX3DROUTE }
{ Original "Choice4.EventChoice TO SceneSwitcher.whichChoice }
{ Sample Choice4.EventChoice TO SceneSwitcher.whichChoice}
Group7.AddRoute(Script30.EventChoice, Switch8.whichChoice);
{ METHOD .AddX3DROUTE }
Transform229 := TTransformNode.Create;;
Transform229.Translation := Vector3(48,48.39999999999999,0);
TouchSensor230 := TTouchSensorNode.Create;;
TouchSensor230.Description := 'TSJinDimpler';
{ METHOD .FdChildren.Add }
Transform229.FdChildren.Add(TouchSensor230);
Shape231 := TShapeNode.Create;;
Appearance232 := TAppearanceNode.Create;;
Material233 := TMaterialNode.Create;;
Material233.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance232.Material := Material233;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape231.Appearance := Appearance232;
Text234 := TTextNode.Create;;
Text234.SetText(['JinDimpler']);
FontStyle235 := TFontStyleNode.Create;;
FontStyle235.Size := 2.4;
FontStyle235.Spacing := 1.2;
FontStyle235.Justify := fjMIDDLE;
FontStyle235.JustifyMinor := fjMIDDLE;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text234.FontStyle := FontStyle235;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape231.Geometry := Text234;
{ METHOD .FdChildren.Add }
Transform229.FdChildren.Add(Shape231);
Shape236 := TShapeNode.Create;;
Appearance237 := TAppearanceNode.Create;;
Material238 := TMaterialNode.Create;;
Material238.DiffuseColor := Vector3(0,0,1);
{ METHOD .SetMaterial }
Appearance237.Material := Material238;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape236.Appearance := Appearance237;
IndexedFaceSet239 := TIndexedFaceSetNode.Create;;
IndexedFaceSet239.SetCoordIndex([0,1,2,3,-1]);
Coordinate240 := TCoordinateNode.Create;;
Coordinate240.SetPoint([Vector3(20,1.3833333333333333,-0.1),Vector3(-20,1.3833333333333333,-0.1),Vector3(-20,-1.616666666666667,-0.1),Vector3(20,-1.616666666666667,-0.1)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet239.Coord := Coordinate240;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape236.Geometry := IndexedFaceSet239;
{ METHOD .FdChildren.Add }
Transform229.FdChildren.Add(Shape236);
{ METHOD .FdChildren.Add }
Group7.FdChildren.Add(Transform229);
{ Original "JinDimpler_Sensor.EventTouchTime TO Choice5.touchTime }
{ Sample JinDimpler_Sensor.EventTouchTime TO Choice5.touchTime}
Group7.AddRoute(TouchSensor230.EventTouchTime, SFTime36);
{ METHOD .AddX3DROUTE }
{ Original "Choice5.EventChoice TO SceneSwitcher.whichChoice }
{ Sample Choice5.EventChoice TO SceneSwitcher.whichChoice}
Group7.AddRoute(Script35.EventChoice, Switch8.whichChoice);
{ METHOD .AddX3DROUTE }
Transform243 := TTransformNode.Create;;
Transform243.Translation := Vector3(48,45.39999999999999,0);
TouchSensor244 := TTouchSensorNode.Create;;
TouchSensor244.Description := 'TSJinEyesClosed';
{ METHOD .FdChildren.Add }
Transform243.FdChildren.Add(TouchSensor244);
Shape245 := TShapeNode.Create;;
Appearance246 := TAppearanceNode.Create;;
Material247 := TMaterialNode.Create;;
Material247.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance246.Material := Material247;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape245.Appearance := Appearance246;
Text248 := TTextNode.Create;;
Text248.SetText(['JinEyesClosed']);
FontStyle249 := TFontStyleNode.Create;;
FontStyle249.Size := 2.4;
FontStyle249.Spacing := 1.2;
FontStyle249.Justify := fjMIDDLE;
FontStyle249.JustifyMinor := fjMIDDLE;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text248.FontStyle := FontStyle249;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape245.Geometry := Text248;
{ METHOD .FdChildren.Add }
Transform243.FdChildren.Add(Shape245);
Shape250 := TShapeNode.Create;;
Appearance251 := TAppearanceNode.Create;;
Material252 := TMaterialNode.Create;;
Material252.DiffuseColor := Vector3(0,0,1);
{ METHOD .SetMaterial }
Appearance251.Material := Material252;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape250.Appearance := Appearance251;
IndexedFaceSet253 := TIndexedFaceSetNode.Create;;
IndexedFaceSet253.SetCoordIndex([0,1,2,3,-1]);
Coordinate254 := TCoordinateNode.Create;;
Coordinate254.SetPoint([Vector3(20,1.3833333333333333,-0.1),Vector3(-20,1.3833333333333333,-0.1),Vector3(-20,-1.616666666666667,-0.1),Vector3(20,-1.616666666666667,-0.1)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet253.Coord := Coordinate254;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape250.Geometry := IndexedFaceSet253;
{ METHOD .FdChildren.Add }
Transform243.FdChildren.Add(Shape250);
{ METHOD .FdChildren.Add }
Group7.FdChildren.Add(Transform243);
{ Original "JinEyesClosed_Sensor.EventTouchTime TO Choice6.touchTime }
{ Sample JinEyesClosed_Sensor.EventTouchTime TO Choice6.touchTime}
Group7.AddRoute(TouchSensor244.EventTouchTime, SFTime41);
{ METHOD .AddX3DROUTE }
{ Original "Choice6.EventChoice TO SceneSwitcher.whichChoice }
{ Sample Choice6.EventChoice TO SceneSwitcher.whichChoice}
Group7.AddRoute(Script40.EventChoice, Switch8.whichChoice);
{ METHOD .AddX3DROUTE }
Transform257 := TTransformNode.Create;;
Transform257.Translation := Vector3(48,42.39999999999999,0);
TouchSensor258 := TTouchSensorNode.Create;;
TouchSensor258.Description := 'TSJinInnerBrowRaiser';
{ METHOD .FdChildren.Add }
Transform257.FdChildren.Add(TouchSensor258);
Shape259 := TShapeNode.Create;;
Appearance260 := TAppearanceNode.Create;;
Material261 := TMaterialNode.Create;;
Material261.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance260.Material := Material261;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape259.Appearance := Appearance260;
Text262 := TTextNode.Create;;
Text262.SetText(['JinInnerBrowRaiser']);
FontStyle263 := TFontStyleNode.Create;;
FontStyle263.Size := 2.4;
FontStyle263.Spacing := 1.2;
FontStyle263.Justify := fjMIDDLE;
FontStyle263.JustifyMinor := fjMIDDLE;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text262.FontStyle := FontStyle263;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape259.Geometry := Text262;
{ METHOD .FdChildren.Add }
Transform257.FdChildren.Add(Shape259);
Shape264 := TShapeNode.Create;;
Appearance265 := TAppearanceNode.Create;;
Material266 := TMaterialNode.Create;;
Material266.DiffuseColor := Vector3(0,0,1);
{ METHOD .SetMaterial }
Appearance265.Material := Material266;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape264.Appearance := Appearance265;
IndexedFaceSet267 := TIndexedFaceSetNode.Create;;
IndexedFaceSet267.SetCoordIndex([0,1,2,3,-1]);
Coordinate268 := TCoordinateNode.Create;;
Coordinate268.SetPoint([Vector3(20,1.3833333333333333,-0.1),Vector3(-20,1.3833333333333333,-0.1),Vector3(-20,-1.616666666666667,-0.1),Vector3(20,-1.616666666666667,-0.1)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet267.Coord := Coordinate268;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape264.Geometry := IndexedFaceSet267;
{ METHOD .FdChildren.Add }
Transform257.FdChildren.Add(Shape264);
{ METHOD .FdChildren.Add }
Group7.FdChildren.Add(Transform257);
{ Original "JinInnerBrowRaiser_Sensor.EventTouchTime TO Choice7.touchTime }
{ Sample JinInnerBrowRaiser_Sensor.EventTouchTime TO Choice7.touchTime}
Group7.AddRoute(TouchSensor258.EventTouchTime, SFTime46);
{ METHOD .AddX3DROUTE }
{ Original "Choice7.EventChoice TO SceneSwitcher.whichChoice }
{ Sample Choice7.EventChoice TO SceneSwitcher.whichChoice}
Group7.AddRoute(Script45.EventChoice, Switch8.whichChoice);
{ METHOD .AddX3DROUTE }
Transform271 := TTransformNode.Create;;
Transform271.Translation := Vector3(48,39.39999999999999,0);
TouchSensor272 := TTouchSensorNode.Create;;
TouchSensor272.Description := 'TSJinJawDrop';
{ METHOD .FdChildren.Add }
Transform271.FdChildren.Add(TouchSensor272);
Shape273 := TShapeNode.Create;;
Appearance274 := TAppearanceNode.Create;;
Material275 := TMaterialNode.Create;;
Material275.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance274.Material := Material275;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape273.Appearance := Appearance274;
Text276 := TTextNode.Create;;
Text276.SetText(['JinJawDrop']);
FontStyle277 := TFontStyleNode.Create;;
FontStyle277.Size := 2.4;
FontStyle277.Spacing := 1.2;
FontStyle277.Justify := fjMIDDLE;
FontStyle277.JustifyMinor := fjMIDDLE;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text276.FontStyle := FontStyle277;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape273.Geometry := Text276;
{ METHOD .FdChildren.Add }
Transform271.FdChildren.Add(Shape273);
Shape278 := TShapeNode.Create;;
Appearance279 := TAppearanceNode.Create;;
Material280 := TMaterialNode.Create;;
Material280.DiffuseColor := Vector3(0,0,1);
{ METHOD .SetMaterial }
Appearance279.Material := Material280;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape278.Appearance := Appearance279;
IndexedFaceSet281 := TIndexedFaceSetNode.Create;;
IndexedFaceSet281.SetCoordIndex([0,1,2,3,-1]);
Coordinate282 := TCoordinateNode.Create;;
Coordinate282.SetPoint([Vector3(20,1.3833333333333333,-0.1),Vector3(-20,1.3833333333333333,-0.1),Vector3(-20,-1.616666666666667,-0.1),Vector3(20,-1.616666666666667,-0.1)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet281.Coord := Coordinate282;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape278.Geometry := IndexedFaceSet281;
{ METHOD .FdChildren.Add }
Transform271.FdChildren.Add(Shape278);
{ METHOD .FdChildren.Add }
Group7.FdChildren.Add(Transform271);
{ Original "JinJawDrop_Sensor.EventTouchTime TO Choice8.touchTime }
{ Sample JinJawDrop_Sensor.EventTouchTime TO Choice8.touchTime}
Group7.AddRoute(TouchSensor272.EventTouchTime, SFTime51);
{ METHOD .AddX3DROUTE }
{ Original "Choice8.EventChoice TO SceneSwitcher.whichChoice }
{ Sample Choice8.EventChoice TO SceneSwitcher.whichChoice}
Group7.AddRoute(Script50.EventChoice, Switch8.whichChoice);
{ METHOD .AddX3DROUTE }
Transform285 := TTransformNode.Create;;
Transform285.Translation := Vector3(48,36.39999999999999,0);
TouchSensor286 := TTouchSensorNode.Create;;
TouchSensor286.Description := 'TSJinLidDroop';
{ METHOD .FdChildren.Add }
Transform285.FdChildren.Add(TouchSensor286);
Shape287 := TShapeNode.Create;;
Appearance288 := TAppearanceNode.Create;;
Material289 := TMaterialNode.Create;;
Material289.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance288.Material := Material289;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape287.Appearance := Appearance288;
Text290 := TTextNode.Create;;
Text290.SetText(['JinLidDroop']);
FontStyle291 := TFontStyleNode.Create;;
FontStyle291.Size := 2.4;
FontStyle291.Spacing := 1.2;
FontStyle291.Justify := fjMIDDLE;
FontStyle291.JustifyMinor := fjMIDDLE;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text290.FontStyle := FontStyle291;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape287.Geometry := Text290;
{ METHOD .FdChildren.Add }
Transform285.FdChildren.Add(Shape287);
Shape292 := TShapeNode.Create;;
Appearance293 := TAppearanceNode.Create;;
Material294 := TMaterialNode.Create;;
Material294.DiffuseColor := Vector3(0,0,1);
{ METHOD .SetMaterial }
Appearance293.Material := Material294;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape292.Appearance := Appearance293;
IndexedFaceSet295 := TIndexedFaceSetNode.Create;;
IndexedFaceSet295.SetCoordIndex([0,1,2,3,-1]);
Coordinate296 := TCoordinateNode.Create;;
Coordinate296.SetPoint([Vector3(20,1.3833333333333333,-0.1),Vector3(-20,1.3833333333333333,-0.1),Vector3(-20,-1.616666666666667,-0.1),Vector3(20,-1.616666666666667,-0.1)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet295.Coord := Coordinate296;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape292.Geometry := IndexedFaceSet295;
{ METHOD .FdChildren.Add }
Transform285.FdChildren.Add(Shape292);
{ METHOD .FdChildren.Add }
Group7.FdChildren.Add(Transform285);
{ Original "JinLidDroop_Sensor.EventTouchTime TO Choice9.touchTime }
{ Sample JinLidDroop_Sensor.EventTouchTime TO Choice9.touchTime}
Group7.AddRoute(TouchSensor286.EventTouchTime, SFTime56);
{ METHOD .AddX3DROUTE }
{ Original "Choice9.EventChoice TO SceneSwitcher.whichChoice }
{ Sample Choice9.EventChoice TO SceneSwitcher.whichChoice}
Group7.AddRoute(Script55.EventChoice, Switch8.whichChoice);
{ METHOD .AddX3DROUTE }
Transform299 := TTransformNode.Create;;
Transform299.Translation := Vector3(48,33.39999999999999,0);
TouchSensor300 := TTouchSensorNode.Create;;
TouchSensor300.Description := 'TSJinLidTightener';
{ METHOD .FdChildren.Add }
Transform299.FdChildren.Add(TouchSensor300);
Shape301 := TShapeNode.Create;;
Appearance302 := TAppearanceNode.Create;;
Material303 := TMaterialNode.Create;;
Material303.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance302.Material := Material303;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape301.Appearance := Appearance302;
Text304 := TTextNode.Create;;
Text304.SetText(['JinLidTightener']);
FontStyle305 := TFontStyleNode.Create;;
FontStyle305.Size := 2.4;
FontStyle305.Spacing := 1.2;
FontStyle305.Justify := fjMIDDLE;
FontStyle305.JustifyMinor := fjMIDDLE;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text304.FontStyle := FontStyle305;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape301.Geometry := Text304;
{ METHOD .FdChildren.Add }
Transform299.FdChildren.Add(Shape301);
Shape306 := TShapeNode.Create;;
Appearance307 := TAppearanceNode.Create;;
Material308 := TMaterialNode.Create;;
Material308.DiffuseColor := Vector3(0,0,1);
{ METHOD .SetMaterial }
Appearance307.Material := Material308;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape306.Appearance := Appearance307;
IndexedFaceSet309 := TIndexedFaceSetNode.Create;;
IndexedFaceSet309.SetCoordIndex([0,1,2,3,-1]);
Coordinate310 := TCoordinateNode.Create;;
Coordinate310.SetPoint([Vector3(20,1.3833333333333333,-0.1),Vector3(-20,1.3833333333333333,-0.1),Vector3(-20,-1.616666666666667,-0.1),Vector3(20,-1.616666666666667,-0.1)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet309.Coord := Coordinate310;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape306.Geometry := IndexedFaceSet309;
{ METHOD .FdChildren.Add }
Transform299.FdChildren.Add(Shape306);
{ METHOD .FdChildren.Add }
Group7.FdChildren.Add(Transform299);
{ Original "JinLidTightener_Sensor.EventTouchTime TO Choice10.touchTime }
{ Sample JinLidTightener_Sensor.EventTouchTime TO Choice10.touchTime}
Group7.AddRoute(TouchSensor300.EventTouchTime, SFTime61);
{ METHOD .AddX3DROUTE }
{ Original "Choice10.EventChoice TO SceneSwitcher.whichChoice }
{ Sample Choice10.EventChoice TO SceneSwitcher.whichChoice}
Group7.AddRoute(Script60.EventChoice, Switch8.whichChoice);
{ METHOD .AddX3DROUTE }
Transform313 := TTransformNode.Create;;
Transform313.Translation := Vector3(48,30.399999999999995,0);
TouchSensor314 := TTouchSensorNode.Create;;
TouchSensor314.Description := 'TSJinLipCornerDepressor';
{ METHOD .FdChildren.Add }
Transform313.FdChildren.Add(TouchSensor314);
Shape315 := TShapeNode.Create;;
Appearance316 := TAppearanceNode.Create;;
Material317 := TMaterialNode.Create;;
Material317.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance316.Material := Material317;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape315.Appearance := Appearance316;
Text318 := TTextNode.Create;;
Text318.SetText(['JinLipCornerDepressor']);
FontStyle319 := TFontStyleNode.Create;;
FontStyle319.Size := 2.4;
FontStyle319.Spacing := 1.2;
FontStyle319.Justify := fjMIDDLE;
FontStyle319.JustifyMinor := fjMIDDLE;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text318.FontStyle := FontStyle319;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape315.Geometry := Text318;
{ METHOD .FdChildren.Add }
Transform313.FdChildren.Add(Shape315);
Shape320 := TShapeNode.Create;;
Appearance321 := TAppearanceNode.Create;;
Material322 := TMaterialNode.Create;;
Material322.DiffuseColor := Vector3(0,0,1);
{ METHOD .SetMaterial }
Appearance321.Material := Material322;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape320.Appearance := Appearance321;
IndexedFaceSet323 := TIndexedFaceSetNode.Create;;
IndexedFaceSet323.SetCoordIndex([0,1,2,3,-1]);
Coordinate324 := TCoordinateNode.Create;;
Coordinate324.SetPoint([Vector3(20,1.3833333333333333,-0.1),Vector3(-20,1.3833333333333333,-0.1),Vector3(-20,-1.616666666666667,-0.1),Vector3(20,-1.616666666666667,-0.1)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet323.Coord := Coordinate324;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape320.Geometry := IndexedFaceSet323;
{ METHOD .FdChildren.Add }
Transform313.FdChildren.Add(Shape320);
{ METHOD .FdChildren.Add }
Group7.FdChildren.Add(Transform313);
{ Original "JinLipCornerDepressor_Sensor.EventTouchTime TO Choice11.touchTime }
{ Sample JinLipCornerDepressor_Sensor.EventTouchTime TO Choice11.touchTime}
Group7.AddRoute(TouchSensor314.EventTouchTime, SFTime66);
{ METHOD .AddX3DROUTE }
{ Original "Choice11.EventChoice TO SceneSwitcher.whichChoice }
{ Sample Choice11.EventChoice TO SceneSwitcher.whichChoice}
Group7.AddRoute(Script65.EventChoice, Switch8.whichChoice);
{ METHOD .AddX3DROUTE }
Transform327 := TTransformNode.Create;;
Transform327.Translation := Vector3(48,27.399999999999995,0);
TouchSensor328 := TTouchSensorNode.Create;;
TouchSensor328.Description := 'TSJinLipCornerPuller';
{ METHOD .FdChildren.Add }
Transform327.FdChildren.Add(TouchSensor328);
Shape329 := TShapeNode.Create;;
Appearance330 := TAppearanceNode.Create;;
Material331 := TMaterialNode.Create;;
Material331.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance330.Material := Material331;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape329.Appearance := Appearance330;
Text332 := TTextNode.Create;;
Text332.SetText(['JinLipCornerPuller']);
FontStyle333 := TFontStyleNode.Create;;
FontStyle333.Size := 2.4;
FontStyle333.Spacing := 1.2;
FontStyle333.Justify := fjMIDDLE;
FontStyle333.JustifyMinor := fjMIDDLE;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text332.FontStyle := FontStyle333;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape329.Geometry := Text332;
{ METHOD .FdChildren.Add }
Transform327.FdChildren.Add(Shape329);
Shape334 := TShapeNode.Create;;
Appearance335 := TAppearanceNode.Create;;
Material336 := TMaterialNode.Create;;
Material336.DiffuseColor := Vector3(0,0,1);
{ METHOD .SetMaterial }
Appearance335.Material := Material336;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape334.Appearance := Appearance335;
IndexedFaceSet337 := TIndexedFaceSetNode.Create;;
IndexedFaceSet337.SetCoordIndex([0,1,2,3,-1]);
Coordinate338 := TCoordinateNode.Create;;
Coordinate338.SetPoint([Vector3(20,1.3833333333333333,-0.1),Vector3(-20,1.3833333333333333,-0.1),Vector3(-20,-1.616666666666667,-0.1),Vector3(20,-1.616666666666667,-0.1)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet337.Coord := Coordinate338;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape334.Geometry := IndexedFaceSet337;
{ METHOD .FdChildren.Add }
Transform327.FdChildren.Add(Shape334);
{ METHOD .FdChildren.Add }
Group7.FdChildren.Add(Transform327);
{ Original "JinLipCornerPuller_Sensor.EventTouchTime TO Choice12.touchTime }
{ Sample JinLipCornerPuller_Sensor.EventTouchTime TO Choice12.touchTime}
Group7.AddRoute(TouchSensor328.EventTouchTime, SFTime71);
{ METHOD .AddX3DROUTE }
{ Original "Choice12.EventChoice TO SceneSwitcher.whichChoice }
{ Sample Choice12.EventChoice TO SceneSwitcher.whichChoice}
Group7.AddRoute(Script70.EventChoice, Switch8.whichChoice);
{ METHOD .AddX3DROUTE }
Transform341 := TTransformNode.Create;;
Transform341.Translation := Vector3(48,24.399999999999995,0);
TouchSensor342 := TTouchSensorNode.Create;;
TouchSensor342.Description := 'TSJinLipFunneler';
{ METHOD .FdChildren.Add }
Transform341.FdChildren.Add(TouchSensor342);
Shape343 := TShapeNode.Create;;
Appearance344 := TAppearanceNode.Create;;
Material345 := TMaterialNode.Create;;
Material345.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance344.Material := Material345;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape343.Appearance := Appearance344;
Text346 := TTextNode.Create;;
Text346.SetText(['JinLipFunneler']);
FontStyle347 := TFontStyleNode.Create;;
FontStyle347.Size := 2.4;
FontStyle347.Spacing := 1.2;
FontStyle347.Justify := fjMIDDLE;
FontStyle347.JustifyMinor := fjMIDDLE;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text346.FontStyle := FontStyle347;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape343.Geometry := Text346;
{ METHOD .FdChildren.Add }
Transform341.FdChildren.Add(Shape343);
Shape348 := TShapeNode.Create;;
Appearance349 := TAppearanceNode.Create;;
Material350 := TMaterialNode.Create;;
Material350.DiffuseColor := Vector3(0,0,1);
{ METHOD .SetMaterial }
Appearance349.Material := Material350;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape348.Appearance := Appearance349;
IndexedFaceSet351 := TIndexedFaceSetNode.Create;;
IndexedFaceSet351.SetCoordIndex([0,1,2,3,-1]);
Coordinate352 := TCoordinateNode.Create;;
Coordinate352.SetPoint([Vector3(20,1.3833333333333333,-0.1),Vector3(-20,1.3833333333333333,-0.1),Vector3(-20,-1.616666666666667,-0.1),Vector3(20,-1.616666666666667,-0.1)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet351.Coord := Coordinate352;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape348.Geometry := IndexedFaceSet351;
{ METHOD .FdChildren.Add }
Transform341.FdChildren.Add(Shape348);
{ METHOD .FdChildren.Add }
Group7.FdChildren.Add(Transform341);
{ Original "JinLipFunneler_Sensor.EventTouchTime TO Choice13.touchTime }
{ Sample JinLipFunneler_Sensor.EventTouchTime TO Choice13.touchTime}
Group7.AddRoute(TouchSensor342.EventTouchTime, SFTime76);
{ METHOD .AddX3DROUTE }
{ Original "Choice13.EventChoice TO SceneSwitcher.whichChoice }
{ Sample Choice13.EventChoice TO SceneSwitcher.whichChoice}
Group7.AddRoute(Script75.EventChoice, Switch8.whichChoice);
{ METHOD .AddX3DROUTE }
Transform355 := TTransformNode.Create;;
Transform355.Translation := Vector3(48,21.399999999999995,0);
TouchSensor356 := TTouchSensorNode.Create;;
TouchSensor356.Description := 'TSJinLipPressor';
{ METHOD .FdChildren.Add }
Transform355.FdChildren.Add(TouchSensor356);
Shape357 := TShapeNode.Create;;
Appearance358 := TAppearanceNode.Create;;
Material359 := TMaterialNode.Create;;
Material359.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance358.Material := Material359;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape357.Appearance := Appearance358;
Text360 := TTextNode.Create;;
Text360.SetText(['JinLipPressor']);
FontStyle361 := TFontStyleNode.Create;;
FontStyle361.Size := 2.4;
FontStyle361.Spacing := 1.2;
FontStyle361.Justify := fjMIDDLE;
FontStyle361.JustifyMinor := fjMIDDLE;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text360.FontStyle := FontStyle361;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape357.Geometry := Text360;
{ METHOD .FdChildren.Add }
Transform355.FdChildren.Add(Shape357);
Shape362 := TShapeNode.Create;;
Appearance363 := TAppearanceNode.Create;;
Material364 := TMaterialNode.Create;;
Material364.DiffuseColor := Vector3(0,0,1);
{ METHOD .SetMaterial }
Appearance363.Material := Material364;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape362.Appearance := Appearance363;
IndexedFaceSet365 := TIndexedFaceSetNode.Create;;
IndexedFaceSet365.SetCoordIndex([0,1,2,3,-1]);
Coordinate366 := TCoordinateNode.Create;;
Coordinate366.SetPoint([Vector3(20,1.3833333333333333,-0.1),Vector3(-20,1.3833333333333333,-0.1),Vector3(-20,-1.616666666666667,-0.1),Vector3(20,-1.616666666666667,-0.1)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet365.Coord := Coordinate366;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape362.Geometry := IndexedFaceSet365;
{ METHOD .FdChildren.Add }
Transform355.FdChildren.Add(Shape362);
{ METHOD .FdChildren.Add }
Group7.FdChildren.Add(Transform355);
{ Original "JinLipPressor_Sensor.EventTouchTime TO Choice14.touchTime }
{ Sample JinLipPressor_Sensor.EventTouchTime TO Choice14.touchTime}
Group7.AddRoute(TouchSensor356.EventTouchTime, SFTime81);
{ METHOD .AddX3DROUTE }
{ Original "Choice14.EventChoice TO SceneSwitcher.whichChoice }
{ Sample Choice14.EventChoice TO SceneSwitcher.whichChoice}
Group7.AddRoute(Script80.EventChoice, Switch8.whichChoice);
{ METHOD .AddX3DROUTE }
Transform369 := TTransformNode.Create;;
Transform369.Translation := Vector3(48,18.4,0);
TouchSensor370 := TTouchSensorNode.Create;;
TouchSensor370.Description := 'TSJinLipPuckerer';
{ METHOD .FdChildren.Add }
Transform369.FdChildren.Add(TouchSensor370);
Shape371 := TShapeNode.Create;;
Appearance372 := TAppearanceNode.Create;;
Material373 := TMaterialNode.Create;;
Material373.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance372.Material := Material373;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape371.Appearance := Appearance372;
Text374 := TTextNode.Create;;
Text374.SetText(['JinLipPuckerer']);
FontStyle375 := TFontStyleNode.Create;;
FontStyle375.Size := 2.4;
FontStyle375.Spacing := 1.2;
FontStyle375.Justify := fjMIDDLE;
FontStyle375.JustifyMinor := fjMIDDLE;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text374.FontStyle := FontStyle375;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape371.Geometry := Text374;
{ METHOD .FdChildren.Add }
Transform369.FdChildren.Add(Shape371);
Shape376 := TShapeNode.Create;;
Appearance377 := TAppearanceNode.Create;;
Material378 := TMaterialNode.Create;;
Material378.DiffuseColor := Vector3(0,0,1);
{ METHOD .SetMaterial }
Appearance377.Material := Material378;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape376.Appearance := Appearance377;
IndexedFaceSet379 := TIndexedFaceSetNode.Create;;
IndexedFaceSet379.SetCoordIndex([0,1,2,3,-1]);
Coordinate380 := TCoordinateNode.Create;;
Coordinate380.SetPoint([Vector3(20,1.3833333333333333,-0.1),Vector3(-20,1.3833333333333333,-0.1),Vector3(-20,-1.616666666666667,-0.1),Vector3(20,-1.616666666666667,-0.1)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet379.Coord := Coordinate380;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape376.Geometry := IndexedFaceSet379;
{ METHOD .FdChildren.Add }
Transform369.FdChildren.Add(Shape376);
{ METHOD .FdChildren.Add }
Group7.FdChildren.Add(Transform369);
{ Original "JinLipPuckerer_Sensor.EventTouchTime TO Choice15.touchTime }
{ Sample JinLipPuckerer_Sensor.EventTouchTime TO Choice15.touchTime}
Group7.AddRoute(TouchSensor370.EventTouchTime, SFTime86);
{ METHOD .AddX3DROUTE }
{ Original "Choice15.EventChoice TO SceneSwitcher.whichChoice }
{ Sample Choice15.EventChoice TO SceneSwitcher.whichChoice}
Group7.AddRoute(Script85.EventChoice, Switch8.whichChoice);
{ METHOD .AddX3DROUTE }
Transform383 := TTransformNode.Create;;
Transform383.Translation := Vector3(48,15.399999999999997,0);
TouchSensor384 := TTouchSensorNode.Create;;
TouchSensor384.Description := 'TSJinLipsPart';
{ METHOD .FdChildren.Add }
Transform383.FdChildren.Add(TouchSensor384);
Shape385 := TShapeNode.Create;;
Appearance386 := TAppearanceNode.Create;;
Material387 := TMaterialNode.Create;;
Material387.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance386.Material := Material387;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape385.Appearance := Appearance386;
Text388 := TTextNode.Create;;
Text388.SetText(['JinLipsPart']);
FontStyle389 := TFontStyleNode.Create;;
FontStyle389.Size := 2.4;
FontStyle389.Spacing := 1.2;
FontStyle389.Justify := fjMIDDLE;
FontStyle389.JustifyMinor := fjMIDDLE;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text388.FontStyle := FontStyle389;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape385.Geometry := Text388;
{ METHOD .FdChildren.Add }
Transform383.FdChildren.Add(Shape385);
Shape390 := TShapeNode.Create;;
Appearance391 := TAppearanceNode.Create;;
Material392 := TMaterialNode.Create;;
Material392.DiffuseColor := Vector3(0,0,1);
{ METHOD .SetMaterial }
Appearance391.Material := Material392;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape390.Appearance := Appearance391;
IndexedFaceSet393 := TIndexedFaceSetNode.Create;;
IndexedFaceSet393.SetCoordIndex([0,1,2,3,-1]);
Coordinate394 := TCoordinateNode.Create;;
Coordinate394.SetPoint([Vector3(20,1.3833333333333333,-0.1),Vector3(-20,1.3833333333333333,-0.1),Vector3(-20,-1.616666666666667,-0.1),Vector3(20,-1.616666666666667,-0.1)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet393.Coord := Coordinate394;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape390.Geometry := IndexedFaceSet393;
{ METHOD .FdChildren.Add }
Transform383.FdChildren.Add(Shape390);
{ METHOD .FdChildren.Add }
Group7.FdChildren.Add(Transform383);
{ Original "JinLipsPart_Sensor.EventTouchTime TO Choice16.touchTime }
{ Sample JinLipsPart_Sensor.EventTouchTime TO Choice16.touchTime}
Group7.AddRoute(TouchSensor384.EventTouchTime, SFTime91);
{ METHOD .AddX3DROUTE }
{ Original "Choice16.EventChoice TO SceneSwitcher.whichChoice }
{ Sample Choice16.EventChoice TO SceneSwitcher.whichChoice}
Group7.AddRoute(Script90.EventChoice, Switch8.whichChoice);
{ METHOD .AddX3DROUTE }
Transform397 := TTransformNode.Create;;
Transform397.Translation := Vector3(48,12.399999999999999,0);
TouchSensor398 := TTouchSensorNode.Create;;
TouchSensor398.Description := 'TSJinLipStretcher';
{ METHOD .FdChildren.Add }
Transform397.FdChildren.Add(TouchSensor398);
Shape399 := TShapeNode.Create;;
Appearance400 := TAppearanceNode.Create;;
Material401 := TMaterialNode.Create;;
Material401.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance400.Material := Material401;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape399.Appearance := Appearance400;
Text402 := TTextNode.Create;;
Text402.SetText(['JinLipStretcher']);
FontStyle403 := TFontStyleNode.Create;;
FontStyle403.Size := 2.4;
FontStyle403.Spacing := 1.2;
FontStyle403.Justify := fjMIDDLE;
FontStyle403.JustifyMinor := fjMIDDLE;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text402.FontStyle := FontStyle403;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape399.Geometry := Text402;
{ METHOD .FdChildren.Add }
Transform397.FdChildren.Add(Shape399);
Shape404 := TShapeNode.Create;;
Appearance405 := TAppearanceNode.Create;;
Material406 := TMaterialNode.Create;;
Material406.DiffuseColor := Vector3(0,0,1);
{ METHOD .SetMaterial }
Appearance405.Material := Material406;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape404.Appearance := Appearance405;
IndexedFaceSet407 := TIndexedFaceSetNode.Create;;
IndexedFaceSet407.SetCoordIndex([0,1,2,3,-1]);
Coordinate408 := TCoordinateNode.Create;;
Coordinate408.SetPoint([Vector3(20,1.3833333333333333,-0.1),Vector3(-20,1.3833333333333333,-0.1),Vector3(-20,-1.616666666666667,-0.1),Vector3(20,-1.616666666666667,-0.1)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet407.Coord := Coordinate408;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape404.Geometry := IndexedFaceSet407;
{ METHOD .FdChildren.Add }
Transform397.FdChildren.Add(Shape404);
{ METHOD .FdChildren.Add }
Group7.FdChildren.Add(Transform397);
{ Original "JinLipStretcher_Sensor.EventTouchTime TO Choice17.touchTime }
{ Sample JinLipStretcher_Sensor.EventTouchTime TO Choice17.touchTime}
Group7.AddRoute(TouchSensor398.EventTouchTime, SFTime96);
{ METHOD .AddX3DROUTE }
{ Original "Choice17.EventChoice TO SceneSwitcher.whichChoice }
{ Sample Choice17.EventChoice TO SceneSwitcher.whichChoice}
Group7.AddRoute(Script95.EventChoice, Switch8.whichChoice);
{ METHOD .AddX3DROUTE }
Transform411 := TTransformNode.Create;;
Transform411.Translation := Vector3(48,9.399999999999999,0);
TouchSensor412 := TTouchSensorNode.Create;;
TouchSensor412.Description := 'TSJinLipSuck';
{ METHOD .FdChildren.Add }
Transform411.FdChildren.Add(TouchSensor412);
Shape413 := TShapeNode.Create;;
Appearance414 := TAppearanceNode.Create;;
Material415 := TMaterialNode.Create;;
Material415.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance414.Material := Material415;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape413.Appearance := Appearance414;
Text416 := TTextNode.Create;;
Text416.SetText(['JinLipSuck']);
FontStyle417 := TFontStyleNode.Create;;
FontStyle417.Size := 2.4;
FontStyle417.Spacing := 1.2;
FontStyle417.Justify := fjMIDDLE;
FontStyle417.JustifyMinor := fjMIDDLE;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text416.FontStyle := FontStyle417;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape413.Geometry := Text416;
{ METHOD .FdChildren.Add }
Transform411.FdChildren.Add(Shape413);
Shape418 := TShapeNode.Create;;
Appearance419 := TAppearanceNode.Create;;
Material420 := TMaterialNode.Create;;
Material420.DiffuseColor := Vector3(0,0,1);
{ METHOD .SetMaterial }
Appearance419.Material := Material420;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape418.Appearance := Appearance419;
IndexedFaceSet421 := TIndexedFaceSetNode.Create;;
IndexedFaceSet421.SetCoordIndex([0,1,2,3,-1]);
Coordinate422 := TCoordinateNode.Create;;
Coordinate422.SetPoint([Vector3(20,1.3833333333333333,-0.1),Vector3(-20,1.3833333333333333,-0.1),Vector3(-20,-1.616666666666667,-0.1),Vector3(20,-1.616666666666667,-0.1)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet421.Coord := Coordinate422;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape418.Geometry := IndexedFaceSet421;
{ METHOD .FdChildren.Add }
Transform411.FdChildren.Add(Shape418);
{ METHOD .FdChildren.Add }
Group7.FdChildren.Add(Transform411);
{ Original "JinLipSuck_Sensor.EventTouchTime TO Choice18.touchTime }
{ Sample JinLipSuck_Sensor.EventTouchTime TO Choice18.touchTime}
Group7.AddRoute(TouchSensor412.EventTouchTime, SFTime101);
{ METHOD .AddX3DROUTE }
{ Original "Choice18.EventChoice TO SceneSwitcher.whichChoice }
{ Sample Choice18.EventChoice TO SceneSwitcher.whichChoice}
Group7.AddRoute(Script100.EventChoice, Switch8.whichChoice);
{ METHOD .AddX3DROUTE }
Transform425 := TTransformNode.Create;;
Transform425.Translation := Vector3(48,6.399999999999999,0);
TouchSensor426 := TTouchSensorNode.Create;;
TouchSensor426.Description := 'TSJinLipTightener';
{ METHOD .FdChildren.Add }
Transform425.FdChildren.Add(TouchSensor426);
Shape427 := TShapeNode.Create;;
Appearance428 := TAppearanceNode.Create;;
Material429 := TMaterialNode.Create;;
Material429.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance428.Material := Material429;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape427.Appearance := Appearance428;
Text430 := TTextNode.Create;;
Text430.SetText(['JinLipTightener']);
FontStyle431 := TFontStyleNode.Create;;
FontStyle431.Size := 2.4;
FontStyle431.Spacing := 1.2;
FontStyle431.Justify := fjMIDDLE;
FontStyle431.JustifyMinor := fjMIDDLE;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text430.FontStyle := FontStyle431;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape427.Geometry := Text430;
{ METHOD .FdChildren.Add }
Transform425.FdChildren.Add(Shape427);
Shape432 := TShapeNode.Create;;
Appearance433 := TAppearanceNode.Create;;
Material434 := TMaterialNode.Create;;
Material434.DiffuseColor := Vector3(0,0,1);
{ METHOD .SetMaterial }
Appearance433.Material := Material434;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape432.Appearance := Appearance433;
IndexedFaceSet435 := TIndexedFaceSetNode.Create;;
IndexedFaceSet435.SetCoordIndex([0,1,2,3,-1]);
Coordinate436 := TCoordinateNode.Create;;
Coordinate436.SetPoint([Vector3(20,1.3833333333333333,-0.1),Vector3(-20,1.3833333333333333,-0.1),Vector3(-20,-1.616666666666667,-0.1),Vector3(20,-1.616666666666667,-0.1)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet435.Coord := Coordinate436;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape432.Geometry := IndexedFaceSet435;
{ METHOD .FdChildren.Add }
Transform425.FdChildren.Add(Shape432);
{ METHOD .FdChildren.Add }
Group7.FdChildren.Add(Transform425);
{ Original "JinLipTightener_Sensor.EventTouchTime TO Choice19.touchTime }
{ Sample JinLipTightener_Sensor.EventTouchTime TO Choice19.touchTime}
Group7.AddRoute(TouchSensor426.EventTouchTime, SFTime106);
{ METHOD .AddX3DROUTE }
{ Original "Choice19.EventChoice TO SceneSwitcher.whichChoice }
{ Sample Choice19.EventChoice TO SceneSwitcher.whichChoice}
Group7.AddRoute(Script105.EventChoice, Switch8.whichChoice);
{ METHOD .AddX3DROUTE }
Transform439 := TTransformNode.Create;;
Transform439.Translation := Vector3(48,3.399999999999995,0);
TouchSensor440 := TTouchSensorNode.Create;;
TouchSensor440.Description := 'TSJinLowerLipDepressor';
{ METHOD .FdChildren.Add }
Transform439.FdChildren.Add(TouchSensor440);
Shape441 := TShapeNode.Create;;
Appearance442 := TAppearanceNode.Create;;
Material443 := TMaterialNode.Create;;
Material443.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance442.Material := Material443;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape441.Appearance := Appearance442;
Text444 := TTextNode.Create;;
Text444.SetText(['JinLowerLipDepressor']);
FontStyle445 := TFontStyleNode.Create;;
FontStyle445.Size := 2.4;
FontStyle445.Spacing := 1.2;
FontStyle445.Justify := fjMIDDLE;
FontStyle445.JustifyMinor := fjMIDDLE;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text444.FontStyle := FontStyle445;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape441.Geometry := Text444;
{ METHOD .FdChildren.Add }
Transform439.FdChildren.Add(Shape441);
Shape446 := TShapeNode.Create;;
Appearance447 := TAppearanceNode.Create;;
Material448 := TMaterialNode.Create;;
Material448.DiffuseColor := Vector3(0,0,1);
{ METHOD .SetMaterial }
Appearance447.Material := Material448;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape446.Appearance := Appearance447;
IndexedFaceSet449 := TIndexedFaceSetNode.Create;;
IndexedFaceSet449.SetCoordIndex([0,1,2,3,-1]);
Coordinate450 := TCoordinateNode.Create;;
Coordinate450.SetPoint([Vector3(20,1.3833333333333333,-0.1),Vector3(-20,1.3833333333333333,-0.1),Vector3(-20,-1.616666666666667,-0.1),Vector3(20,-1.616666666666667,-0.1)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet449.Coord := Coordinate450;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape446.Geometry := IndexedFaceSet449;
{ METHOD .FdChildren.Add }
Transform439.FdChildren.Add(Shape446);
{ METHOD .FdChildren.Add }
Group7.FdChildren.Add(Transform439);
{ Original "JinLowerLipDepressor_Sensor.EventTouchTime TO Choice20.touchTime }
{ Sample JinLowerLipDepressor_Sensor.EventTouchTime TO Choice20.touchTime}
Group7.AddRoute(TouchSensor440.EventTouchTime, SFTime111);
{ METHOD .AddX3DROUTE }
{ Original "Choice20.EventChoice TO SceneSwitcher.whichChoice }
{ Sample Choice20.EventChoice TO SceneSwitcher.whichChoice}
Group7.AddRoute(Script110.EventChoice, Switch8.whichChoice);
{ METHOD .AddX3DROUTE }
Transform453 := TTransformNode.Create;;
Transform453.Translation := Vector3(48,0.399999999999995,0);
TouchSensor454 := TTouchSensorNode.Create;;
TouchSensor454.Description := 'TSJinMouthStretch';
{ METHOD .FdChildren.Add }
Transform453.FdChildren.Add(TouchSensor454);
Shape455 := TShapeNode.Create;;
Appearance456 := TAppearanceNode.Create;;
Material457 := TMaterialNode.Create;;
Material457.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance456.Material := Material457;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape455.Appearance := Appearance456;
Text458 := TTextNode.Create;;
Text458.SetText(['JinMouthStretch']);
FontStyle459 := TFontStyleNode.Create;;
FontStyle459.Size := 2.4;
FontStyle459.Spacing := 1.2;
FontStyle459.Justify := fjMIDDLE;
FontStyle459.JustifyMinor := fjMIDDLE;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text458.FontStyle := FontStyle459;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape455.Geometry := Text458;
{ METHOD .FdChildren.Add }
Transform453.FdChildren.Add(Shape455);
Shape460 := TShapeNode.Create;;
Appearance461 := TAppearanceNode.Create;;
Material462 := TMaterialNode.Create;;
Material462.DiffuseColor := Vector3(0,0,1);
{ METHOD .SetMaterial }
Appearance461.Material := Material462;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape460.Appearance := Appearance461;
IndexedFaceSet463 := TIndexedFaceSetNode.Create;;
IndexedFaceSet463.SetCoordIndex([0,1,2,3,-1]);
Coordinate464 := TCoordinateNode.Create;;
Coordinate464.SetPoint([Vector3(20,1.3833333333333333,-0.1),Vector3(-20,1.3833333333333333,-0.1),Vector3(-20,-1.616666666666667,-0.1),Vector3(20,-1.616666666666667,-0.1)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet463.Coord := Coordinate464;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape460.Geometry := IndexedFaceSet463;
{ METHOD .FdChildren.Add }
Transform453.FdChildren.Add(Shape460);
{ METHOD .FdChildren.Add }
Group7.FdChildren.Add(Transform453);
{ Original "JinMouthStretch_Sensor.EventTouchTime TO Choice21.touchTime }
{ Sample JinMouthStretch_Sensor.EventTouchTime TO Choice21.touchTime}
Group7.AddRoute(TouchSensor454.EventTouchTime, SFTime116);
{ METHOD .AddX3DROUTE }
{ Original "Choice21.EventChoice TO SceneSwitcher.whichChoice }
{ Sample Choice21.EventChoice TO SceneSwitcher.whichChoice}
Group7.AddRoute(Script115.EventChoice, Switch8.whichChoice);
{ METHOD .AddX3DROUTE }
Transform467 := TTransformNode.Create;;
Transform467.Translation := Vector3(48,-2.6000000000000085,0);
TouchSensor468 := TTouchSensorNode.Create;;
TouchSensor468.Description := 'TSJinNasolabialDeepener';
{ METHOD .FdChildren.Add }
Transform467.FdChildren.Add(TouchSensor468);
Shape469 := TShapeNode.Create;;
Appearance470 := TAppearanceNode.Create;;
Material471 := TMaterialNode.Create;;
Material471.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance470.Material := Material471;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape469.Appearance := Appearance470;
Text472 := TTextNode.Create;;
Text472.SetText(['JinNasolabialDeepener']);
FontStyle473 := TFontStyleNode.Create;;
FontStyle473.Size := 2.4;
FontStyle473.Spacing := 1.2;
FontStyle473.Justify := fjMIDDLE;
FontStyle473.JustifyMinor := fjMIDDLE;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text472.FontStyle := FontStyle473;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape469.Geometry := Text472;
{ METHOD .FdChildren.Add }
Transform467.FdChildren.Add(Shape469);
Shape474 := TShapeNode.Create;;
Appearance475 := TAppearanceNode.Create;;
Material476 := TMaterialNode.Create;;
Material476.DiffuseColor := Vector3(0,0,1);
{ METHOD .SetMaterial }
Appearance475.Material := Material476;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape474.Appearance := Appearance475;
IndexedFaceSet477 := TIndexedFaceSetNode.Create;;
IndexedFaceSet477.SetCoordIndex([0,1,2,3,-1]);
Coordinate478 := TCoordinateNode.Create;;
Coordinate478.SetPoint([Vector3(20,1.3833333333333333,-0.1),Vector3(-20,1.3833333333333333,-0.1),Vector3(-20,-1.616666666666667,-0.1),Vector3(20,-1.616666666666667,-0.1)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet477.Coord := Coordinate478;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape474.Geometry := IndexedFaceSet477;
{ METHOD .FdChildren.Add }
Transform467.FdChildren.Add(Shape474);
{ METHOD .FdChildren.Add }
Group7.FdChildren.Add(Transform467);
{ Original "JinNasolabialDeepener_Sensor.EventTouchTime TO Choice22.touchTime }
{ Sample JinNasolabialDeepener_Sensor.EventTouchTime TO Choice22.touchTime}
Group7.AddRoute(TouchSensor468.EventTouchTime, SFTime121);
{ METHOD .AddX3DROUTE }
{ Original "Choice22.EventChoice TO SceneSwitcher.whichChoice }
{ Sample Choice22.EventChoice TO SceneSwitcher.whichChoice}
Group7.AddRoute(Script120.EventChoice, Switch8.whichChoice);
{ METHOD .AddX3DROUTE }
Transform481 := TTransformNode.Create;;
Transform481.Translation := Vector3(48,-5.6000000000000085,0);
TouchSensor482 := TTouchSensorNode.Create;;
TouchSensor482.Description := 'TSJinNoseWrinkler';
{ METHOD .FdChildren.Add }
Transform481.FdChildren.Add(TouchSensor482);
Shape483 := TShapeNode.Create;;
Appearance484 := TAppearanceNode.Create;;
Material485 := TMaterialNode.Create;;
Material485.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance484.Material := Material485;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape483.Appearance := Appearance484;
Text486 := TTextNode.Create;;
Text486.SetText(['JinNoseWrinkler']);
FontStyle487 := TFontStyleNode.Create;;
FontStyle487.Size := 2.4;
FontStyle487.Spacing := 1.2;
FontStyle487.Justify := fjMIDDLE;
FontStyle487.JustifyMinor := fjMIDDLE;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text486.FontStyle := FontStyle487;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape483.Geometry := Text486;
{ METHOD .FdChildren.Add }
Transform481.FdChildren.Add(Shape483);
Shape488 := TShapeNode.Create;;
Appearance489 := TAppearanceNode.Create;;
Material490 := TMaterialNode.Create;;
Material490.DiffuseColor := Vector3(0,0,1);
{ METHOD .SetMaterial }
Appearance489.Material := Material490;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape488.Appearance := Appearance489;
IndexedFaceSet491 := TIndexedFaceSetNode.Create;;
IndexedFaceSet491.SetCoordIndex([0,1,2,3,-1]);
Coordinate492 := TCoordinateNode.Create;;
Coordinate492.SetPoint([Vector3(20,1.3833333333333333,-0.1),Vector3(-20,1.3833333333333333,-0.1),Vector3(-20,-1.616666666666667,-0.1),Vector3(20,-1.616666666666667,-0.1)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet491.Coord := Coordinate492;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape488.Geometry := IndexedFaceSet491;
{ METHOD .FdChildren.Add }
Transform481.FdChildren.Add(Shape488);
{ METHOD .FdChildren.Add }
Group7.FdChildren.Add(Transform481);
{ Original "JinNoseWrinkler_Sensor.EventTouchTime TO Choice23.touchTime }
{ Sample JinNoseWrinkler_Sensor.EventTouchTime TO Choice23.touchTime}
Group7.AddRoute(TouchSensor482.EventTouchTime, SFTime126);
{ METHOD .AddX3DROUTE }
{ Original "Choice23.EventChoice TO SceneSwitcher.whichChoice }
{ Sample Choice23.EventChoice TO SceneSwitcher.whichChoice}
Group7.AddRoute(Script125.EventChoice, Switch8.whichChoice);
{ METHOD .AddX3DROUTE }
Transform495 := TTransformNode.Create;;
Transform495.Translation := Vector3(48,-8.600000000000009,0);
TouchSensor496 := TTouchSensorNode.Create;;
TouchSensor496.Description := 'TSJinOuterBrowRaiser';
{ METHOD .FdChildren.Add }
Transform495.FdChildren.Add(TouchSensor496);
Shape497 := TShapeNode.Create;;
Appearance498 := TAppearanceNode.Create;;
Material499 := TMaterialNode.Create;;
Material499.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance498.Material := Material499;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape497.Appearance := Appearance498;
Text500 := TTextNode.Create;;
Text500.SetText(['JinOuterBrowRaiser']);
FontStyle501 := TFontStyleNode.Create;;
FontStyle501.Size := 2.4;
FontStyle501.Spacing := 1.2;
FontStyle501.Justify := fjMIDDLE;
FontStyle501.JustifyMinor := fjMIDDLE;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text500.FontStyle := FontStyle501;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape497.Geometry := Text500;
{ METHOD .FdChildren.Add }
Transform495.FdChildren.Add(Shape497);
Shape502 := TShapeNode.Create;;
Appearance503 := TAppearanceNode.Create;;
Material504 := TMaterialNode.Create;;
Material504.DiffuseColor := Vector3(0,0,1);
{ METHOD .SetMaterial }
Appearance503.Material := Material504;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape502.Appearance := Appearance503;
IndexedFaceSet505 := TIndexedFaceSetNode.Create;;
IndexedFaceSet505.SetCoordIndex([0,1,2,3,-1]);
Coordinate506 := TCoordinateNode.Create;;
Coordinate506.SetPoint([Vector3(20,1.3833333333333333,-0.1),Vector3(-20,1.3833333333333333,-0.1),Vector3(-20,-1.616666666666667,-0.1),Vector3(20,-1.616666666666667,-0.1)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet505.Coord := Coordinate506;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape502.Geometry := IndexedFaceSet505;
{ METHOD .FdChildren.Add }
Transform495.FdChildren.Add(Shape502);
{ METHOD .FdChildren.Add }
Group7.FdChildren.Add(Transform495);
{ Original "JinOuterBrowRaiser_Sensor.EventTouchTime TO Choice24.touchTime }
{ Sample JinOuterBrowRaiser_Sensor.EventTouchTime TO Choice24.touchTime}
Group7.AddRoute(TouchSensor496.EventTouchTime, SFTime131);
{ METHOD .AddX3DROUTE }
{ Original "Choice24.EventChoice TO SceneSwitcher.whichChoice }
{ Sample Choice24.EventChoice TO SceneSwitcher.whichChoice}
Group7.AddRoute(Script130.EventChoice, Switch8.whichChoice);
{ METHOD .AddX3DROUTE }
Transform509 := TTransformNode.Create;;
Transform509.Translation := Vector3(48,-11.600000000000009,0);
TouchSensor510 := TTouchSensorNode.Create;;
TouchSensor510.Description := 'TSJinSlit';
{ METHOD .FdChildren.Add }
Transform509.FdChildren.Add(TouchSensor510);
Shape511 := TShapeNode.Create;;
Appearance512 := TAppearanceNode.Create;;
Material513 := TMaterialNode.Create;;
Material513.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance512.Material := Material513;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape511.Appearance := Appearance512;
Text514 := TTextNode.Create;;
Text514.SetText(['JinSlit']);
FontStyle515 := TFontStyleNode.Create;;
FontStyle515.Size := 2.4;
FontStyle515.Spacing := 1.2;
FontStyle515.Justify := fjMIDDLE;
FontStyle515.JustifyMinor := fjMIDDLE;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text514.FontStyle := FontStyle515;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape511.Geometry := Text514;
{ METHOD .FdChildren.Add }
Transform509.FdChildren.Add(Shape511);
Shape516 := TShapeNode.Create;;
Appearance517 := TAppearanceNode.Create;;
Material518 := TMaterialNode.Create;;
Material518.DiffuseColor := Vector3(0,0,1);
{ METHOD .SetMaterial }
Appearance517.Material := Material518;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape516.Appearance := Appearance517;
IndexedFaceSet519 := TIndexedFaceSetNode.Create;;
IndexedFaceSet519.SetCoordIndex([0,1,2,3,-1]);
Coordinate520 := TCoordinateNode.Create;;
Coordinate520.SetPoint([Vector3(20,1.3833333333333333,-0.1),Vector3(-20,1.3833333333333333,-0.1),Vector3(-20,-1.616666666666667,-0.1),Vector3(20,-1.616666666666667,-0.1)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet519.Coord := Coordinate520;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape516.Geometry := IndexedFaceSet519;
{ METHOD .FdChildren.Add }
Transform509.FdChildren.Add(Shape516);
{ METHOD .FdChildren.Add }
Group7.FdChildren.Add(Transform509);
{ Original "JinSlit_Sensor.EventTouchTime TO Choice25.touchTime }
{ Sample JinSlit_Sensor.EventTouchTime TO Choice25.touchTime}
Group7.AddRoute(TouchSensor510.EventTouchTime, SFTime136);
{ METHOD .AddX3DROUTE }
{ Original "Choice25.EventChoice TO SceneSwitcher.whichChoice }
{ Sample Choice25.EventChoice TO SceneSwitcher.whichChoice}
Group7.AddRoute(Script135.EventChoice, Switch8.whichChoice);
{ METHOD .AddX3DROUTE }
Transform523 := TTransformNode.Create;;
Transform523.Translation := Vector3(48,-14.600000000000001,0);
TouchSensor524 := TTouchSensorNode.Create;;
TouchSensor524.Description := 'TSJinSquint';
{ METHOD .FdChildren.Add }
Transform523.FdChildren.Add(TouchSensor524);
Shape525 := TShapeNode.Create;;
Appearance526 := TAppearanceNode.Create;;
Material527 := TMaterialNode.Create;;
Material527.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance526.Material := Material527;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape525.Appearance := Appearance526;
Text528 := TTextNode.Create;;
Text528.SetText(['JinSquint']);
FontStyle529 := TFontStyleNode.Create;;
FontStyle529.Size := 2.4;
FontStyle529.Spacing := 1.2;
FontStyle529.Justify := fjMIDDLE;
FontStyle529.JustifyMinor := fjMIDDLE;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text528.FontStyle := FontStyle529;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape525.Geometry := Text528;
{ METHOD .FdChildren.Add }
Transform523.FdChildren.Add(Shape525);
Shape530 := TShapeNode.Create;;
Appearance531 := TAppearanceNode.Create;;
Material532 := TMaterialNode.Create;;
Material532.DiffuseColor := Vector3(0,0,1);
{ METHOD .SetMaterial }
Appearance531.Material := Material532;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape530.Appearance := Appearance531;
IndexedFaceSet533 := TIndexedFaceSetNode.Create;;
IndexedFaceSet533.SetCoordIndex([0,1,2,3,-1]);
Coordinate534 := TCoordinateNode.Create;;
Coordinate534.SetPoint([Vector3(20,1.3833333333333333,-0.1),Vector3(-20,1.3833333333333333,-0.1),Vector3(-20,-1.616666666666667,-0.1),Vector3(20,-1.616666666666667,-0.1)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet533.Coord := Coordinate534;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape530.Geometry := IndexedFaceSet533;
{ METHOD .FdChildren.Add }
Transform523.FdChildren.Add(Shape530);
{ METHOD .FdChildren.Add }
Group7.FdChildren.Add(Transform523);
{ Original "JinSquint_Sensor.EventTouchTime TO Choice26.touchTime }
{ Sample JinSquint_Sensor.EventTouchTime TO Choice26.touchTime}
Group7.AddRoute(TouchSensor524.EventTouchTime, SFTime141);
{ METHOD .AddX3DROUTE }
{ Original "Choice26.EventChoice TO SceneSwitcher.whichChoice }
{ Sample Choice26.EventChoice TO SceneSwitcher.whichChoice}
Group7.AddRoute(Script140.EventChoice, Switch8.whichChoice);
{ METHOD .AddX3DROUTE }
Transform537 := TTransformNode.Create;;
Transform537.Translation := Vector3(48,-17.6,0);
TouchSensor538 := TTouchSensorNode.Create;;
TouchSensor538.Description := 'TSJinUpperLidRaiser';
{ METHOD .FdChildren.Add }
Transform537.FdChildren.Add(TouchSensor538);
Shape539 := TShapeNode.Create;;
Appearance540 := TAppearanceNode.Create;;
Material541 := TMaterialNode.Create;;
Material541.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance540.Material := Material541;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape539.Appearance := Appearance540;
Text542 := TTextNode.Create;;
Text542.SetText(['JinUpperLidRaiser']);
FontStyle543 := TFontStyleNode.Create;;
FontStyle543.Size := 2.4;
FontStyle543.Spacing := 1.2;
FontStyle543.Justify := fjMIDDLE;
FontStyle543.JustifyMinor := fjMIDDLE;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text542.FontStyle := FontStyle543;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape539.Geometry := Text542;
{ METHOD .FdChildren.Add }
Transform537.FdChildren.Add(Shape539);
Shape544 := TShapeNode.Create;;
Appearance545 := TAppearanceNode.Create;;
Material546 := TMaterialNode.Create;;
Material546.DiffuseColor := Vector3(0,0,1);
{ METHOD .SetMaterial }
Appearance545.Material := Material546;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape544.Appearance := Appearance545;
IndexedFaceSet547 := TIndexedFaceSetNode.Create;;
IndexedFaceSet547.SetCoordIndex([0,1,2,3,-1]);
Coordinate548 := TCoordinateNode.Create;;
Coordinate548.SetPoint([Vector3(20,1.3833333333333333,-0.1),Vector3(-20,1.3833333333333333,-0.1),Vector3(-20,-1.616666666666667,-0.1),Vector3(20,-1.616666666666667,-0.1)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet547.Coord := Coordinate548;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape544.Geometry := IndexedFaceSet547;
{ METHOD .FdChildren.Add }
Transform537.FdChildren.Add(Shape544);
{ METHOD .FdChildren.Add }
Group7.FdChildren.Add(Transform537);
{ Original "JinUpperLidRaiser_Sensor.EventTouchTime TO Choice27.touchTime }
{ Sample JinUpperLidRaiser_Sensor.EventTouchTime TO Choice27.touchTime}
Group7.AddRoute(TouchSensor538.EventTouchTime, SFTime146);
{ METHOD .AddX3DROUTE }
{ Original "Choice27.EventChoice TO SceneSwitcher.whichChoice }
{ Sample Choice27.EventChoice TO SceneSwitcher.whichChoice}
Group7.AddRoute(Script145.EventChoice, Switch8.whichChoice);
{ METHOD .AddX3DROUTE }
Transform551 := TTransformNode.Create;;
Transform551.Translation := Vector3(48,-20.6,0);
TouchSensor552 := TTouchSensorNode.Create;;
TouchSensor552.Description := 'TSJinUpperLipRaiser';
{ METHOD .FdChildren.Add }
Transform551.FdChildren.Add(TouchSensor552);
Shape553 := TShapeNode.Create;;
Appearance554 := TAppearanceNode.Create;;
Material555 := TMaterialNode.Create;;
Material555.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance554.Material := Material555;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape553.Appearance := Appearance554;
Text556 := TTextNode.Create;;
Text556.SetText(['JinUpperLipRaiser']);
FontStyle557 := TFontStyleNode.Create;;
FontStyle557.Size := 2.4;
FontStyle557.Spacing := 1.2;
FontStyle557.Justify := fjMIDDLE;
FontStyle557.JustifyMinor := fjMIDDLE;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text556.FontStyle := FontStyle557;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape553.Geometry := Text556;
{ METHOD .FdChildren.Add }
Transform551.FdChildren.Add(Shape553);
Shape558 := TShapeNode.Create;;
Appearance559 := TAppearanceNode.Create;;
Material560 := TMaterialNode.Create;;
Material560.DiffuseColor := Vector3(0,0,1);
{ METHOD .SetMaterial }
Appearance559.Material := Material560;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape558.Appearance := Appearance559;
IndexedFaceSet561 := TIndexedFaceSetNode.Create;;
IndexedFaceSet561.SetCoordIndex([0,1,2,3,-1]);
Coordinate562 := TCoordinateNode.Create;;
Coordinate562.SetPoint([Vector3(20,1.3833333333333333,-0.1),Vector3(-20,1.3833333333333333,-0.1),Vector3(-20,-1.616666666666667,-0.1),Vector3(20,-1.616666666666667,-0.1)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet561.Coord := Coordinate562;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape558.Geometry := IndexedFaceSet561;
{ METHOD .FdChildren.Add }
Transform551.FdChildren.Add(Shape558);
{ METHOD .FdChildren.Add }
Group7.FdChildren.Add(Transform551);
{ Original "JinUpperLipRaiser_Sensor.EventTouchTime TO Choice28.touchTime }
{ Sample JinUpperLipRaiser_Sensor.EventTouchTime TO Choice28.touchTime}
Group7.AddRoute(TouchSensor552.EventTouchTime, SFTime151);
{ METHOD .AddX3DROUTE }
{ Original "Choice28.EventChoice TO SceneSwitcher.whichChoice }
{ Sample Choice28.EventChoice TO SceneSwitcher.whichChoice}
Group7.AddRoute(Script150.EventChoice, Switch8.whichChoice);
{ METHOD .AddX3DROUTE }
Transform565 := TTransformNode.Create;;
Transform565.Translation := Vector3(48,-23.599999999999994,0);
TouchSensor566 := TTouchSensorNode.Create;;
TouchSensor566.Description := 'TSJinWink';
{ METHOD .FdChildren.Add }
Transform565.FdChildren.Add(TouchSensor566);
Shape567 := TShapeNode.Create;;
Appearance568 := TAppearanceNode.Create;;
Material569 := TMaterialNode.Create;;
Material569.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance568.Material := Material569;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape567.Appearance := Appearance568;
Text570 := TTextNode.Create;;
Text570.SetText(['JinWink']);
FontStyle571 := TFontStyleNode.Create;;
FontStyle571.Size := 2.4;
FontStyle571.Spacing := 1.2;
FontStyle571.Justify := fjMIDDLE;
FontStyle571.JustifyMinor := fjMIDDLE;
{ METHOD .FontStyle }
{ METHOD.SET .FontStyle }
Text570.FontStyle := FontStyle571;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape567.Geometry := Text570;
{ METHOD .FdChildren.Add }
Transform565.FdChildren.Add(Shape567);
Shape572 := TShapeNode.Create;;
Appearance573 := TAppearanceNode.Create;;
Material574 := TMaterialNode.Create;;
Material574.DiffuseColor := Vector3(0,0,1);
{ METHOD .SetMaterial }
Appearance573.Material := Material574;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape572.Appearance := Appearance573;
IndexedFaceSet575 := TIndexedFaceSetNode.Create;;
IndexedFaceSet575.SetCoordIndex([0,1,2,3,-1]);
Coordinate576 := TCoordinateNode.Create;;
Coordinate576.SetPoint([Vector3(20,1.3833333333333333,-0.1),Vector3(-20,1.3833333333333333,-0.1),Vector3(-20,-1.616666666666667,-0.1),Vector3(20,-1.616666666666667,-0.1)]);
{ METHOD .Coord }
{ METHOD.SET .Coord }
IndexedFaceSet575.Coord := Coordinate576;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape572.Geometry := IndexedFaceSet575;
{ METHOD .FdChildren.Add }
Transform565.FdChildren.Add(Shape572);
{ METHOD .FdChildren.Add }
Group7.FdChildren.Add(Transform565);
{ Original "JinWink_Sensor.EventTouchTime TO Choice29.touchTime }
{ Sample JinWink_Sensor.EventTouchTime TO Choice29.touchTime}
Group7.AddRoute(TouchSensor566.EventTouchTime, SFTime156);
{ METHOD .AddX3DROUTE }
{ Original "Choice29.EventChoice TO SceneSwitcher.whichChoice }
{ Sample Choice29.EventChoice TO SceneSwitcher.whichChoice}
Group7.AddRoute(Script155.EventChoice, Switch8.whichChoice);
{ METHOD .AddX3DROUTE }
{ METHOD .FdChildren.Add }
Group5.FdChildren.Add(Group7);
{ METHOD .AddGroup }
X3D0.AddChildren([Group5]);
end;

function CreateMenuJin: TX3DRootNode;
begin
InitMenuJinPart0;
Result := X3D0;
end;

begin
end.
