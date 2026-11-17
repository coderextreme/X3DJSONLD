unit MenuJin;

interface

uses X3DNodes;

function CreateMenuJin: TX3DRootNode;

implementation

uses CastleVectors;

function CreateMenuJin: TX3DRootNode;
var
X3D0: TX3DRootNode;
Group5: TGroupNode;
Viewpoint6: TViewpointNode;
Group7: TGroupNode;
Switch8: TSwitchNode;
Group9: TGroupNode;
Script10: TScriptNode;
X3DField11: TX3DField;
X3DField12: TX3DField;
Inline13: TInlineNode;
Group14: TGroupNode;
Script15: TScriptNode;
X3DField16: TX3DField;
X3DField17: TX3DField;
Inline18: TInlineNode;
Group19: TGroupNode;
Script20: TScriptNode;
X3DField21: TX3DField;
X3DField22: TX3DField;
Inline23: TInlineNode;
Group24: TGroupNode;
Script25: TScriptNode;
X3DField26: TX3DField;
X3DField27: TX3DField;
Inline28: TInlineNode;
Group29: TGroupNode;
Script30: TScriptNode;
X3DField31: TX3DField;
X3DField32: TX3DField;
Inline33: TInlineNode;
Group34: TGroupNode;
Script35: TScriptNode;
X3DField36: TX3DField;
X3DField37: TX3DField;
Inline38: TInlineNode;
Group39: TGroupNode;
Script40: TScriptNode;
X3DField41: TX3DField;
X3DField42: TX3DField;
Inline43: TInlineNode;
Group44: TGroupNode;
Script45: TScriptNode;
X3DField46: TX3DField;
X3DField47: TX3DField;
Inline48: TInlineNode;
Group49: TGroupNode;
Script50: TScriptNode;
X3DField51: TX3DField;
X3DField52: TX3DField;
Inline53: TInlineNode;
Group54: TGroupNode;
Script55: TScriptNode;
X3DField56: TX3DField;
X3DField57: TX3DField;
Inline58: TInlineNode;
Group59: TGroupNode;
Script60: TScriptNode;
X3DField61: TX3DField;
X3DField62: TX3DField;
Inline63: TInlineNode;
Group64: TGroupNode;
Script65: TScriptNode;
X3DField66: TX3DField;
X3DField67: TX3DField;
Inline68: TInlineNode;
Group69: TGroupNode;
Script70: TScriptNode;
X3DField71: TX3DField;
X3DField72: TX3DField;
Inline73: TInlineNode;
Group74: TGroupNode;
Script75: TScriptNode;
X3DField76: TX3DField;
X3DField77: TX3DField;
Inline78: TInlineNode;
Group79: TGroupNode;
Script80: TScriptNode;
X3DField81: TX3DField;
X3DField82: TX3DField;
Inline83: TInlineNode;
Group84: TGroupNode;
Script85: TScriptNode;
X3DField86: TX3DField;
X3DField87: TX3DField;
Inline88: TInlineNode;
Group89: TGroupNode;
Script90: TScriptNode;
X3DField91: TX3DField;
X3DField92: TX3DField;
Inline93: TInlineNode;
Group94: TGroupNode;
Script95: TScriptNode;
X3DField96: TX3DField;
X3DField97: TX3DField;
Inline98: TInlineNode;
Group99: TGroupNode;
Script100: TScriptNode;
X3DField101: TX3DField;
X3DField102: TX3DField;
Inline103: TInlineNode;
Group104: TGroupNode;
Script105: TScriptNode;
X3DField106: TX3DField;
X3DField107: TX3DField;
Inline108: TInlineNode;
Group109: TGroupNode;
Script110: TScriptNode;
X3DField111: TX3DField;
X3DField112: TX3DField;
Inline113: TInlineNode;
Group114: TGroupNode;
Script115: TScriptNode;
X3DField116: TX3DField;
X3DField117: TX3DField;
Inline118: TInlineNode;
Group119: TGroupNode;
Script120: TScriptNode;
X3DField121: TX3DField;
X3DField122: TX3DField;
Inline123: TInlineNode;
Group124: TGroupNode;
Script125: TScriptNode;
X3DField126: TX3DField;
X3DField127: TX3DField;
Inline128: TInlineNode;
Group129: TGroupNode;
Script130: TScriptNode;
X3DField131: TX3DField;
X3DField132: TX3DField;
Inline133: TInlineNode;
Group134: TGroupNode;
Script135: TScriptNode;
X3DField136: TX3DField;
X3DField137: TX3DField;
Inline138: TInlineNode;
Group139: TGroupNode;
Script140: TScriptNode;
X3DField141: TX3DField;
X3DField142: TX3DField;
Inline143: TInlineNode;
Group144: TGroupNode;
Script145: TScriptNode;
X3DField146: TX3DField;
X3DField147: TX3DField;
Inline148: TInlineNode;
Group149: TGroupNode;
Script150: TScriptNode;
X3DField151: TX3DField;
X3DField152: TX3DField;
Inline153: TInlineNode;
Group154: TGroupNode;
Script155: TScriptNode;
X3DField156: TX3DField;
X3DField157: TX3DField;
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
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'Menu.x3d';
X3D0.Meta['creator'] := 'John Carlson';
X3D0.Meta['description'] := 'X3D scene with a Switch of Inlines controlled by a menu';
Group5 := TGroupNode.Create;
{ Viewpoint and any other scene setup }
Viewpoint6 := TViewpointNode.Create;
Viewpoint6.Position := Vector3(0,20,110);
{ .AddChildren }
Group5.AddChildren([Viewpoint6]);
Group7 := TGroupNode.Create;
Switch8 := TSwitchNode.Create;
Switch8.WhichChoice := 0;
Group9 := TGroupNode.Create;
Script10 := TScriptNode.Create;
X3DField11 := TX3DField.Create;
X3DField11.NameField := 'touchTime';
X3DField11.Type := 'SFTime';
X3DField11.AccessType := 'inputOnly';
{ .SetX3DField }
Script10.X3DField := X3DField11;
X3DField12 := TX3DField.Create;
X3DField12.NameField := 'choice';
X3DField12.Type := 'SFInt32';
X3DField12.AccessType := 'outputOnly';
{ .AddX3DField }
Script10.X3DField := X3DField12;

Script10.SetSourceCode('''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 0;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 0;\n"+
"      }''');
{ .AddChildren }
Group9.AddChildren([Script10]);
Inline13 := TInlineNode.Create;
Inline13.SetUrl(['../resources/JinBlink.x3d','JinBlink.x3d']);
{ .AddChildren }
Group9.AddChildren([Inline13]);
{ .AddChildren }
Switch8.AddChildren([Group9]);
Group14 := TGroupNode.Create;
Script15 := TScriptNode.Create;
X3DField16 := TX3DField.Create;
X3DField16.NameField := 'touchTime';
X3DField16.Type := 'SFTime';
X3DField16.AccessType := 'inputOnly';
{ .SetX3DField }
Script15.X3DField := X3DField16;
X3DField17 := TX3DField.Create;
X3DField17.NameField := 'choice';
X3DField17.Type := 'SFInt32';
X3DField17.AccessType := 'outputOnly';
{ .AddX3DField }
Script15.X3DField := X3DField17;

Script15.SetSourceCode('''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 1;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 1;\n"+
"      }''');
{ .AddChildren }
Group14.AddChildren([Script15]);
Inline18 := TInlineNode.Create;
Inline18.SetUrl(['../resources/JinBrowLowerer.x3d','JinBrowLowerer.x3d']);
{ .AddChildren }
Group14.AddChildren([Inline18]);
{ .AddChildren }
Switch8.AddChildren([Group14]);
Group19 := TGroupNode.Create;
Script20 := TScriptNode.Create;
X3DField21 := TX3DField.Create;
X3DField21.NameField := 'touchTime';
X3DField21.Type := 'SFTime';
X3DField21.AccessType := 'inputOnly';
{ .SetX3DField }
Script20.X3DField := X3DField21;
X3DField22 := TX3DField.Create;
X3DField22.NameField := 'choice';
X3DField22.Type := 'SFInt32';
X3DField22.AccessType := 'outputOnly';
{ .AddX3DField }
Script20.X3DField := X3DField22;

Script20.SetSourceCode('''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 2;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 2;\n"+
"      }''');
{ .AddChildren }
Group19.AddChildren([Script20]);
Inline23 := TInlineNode.Create;
Inline23.SetUrl(['../resources/JinCheekPuffer.x3d','JinCheekPuffer.x3d']);
{ .AddChildren }
Group19.AddChildren([Inline23]);
{ .AddChildren }
Switch8.AddChildren([Group19]);
Group24 := TGroupNode.Create;
Script25 := TScriptNode.Create;
X3DField26 := TX3DField.Create;
X3DField26.NameField := 'touchTime';
X3DField26.Type := 'SFTime';
X3DField26.AccessType := 'inputOnly';
{ .SetX3DField }
Script25.X3DField := X3DField26;
X3DField27 := TX3DField.Create;
X3DField27.NameField := 'choice';
X3DField27.Type := 'SFInt32';
X3DField27.AccessType := 'outputOnly';
{ .AddX3DField }
Script25.X3DField := X3DField27;

Script25.SetSourceCode('''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 3;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 3;\n"+
"      }''');
{ .AddChildren }
Group24.AddChildren([Script25]);
Inline28 := TInlineNode.Create;
Inline28.SetUrl(['../resources/JinCheekRaiser.x3d','JinCheekRaiser.x3d']);
{ .AddChildren }
Group24.AddChildren([Inline28]);
{ .AddChildren }
Switch8.AddChildren([Group24]);
Group29 := TGroupNode.Create;
Script30 := TScriptNode.Create;
X3DField31 := TX3DField.Create;
X3DField31.NameField := 'touchTime';
X3DField31.Type := 'SFTime';
X3DField31.AccessType := 'inputOnly';
{ .SetX3DField }
Script30.X3DField := X3DField31;
X3DField32 := TX3DField.Create;
X3DField32.NameField := 'choice';
X3DField32.Type := 'SFInt32';
X3DField32.AccessType := 'outputOnly';
{ .AddX3DField }
Script30.X3DField := X3DField32;

Script30.SetSourceCode('''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 4;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 4;\n"+
"      }''');
{ .AddChildren }
Group29.AddChildren([Script30]);
Inline33 := TInlineNode.Create;
Inline33.SetUrl(['../resources/JinChinRaiser.x3d','JinChinRaiser.x3d']);
{ .AddChildren }
Group29.AddChildren([Inline33]);
{ .AddChildren }
Switch8.AddChildren([Group29]);
Group34 := TGroupNode.Create;
Script35 := TScriptNode.Create;
X3DField36 := TX3DField.Create;
X3DField36.NameField := 'touchTime';
X3DField36.Type := 'SFTime';
X3DField36.AccessType := 'inputOnly';
{ .SetX3DField }
Script35.X3DField := X3DField36;
X3DField37 := TX3DField.Create;
X3DField37.NameField := 'choice';
X3DField37.Type := 'SFInt32';
X3DField37.AccessType := 'outputOnly';
{ .AddX3DField }
Script35.X3DField := X3DField37;

Script35.SetSourceCode('''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 5;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 5;\n"+
"      }''');
{ .AddChildren }
Group34.AddChildren([Script35]);
Inline38 := TInlineNode.Create;
Inline38.SetUrl(['../resources/JinDimpler.x3d','JinDimpler.x3d']);
{ .AddChildren }
Group34.AddChildren([Inline38]);
{ .AddChildren }
Switch8.AddChildren([Group34]);
Group39 := TGroupNode.Create;
Script40 := TScriptNode.Create;
X3DField41 := TX3DField.Create;
X3DField41.NameField := 'touchTime';
X3DField41.Type := 'SFTime';
X3DField41.AccessType := 'inputOnly';
{ .SetX3DField }
Script40.X3DField := X3DField41;
X3DField42 := TX3DField.Create;
X3DField42.NameField := 'choice';
X3DField42.Type := 'SFInt32';
X3DField42.AccessType := 'outputOnly';
{ .AddX3DField }
Script40.X3DField := X3DField42;

Script40.SetSourceCode('''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 6;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 6;\n"+
"      }''');
{ .AddChildren }
Group39.AddChildren([Script40]);
Inline43 := TInlineNode.Create;
Inline43.SetUrl(['../resources/JinEyesClosed.x3d','JinEyesClosed.x3d']);
{ .AddChildren }
Group39.AddChildren([Inline43]);
{ .AddChildren }
Switch8.AddChildren([Group39]);
Group44 := TGroupNode.Create;
Script45 := TScriptNode.Create;
X3DField46 := TX3DField.Create;
X3DField46.NameField := 'touchTime';
X3DField46.Type := 'SFTime';
X3DField46.AccessType := 'inputOnly';
{ .SetX3DField }
Script45.X3DField := X3DField46;
X3DField47 := TX3DField.Create;
X3DField47.NameField := 'choice';
X3DField47.Type := 'SFInt32';
X3DField47.AccessType := 'outputOnly';
{ .AddX3DField }
Script45.X3DField := X3DField47;

Script45.SetSourceCode('''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 7;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 7;\n"+
"      }''');
{ .AddChildren }
Group44.AddChildren([Script45]);
Inline48 := TInlineNode.Create;
Inline48.SetUrl(['../resources/JinInnerBrowRaiser.x3d','JinInnerBrowRaiser.x3d']);
{ .AddChildren }
Group44.AddChildren([Inline48]);
{ .AddChildren }
Switch8.AddChildren([Group44]);
Group49 := TGroupNode.Create;
Script50 := TScriptNode.Create;
X3DField51 := TX3DField.Create;
X3DField51.NameField := 'touchTime';
X3DField51.Type := 'SFTime';
X3DField51.AccessType := 'inputOnly';
{ .SetX3DField }
Script50.X3DField := X3DField51;
X3DField52 := TX3DField.Create;
X3DField52.NameField := 'choice';
X3DField52.Type := 'SFInt32';
X3DField52.AccessType := 'outputOnly';
{ .AddX3DField }
Script50.X3DField := X3DField52;

Script50.SetSourceCode('''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 8;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 8;\n"+
"      }''');
{ .AddChildren }
Group49.AddChildren([Script50]);
Inline53 := TInlineNode.Create;
Inline53.SetUrl(['../resources/JinJawDrop.x3d','JinJawDrop.x3d']);
{ .AddChildren }
Group49.AddChildren([Inline53]);
{ .AddChildren }
Switch8.AddChildren([Group49]);
Group54 := TGroupNode.Create;
Script55 := TScriptNode.Create;
X3DField56 := TX3DField.Create;
X3DField56.NameField := 'touchTime';
X3DField56.Type := 'SFTime';
X3DField56.AccessType := 'inputOnly';
{ .SetX3DField }
Script55.X3DField := X3DField56;
X3DField57 := TX3DField.Create;
X3DField57.NameField := 'choice';
X3DField57.Type := 'SFInt32';
X3DField57.AccessType := 'outputOnly';
{ .AddX3DField }
Script55.X3DField := X3DField57;

Script55.SetSourceCode('''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 9;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 9;\n"+
"      }''');
{ .AddChildren }
Group54.AddChildren([Script55]);
Inline58 := TInlineNode.Create;
Inline58.SetUrl(['../resources/JinLidDroop.x3d','JinLidDroop.x3d']);
{ .AddChildren }
Group54.AddChildren([Inline58]);
{ .AddChildren }
Switch8.AddChildren([Group54]);
Group59 := TGroupNode.Create;
Script60 := TScriptNode.Create;
X3DField61 := TX3DField.Create;
X3DField61.NameField := 'touchTime';
X3DField61.Type := 'SFTime';
X3DField61.AccessType := 'inputOnly';
{ .SetX3DField }
Script60.X3DField := X3DField61;
X3DField62 := TX3DField.Create;
X3DField62.NameField := 'choice';
X3DField62.Type := 'SFInt32';
X3DField62.AccessType := 'outputOnly';
{ .AddX3DField }
Script60.X3DField := X3DField62;

Script60.SetSourceCode('''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 10;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 10;\n"+
"      }''');
{ .AddChildren }
Group59.AddChildren([Script60]);
Inline63 := TInlineNode.Create;
Inline63.SetUrl(['../resources/JinLidTightener.x3d','JinLidTightener.x3d']);
{ .AddChildren }
Group59.AddChildren([Inline63]);
{ .AddChildren }
Switch8.AddChildren([Group59]);
Group64 := TGroupNode.Create;
Script65 := TScriptNode.Create;
X3DField66 := TX3DField.Create;
X3DField66.NameField := 'touchTime';
X3DField66.Type := 'SFTime';
X3DField66.AccessType := 'inputOnly';
{ .SetX3DField }
Script65.X3DField := X3DField66;
X3DField67 := TX3DField.Create;
X3DField67.NameField := 'choice';
X3DField67.Type := 'SFInt32';
X3DField67.AccessType := 'outputOnly';
{ .AddX3DField }
Script65.X3DField := X3DField67;

Script65.SetSourceCode('''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 11;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 11;\n"+
"      }''');
{ .AddChildren }
Group64.AddChildren([Script65]);
Inline68 := TInlineNode.Create;
Inline68.SetUrl(['../resources/JinLipCornerDepressor.x3d','JinLipCornerDepressor.x3d']);
{ .AddChildren }
Group64.AddChildren([Inline68]);
{ .AddChildren }
Switch8.AddChildren([Group64]);
Group69 := TGroupNode.Create;
Script70 := TScriptNode.Create;
X3DField71 := TX3DField.Create;
X3DField71.NameField := 'touchTime';
X3DField71.Type := 'SFTime';
X3DField71.AccessType := 'inputOnly';
{ .SetX3DField }
Script70.X3DField := X3DField71;
X3DField72 := TX3DField.Create;
X3DField72.NameField := 'choice';
X3DField72.Type := 'SFInt32';
X3DField72.AccessType := 'outputOnly';
{ .AddX3DField }
Script70.X3DField := X3DField72;

Script70.SetSourceCode('''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 12;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 12;\n"+
"      }''');
{ .AddChildren }
Group69.AddChildren([Script70]);
Inline73 := TInlineNode.Create;
Inline73.SetUrl(['../resources/JinLipCornerPuller.x3d','JinLipCornerPuller.x3d']);
{ .AddChildren }
Group69.AddChildren([Inline73]);
{ .AddChildren }
Switch8.AddChildren([Group69]);
Group74 := TGroupNode.Create;
Script75 := TScriptNode.Create;
X3DField76 := TX3DField.Create;
X3DField76.NameField := 'touchTime';
X3DField76.Type := 'SFTime';
X3DField76.AccessType := 'inputOnly';
{ .SetX3DField }
Script75.X3DField := X3DField76;
X3DField77 := TX3DField.Create;
X3DField77.NameField := 'choice';
X3DField77.Type := 'SFInt32';
X3DField77.AccessType := 'outputOnly';
{ .AddX3DField }
Script75.X3DField := X3DField77;

Script75.SetSourceCode('''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 13;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 13;\n"+
"      }''');
{ .AddChildren }
Group74.AddChildren([Script75]);
Inline78 := TInlineNode.Create;
Inline78.SetUrl(['../resources/JinLipFunneler.x3d','JinLipFunneler.x3d']);
{ .AddChildren }
Group74.AddChildren([Inline78]);
{ .AddChildren }
Switch8.AddChildren([Group74]);
Group79 := TGroupNode.Create;
Script80 := TScriptNode.Create;
X3DField81 := TX3DField.Create;
X3DField81.NameField := 'touchTime';
X3DField81.Type := 'SFTime';
X3DField81.AccessType := 'inputOnly';
{ .SetX3DField }
Script80.X3DField := X3DField81;
X3DField82 := TX3DField.Create;
X3DField82.NameField := 'choice';
X3DField82.Type := 'SFInt32';
X3DField82.AccessType := 'outputOnly';
{ .AddX3DField }
Script80.X3DField := X3DField82;

Script80.SetSourceCode('''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 14;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 14;\n"+
"      }''');
{ .AddChildren }
Group79.AddChildren([Script80]);
Inline83 := TInlineNode.Create;
Inline83.SetUrl(['../resources/JinLipPressor.x3d','JinLipPressor.x3d']);
{ .AddChildren }
Group79.AddChildren([Inline83]);
{ .AddChildren }
Switch8.AddChildren([Group79]);
Group84 := TGroupNode.Create;
Script85 := TScriptNode.Create;
X3DField86 := TX3DField.Create;
X3DField86.NameField := 'touchTime';
X3DField86.Type := 'SFTime';
X3DField86.AccessType := 'inputOnly';
{ .SetX3DField }
Script85.X3DField := X3DField86;
X3DField87 := TX3DField.Create;
X3DField87.NameField := 'choice';
X3DField87.Type := 'SFInt32';
X3DField87.AccessType := 'outputOnly';
{ .AddX3DField }
Script85.X3DField := X3DField87;

Script85.SetSourceCode('''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 15;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 15;\n"+
"      }''');
{ .AddChildren }
Group84.AddChildren([Script85]);
Inline88 := TInlineNode.Create;
Inline88.SetUrl(['../resources/JinLipPuckerer.x3d','JinLipPuckerer.x3d']);
{ .AddChildren }
Group84.AddChildren([Inline88]);
{ .AddChildren }
Switch8.AddChildren([Group84]);
Group89 := TGroupNode.Create;
Script90 := TScriptNode.Create;
X3DField91 := TX3DField.Create;
X3DField91.NameField := 'touchTime';
X3DField91.Type := 'SFTime';
X3DField91.AccessType := 'inputOnly';
{ .SetX3DField }
Script90.X3DField := X3DField91;
X3DField92 := TX3DField.Create;
X3DField92.NameField := 'choice';
X3DField92.Type := 'SFInt32';
X3DField92.AccessType := 'outputOnly';
{ .AddX3DField }
Script90.X3DField := X3DField92;

Script90.SetSourceCode('''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 16;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 16;\n"+
"      }''');
{ .AddChildren }
Group89.AddChildren([Script90]);
Inline93 := TInlineNode.Create;
Inline93.SetUrl(['../resources/JinLipsPart.x3d','JinLipsPart.x3d']);
{ .AddChildren }
Group89.AddChildren([Inline93]);
{ .AddChildren }
Switch8.AddChildren([Group89]);
Group94 := TGroupNode.Create;
Script95 := TScriptNode.Create;
X3DField96 := TX3DField.Create;
X3DField96.NameField := 'touchTime';
X3DField96.Type := 'SFTime';
X3DField96.AccessType := 'inputOnly';
{ .SetX3DField }
Script95.X3DField := X3DField96;
X3DField97 := TX3DField.Create;
X3DField97.NameField := 'choice';
X3DField97.Type := 'SFInt32';
X3DField97.AccessType := 'outputOnly';
{ .AddX3DField }
Script95.X3DField := X3DField97;

Script95.SetSourceCode('''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 17;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 17;\n"+
"      }''');
{ .AddChildren }
Group94.AddChildren([Script95]);
Inline98 := TInlineNode.Create;
Inline98.SetUrl(['../resources/JinLipStretcher.x3d','JinLipStretcher.x3d']);
{ .AddChildren }
Group94.AddChildren([Inline98]);
{ .AddChildren }
Switch8.AddChildren([Group94]);
Group99 := TGroupNode.Create;
Script100 := TScriptNode.Create;
X3DField101 := TX3DField.Create;
X3DField101.NameField := 'touchTime';
X3DField101.Type := 'SFTime';
X3DField101.AccessType := 'inputOnly';
{ .SetX3DField }
Script100.X3DField := X3DField101;
X3DField102 := TX3DField.Create;
X3DField102.NameField := 'choice';
X3DField102.Type := 'SFInt32';
X3DField102.AccessType := 'outputOnly';
{ .AddX3DField }
Script100.X3DField := X3DField102;

Script100.SetSourceCode('''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 18;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 18;\n"+
"      }''');
{ .AddChildren }
Group99.AddChildren([Script100]);
Inline103 := TInlineNode.Create;
Inline103.SetUrl(['../resources/JinLipSuck.x3d','JinLipSuck.x3d']);
{ .AddChildren }
Group99.AddChildren([Inline103]);
{ .AddChildren }
Switch8.AddChildren([Group99]);
Group104 := TGroupNode.Create;
Script105 := TScriptNode.Create;
X3DField106 := TX3DField.Create;
X3DField106.NameField := 'touchTime';
X3DField106.Type := 'SFTime';
X3DField106.AccessType := 'inputOnly';
{ .SetX3DField }
Script105.X3DField := X3DField106;
X3DField107 := TX3DField.Create;
X3DField107.NameField := 'choice';
X3DField107.Type := 'SFInt32';
X3DField107.AccessType := 'outputOnly';
{ .AddX3DField }
Script105.X3DField := X3DField107;

Script105.SetSourceCode('''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 19;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 19;\n"+
"      }''');
{ .AddChildren }
Group104.AddChildren([Script105]);
Inline108 := TInlineNode.Create;
Inline108.SetUrl(['../resources/JinLipTightener.x3d','JinLipTightener.x3d']);
{ .AddChildren }
Group104.AddChildren([Inline108]);
{ .AddChildren }
Switch8.AddChildren([Group104]);
Group109 := TGroupNode.Create;
Script110 := TScriptNode.Create;
X3DField111 := TX3DField.Create;
X3DField111.NameField := 'touchTime';
X3DField111.Type := 'SFTime';
X3DField111.AccessType := 'inputOnly';
{ .SetX3DField }
Script110.X3DField := X3DField111;
X3DField112 := TX3DField.Create;
X3DField112.NameField := 'choice';
X3DField112.Type := 'SFInt32';
X3DField112.AccessType := 'outputOnly';
{ .AddX3DField }
Script110.X3DField := X3DField112;

Script110.SetSourceCode('''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 20;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 20;\n"+
"      }''');
{ .AddChildren }
Group109.AddChildren([Script110]);
Inline113 := TInlineNode.Create;
Inline113.SetUrl(['../resources/JinLowerLipDepressor.x3d','JinLowerLipDepressor.x3d']);
{ .AddChildren }
Group109.AddChildren([Inline113]);
{ .AddChildren }
Switch8.AddChildren([Group109]);
Group114 := TGroupNode.Create;
Script115 := TScriptNode.Create;
X3DField116 := TX3DField.Create;
X3DField116.NameField := 'touchTime';
X3DField116.Type := 'SFTime';
X3DField116.AccessType := 'inputOnly';
{ .SetX3DField }
Script115.X3DField := X3DField116;
X3DField117 := TX3DField.Create;
X3DField117.NameField := 'choice';
X3DField117.Type := 'SFInt32';
X3DField117.AccessType := 'outputOnly';
{ .AddX3DField }
Script115.X3DField := X3DField117;

Script115.SetSourceCode('''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 21;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 21;\n"+
"      }''');
{ .AddChildren }
Group114.AddChildren([Script115]);
Inline118 := TInlineNode.Create;
Inline118.SetUrl(['../resources/JinMouthStretch.x3d','JinMouthStretch.x3d']);
{ .AddChildren }
Group114.AddChildren([Inline118]);
{ .AddChildren }
Switch8.AddChildren([Group114]);
Group119 := TGroupNode.Create;
Script120 := TScriptNode.Create;
X3DField121 := TX3DField.Create;
X3DField121.NameField := 'touchTime';
X3DField121.Type := 'SFTime';
X3DField121.AccessType := 'inputOnly';
{ .SetX3DField }
Script120.X3DField := X3DField121;
X3DField122 := TX3DField.Create;
X3DField122.NameField := 'choice';
X3DField122.Type := 'SFInt32';
X3DField122.AccessType := 'outputOnly';
{ .AddX3DField }
Script120.X3DField := X3DField122;

Script120.SetSourceCode('''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 22;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 22;\n"+
"      }''');
{ .AddChildren }
Group119.AddChildren([Script120]);
Inline123 := TInlineNode.Create;
Inline123.SetUrl(['../resources/JinNasolabialDeepener.x3d','JinNasolabialDeepener.x3d']);
{ .AddChildren }
Group119.AddChildren([Inline123]);
{ .AddChildren }
Switch8.AddChildren([Group119]);
Group124 := TGroupNode.Create;
Script125 := TScriptNode.Create;
X3DField126 := TX3DField.Create;
X3DField126.NameField := 'touchTime';
X3DField126.Type := 'SFTime';
X3DField126.AccessType := 'inputOnly';
{ .SetX3DField }
Script125.X3DField := X3DField126;
X3DField127 := TX3DField.Create;
X3DField127.NameField := 'choice';
X3DField127.Type := 'SFInt32';
X3DField127.AccessType := 'outputOnly';
{ .AddX3DField }
Script125.X3DField := X3DField127;

Script125.SetSourceCode('''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 23;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 23;\n"+
"      }''');
{ .AddChildren }
Group124.AddChildren([Script125]);
Inline128 := TInlineNode.Create;
Inline128.SetUrl(['../resources/JinNoseWrinkler.x3d','JinNoseWrinkler.x3d']);
{ .AddChildren }
Group124.AddChildren([Inline128]);
{ .AddChildren }
Switch8.AddChildren([Group124]);
Group129 := TGroupNode.Create;
Script130 := TScriptNode.Create;
X3DField131 := TX3DField.Create;
X3DField131.NameField := 'touchTime';
X3DField131.Type := 'SFTime';
X3DField131.AccessType := 'inputOnly';
{ .SetX3DField }
Script130.X3DField := X3DField131;
X3DField132 := TX3DField.Create;
X3DField132.NameField := 'choice';
X3DField132.Type := 'SFInt32';
X3DField132.AccessType := 'outputOnly';
{ .AddX3DField }
Script130.X3DField := X3DField132;

Script130.SetSourceCode('''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 24;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 24;\n"+
"      }''');
{ .AddChildren }
Group129.AddChildren([Script130]);
Inline133 := TInlineNode.Create;
Inline133.SetUrl(['../resources/JinOuterBrowRaiser.x3d','JinOuterBrowRaiser.x3d']);
{ .AddChildren }
Group129.AddChildren([Inline133]);
{ .AddChildren }
Switch8.AddChildren([Group129]);
Group134 := TGroupNode.Create;
Script135 := TScriptNode.Create;
X3DField136 := TX3DField.Create;
X3DField136.NameField := 'touchTime';
X3DField136.Type := 'SFTime';
X3DField136.AccessType := 'inputOnly';
{ .SetX3DField }
Script135.X3DField := X3DField136;
X3DField137 := TX3DField.Create;
X3DField137.NameField := 'choice';
X3DField137.Type := 'SFInt32';
X3DField137.AccessType := 'outputOnly';
{ .AddX3DField }
Script135.X3DField := X3DField137;

Script135.SetSourceCode('''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 25;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 25;\n"+
"      }''');
{ .AddChildren }
Group134.AddChildren([Script135]);
Inline138 := TInlineNode.Create;
Inline138.SetUrl(['../resources/JinSlit.x3d','JinSlit.x3d']);
{ .AddChildren }
Group134.AddChildren([Inline138]);
{ .AddChildren }
Switch8.AddChildren([Group134]);
Group139 := TGroupNode.Create;
Script140 := TScriptNode.Create;
X3DField141 := TX3DField.Create;
X3DField141.NameField := 'touchTime';
X3DField141.Type := 'SFTime';
X3DField141.AccessType := 'inputOnly';
{ .SetX3DField }
Script140.X3DField := X3DField141;
X3DField142 := TX3DField.Create;
X3DField142.NameField := 'choice';
X3DField142.Type := 'SFInt32';
X3DField142.AccessType := 'outputOnly';
{ .AddX3DField }
Script140.X3DField := X3DField142;

Script140.SetSourceCode('''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 26;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 26;\n"+
"      }''');
{ .AddChildren }
Group139.AddChildren([Script140]);
Inline143 := TInlineNode.Create;
Inline143.SetUrl(['../resources/JinSquint.x3d','JinSquint.x3d']);
{ .AddChildren }
Group139.AddChildren([Inline143]);
{ .AddChildren }
Switch8.AddChildren([Group139]);
Group144 := TGroupNode.Create;
Script145 := TScriptNode.Create;
X3DField146 := TX3DField.Create;
X3DField146.NameField := 'touchTime';
X3DField146.Type := 'SFTime';
X3DField146.AccessType := 'inputOnly';
{ .SetX3DField }
Script145.X3DField := X3DField146;
X3DField147 := TX3DField.Create;
X3DField147.NameField := 'choice';
X3DField147.Type := 'SFInt32';
X3DField147.AccessType := 'outputOnly';
{ .AddX3DField }
Script145.X3DField := X3DField147;

Script145.SetSourceCode('''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 27;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 27;\n"+
"      }''');
{ .AddChildren }
Group144.AddChildren([Script145]);
Inline148 := TInlineNode.Create;
Inline148.SetUrl(['../resources/JinUpperLidRaiser.x3d','JinUpperLidRaiser.x3d']);
{ .AddChildren }
Group144.AddChildren([Inline148]);
{ .AddChildren }
Switch8.AddChildren([Group144]);
Group149 := TGroupNode.Create;
Script150 := TScriptNode.Create;
X3DField151 := TX3DField.Create;
X3DField151.NameField := 'touchTime';
X3DField151.Type := 'SFTime';
X3DField151.AccessType := 'inputOnly';
{ .SetX3DField }
Script150.X3DField := X3DField151;
X3DField152 := TX3DField.Create;
X3DField152.NameField := 'choice';
X3DField152.Type := 'SFInt32';
X3DField152.AccessType := 'outputOnly';
{ .AddX3DField }
Script150.X3DField := X3DField152;

Script150.SetSourceCode('''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 28;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 28;\n"+
"      }''');
{ .AddChildren }
Group149.AddChildren([Script150]);
Inline153 := TInlineNode.Create;
Inline153.SetUrl(['../resources/JinUpperLipRaiser.x3d','JinUpperLipRaiser.x3d']);
{ .AddChildren }
Group149.AddChildren([Inline153]);
{ .AddChildren }
Switch8.AddChildren([Group149]);
Group154 := TGroupNode.Create;
Script155 := TScriptNode.Create;
X3DField156 := TX3DField.Create;
X3DField156.NameField := 'touchTime';
X3DField156.Type := 'SFTime';
X3DField156.AccessType := 'inputOnly';
{ .SetX3DField }
Script155.X3DField := X3DField156;
X3DField157 := TX3DField.Create;
X3DField157.NameField := 'choice';
X3DField157.Type := 'SFInt32';
X3DField157.AccessType := 'outputOnly';
{ .AddX3DField }
Script155.X3DField := X3DField157;

Script155.SetSourceCode('''ecmascript:\n"+
"      function set_touchTime(value) {\n"+
"          choice = 29;\n"+
"      }\n"+
"      function touchTime(value) {\n"+
"          choice = 29;\n"+
"      }''');
{ .AddChildren }
Group154.AddChildren([Script155]);
Inline158 := TInlineNode.Create;
Inline158.SetUrl(['../resources/JinWink.x3d','JinWink.x3d']);
{ .AddChildren }
Group154.AddChildren([Inline158]);
{ .AddChildren }
Switch8.AddChildren([Group154]);
{ .AddChildren }
Group7.AddChildren([Switch8]);
Transform159 := TTransformNode.Create;
Transform159.Translation := Vector3(48,63.4,0);
TouchSensor160 := TTouchSensorNode.Create;
TouchSensor160.Description := 'TSJinBlink';
{ .AddChildren }
Transform159.AddChildren([TouchSensor160]);
Shape161 := TShapeNode.Create;
Appearance162 := TAppearanceNode.Create;
Material163 := TMaterialNode.Create;
Material163.DiffuseColor := Vector3(1,1,1);
{ .SetMaterial }
Appearance162.Material := Material163;
{ .SetAppearance }
Shape161.Appearance := Appearance162;
Text164 := TTextNode.Create;
Text164.SetText(['JinBlink']);
FontStyle165 := TFontStyleNode.Create;
FontStyle165.Size := 2.4;
FontStyle165.Spacing := 1.2;
FontStyle165.Justify := fjMiddle;
FontStyle165.JustifyMinor := fjMiddle;
{ .SetFontStyle }
Text164.FontStyle := FontStyle165;
{ .SetGeometry }
Shape161.Geometry := Text164;
{ .AddChild }
Transform159.AddChildren([Shape161]);
Shape166 := TShapeNode.Create;
Appearance167 := TAppearanceNode.Create;
Material168 := TMaterialNode.Create;
Material168.DiffuseColor := Vector3(0,0,1);
{ .SetMaterial }
Appearance167.Material := Material168;
{ .SetAppearance }
Shape166.Appearance := Appearance167;
IndexedFaceSet169 := TIndexedFaceSetNode.Create;
IndexedFaceSet169.SetCoordIndex([0,1,2,3,-1]);
Coordinate170 := TCoordinateNode.Create;
Coordinate170.SetPoint([Vector3(20,1.3833333333333333,-0.1),Vector3(-20,1.3833333333333333,-0.1),Vector3(-20,-1.616666666666667,-0.1),Vector3(20,-1.616666666666667,-0.1)]);
{ .SetCoord }
IndexedFaceSet169.Coord := Coordinate170;
{ .SetGeometry }
Shape166.Geometry := IndexedFaceSet169;
{ .AddChild }
Transform159.AddChildren([Shape166]);
{ .AddChildren }
Group7.AddChildren([Transform159]);
Group7.AddRoute(TouchSensor160.EventTouchtime, Script10.FdTouchtime);
{ .AddX3DRoute }
Group7.AddRoute(Script10.FdChoice, Switch8.FdWhichchoice);
{ .AddX3DRoute }
Transform173 := TTransformNode.Create;
Transform173.Translation := Vector3(48,60.4,0);
TouchSensor174 := TTouchSensorNode.Create;
TouchSensor174.Description := 'TSJinBrowLowerer';
{ .AddChildren }
Transform173.AddChildren([TouchSensor174]);
Shape175 := TShapeNode.Create;
Appearance176 := TAppearanceNode.Create;
Material177 := TMaterialNode.Create;
Material177.DiffuseColor := Vector3(1,1,1);
{ .SetMaterial }
Appearance176.Material := Material177;
{ .SetAppearance }
Shape175.Appearance := Appearance176;
Text178 := TTextNode.Create;
Text178.SetText(['JinBrowLowerer']);
FontStyle179 := TFontStyleNode.Create;
FontStyle179.Size := 2.4;
FontStyle179.Spacing := 1.2;
FontStyle179.Justify := fjMiddle;
FontStyle179.JustifyMinor := fjMiddle;
{ .SetFontStyle }
Text178.FontStyle := FontStyle179;
{ .SetGeometry }
Shape175.Geometry := Text178;
{ .AddChild }
Transform173.AddChildren([Shape175]);
Shape180 := TShapeNode.Create;
Appearance181 := TAppearanceNode.Create;
Material182 := TMaterialNode.Create;
Material182.DiffuseColor := Vector3(0,0,1);
{ .SetMaterial }
Appearance181.Material := Material182;
{ .SetAppearance }
Shape180.Appearance := Appearance181;
IndexedFaceSet183 := TIndexedFaceSetNode.Create;
IndexedFaceSet183.SetCoordIndex([0,1,2,3,-1]);
Coordinate184 := TCoordinateNode.Create;
Coordinate184.SetPoint([Vector3(20,1.3833333333333333,-0.1),Vector3(-20,1.3833333333333333,-0.1),Vector3(-20,-1.616666666666667,-0.1),Vector3(20,-1.616666666666667,-0.1)]);
{ .SetCoord }
IndexedFaceSet183.Coord := Coordinate184;
{ .SetGeometry }
Shape180.Geometry := IndexedFaceSet183;
{ .AddChild }
Transform173.AddChildren([Shape180]);
{ .AddChildren }
Group7.AddChildren([Transform173]);
Group7.AddRoute(TouchSensor174.EventTouchtime, Script15.FdTouchtime);
{ .AddX3DRoute }
Group7.AddRoute(Script15.FdChoice, Switch8.FdWhichchoice);
{ .AddX3DRoute }
Transform187 := TTransformNode.Create;
Transform187.Translation := Vector3(48,57.39999999999999,0);
TouchSensor188 := TTouchSensorNode.Create;
TouchSensor188.Description := 'TSJinCheekPuffer';
{ .AddChildren }
Transform187.AddChildren([TouchSensor188]);
Shape189 := TShapeNode.Create;
Appearance190 := TAppearanceNode.Create;
Material191 := TMaterialNode.Create;
Material191.DiffuseColor := Vector3(1,1,1);
{ .SetMaterial }
Appearance190.Material := Material191;
{ .SetAppearance }
Shape189.Appearance := Appearance190;
Text192 := TTextNode.Create;
Text192.SetText(['JinCheekPuffer']);
FontStyle193 := TFontStyleNode.Create;
FontStyle193.Size := 2.4;
FontStyle193.Spacing := 1.2;
FontStyle193.Justify := fjMiddle;
FontStyle193.JustifyMinor := fjMiddle;
{ .SetFontStyle }
Text192.FontStyle := FontStyle193;
{ .SetGeometry }
Shape189.Geometry := Text192;
{ .AddChild }
Transform187.AddChildren([Shape189]);
Shape194 := TShapeNode.Create;
Appearance195 := TAppearanceNode.Create;
Material196 := TMaterialNode.Create;
Material196.DiffuseColor := Vector3(0,0,1);
{ .SetMaterial }
Appearance195.Material := Material196;
{ .SetAppearance }
Shape194.Appearance := Appearance195;
IndexedFaceSet197 := TIndexedFaceSetNode.Create;
IndexedFaceSet197.SetCoordIndex([0,1,2,3,-1]);
Coordinate198 := TCoordinateNode.Create;
Coordinate198.SetPoint([Vector3(20,1.3833333333333333,-0.1),Vector3(-20,1.3833333333333333,-0.1),Vector3(-20,-1.616666666666667,-0.1),Vector3(20,-1.616666666666667,-0.1)]);
{ .SetCoord }
IndexedFaceSet197.Coord := Coordinate198;
{ .SetGeometry }
Shape194.Geometry := IndexedFaceSet197;
{ .AddChild }
Transform187.AddChildren([Shape194]);
{ .AddChildren }
Group7.AddChildren([Transform187]);
Group7.AddRoute(TouchSensor188.EventTouchtime, Script20.FdTouchtime);
{ .AddX3DRoute }
Group7.AddRoute(Script20.FdChoice, Switch8.FdWhichchoice);
{ .AddX3DRoute }
Transform201 := TTransformNode.Create;
Transform201.Translation := Vector3(48,54.39999999999999,0);
TouchSensor202 := TTouchSensorNode.Create;
TouchSensor202.Description := 'TSJinCheekRaiser';
{ .AddChildren }
Transform201.AddChildren([TouchSensor202]);
Shape203 := TShapeNode.Create;
Appearance204 := TAppearanceNode.Create;
Material205 := TMaterialNode.Create;
Material205.DiffuseColor := Vector3(1,1,1);
{ .SetMaterial }
Appearance204.Material := Material205;
{ .SetAppearance }
Shape203.Appearance := Appearance204;
Text206 := TTextNode.Create;
Text206.SetText(['JinCheekRaiser']);
FontStyle207 := TFontStyleNode.Create;
FontStyle207.Size := 2.4;
FontStyle207.Spacing := 1.2;
FontStyle207.Justify := fjMiddle;
FontStyle207.JustifyMinor := fjMiddle;
{ .SetFontStyle }
Text206.FontStyle := FontStyle207;
{ .SetGeometry }
Shape203.Geometry := Text206;
{ .AddChild }
Transform201.AddChildren([Shape203]);
Shape208 := TShapeNode.Create;
Appearance209 := TAppearanceNode.Create;
Material210 := TMaterialNode.Create;
Material210.DiffuseColor := Vector3(0,0,1);
{ .SetMaterial }
Appearance209.Material := Material210;
{ .SetAppearance }
Shape208.Appearance := Appearance209;
IndexedFaceSet211 := TIndexedFaceSetNode.Create;
IndexedFaceSet211.SetCoordIndex([0,1,2,3,-1]);
Coordinate212 := TCoordinateNode.Create;
Coordinate212.SetPoint([Vector3(20,1.3833333333333333,-0.1),Vector3(-20,1.3833333333333333,-0.1),Vector3(-20,-1.616666666666667,-0.1),Vector3(20,-1.616666666666667,-0.1)]);
{ .SetCoord }
IndexedFaceSet211.Coord := Coordinate212;
{ .SetGeometry }
Shape208.Geometry := IndexedFaceSet211;
{ .AddChild }
Transform201.AddChildren([Shape208]);
{ .AddChildren }
Group7.AddChildren([Transform201]);
Group7.AddRoute(TouchSensor202.EventTouchtime, Script25.FdTouchtime);
{ .AddX3DRoute }
Group7.AddRoute(Script25.FdChoice, Switch8.FdWhichchoice);
{ .AddX3DRoute }
Transform215 := TTransformNode.Create;
Transform215.Translation := Vector3(48,51.39999999999999,0);
TouchSensor216 := TTouchSensorNode.Create;
TouchSensor216.Description := 'TSJinChinRaiser';
{ .AddChildren }
Transform215.AddChildren([TouchSensor216]);
Shape217 := TShapeNode.Create;
Appearance218 := TAppearanceNode.Create;
Material219 := TMaterialNode.Create;
Material219.DiffuseColor := Vector3(1,1,1);
{ .SetMaterial }
Appearance218.Material := Material219;
{ .SetAppearance }
Shape217.Appearance := Appearance218;
Text220 := TTextNode.Create;
Text220.SetText(['JinChinRaiser']);
FontStyle221 := TFontStyleNode.Create;
FontStyle221.Size := 2.4;
FontStyle221.Spacing := 1.2;
FontStyle221.Justify := fjMiddle;
FontStyle221.JustifyMinor := fjMiddle;
{ .SetFontStyle }
Text220.FontStyle := FontStyle221;
{ .SetGeometry }
Shape217.Geometry := Text220;
{ .AddChild }
Transform215.AddChildren([Shape217]);
Shape222 := TShapeNode.Create;
Appearance223 := TAppearanceNode.Create;
Material224 := TMaterialNode.Create;
Material224.DiffuseColor := Vector3(0,0,1);
{ .SetMaterial }
Appearance223.Material := Material224;
{ .SetAppearance }
Shape222.Appearance := Appearance223;
IndexedFaceSet225 := TIndexedFaceSetNode.Create;
IndexedFaceSet225.SetCoordIndex([0,1,2,3,-1]);
Coordinate226 := TCoordinateNode.Create;
Coordinate226.SetPoint([Vector3(20,1.3833333333333333,-0.1),Vector3(-20,1.3833333333333333,-0.1),Vector3(-20,-1.616666666666667,-0.1),Vector3(20,-1.616666666666667,-0.1)]);
{ .SetCoord }
IndexedFaceSet225.Coord := Coordinate226;
{ .SetGeometry }
Shape222.Geometry := IndexedFaceSet225;
{ .AddChild }
Transform215.AddChildren([Shape222]);
{ .AddChildren }
Group7.AddChildren([Transform215]);
Group7.AddRoute(TouchSensor216.EventTouchtime, Script30.FdTouchtime);
{ .AddX3DRoute }
Group7.AddRoute(Script30.FdChoice, Switch8.FdWhichchoice);
{ .AddX3DRoute }
Transform229 := TTransformNode.Create;
Transform229.Translation := Vector3(48,48.39999999999999,0);
TouchSensor230 := TTouchSensorNode.Create;
TouchSensor230.Description := 'TSJinDimpler';
{ .AddChildren }
Transform229.AddChildren([TouchSensor230]);
Shape231 := TShapeNode.Create;
Appearance232 := TAppearanceNode.Create;
Material233 := TMaterialNode.Create;
Material233.DiffuseColor := Vector3(1,1,1);
{ .SetMaterial }
Appearance232.Material := Material233;
{ .SetAppearance }
Shape231.Appearance := Appearance232;
Text234 := TTextNode.Create;
Text234.SetText(['JinDimpler']);
FontStyle235 := TFontStyleNode.Create;
FontStyle235.Size := 2.4;
FontStyle235.Spacing := 1.2;
FontStyle235.Justify := fjMiddle;
FontStyle235.JustifyMinor := fjMiddle;
{ .SetFontStyle }
Text234.FontStyle := FontStyle235;
{ .SetGeometry }
Shape231.Geometry := Text234;
{ .AddChild }
Transform229.AddChildren([Shape231]);
Shape236 := TShapeNode.Create;
Appearance237 := TAppearanceNode.Create;
Material238 := TMaterialNode.Create;
Material238.DiffuseColor := Vector3(0,0,1);
{ .SetMaterial }
Appearance237.Material := Material238;
{ .SetAppearance }
Shape236.Appearance := Appearance237;
IndexedFaceSet239 := TIndexedFaceSetNode.Create;
IndexedFaceSet239.SetCoordIndex([0,1,2,3,-1]);
Coordinate240 := TCoordinateNode.Create;
Coordinate240.SetPoint([Vector3(20,1.3833333333333333,-0.1),Vector3(-20,1.3833333333333333,-0.1),Vector3(-20,-1.616666666666667,-0.1),Vector3(20,-1.616666666666667,-0.1)]);
{ .SetCoord }
IndexedFaceSet239.Coord := Coordinate240;
{ .SetGeometry }
Shape236.Geometry := IndexedFaceSet239;
{ .AddChild }
Transform229.AddChildren([Shape236]);
{ .AddChildren }
Group7.AddChildren([Transform229]);
Group7.AddRoute(TouchSensor230.EventTouchtime, Script35.FdTouchtime);
{ .AddX3DRoute }
Group7.AddRoute(Script35.FdChoice, Switch8.FdWhichchoice);
{ .AddX3DRoute }
Transform243 := TTransformNode.Create;
Transform243.Translation := Vector3(48,45.39999999999999,0);
TouchSensor244 := TTouchSensorNode.Create;
TouchSensor244.Description := 'TSJinEyesClosed';
{ .AddChildren }
Transform243.AddChildren([TouchSensor244]);
Shape245 := TShapeNode.Create;
Appearance246 := TAppearanceNode.Create;
Material247 := TMaterialNode.Create;
Material247.DiffuseColor := Vector3(1,1,1);
{ .SetMaterial }
Appearance246.Material := Material247;
{ .SetAppearance }
Shape245.Appearance := Appearance246;
Text248 := TTextNode.Create;
Text248.SetText(['JinEyesClosed']);
FontStyle249 := TFontStyleNode.Create;
FontStyle249.Size := 2.4;
FontStyle249.Spacing := 1.2;
FontStyle249.Justify := fjMiddle;
FontStyle249.JustifyMinor := fjMiddle;
{ .SetFontStyle }
Text248.FontStyle := FontStyle249;
{ .SetGeometry }
Shape245.Geometry := Text248;
{ .AddChild }
Transform243.AddChildren([Shape245]);
Shape250 := TShapeNode.Create;
Appearance251 := TAppearanceNode.Create;
Material252 := TMaterialNode.Create;
Material252.DiffuseColor := Vector3(0,0,1);
{ .SetMaterial }
Appearance251.Material := Material252;
{ .SetAppearance }
Shape250.Appearance := Appearance251;
IndexedFaceSet253 := TIndexedFaceSetNode.Create;
IndexedFaceSet253.SetCoordIndex([0,1,2,3,-1]);
Coordinate254 := TCoordinateNode.Create;
Coordinate254.SetPoint([Vector3(20,1.3833333333333333,-0.1),Vector3(-20,1.3833333333333333,-0.1),Vector3(-20,-1.616666666666667,-0.1),Vector3(20,-1.616666666666667,-0.1)]);
{ .SetCoord }
IndexedFaceSet253.Coord := Coordinate254;
{ .SetGeometry }
Shape250.Geometry := IndexedFaceSet253;
{ .AddChild }
Transform243.AddChildren([Shape250]);
{ .AddChildren }
Group7.AddChildren([Transform243]);
Group7.AddRoute(TouchSensor244.EventTouchtime, Script40.FdTouchtime);
{ .AddX3DRoute }
Group7.AddRoute(Script40.FdChoice, Switch8.FdWhichchoice);
{ .AddX3DRoute }
Transform257 := TTransformNode.Create;
Transform257.Translation := Vector3(48,42.39999999999999,0);
TouchSensor258 := TTouchSensorNode.Create;
TouchSensor258.Description := 'TSJinInnerBrowRaiser';
{ .AddChildren }
Transform257.AddChildren([TouchSensor258]);
Shape259 := TShapeNode.Create;
Appearance260 := TAppearanceNode.Create;
Material261 := TMaterialNode.Create;
Material261.DiffuseColor := Vector3(1,1,1);
{ .SetMaterial }
Appearance260.Material := Material261;
{ .SetAppearance }
Shape259.Appearance := Appearance260;
Text262 := TTextNode.Create;
Text262.SetText(['JinInnerBrowRaiser']);
FontStyle263 := TFontStyleNode.Create;
FontStyle263.Size := 2.4;
FontStyle263.Spacing := 1.2;
FontStyle263.Justify := fjMiddle;
FontStyle263.JustifyMinor := fjMiddle;
{ .SetFontStyle }
Text262.FontStyle := FontStyle263;
{ .SetGeometry }
Shape259.Geometry := Text262;
{ .AddChild }
Transform257.AddChildren([Shape259]);
Shape264 := TShapeNode.Create;
Appearance265 := TAppearanceNode.Create;
Material266 := TMaterialNode.Create;
Material266.DiffuseColor := Vector3(0,0,1);
{ .SetMaterial }
Appearance265.Material := Material266;
{ .SetAppearance }
Shape264.Appearance := Appearance265;
IndexedFaceSet267 := TIndexedFaceSetNode.Create;
IndexedFaceSet267.SetCoordIndex([0,1,2,3,-1]);
Coordinate268 := TCoordinateNode.Create;
Coordinate268.SetPoint([Vector3(20,1.3833333333333333,-0.1),Vector3(-20,1.3833333333333333,-0.1),Vector3(-20,-1.616666666666667,-0.1),Vector3(20,-1.616666666666667,-0.1)]);
{ .SetCoord }
IndexedFaceSet267.Coord := Coordinate268;
{ .SetGeometry }
Shape264.Geometry := IndexedFaceSet267;
{ .AddChild }
Transform257.AddChildren([Shape264]);
{ .AddChildren }
Group7.AddChildren([Transform257]);
Group7.AddRoute(TouchSensor258.EventTouchtime, Script45.FdTouchtime);
{ .AddX3DRoute }
Group7.AddRoute(Script45.FdChoice, Switch8.FdWhichchoice);
{ .AddX3DRoute }
Transform271 := TTransformNode.Create;
Transform271.Translation := Vector3(48,39.39999999999999,0);
TouchSensor272 := TTouchSensorNode.Create;
TouchSensor272.Description := 'TSJinJawDrop';
{ .AddChildren }
Transform271.AddChildren([TouchSensor272]);
Shape273 := TShapeNode.Create;
Appearance274 := TAppearanceNode.Create;
Material275 := TMaterialNode.Create;
Material275.DiffuseColor := Vector3(1,1,1);
{ .SetMaterial }
Appearance274.Material := Material275;
{ .SetAppearance }
Shape273.Appearance := Appearance274;
Text276 := TTextNode.Create;
Text276.SetText(['JinJawDrop']);
FontStyle277 := TFontStyleNode.Create;
FontStyle277.Size := 2.4;
FontStyle277.Spacing := 1.2;
FontStyle277.Justify := fjMiddle;
FontStyle277.JustifyMinor := fjMiddle;
{ .SetFontStyle }
Text276.FontStyle := FontStyle277;
{ .SetGeometry }
Shape273.Geometry := Text276;
{ .AddChild }
Transform271.AddChildren([Shape273]);
Shape278 := TShapeNode.Create;
Appearance279 := TAppearanceNode.Create;
Material280 := TMaterialNode.Create;
Material280.DiffuseColor := Vector3(0,0,1);
{ .SetMaterial }
Appearance279.Material := Material280;
{ .SetAppearance }
Shape278.Appearance := Appearance279;
IndexedFaceSet281 := TIndexedFaceSetNode.Create;
IndexedFaceSet281.SetCoordIndex([0,1,2,3,-1]);
Coordinate282 := TCoordinateNode.Create;
Coordinate282.SetPoint([Vector3(20,1.3833333333333333,-0.1),Vector3(-20,1.3833333333333333,-0.1),Vector3(-20,-1.616666666666667,-0.1),Vector3(20,-1.616666666666667,-0.1)]);
{ .SetCoord }
IndexedFaceSet281.Coord := Coordinate282;
{ .SetGeometry }
Shape278.Geometry := IndexedFaceSet281;
{ .AddChild }
Transform271.AddChildren([Shape278]);
{ .AddChildren }
Group7.AddChildren([Transform271]);
Group7.AddRoute(TouchSensor272.EventTouchtime, Script50.FdTouchtime);
{ .AddX3DRoute }
Group7.AddRoute(Script50.FdChoice, Switch8.FdWhichchoice);
{ .AddX3DRoute }
Transform285 := TTransformNode.Create;
Transform285.Translation := Vector3(48,36.39999999999999,0);
TouchSensor286 := TTouchSensorNode.Create;
TouchSensor286.Description := 'TSJinLidDroop';
{ .AddChildren }
Transform285.AddChildren([TouchSensor286]);
Shape287 := TShapeNode.Create;
Appearance288 := TAppearanceNode.Create;
Material289 := TMaterialNode.Create;
Material289.DiffuseColor := Vector3(1,1,1);
{ .SetMaterial }
Appearance288.Material := Material289;
{ .SetAppearance }
Shape287.Appearance := Appearance288;
Text290 := TTextNode.Create;
Text290.SetText(['JinLidDroop']);
FontStyle291 := TFontStyleNode.Create;
FontStyle291.Size := 2.4;
FontStyle291.Spacing := 1.2;
FontStyle291.Justify := fjMiddle;
FontStyle291.JustifyMinor := fjMiddle;
{ .SetFontStyle }
Text290.FontStyle := FontStyle291;
{ .SetGeometry }
Shape287.Geometry := Text290;
{ .AddChild }
Transform285.AddChildren([Shape287]);
Shape292 := TShapeNode.Create;
Appearance293 := TAppearanceNode.Create;
Material294 := TMaterialNode.Create;
Material294.DiffuseColor := Vector3(0,0,1);
{ .SetMaterial }
Appearance293.Material := Material294;
{ .SetAppearance }
Shape292.Appearance := Appearance293;
IndexedFaceSet295 := TIndexedFaceSetNode.Create;
IndexedFaceSet295.SetCoordIndex([0,1,2,3,-1]);
Coordinate296 := TCoordinateNode.Create;
Coordinate296.SetPoint([Vector3(20,1.3833333333333333,-0.1),Vector3(-20,1.3833333333333333,-0.1),Vector3(-20,-1.616666666666667,-0.1),Vector3(20,-1.616666666666667,-0.1)]);
{ .SetCoord }
IndexedFaceSet295.Coord := Coordinate296;
{ .SetGeometry }
Shape292.Geometry := IndexedFaceSet295;
{ .AddChild }
Transform285.AddChildren([Shape292]);
{ .AddChildren }
Group7.AddChildren([Transform285]);
Group7.AddRoute(TouchSensor286.EventTouchtime, Script55.FdTouchtime);
{ .AddX3DRoute }
Group7.AddRoute(Script55.FdChoice, Switch8.FdWhichchoice);
{ .AddX3DRoute }
Transform299 := TTransformNode.Create;
Transform299.Translation := Vector3(48,33.39999999999999,0);
TouchSensor300 := TTouchSensorNode.Create;
TouchSensor300.Description := 'TSJinLidTightener';
{ .AddChildren }
Transform299.AddChildren([TouchSensor300]);
Shape301 := TShapeNode.Create;
Appearance302 := TAppearanceNode.Create;
Material303 := TMaterialNode.Create;
Material303.DiffuseColor := Vector3(1,1,1);
{ .SetMaterial }
Appearance302.Material := Material303;
{ .SetAppearance }
Shape301.Appearance := Appearance302;
Text304 := TTextNode.Create;
Text304.SetText(['JinLidTightener']);
FontStyle305 := TFontStyleNode.Create;
FontStyle305.Size := 2.4;
FontStyle305.Spacing := 1.2;
FontStyle305.Justify := fjMiddle;
FontStyle305.JustifyMinor := fjMiddle;
{ .SetFontStyle }
Text304.FontStyle := FontStyle305;
{ .SetGeometry }
Shape301.Geometry := Text304;
{ .AddChild }
Transform299.AddChildren([Shape301]);
Shape306 := TShapeNode.Create;
Appearance307 := TAppearanceNode.Create;
Material308 := TMaterialNode.Create;
Material308.DiffuseColor := Vector3(0,0,1);
{ .SetMaterial }
Appearance307.Material := Material308;
{ .SetAppearance }
Shape306.Appearance := Appearance307;
IndexedFaceSet309 := TIndexedFaceSetNode.Create;
IndexedFaceSet309.SetCoordIndex([0,1,2,3,-1]);
Coordinate310 := TCoordinateNode.Create;
Coordinate310.SetPoint([Vector3(20,1.3833333333333333,-0.1),Vector3(-20,1.3833333333333333,-0.1),Vector3(-20,-1.616666666666667,-0.1),Vector3(20,-1.616666666666667,-0.1)]);
{ .SetCoord }
IndexedFaceSet309.Coord := Coordinate310;
{ .SetGeometry }
Shape306.Geometry := IndexedFaceSet309;
{ .AddChild }
Transform299.AddChildren([Shape306]);
{ .AddChildren }
Group7.AddChildren([Transform299]);
Group7.AddRoute(TouchSensor300.EventTouchtime, Script60.FdTouchtime);
{ .AddX3DRoute }
Group7.AddRoute(Script60.FdChoice, Switch8.FdWhichchoice);
{ .AddX3DRoute }
Transform313 := TTransformNode.Create;
Transform313.Translation := Vector3(48,30.399999999999995,0);
TouchSensor314 := TTouchSensorNode.Create;
TouchSensor314.Description := 'TSJinLipCornerDepressor';
{ .AddChildren }
Transform313.AddChildren([TouchSensor314]);
Shape315 := TShapeNode.Create;
Appearance316 := TAppearanceNode.Create;
Material317 := TMaterialNode.Create;
Material317.DiffuseColor := Vector3(1,1,1);
{ .SetMaterial }
Appearance316.Material := Material317;
{ .SetAppearance }
Shape315.Appearance := Appearance316;
Text318 := TTextNode.Create;
Text318.SetText(['JinLipCornerDepressor']);
FontStyle319 := TFontStyleNode.Create;
FontStyle319.Size := 2.4;
FontStyle319.Spacing := 1.2;
FontStyle319.Justify := fjMiddle;
FontStyle319.JustifyMinor := fjMiddle;
{ .SetFontStyle }
Text318.FontStyle := FontStyle319;
{ .SetGeometry }
Shape315.Geometry := Text318;
{ .AddChild }
Transform313.AddChildren([Shape315]);
Shape320 := TShapeNode.Create;
Appearance321 := TAppearanceNode.Create;
Material322 := TMaterialNode.Create;
Material322.DiffuseColor := Vector3(0,0,1);
{ .SetMaterial }
Appearance321.Material := Material322;
{ .SetAppearance }
Shape320.Appearance := Appearance321;
IndexedFaceSet323 := TIndexedFaceSetNode.Create;
IndexedFaceSet323.SetCoordIndex([0,1,2,3,-1]);
Coordinate324 := TCoordinateNode.Create;
Coordinate324.SetPoint([Vector3(20,1.3833333333333333,-0.1),Vector3(-20,1.3833333333333333,-0.1),Vector3(-20,-1.616666666666667,-0.1),Vector3(20,-1.616666666666667,-0.1)]);
{ .SetCoord }
IndexedFaceSet323.Coord := Coordinate324;
{ .SetGeometry }
Shape320.Geometry := IndexedFaceSet323;
{ .AddChild }
Transform313.AddChildren([Shape320]);
{ .AddChildren }
Group7.AddChildren([Transform313]);
Group7.AddRoute(TouchSensor314.EventTouchtime, Script65.FdTouchtime);
{ .AddX3DRoute }
Group7.AddRoute(Script65.FdChoice, Switch8.FdWhichchoice);
{ .AddX3DRoute }
Transform327 := TTransformNode.Create;
Transform327.Translation := Vector3(48,27.399999999999995,0);
TouchSensor328 := TTouchSensorNode.Create;
TouchSensor328.Description := 'TSJinLipCornerPuller';
{ .AddChildren }
Transform327.AddChildren([TouchSensor328]);
Shape329 := TShapeNode.Create;
Appearance330 := TAppearanceNode.Create;
Material331 := TMaterialNode.Create;
Material331.DiffuseColor := Vector3(1,1,1);
{ .SetMaterial }
Appearance330.Material := Material331;
{ .SetAppearance }
Shape329.Appearance := Appearance330;
Text332 := TTextNode.Create;
Text332.SetText(['JinLipCornerPuller']);
FontStyle333 := TFontStyleNode.Create;
FontStyle333.Size := 2.4;
FontStyle333.Spacing := 1.2;
FontStyle333.Justify := fjMiddle;
FontStyle333.JustifyMinor := fjMiddle;
{ .SetFontStyle }
Text332.FontStyle := FontStyle333;
{ .SetGeometry }
Shape329.Geometry := Text332;
{ .AddChild }
Transform327.AddChildren([Shape329]);
Shape334 := TShapeNode.Create;
Appearance335 := TAppearanceNode.Create;
Material336 := TMaterialNode.Create;
Material336.DiffuseColor := Vector3(0,0,1);
{ .SetMaterial }
Appearance335.Material := Material336;
{ .SetAppearance }
Shape334.Appearance := Appearance335;
IndexedFaceSet337 := TIndexedFaceSetNode.Create;
IndexedFaceSet337.SetCoordIndex([0,1,2,3,-1]);
Coordinate338 := TCoordinateNode.Create;
Coordinate338.SetPoint([Vector3(20,1.3833333333333333,-0.1),Vector3(-20,1.3833333333333333,-0.1),Vector3(-20,-1.616666666666667,-0.1),Vector3(20,-1.616666666666667,-0.1)]);
{ .SetCoord }
IndexedFaceSet337.Coord := Coordinate338;
{ .SetGeometry }
Shape334.Geometry := IndexedFaceSet337;
{ .AddChild }
Transform327.AddChildren([Shape334]);
{ .AddChildren }
Group7.AddChildren([Transform327]);
Group7.AddRoute(TouchSensor328.EventTouchtime, Script70.FdTouchtime);
{ .AddX3DRoute }
Group7.AddRoute(Script70.FdChoice, Switch8.FdWhichchoice);
{ .AddX3DRoute }
Transform341 := TTransformNode.Create;
Transform341.Translation := Vector3(48,24.399999999999995,0);
TouchSensor342 := TTouchSensorNode.Create;
TouchSensor342.Description := 'TSJinLipFunneler';
{ .AddChildren }
Transform341.AddChildren([TouchSensor342]);
Shape343 := TShapeNode.Create;
Appearance344 := TAppearanceNode.Create;
Material345 := TMaterialNode.Create;
Material345.DiffuseColor := Vector3(1,1,1);
{ .SetMaterial }
Appearance344.Material := Material345;
{ .SetAppearance }
Shape343.Appearance := Appearance344;
Text346 := TTextNode.Create;
Text346.SetText(['JinLipFunneler']);
FontStyle347 := TFontStyleNode.Create;
FontStyle347.Size := 2.4;
FontStyle347.Spacing := 1.2;
FontStyle347.Justify := fjMiddle;
FontStyle347.JustifyMinor := fjMiddle;
{ .SetFontStyle }
Text346.FontStyle := FontStyle347;
{ .SetGeometry }
Shape343.Geometry := Text346;
{ .AddChild }
Transform341.AddChildren([Shape343]);
Shape348 := TShapeNode.Create;
Appearance349 := TAppearanceNode.Create;
Material350 := TMaterialNode.Create;
Material350.DiffuseColor := Vector3(0,0,1);
{ .SetMaterial }
Appearance349.Material := Material350;
{ .SetAppearance }
Shape348.Appearance := Appearance349;
IndexedFaceSet351 := TIndexedFaceSetNode.Create;
IndexedFaceSet351.SetCoordIndex([0,1,2,3,-1]);
Coordinate352 := TCoordinateNode.Create;
Coordinate352.SetPoint([Vector3(20,1.3833333333333333,-0.1),Vector3(-20,1.3833333333333333,-0.1),Vector3(-20,-1.616666666666667,-0.1),Vector3(20,-1.616666666666667,-0.1)]);
{ .SetCoord }
IndexedFaceSet351.Coord := Coordinate352;
{ .SetGeometry }
Shape348.Geometry := IndexedFaceSet351;
{ .AddChild }
Transform341.AddChildren([Shape348]);
{ .AddChildren }
Group7.AddChildren([Transform341]);
Group7.AddRoute(TouchSensor342.EventTouchtime, Script75.FdTouchtime);
{ .AddX3DRoute }
Group7.AddRoute(Script75.FdChoice, Switch8.FdWhichchoice);
{ .AddX3DRoute }
Transform355 := TTransformNode.Create;
Transform355.Translation := Vector3(48,21.399999999999995,0);
TouchSensor356 := TTouchSensorNode.Create;
TouchSensor356.Description := 'TSJinLipPressor';
{ .AddChildren }
Transform355.AddChildren([TouchSensor356]);
Shape357 := TShapeNode.Create;
Appearance358 := TAppearanceNode.Create;
Material359 := TMaterialNode.Create;
Material359.DiffuseColor := Vector3(1,1,1);
{ .SetMaterial }
Appearance358.Material := Material359;
{ .SetAppearance }
Shape357.Appearance := Appearance358;
Text360 := TTextNode.Create;
Text360.SetText(['JinLipPressor']);
FontStyle361 := TFontStyleNode.Create;
FontStyle361.Size := 2.4;
FontStyle361.Spacing := 1.2;
FontStyle361.Justify := fjMiddle;
FontStyle361.JustifyMinor := fjMiddle;
{ .SetFontStyle }
Text360.FontStyle := FontStyle361;
{ .SetGeometry }
Shape357.Geometry := Text360;
{ .AddChild }
Transform355.AddChildren([Shape357]);
Shape362 := TShapeNode.Create;
Appearance363 := TAppearanceNode.Create;
Material364 := TMaterialNode.Create;
Material364.DiffuseColor := Vector3(0,0,1);
{ .SetMaterial }
Appearance363.Material := Material364;
{ .SetAppearance }
Shape362.Appearance := Appearance363;
IndexedFaceSet365 := TIndexedFaceSetNode.Create;
IndexedFaceSet365.SetCoordIndex([0,1,2,3,-1]);
Coordinate366 := TCoordinateNode.Create;
Coordinate366.SetPoint([Vector3(20,1.3833333333333333,-0.1),Vector3(-20,1.3833333333333333,-0.1),Vector3(-20,-1.616666666666667,-0.1),Vector3(20,-1.616666666666667,-0.1)]);
{ .SetCoord }
IndexedFaceSet365.Coord := Coordinate366;
{ .SetGeometry }
Shape362.Geometry := IndexedFaceSet365;
{ .AddChild }
Transform355.AddChildren([Shape362]);
{ .AddChildren }
Group7.AddChildren([Transform355]);
Group7.AddRoute(TouchSensor356.EventTouchtime, Script80.FdTouchtime);
{ .AddX3DRoute }
Group7.AddRoute(Script80.FdChoice, Switch8.FdWhichchoice);
{ .AddX3DRoute }
Transform369 := TTransformNode.Create;
Transform369.Translation := Vector3(48,18.4,0);
TouchSensor370 := TTouchSensorNode.Create;
TouchSensor370.Description := 'TSJinLipPuckerer';
{ .AddChildren }
Transform369.AddChildren([TouchSensor370]);
Shape371 := TShapeNode.Create;
Appearance372 := TAppearanceNode.Create;
Material373 := TMaterialNode.Create;
Material373.DiffuseColor := Vector3(1,1,1);
{ .SetMaterial }
Appearance372.Material := Material373;
{ .SetAppearance }
Shape371.Appearance := Appearance372;
Text374 := TTextNode.Create;
Text374.SetText(['JinLipPuckerer']);
FontStyle375 := TFontStyleNode.Create;
FontStyle375.Size := 2.4;
FontStyle375.Spacing := 1.2;
FontStyle375.Justify := fjMiddle;
FontStyle375.JustifyMinor := fjMiddle;
{ .SetFontStyle }
Text374.FontStyle := FontStyle375;
{ .SetGeometry }
Shape371.Geometry := Text374;
{ .AddChild }
Transform369.AddChildren([Shape371]);
Shape376 := TShapeNode.Create;
Appearance377 := TAppearanceNode.Create;
Material378 := TMaterialNode.Create;
Material378.DiffuseColor := Vector3(0,0,1);
{ .SetMaterial }
Appearance377.Material := Material378;
{ .SetAppearance }
Shape376.Appearance := Appearance377;
IndexedFaceSet379 := TIndexedFaceSetNode.Create;
IndexedFaceSet379.SetCoordIndex([0,1,2,3,-1]);
Coordinate380 := TCoordinateNode.Create;
Coordinate380.SetPoint([Vector3(20,1.3833333333333333,-0.1),Vector3(-20,1.3833333333333333,-0.1),Vector3(-20,-1.616666666666667,-0.1),Vector3(20,-1.616666666666667,-0.1)]);
{ .SetCoord }
IndexedFaceSet379.Coord := Coordinate380;
{ .SetGeometry }
Shape376.Geometry := IndexedFaceSet379;
{ .AddChild }
Transform369.AddChildren([Shape376]);
{ .AddChildren }
Group7.AddChildren([Transform369]);
Group7.AddRoute(TouchSensor370.EventTouchtime, Script85.FdTouchtime);
{ .AddX3DRoute }
Group7.AddRoute(Script85.FdChoice, Switch8.FdWhichchoice);
{ .AddX3DRoute }
Transform383 := TTransformNode.Create;
Transform383.Translation := Vector3(48,15.399999999999997,0);
TouchSensor384 := TTouchSensorNode.Create;
TouchSensor384.Description := 'TSJinLipsPart';
{ .AddChildren }
Transform383.AddChildren([TouchSensor384]);
Shape385 := TShapeNode.Create;
Appearance386 := TAppearanceNode.Create;
Material387 := TMaterialNode.Create;
Material387.DiffuseColor := Vector3(1,1,1);
{ .SetMaterial }
Appearance386.Material := Material387;
{ .SetAppearance }
Shape385.Appearance := Appearance386;
Text388 := TTextNode.Create;
Text388.SetText(['JinLipsPart']);
FontStyle389 := TFontStyleNode.Create;
FontStyle389.Size := 2.4;
FontStyle389.Spacing := 1.2;
FontStyle389.Justify := fjMiddle;
FontStyle389.JustifyMinor := fjMiddle;
{ .SetFontStyle }
Text388.FontStyle := FontStyle389;
{ .SetGeometry }
Shape385.Geometry := Text388;
{ .AddChild }
Transform383.AddChildren([Shape385]);
Shape390 := TShapeNode.Create;
Appearance391 := TAppearanceNode.Create;
Material392 := TMaterialNode.Create;
Material392.DiffuseColor := Vector3(0,0,1);
{ .SetMaterial }
Appearance391.Material := Material392;
{ .SetAppearance }
Shape390.Appearance := Appearance391;
IndexedFaceSet393 := TIndexedFaceSetNode.Create;
IndexedFaceSet393.SetCoordIndex([0,1,2,3,-1]);
Coordinate394 := TCoordinateNode.Create;
Coordinate394.SetPoint([Vector3(20,1.3833333333333333,-0.1),Vector3(-20,1.3833333333333333,-0.1),Vector3(-20,-1.616666666666667,-0.1),Vector3(20,-1.616666666666667,-0.1)]);
{ .SetCoord }
IndexedFaceSet393.Coord := Coordinate394;
{ .SetGeometry }
Shape390.Geometry := IndexedFaceSet393;
{ .AddChild }
Transform383.AddChildren([Shape390]);
{ .AddChildren }
Group7.AddChildren([Transform383]);
Group7.AddRoute(TouchSensor384.EventTouchtime, Script90.FdTouchtime);
{ .AddX3DRoute }
Group7.AddRoute(Script90.FdChoice, Switch8.FdWhichchoice);
{ .AddX3DRoute }
Transform397 := TTransformNode.Create;
Transform397.Translation := Vector3(48,12.399999999999999,0);
TouchSensor398 := TTouchSensorNode.Create;
TouchSensor398.Description := 'TSJinLipStretcher';
{ .AddChildren }
Transform397.AddChildren([TouchSensor398]);
Shape399 := TShapeNode.Create;
Appearance400 := TAppearanceNode.Create;
Material401 := TMaterialNode.Create;
Material401.DiffuseColor := Vector3(1,1,1);
{ .SetMaterial }
Appearance400.Material := Material401;
{ .SetAppearance }
Shape399.Appearance := Appearance400;
Text402 := TTextNode.Create;
Text402.SetText(['JinLipStretcher']);
FontStyle403 := TFontStyleNode.Create;
FontStyle403.Size := 2.4;
FontStyle403.Spacing := 1.2;
FontStyle403.Justify := fjMiddle;
FontStyle403.JustifyMinor := fjMiddle;
{ .SetFontStyle }
Text402.FontStyle := FontStyle403;
{ .SetGeometry }
Shape399.Geometry := Text402;
{ .AddChild }
Transform397.AddChildren([Shape399]);
Shape404 := TShapeNode.Create;
Appearance405 := TAppearanceNode.Create;
Material406 := TMaterialNode.Create;
Material406.DiffuseColor := Vector3(0,0,1);
{ .SetMaterial }
Appearance405.Material := Material406;
{ .SetAppearance }
Shape404.Appearance := Appearance405;
IndexedFaceSet407 := TIndexedFaceSetNode.Create;
IndexedFaceSet407.SetCoordIndex([0,1,2,3,-1]);
Coordinate408 := TCoordinateNode.Create;
Coordinate408.SetPoint([Vector3(20,1.3833333333333333,-0.1),Vector3(-20,1.3833333333333333,-0.1),Vector3(-20,-1.616666666666667,-0.1),Vector3(20,-1.616666666666667,-0.1)]);
{ .SetCoord }
IndexedFaceSet407.Coord := Coordinate408;
{ .SetGeometry }
Shape404.Geometry := IndexedFaceSet407;
{ .AddChild }
Transform397.AddChildren([Shape404]);
{ .AddChildren }
Group7.AddChildren([Transform397]);
Group7.AddRoute(TouchSensor398.EventTouchtime, Script95.FdTouchtime);
{ .AddX3DRoute }
Group7.AddRoute(Script95.FdChoice, Switch8.FdWhichchoice);
{ .AddX3DRoute }
Transform411 := TTransformNode.Create;
Transform411.Translation := Vector3(48,9.399999999999999,0);
TouchSensor412 := TTouchSensorNode.Create;
TouchSensor412.Description := 'TSJinLipSuck';
{ .AddChildren }
Transform411.AddChildren([TouchSensor412]);
Shape413 := TShapeNode.Create;
Appearance414 := TAppearanceNode.Create;
Material415 := TMaterialNode.Create;
Material415.DiffuseColor := Vector3(1,1,1);
{ .SetMaterial }
Appearance414.Material := Material415;
{ .SetAppearance }
Shape413.Appearance := Appearance414;
Text416 := TTextNode.Create;
Text416.SetText(['JinLipSuck']);
FontStyle417 := TFontStyleNode.Create;
FontStyle417.Size := 2.4;
FontStyle417.Spacing := 1.2;
FontStyle417.Justify := fjMiddle;
FontStyle417.JustifyMinor := fjMiddle;
{ .SetFontStyle }
Text416.FontStyle := FontStyle417;
{ .SetGeometry }
Shape413.Geometry := Text416;
{ .AddChild }
Transform411.AddChildren([Shape413]);
Shape418 := TShapeNode.Create;
Appearance419 := TAppearanceNode.Create;
Material420 := TMaterialNode.Create;
Material420.DiffuseColor := Vector3(0,0,1);
{ .SetMaterial }
Appearance419.Material := Material420;
{ .SetAppearance }
Shape418.Appearance := Appearance419;
IndexedFaceSet421 := TIndexedFaceSetNode.Create;
IndexedFaceSet421.SetCoordIndex([0,1,2,3,-1]);
Coordinate422 := TCoordinateNode.Create;
Coordinate422.SetPoint([Vector3(20,1.3833333333333333,-0.1),Vector3(-20,1.3833333333333333,-0.1),Vector3(-20,-1.616666666666667,-0.1),Vector3(20,-1.616666666666667,-0.1)]);
{ .SetCoord }
IndexedFaceSet421.Coord := Coordinate422;
{ .SetGeometry }
Shape418.Geometry := IndexedFaceSet421;
{ .AddChild }
Transform411.AddChildren([Shape418]);
{ .AddChildren }
Group7.AddChildren([Transform411]);
Group7.AddRoute(TouchSensor412.EventTouchtime, Script100.FdTouchtime);
{ .AddX3DRoute }
Group7.AddRoute(Script100.FdChoice, Switch8.FdWhichchoice);
{ .AddX3DRoute }
Transform425 := TTransformNode.Create;
Transform425.Translation := Vector3(48,6.399999999999999,0);
TouchSensor426 := TTouchSensorNode.Create;
TouchSensor426.Description := 'TSJinLipTightener';
{ .AddChildren }
Transform425.AddChildren([TouchSensor426]);
Shape427 := TShapeNode.Create;
Appearance428 := TAppearanceNode.Create;
Material429 := TMaterialNode.Create;
Material429.DiffuseColor := Vector3(1,1,1);
{ .SetMaterial }
Appearance428.Material := Material429;
{ .SetAppearance }
Shape427.Appearance := Appearance428;
Text430 := TTextNode.Create;
Text430.SetText(['JinLipTightener']);
FontStyle431 := TFontStyleNode.Create;
FontStyle431.Size := 2.4;
FontStyle431.Spacing := 1.2;
FontStyle431.Justify := fjMiddle;
FontStyle431.JustifyMinor := fjMiddle;
{ .SetFontStyle }
Text430.FontStyle := FontStyle431;
{ .SetGeometry }
Shape427.Geometry := Text430;
{ .AddChild }
Transform425.AddChildren([Shape427]);
Shape432 := TShapeNode.Create;
Appearance433 := TAppearanceNode.Create;
Material434 := TMaterialNode.Create;
Material434.DiffuseColor := Vector3(0,0,1);
{ .SetMaterial }
Appearance433.Material := Material434;
{ .SetAppearance }
Shape432.Appearance := Appearance433;
IndexedFaceSet435 := TIndexedFaceSetNode.Create;
IndexedFaceSet435.SetCoordIndex([0,1,2,3,-1]);
Coordinate436 := TCoordinateNode.Create;
Coordinate436.SetPoint([Vector3(20,1.3833333333333333,-0.1),Vector3(-20,1.3833333333333333,-0.1),Vector3(-20,-1.616666666666667,-0.1),Vector3(20,-1.616666666666667,-0.1)]);
{ .SetCoord }
IndexedFaceSet435.Coord := Coordinate436;
{ .SetGeometry }
Shape432.Geometry := IndexedFaceSet435;
{ .AddChild }
Transform425.AddChildren([Shape432]);
{ .AddChildren }
Group7.AddChildren([Transform425]);
Group7.AddRoute(TouchSensor426.EventTouchtime, Script105.FdTouchtime);
{ .AddX3DRoute }
Group7.AddRoute(Script105.FdChoice, Switch8.FdWhichchoice);
{ .AddX3DRoute }
Transform439 := TTransformNode.Create;
Transform439.Translation := Vector3(48,3.399999999999995,0);
TouchSensor440 := TTouchSensorNode.Create;
TouchSensor440.Description := 'TSJinLowerLipDepressor';
{ .AddChildren }
Transform439.AddChildren([TouchSensor440]);
Shape441 := TShapeNode.Create;
Appearance442 := TAppearanceNode.Create;
Material443 := TMaterialNode.Create;
Material443.DiffuseColor := Vector3(1,1,1);
{ .SetMaterial }
Appearance442.Material := Material443;
{ .SetAppearance }
Shape441.Appearance := Appearance442;
Text444 := TTextNode.Create;
Text444.SetText(['JinLowerLipDepressor']);
FontStyle445 := TFontStyleNode.Create;
FontStyle445.Size := 2.4;
FontStyle445.Spacing := 1.2;
FontStyle445.Justify := fjMiddle;
FontStyle445.JustifyMinor := fjMiddle;
{ .SetFontStyle }
Text444.FontStyle := FontStyle445;
{ .SetGeometry }
Shape441.Geometry := Text444;
{ .AddChild }
Transform439.AddChildren([Shape441]);
Shape446 := TShapeNode.Create;
Appearance447 := TAppearanceNode.Create;
Material448 := TMaterialNode.Create;
Material448.DiffuseColor := Vector3(0,0,1);
{ .SetMaterial }
Appearance447.Material := Material448;
{ .SetAppearance }
Shape446.Appearance := Appearance447;
IndexedFaceSet449 := TIndexedFaceSetNode.Create;
IndexedFaceSet449.SetCoordIndex([0,1,2,3,-1]);
Coordinate450 := TCoordinateNode.Create;
Coordinate450.SetPoint([Vector3(20,1.3833333333333333,-0.1),Vector3(-20,1.3833333333333333,-0.1),Vector3(-20,-1.616666666666667,-0.1),Vector3(20,-1.616666666666667,-0.1)]);
{ .SetCoord }
IndexedFaceSet449.Coord := Coordinate450;
{ .SetGeometry }
Shape446.Geometry := IndexedFaceSet449;
{ .AddChild }
Transform439.AddChildren([Shape446]);
{ .AddChildren }
Group7.AddChildren([Transform439]);
Group7.AddRoute(TouchSensor440.EventTouchtime, Script110.FdTouchtime);
{ .AddX3DRoute }
Group7.AddRoute(Script110.FdChoice, Switch8.FdWhichchoice);
{ .AddX3DRoute }
Transform453 := TTransformNode.Create;
Transform453.Translation := Vector3(48,0.399999999999995,0);
TouchSensor454 := TTouchSensorNode.Create;
TouchSensor454.Description := 'TSJinMouthStretch';
{ .AddChildren }
Transform453.AddChildren([TouchSensor454]);
Shape455 := TShapeNode.Create;
Appearance456 := TAppearanceNode.Create;
Material457 := TMaterialNode.Create;
Material457.DiffuseColor := Vector3(1,1,1);
{ .SetMaterial }
Appearance456.Material := Material457;
{ .SetAppearance }
Shape455.Appearance := Appearance456;
Text458 := TTextNode.Create;
Text458.SetText(['JinMouthStretch']);
FontStyle459 := TFontStyleNode.Create;
FontStyle459.Size := 2.4;
FontStyle459.Spacing := 1.2;
FontStyle459.Justify := fjMiddle;
FontStyle459.JustifyMinor := fjMiddle;
{ .SetFontStyle }
Text458.FontStyle := FontStyle459;
{ .SetGeometry }
Shape455.Geometry := Text458;
{ .AddChild }
Transform453.AddChildren([Shape455]);
Shape460 := TShapeNode.Create;
Appearance461 := TAppearanceNode.Create;
Material462 := TMaterialNode.Create;
Material462.DiffuseColor := Vector3(0,0,1);
{ .SetMaterial }
Appearance461.Material := Material462;
{ .SetAppearance }
Shape460.Appearance := Appearance461;
IndexedFaceSet463 := TIndexedFaceSetNode.Create;
IndexedFaceSet463.SetCoordIndex([0,1,2,3,-1]);
Coordinate464 := TCoordinateNode.Create;
Coordinate464.SetPoint([Vector3(20,1.3833333333333333,-0.1),Vector3(-20,1.3833333333333333,-0.1),Vector3(-20,-1.616666666666667,-0.1),Vector3(20,-1.616666666666667,-0.1)]);
{ .SetCoord }
IndexedFaceSet463.Coord := Coordinate464;
{ .SetGeometry }
Shape460.Geometry := IndexedFaceSet463;
{ .AddChild }
Transform453.AddChildren([Shape460]);
{ .AddChildren }
Group7.AddChildren([Transform453]);
Group7.AddRoute(TouchSensor454.EventTouchtime, Script115.FdTouchtime);
{ .AddX3DRoute }
Group7.AddRoute(Script115.FdChoice, Switch8.FdWhichchoice);
{ .AddX3DRoute }
Transform467 := TTransformNode.Create;
Transform467.Translation := Vector3(48,-2.6000000000000085,0);
TouchSensor468 := TTouchSensorNode.Create;
TouchSensor468.Description := 'TSJinNasolabialDeepener';
{ .AddChildren }
Transform467.AddChildren([TouchSensor468]);
Shape469 := TShapeNode.Create;
Appearance470 := TAppearanceNode.Create;
Material471 := TMaterialNode.Create;
Material471.DiffuseColor := Vector3(1,1,1);
{ .SetMaterial }
Appearance470.Material := Material471;
{ .SetAppearance }
Shape469.Appearance := Appearance470;
Text472 := TTextNode.Create;
Text472.SetText(['JinNasolabialDeepener']);
FontStyle473 := TFontStyleNode.Create;
FontStyle473.Size := 2.4;
FontStyle473.Spacing := 1.2;
FontStyle473.Justify := fjMiddle;
FontStyle473.JustifyMinor := fjMiddle;
{ .SetFontStyle }
Text472.FontStyle := FontStyle473;
{ .SetGeometry }
Shape469.Geometry := Text472;
{ .AddChild }
Transform467.AddChildren([Shape469]);
Shape474 := TShapeNode.Create;
Appearance475 := TAppearanceNode.Create;
Material476 := TMaterialNode.Create;
Material476.DiffuseColor := Vector3(0,0,1);
{ .SetMaterial }
Appearance475.Material := Material476;
{ .SetAppearance }
Shape474.Appearance := Appearance475;
IndexedFaceSet477 := TIndexedFaceSetNode.Create;
IndexedFaceSet477.SetCoordIndex([0,1,2,3,-1]);
Coordinate478 := TCoordinateNode.Create;
Coordinate478.SetPoint([Vector3(20,1.3833333333333333,-0.1),Vector3(-20,1.3833333333333333,-0.1),Vector3(-20,-1.616666666666667,-0.1),Vector3(20,-1.616666666666667,-0.1)]);
{ .SetCoord }
IndexedFaceSet477.Coord := Coordinate478;
{ .SetGeometry }
Shape474.Geometry := IndexedFaceSet477;
{ .AddChild }
Transform467.AddChildren([Shape474]);
{ .AddChildren }
Group7.AddChildren([Transform467]);
Group7.AddRoute(TouchSensor468.EventTouchtime, Script120.FdTouchtime);
{ .AddX3DRoute }
Group7.AddRoute(Script120.FdChoice, Switch8.FdWhichchoice);
{ .AddX3DRoute }
Transform481 := TTransformNode.Create;
Transform481.Translation := Vector3(48,-5.6000000000000085,0);
TouchSensor482 := TTouchSensorNode.Create;
TouchSensor482.Description := 'TSJinNoseWrinkler';
{ .AddChildren }
Transform481.AddChildren([TouchSensor482]);
Shape483 := TShapeNode.Create;
Appearance484 := TAppearanceNode.Create;
Material485 := TMaterialNode.Create;
Material485.DiffuseColor := Vector3(1,1,1);
{ .SetMaterial }
Appearance484.Material := Material485;
{ .SetAppearance }
Shape483.Appearance := Appearance484;
Text486 := TTextNode.Create;
Text486.SetText(['JinNoseWrinkler']);
FontStyle487 := TFontStyleNode.Create;
FontStyle487.Size := 2.4;
FontStyle487.Spacing := 1.2;
FontStyle487.Justify := fjMiddle;
FontStyle487.JustifyMinor := fjMiddle;
{ .SetFontStyle }
Text486.FontStyle := FontStyle487;
{ .SetGeometry }
Shape483.Geometry := Text486;
{ .AddChild }
Transform481.AddChildren([Shape483]);
Shape488 := TShapeNode.Create;
Appearance489 := TAppearanceNode.Create;
Material490 := TMaterialNode.Create;
Material490.DiffuseColor := Vector3(0,0,1);
{ .SetMaterial }
Appearance489.Material := Material490;
{ .SetAppearance }
Shape488.Appearance := Appearance489;
IndexedFaceSet491 := TIndexedFaceSetNode.Create;
IndexedFaceSet491.SetCoordIndex([0,1,2,3,-1]);
Coordinate492 := TCoordinateNode.Create;
Coordinate492.SetPoint([Vector3(20,1.3833333333333333,-0.1),Vector3(-20,1.3833333333333333,-0.1),Vector3(-20,-1.616666666666667,-0.1),Vector3(20,-1.616666666666667,-0.1)]);
{ .SetCoord }
IndexedFaceSet491.Coord := Coordinate492;
{ .SetGeometry }
Shape488.Geometry := IndexedFaceSet491;
{ .AddChild }
Transform481.AddChildren([Shape488]);
{ .AddChildren }
Group7.AddChildren([Transform481]);
Group7.AddRoute(TouchSensor482.EventTouchtime, Script125.FdTouchtime);
{ .AddX3DRoute }
Group7.AddRoute(Script125.FdChoice, Switch8.FdWhichchoice);
{ .AddX3DRoute }
Transform495 := TTransformNode.Create;
Transform495.Translation := Vector3(48,-8.600000000000009,0);
TouchSensor496 := TTouchSensorNode.Create;
TouchSensor496.Description := 'TSJinOuterBrowRaiser';
{ .AddChildren }
Transform495.AddChildren([TouchSensor496]);
Shape497 := TShapeNode.Create;
Appearance498 := TAppearanceNode.Create;
Material499 := TMaterialNode.Create;
Material499.DiffuseColor := Vector3(1,1,1);
{ .SetMaterial }
Appearance498.Material := Material499;
{ .SetAppearance }
Shape497.Appearance := Appearance498;
Text500 := TTextNode.Create;
Text500.SetText(['JinOuterBrowRaiser']);
FontStyle501 := TFontStyleNode.Create;
FontStyle501.Size := 2.4;
FontStyle501.Spacing := 1.2;
FontStyle501.Justify := fjMiddle;
FontStyle501.JustifyMinor := fjMiddle;
{ .SetFontStyle }
Text500.FontStyle := FontStyle501;
{ .SetGeometry }
Shape497.Geometry := Text500;
{ .AddChild }
Transform495.AddChildren([Shape497]);
Shape502 := TShapeNode.Create;
Appearance503 := TAppearanceNode.Create;
Material504 := TMaterialNode.Create;
Material504.DiffuseColor := Vector3(0,0,1);
{ .SetMaterial }
Appearance503.Material := Material504;
{ .SetAppearance }
Shape502.Appearance := Appearance503;
IndexedFaceSet505 := TIndexedFaceSetNode.Create;
IndexedFaceSet505.SetCoordIndex([0,1,2,3,-1]);
Coordinate506 := TCoordinateNode.Create;
Coordinate506.SetPoint([Vector3(20,1.3833333333333333,-0.1),Vector3(-20,1.3833333333333333,-0.1),Vector3(-20,-1.616666666666667,-0.1),Vector3(20,-1.616666666666667,-0.1)]);
{ .SetCoord }
IndexedFaceSet505.Coord := Coordinate506;
{ .SetGeometry }
Shape502.Geometry := IndexedFaceSet505;
{ .AddChild }
Transform495.AddChildren([Shape502]);
{ .AddChildren }
Group7.AddChildren([Transform495]);
Group7.AddRoute(TouchSensor496.EventTouchtime, Script130.FdTouchtime);
{ .AddX3DRoute }
Group7.AddRoute(Script130.FdChoice, Switch8.FdWhichchoice);
{ .AddX3DRoute }
Transform509 := TTransformNode.Create;
Transform509.Translation := Vector3(48,-11.600000000000009,0);
TouchSensor510 := TTouchSensorNode.Create;
TouchSensor510.Description := 'TSJinSlit';
{ .AddChildren }
Transform509.AddChildren([TouchSensor510]);
Shape511 := TShapeNode.Create;
Appearance512 := TAppearanceNode.Create;
Material513 := TMaterialNode.Create;
Material513.DiffuseColor := Vector3(1,1,1);
{ .SetMaterial }
Appearance512.Material := Material513;
{ .SetAppearance }
Shape511.Appearance := Appearance512;
Text514 := TTextNode.Create;
Text514.SetText(['JinSlit']);
FontStyle515 := TFontStyleNode.Create;
FontStyle515.Size := 2.4;
FontStyle515.Spacing := 1.2;
FontStyle515.Justify := fjMiddle;
FontStyle515.JustifyMinor := fjMiddle;
{ .SetFontStyle }
Text514.FontStyle := FontStyle515;
{ .SetGeometry }
Shape511.Geometry := Text514;
{ .AddChild }
Transform509.AddChildren([Shape511]);
Shape516 := TShapeNode.Create;
Appearance517 := TAppearanceNode.Create;
Material518 := TMaterialNode.Create;
Material518.DiffuseColor := Vector3(0,0,1);
{ .SetMaterial }
Appearance517.Material := Material518;
{ .SetAppearance }
Shape516.Appearance := Appearance517;
IndexedFaceSet519 := TIndexedFaceSetNode.Create;
IndexedFaceSet519.SetCoordIndex([0,1,2,3,-1]);
Coordinate520 := TCoordinateNode.Create;
Coordinate520.SetPoint([Vector3(20,1.3833333333333333,-0.1),Vector3(-20,1.3833333333333333,-0.1),Vector3(-20,-1.616666666666667,-0.1),Vector3(20,-1.616666666666667,-0.1)]);
{ .SetCoord }
IndexedFaceSet519.Coord := Coordinate520;
{ .SetGeometry }
Shape516.Geometry := IndexedFaceSet519;
{ .AddChild }
Transform509.AddChildren([Shape516]);
{ .AddChildren }
Group7.AddChildren([Transform509]);
Group7.AddRoute(TouchSensor510.EventTouchtime, Script135.FdTouchtime);
{ .AddX3DRoute }
Group7.AddRoute(Script135.FdChoice, Switch8.FdWhichchoice);
{ .AddX3DRoute }
Transform523 := TTransformNode.Create;
Transform523.Translation := Vector3(48,-14.600000000000001,0);
TouchSensor524 := TTouchSensorNode.Create;
TouchSensor524.Description := 'TSJinSquint';
{ .AddChildren }
Transform523.AddChildren([TouchSensor524]);
Shape525 := TShapeNode.Create;
Appearance526 := TAppearanceNode.Create;
Material527 := TMaterialNode.Create;
Material527.DiffuseColor := Vector3(1,1,1);
{ .SetMaterial }
Appearance526.Material := Material527;
{ .SetAppearance }
Shape525.Appearance := Appearance526;
Text528 := TTextNode.Create;
Text528.SetText(['JinSquint']);
FontStyle529 := TFontStyleNode.Create;
FontStyle529.Size := 2.4;
FontStyle529.Spacing := 1.2;
FontStyle529.Justify := fjMiddle;
FontStyle529.JustifyMinor := fjMiddle;
{ .SetFontStyle }
Text528.FontStyle := FontStyle529;
{ .SetGeometry }
Shape525.Geometry := Text528;
{ .AddChild }
Transform523.AddChildren([Shape525]);
Shape530 := TShapeNode.Create;
Appearance531 := TAppearanceNode.Create;
Material532 := TMaterialNode.Create;
Material532.DiffuseColor := Vector3(0,0,1);
{ .SetMaterial }
Appearance531.Material := Material532;
{ .SetAppearance }
Shape530.Appearance := Appearance531;
IndexedFaceSet533 := TIndexedFaceSetNode.Create;
IndexedFaceSet533.SetCoordIndex([0,1,2,3,-1]);
Coordinate534 := TCoordinateNode.Create;
Coordinate534.SetPoint([Vector3(20,1.3833333333333333,-0.1),Vector3(-20,1.3833333333333333,-0.1),Vector3(-20,-1.616666666666667,-0.1),Vector3(20,-1.616666666666667,-0.1)]);
{ .SetCoord }
IndexedFaceSet533.Coord := Coordinate534;
{ .SetGeometry }
Shape530.Geometry := IndexedFaceSet533;
{ .AddChild }
Transform523.AddChildren([Shape530]);
{ .AddChildren }
Group7.AddChildren([Transform523]);
Group7.AddRoute(TouchSensor524.EventTouchtime, Script140.FdTouchtime);
{ .AddX3DRoute }
Group7.AddRoute(Script140.FdChoice, Switch8.FdWhichchoice);
{ .AddX3DRoute }
Transform537 := TTransformNode.Create;
Transform537.Translation := Vector3(48,-17.6,0);
TouchSensor538 := TTouchSensorNode.Create;
TouchSensor538.Description := 'TSJinUpperLidRaiser';
{ .AddChildren }
Transform537.AddChildren([TouchSensor538]);
Shape539 := TShapeNode.Create;
Appearance540 := TAppearanceNode.Create;
Material541 := TMaterialNode.Create;
Material541.DiffuseColor := Vector3(1,1,1);
{ .SetMaterial }
Appearance540.Material := Material541;
{ .SetAppearance }
Shape539.Appearance := Appearance540;
Text542 := TTextNode.Create;
Text542.SetText(['JinUpperLidRaiser']);
FontStyle543 := TFontStyleNode.Create;
FontStyle543.Size := 2.4;
FontStyle543.Spacing := 1.2;
FontStyle543.Justify := fjMiddle;
FontStyle543.JustifyMinor := fjMiddle;
{ .SetFontStyle }
Text542.FontStyle := FontStyle543;
{ .SetGeometry }
Shape539.Geometry := Text542;
{ .AddChild }
Transform537.AddChildren([Shape539]);
Shape544 := TShapeNode.Create;
Appearance545 := TAppearanceNode.Create;
Material546 := TMaterialNode.Create;
Material546.DiffuseColor := Vector3(0,0,1);
{ .SetMaterial }
Appearance545.Material := Material546;
{ .SetAppearance }
Shape544.Appearance := Appearance545;
IndexedFaceSet547 := TIndexedFaceSetNode.Create;
IndexedFaceSet547.SetCoordIndex([0,1,2,3,-1]);
Coordinate548 := TCoordinateNode.Create;
Coordinate548.SetPoint([Vector3(20,1.3833333333333333,-0.1),Vector3(-20,1.3833333333333333,-0.1),Vector3(-20,-1.616666666666667,-0.1),Vector3(20,-1.616666666666667,-0.1)]);
{ .SetCoord }
IndexedFaceSet547.Coord := Coordinate548;
{ .SetGeometry }
Shape544.Geometry := IndexedFaceSet547;
{ .AddChild }
Transform537.AddChildren([Shape544]);
{ .AddChildren }
Group7.AddChildren([Transform537]);
Group7.AddRoute(TouchSensor538.EventTouchtime, Script145.FdTouchtime);
{ .AddX3DRoute }
Group7.AddRoute(Script145.FdChoice, Switch8.FdWhichchoice);
{ .AddX3DRoute }
Transform551 := TTransformNode.Create;
Transform551.Translation := Vector3(48,-20.6,0);
TouchSensor552 := TTouchSensorNode.Create;
TouchSensor552.Description := 'TSJinUpperLipRaiser';
{ .AddChildren }
Transform551.AddChildren([TouchSensor552]);
Shape553 := TShapeNode.Create;
Appearance554 := TAppearanceNode.Create;
Material555 := TMaterialNode.Create;
Material555.DiffuseColor := Vector3(1,1,1);
{ .SetMaterial }
Appearance554.Material := Material555;
{ .SetAppearance }
Shape553.Appearance := Appearance554;
Text556 := TTextNode.Create;
Text556.SetText(['JinUpperLipRaiser']);
FontStyle557 := TFontStyleNode.Create;
FontStyle557.Size := 2.4;
FontStyle557.Spacing := 1.2;
FontStyle557.Justify := fjMiddle;
FontStyle557.JustifyMinor := fjMiddle;
{ .SetFontStyle }
Text556.FontStyle := FontStyle557;
{ .SetGeometry }
Shape553.Geometry := Text556;
{ .AddChild }
Transform551.AddChildren([Shape553]);
Shape558 := TShapeNode.Create;
Appearance559 := TAppearanceNode.Create;
Material560 := TMaterialNode.Create;
Material560.DiffuseColor := Vector3(0,0,1);
{ .SetMaterial }
Appearance559.Material := Material560;
{ .SetAppearance }
Shape558.Appearance := Appearance559;
IndexedFaceSet561 := TIndexedFaceSetNode.Create;
IndexedFaceSet561.SetCoordIndex([0,1,2,3,-1]);
Coordinate562 := TCoordinateNode.Create;
Coordinate562.SetPoint([Vector3(20,1.3833333333333333,-0.1),Vector3(-20,1.3833333333333333,-0.1),Vector3(-20,-1.616666666666667,-0.1),Vector3(20,-1.616666666666667,-0.1)]);
{ .SetCoord }
IndexedFaceSet561.Coord := Coordinate562;
{ .SetGeometry }
Shape558.Geometry := IndexedFaceSet561;
{ .AddChild }
Transform551.AddChildren([Shape558]);
{ .AddChildren }
Group7.AddChildren([Transform551]);
Group7.AddRoute(TouchSensor552.EventTouchtime, Script150.FdTouchtime);
{ .AddX3DRoute }
Group7.AddRoute(Script150.FdChoice, Switch8.FdWhichchoice);
{ .AddX3DRoute }
Transform565 := TTransformNode.Create;
Transform565.Translation := Vector3(48,-23.599999999999994,0);
TouchSensor566 := TTouchSensorNode.Create;
TouchSensor566.Description := 'TSJinWink';
{ .AddChildren }
Transform565.AddChildren([TouchSensor566]);
Shape567 := TShapeNode.Create;
Appearance568 := TAppearanceNode.Create;
Material569 := TMaterialNode.Create;
Material569.DiffuseColor := Vector3(1,1,1);
{ .SetMaterial }
Appearance568.Material := Material569;
{ .SetAppearance }
Shape567.Appearance := Appearance568;
Text570 := TTextNode.Create;
Text570.SetText(['JinWink']);
FontStyle571 := TFontStyleNode.Create;
FontStyle571.Size := 2.4;
FontStyle571.Spacing := 1.2;
FontStyle571.Justify := fjMiddle;
FontStyle571.JustifyMinor := fjMiddle;
{ .SetFontStyle }
Text570.FontStyle := FontStyle571;
{ .SetGeometry }
Shape567.Geometry := Text570;
{ .AddChild }
Transform565.AddChildren([Shape567]);
Shape572 := TShapeNode.Create;
Appearance573 := TAppearanceNode.Create;
Material574 := TMaterialNode.Create;
Material574.DiffuseColor := Vector3(0,0,1);
{ .SetMaterial }
Appearance573.Material := Material574;
{ .SetAppearance }
Shape572.Appearance := Appearance573;
IndexedFaceSet575 := TIndexedFaceSetNode.Create;
IndexedFaceSet575.SetCoordIndex([0,1,2,3,-1]);
Coordinate576 := TCoordinateNode.Create;
Coordinate576.SetPoint([Vector3(20,1.3833333333333333,-0.1),Vector3(-20,1.3833333333333333,-0.1),Vector3(-20,-1.616666666666667,-0.1),Vector3(20,-1.616666666666667,-0.1)]);
{ .SetCoord }
IndexedFaceSet575.Coord := Coordinate576;
{ .SetGeometry }
Shape572.Geometry := IndexedFaceSet575;
{ .AddChild }
Transform565.AddChildren([Shape572]);
{ .AddChildren }
Group7.AddChildren([Transform565]);
Group7.AddRoute(TouchSensor566.EventTouchtime, Script155.FdTouchtime);
{ .AddX3DRoute }
Group7.AddRoute(Script155.FdChoice, Switch8.FdWhichchoice);
{ .AddX3DRoute }
{ .AddChildren }
Group5.AddChildren([Group7]);
{ .AddGroup }
X3D0.AddChildren([Group5]);
Result := X3D0;
end;

begin
end.
