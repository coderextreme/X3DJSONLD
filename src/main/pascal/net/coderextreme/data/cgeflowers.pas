unit cgeflowers;

interface

uses X3DNodes, CastleInternalNodesUnsupported, X3DFields;

function Createcgeflowers: TX3DRootNode;

implementation

uses CastleVectors;

var
X3D0: TX3DRootNode;
Group14: TGroupNode;
X3DPrototype15: TX3DPrototype;
X3DInterfaceDeclaration16: TX3DInterfaceDeclaration;
MFString17: TMFString;
MFString18: TMFString;
X3DPrototype19: TX3DPrototype;
Transform20: TTransformNode;
Shape21: TShapeNode;
Appearance22: TAppearanceNode;
Material23: TMaterialNode;
ComposedCubeMapTexture24: TComposedCubeMapTextureNode;
ImageTexture25: TImageTextureNode;
ImageTexture26: TImageTextureNode;
ImageTexture27: TImageTextureNode;
ImageTexture28: TImageTextureNode;
ImageTexture29: TImageTextureNode;
ImageTexture30: TImageTextureNode;
ComposedShader31: TComposedShaderNode;
SFNode32: TSFNode;
SFVec3f33: TSFVec3f;
SFFloat34: TSFFloat;
SFFloat35: TSFFloat;
SFFloat36: TSFFloat;
SFFloat37: TSFFloat;
SFFloat38: TSFFloat;
SFFloat39: TSFFloat;
SFFloat40: TSFFloat;
SFFloat41: TSFFloat;
SFFloat42: TSFFloat;
ShaderPart43: TShaderPartNode;
IS44: TIS;
connect45: Tconnect;
ShaderPart46: TShaderPartNode;
IS47: TIS;
connect48: Tconnect;
Sphere49: TSphereNode;
Script50: TScriptNode;
SFVec3f51: TSFVec3f;
SFInt3252: TSFInt32;
SFInt3253: TSFInt32;
SFVec3f54: TSFVec3f;
SFFloat55: TSFFloat;
SFFloat56: TSFFloat;
SFFloat57: TSFFloat;
SFFloat58: TSFFloat;
SFFloat59: TSFFloat;
SFFloat60: TSFFloat;
SFFloat61: TSFFloat;
TimeSensor62: TTimeSensorNode;
NavigationInfo71: TNavigationInfoNode;
Background72: TBackgroundNode;
Group73: TGroupNode;
X3DPrototype74: TX3DPrototypeNode;
MFString75: TMFString;
MFString76: TMFString;
X3DPrototype77: TX3DPrototypeNode;
MFString78: TMFString;
MFString79: TMFString;
X3DPrototype80: TX3DPrototypeNode;
MFString81: TMFString;
MFString82: TMFString;
Group83: TGroupNode;
X3DPrototype84: TX3DPrototypeNode;
MFString85: TMFString;
MFString86: TMFString;
X3DPrototype87: TX3DPrototypeNode;
MFString88: TMFString;
MFString89: TMFString;
X3DPrototype90: TX3DPrototypeNode;
MFString91: TMFString;
MFString92: TMFString;
Group93: TGroupNode;
X3DPrototype94: TX3DPrototypeNode;
MFString95: TMFString;
MFString96: TMFString;
X3DPrototype97: TX3DPrototypeNode;
MFString98: TMFString;
MFString99: TMFString;
X3DPrototype100: TX3DPrototypeNode;
MFString101: TMFString;
MFString102: TMFString;
Group103: TGroupNode;
X3DPrototype104: TX3DPrototypeNode;
MFString105: TMFString;
MFString106: TMFString;
X3DPrototype107: TX3DPrototypeNode;
MFString108: TMFString;
MFString109: TMFString;
X3DPrototype110: TX3DPrototypeNode;
MFString111: TMFString;
MFString112: TMFString;
Group113: TGroupNode;
X3DPrototype114: TX3DPrototypeNode;
MFString115: TMFString;
MFString116: TMFString;
X3DPrototype117: TX3DPrototypeNode;
MFString118: TMFString;
MFString119: TMFString;
X3DPrototype120: TX3DPrototypeNode;
MFString121: TMFString;
MFString122: TMFString;

procedure InitcgeflowersPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Interchange';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 1;
X3D0.Components['Core'] := 2;
{ METHOD .Component }
X3D0.Components['CubeMapTexturing'] := 1;
{ METHOD .Component }
X3D0.Components['Grouping'] := 2;
{ METHOD .Component }
X3D0.Components['Scripting'] := 1;
{ METHOD .Component }
X3D0.Components['Shaders'] := 1;
{ METHOD .Component }
X3D0.Meta['title'] := 'allflowers.x3d';
{ METHOD .Meta }
X3D0.Meta['creator'] := 'John Carlson';
{ METHOD .Meta }
X3D0.Meta['created'] := 'Nov 13 2022';
{ METHOD .Meta }
X3D0.Meta['description'] := '3 Composed Shaders';
{ METHOD .Meta }
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/allflowers.x3d';
{ METHOD .Meta }
X3D0.Meta['modified'] := 'Fri, 13 Nov 2026 21:19:45 GMT';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'Sunrize X3D Editor V2.6.6, https://create3000.github.io/sunrize/';
{ METHOD .Meta }
{ METHOD .Head }
Group14 := TGroupNode.Create;
X3DPrototype15 := TX3DPrototype.Create;
X3DInterfaceDeclaration16 := TX3DInterfaceDeclaration.Create(nil);
MFString17 := TMFString.CreateUndefined(X3DInterfaceDeclaration16, false, 'vertex');
MFString17.Value := '\"../shaders/x_ite_flowers_chromatic.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite_flowers_chromatic.vs\"';
{ METHOD .AddMFString }
X3DInterfaceDeclaration16.AddMFString([MFString17]);
MFString18 := TMFString.CreateUndefined(X3DInterfaceDeclaration16, false, 'fragment');
MFString18.Value := '\"../shaders/x_ite.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs\"';
{ METHOD .AddMFString }
X3DInterfaceDeclaration16.AddMFString([MFString18]);
{ METHOD .AddX3DInterfaceDeclaration }
X3DPrototype15.AddX3DInterfaceDeclaration([X3DInterfaceDeclaration16]);
X3DPrototype19 := TX3DPrototype.Create;
Transform20 := TTransformNode.Create;
Shape21 := TShapeNode.Create;
Appearance22 := TAppearanceNode.Create;
Material23 := TMaterialNode.Create;
Material23.DiffuseColor := Vector3(0.7,0.7,0.7);
Material23.SpecularColor := Vector3(0.5,0.5,0.5);
{ METHOD .SetMaterial }
Appearance22.Material := Material23;
ComposedCubeMapTexture24 := TComposedCubeMapTextureNode.Create;
ImageTexture25 := TImageTextureNode.Create;
ImageTexture25.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
{ METHOD .SetFrontTexture }
ComposedCubeMapTexture24.FrontTexture := ImageTexture25;
ImageTexture26 := TImageTextureNode.Create;
ImageTexture26.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
end;

procedure InitcgeflowersPart1;
begin

{ METHOD .SetBackTexture }
ComposedCubeMapTexture24.BackTexture := ImageTexture26;
ImageTexture27 := TImageTextureNode.Create;
ImageTexture27.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
{ METHOD .SetLeftTexture }
ComposedCubeMapTexture24.LeftTexture := ImageTexture27;
ImageTexture28 := TImageTextureNode.Create;
ImageTexture28.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
{ METHOD .SetRightTexture }
ComposedCubeMapTexture24.RightTexture := ImageTexture28;
ImageTexture29 := TImageTextureNode.Create;
ImageTexture29.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
{ METHOD .SetTopTexture }
ComposedCubeMapTexture24.TopTexture := ImageTexture29;
ImageTexture30 := TImageTextureNode.Create;
ImageTexture30.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
{ METHOD .SetBottomTexture }
ComposedCubeMapTexture24.BottomTexture := ImageTexture30;
{ METHOD .Texture }
Appearance22.Texture := ComposedCubeMapTexture24;
ComposedShader31 := TComposedShaderNode.Create;
ComposedShader31.Language := 'GLSL';
SFNode32 := TSFNode.CreateUndefined(ComposedShader31, false, 'cube');
{ METHOD .AddSFNode }
ComposedShader31.AddSFNode([SFNode32]);
SFVec3f33 := TSFVec3f.CreateUndefined(ComposedShader31, false, 'chromaticDispertion');
SFVec3f33.Value := '0.98 1 1.033';
{ METHOD .AddSFVec3f }
ComposedShader31.AddSFVec3f([SFVec3f33]);
SFFloat34 := TSFFloat.CreateUndefined(ComposedShader31, false, 'bias');
{ METHOD .AddSFFloat }
ComposedShader31.AddSFFloat([SFFloat34]);
SFFloat35 := TSFFloat.CreateUndefined(ComposedShader31, false, 'scale');
{ METHOD .AddSFFloat }
ComposedShader31.AddSFFloat([SFFloat35]);
SFFloat36 := TSFFloat.CreateUndefined(ComposedShader31, false, 'power');
{ METHOD .AddSFFloat }
ComposedShader31.AddSFFloat([SFFloat36]);
SFFloat37 := TSFFloat.CreateUndefined(ComposedShader31, false, 'a');
{ METHOD .AddSFFloat }
ComposedShader31.AddSFFloat([SFFloat37]);
SFFloat38 := TSFFloat.CreateUndefined(ComposedShader31, false, 'b');
{ METHOD .AddSFFloat }
ComposedShader31.AddSFFloat([SFFloat38]);
SFFloat39 := TSFFloat.CreateUndefined(ComposedShader31, false, 'c');
{ METHOD .AddSFFloat }
ComposedShader31.AddSFFloat([SFFloat39]);
SFFloat40 := TSFFloat.CreateUndefined(ComposedShader31, false, 'd');
{ METHOD .AddSFFloat }
ComposedShader31.AddSFFloat([SFFloat40]);
SFFloat41 := TSFFloat.CreateUndefined(ComposedShader31, false, 'tdelta');
{ METHOD .AddSFFloat }
ComposedShader31.AddSFFloat([SFFloat41]);
SFFloat42 := TSFFloat.CreateUndefined(ComposedShader31, false, 'pdelta');
{ METHOD .AddSFFloat }
ComposedShader31.AddSFFloat([SFFloat42]);
ShaderPart43 := TShaderPartNode.Create;
end;

procedure InitcgeflowersPart2;
begin

ShaderPart43.FdType.Value := 'VERTEX';
IS44 := TIS.Create;
connect45 := Tconnect.Create;
connect45.NodeField := 'url';
connect45.ProtoField := 'vertex';
{ METHOD .Connect }
IS44.Connect := connect45;
{ METHOD .IS }
ShaderPart43.IS := IS44;
{ METHOD .Parts }
ComposedShader31.Parts := ShaderPart43;
ShaderPart46 := TShaderPartNode.Create;
ShaderPart46.FdType.Value := 'FRAGMENT';
IS47 := TIS.Create;
connect48 := Tconnect.Create;
connect48.NodeField := 'url';
connect48.ProtoField := 'fragment';
{ METHOD .Connect }
IS47.Connect := connect48;
{ METHOD .IS }
ShaderPart46.IS := IS47;
{ METHOD .Parts }
ComposedShader31.Parts := ShaderPart46;
{ METHOD .AddChildren }
Appearance22.AddChildren([ComposedShader31]);
{ METHOD .Appearance }
Shape21.Appearance := Appearance22;
Sphere49 := TSphereNode.Create;
{ METHOD .Geometry }
Shape21.Geometry := Sphere49;
{ METHOD .FdChildren.Add }
Transform20.FdChildren.Add(Shape21);
Script50 := TScriptNode.Create;
SFVec3f51 := TSFVec3f.CreateUndefined(Script50, false, 'translation');
{ METHOD .Fd.AddCustomField }
Script50.AddCustomField(SFVec3f51);
SFInt3252 := TSFInt32.CreateUndefined(Script50, false, 'choice');
SFInt3252.Value := '0';
{ METHOD .Fd.AddCustomField }
Script50.AddCustomField(SFInt3252);
SFInt3253 := TSFInt32.CreateUndefined(Script50, false, 'j');
SFInt3253.Value := '0';
{ METHOD .Fd.AddCustomField }
Script50.AddCustomField(SFInt3253);
SFVec3f54 := TSFVec3f.CreateUndefined(Script50, false, 'velocity');
{ METHOD .Fd.AddCustomField }
Script50.AddCustomField(SFVec3f54);
SFFloat55 := TSFFloat.CreateUndefined(Script50, false, 'set_fraction');
{ METHOD .Fd.AddCustomField }
Script50.AddCustomField(SFFloat55);
SFFloat56 := TSFFloat.CreateUndefined(Script50, false, 'a');
{ METHOD .Fd.AddCustomField }
Script50.AddCustomField(SFFloat56);
SFFloat57 := TSFFloat.CreateUndefined(Script50, false, 'b');
{ METHOD .Fd.AddCustomField }
Script50.AddCustomField(SFFloat57);
SFFloat58 := TSFFloat.CreateUndefined(Script50, false, 'c');
end;

procedure InitcgeflowersPart3;
begin

{ METHOD .Fd.AddCustomField }
Script50.AddCustomField(SFFloat58);
SFFloat59 := TSFFloat.CreateUndefined(Script50, false, 'd');
{ METHOD .Fd.AddCustomField }
Script50.AddCustomField(SFFloat59);
SFFloat60 := TSFFloat.CreateUndefined(Script50, false, 'tdelta');
{ METHOD .Fd.AddCustomField }
Script50.AddCustomField(SFFloat60);
SFFloat61 := TSFFloat.CreateUndefined(Script50, false, 'pdelta');
{ METHOD .Fd.AddCustomField }
Script50.AddCustomField(SFFloat61);

Script50.SetSourceCode('''castlescript:\n"+
"\n"+
"{ CastleScript cannot call user-defined functions, only built-ins,\n"+
"  so everything is inlined into the two event handlers. }\n"+
"\n"+
"function initialize(timestamp)\n"+
"  (\n"+
"  translation := vector(0.0, 0.0, 0.0);\n"+
"  velocity := vector(random() - 0.5, random() - 0.5, random() - 0.5)\n"+
"  )\n"+
"\n"+
"function set_fraction(value, timestamp)\n"+
"  (\n"+
"  { move, bouncing back to a fresh start when out of the +-10 box }\n"+
"  translation := translation + velocity;\n"+
"  j := 0;\n"+
"  while(j < 3,\n"+
"    (\n"+
"    if(abs(vector_get(translation, 0)) > 10,\n"+
"      (translation := vector(0.0, 0.0, 0.0);\n"+
"         velocity := vector(random() - 0.5, random() - 0.5, random() - 0.5)),\n"+
"    if(abs(vector_get(translation, 1)) > 10,\n"+
"      (translation := vector(0.0, 0.0, 0.0);\n"+
"         velocity := vector(random() - 0.5, random() - 0.5, random() - 0.5)),\n"+
"    if(abs(vector_get(translation, 2)) > 10,\n"+
"      (translation := vector(0.0, 0.0, 0.0);\n"+
"         velocity := vector(random() - 0.5, random() - 0.5, random() - 0.5)),\n"+
"      velocity := vector(\n"+
"        vector_get(velocity, 0) + random() * 0.2 - 0.1,\n"+
"        vector_get(velocity, 1) + random() * 0.2 - 0.1,\n"+
"        vector_get(velocity, 2) + random() * 0.2 - 0.1))));\n"+
"    j := j + 1\n"+
"    )\n"+
"  );\n"+
"\n"+
"  { animate the shader parameters }\n"+
"  choice := floor(random() * 4);\n"+
"  if(choice = 0, a := a + random() * 0.2 - 0.1,\n"+
"  if(choice = 1, b := b + random() * 0.2 - 0.1,\n"+
"  if(choice = 2, c := c + random() * 2 - 1,\n"+
"                 d := d + random() * 2 - 1)));\n"+
"  tdelta := tdelta + 0.5;\n"+
"  pdelta := pdelta + 0.5;\n"+
"  when(a > 1, a := 0.5);\n"+
"  when(b > 1, b := 0.5);\n"+
"  when(c < 1, c := 4);\n"+
"  when(d < 1, d := 4);\n"+
"  when(c > 10, c := 4);\n"+
"  when(d > 10, d := 4)\n"+
"  )''');
{ METHOD .FdChildren.Add }
Transform20.FdChildren.Add(Script50);
TimeSensor62 := TTimeSensorNode.Create;
TimeSensor62.CycleInterval := 5;
TimeSensor62.Loop := True;
{ METHOD .FdChildren.Add }
Transform20.FdChildren.Add(TimeSensor62);
{ METHOD .AddTransform }
X3DPrototype19.AddTransform([Transform20]);
{ Original "TourTime.EventFraction_changed TO Animate.EventSet_fraction }
{ Sample TourTime.EventFraction_changed TO Animate.EventSet_fraction}
X3DPrototype19.AddRoute(TimeSensor62.EventFraction_changed, Script50.set_EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Animate.EventTranslation_changed TO transform.EventSet_translation }
{ Sample Animate.EventTranslation_changed TO transform.EventSet_translation}
X3DPrototype19.AddRoute(Script50.EventTranslation_changed, Transform20.set_EventSet_translation);
{ METHOD .AddX3DROUTE }
{ Original "Animate.a TO shader.a }
{ Sample Animate.a TO shader.a}
X3DPrototype19.AddRoute(Animate.[object Object], ComposedShader31.set_a);
{ METHOD .AddX3DROUTE }
{ Original "Animate.b TO shader.b }
{ Sample Animate.b TO shader.b}
X3DPrototype19.AddRoute(Animate.[object Object], ComposedShader31.set_b);
{ METHOD .AddX3DROUTE }
{ Original "Animate.c TO shader.c }
{ Sample Animate.c TO shader.c}
X3DPrototype19.AddRoute(Animate.[object Object], ComposedShader31.set_c);
{ METHOD .AddX3DROUTE }
{ Original "Animate.d TO shader.d }
{ Sample Animate.d TO shader.d}
X3DPrototype19.AddRoute(Animate.[object Object], ComposedShader31.set_d);
{ METHOD .AddX3DROUTE }
{ Original "Animate.tdelta TO shader.tdelta }
{ Sample Animate.tdelta TO shader.tdelta}
X3DPrototype19.AddRoute(Animate.[object Object], ComposedShader31.set_tdelta);
{ METHOD .AddX3DROUTE }
{ Original "Animate.pdelta TO shader.pdelta }
{ Sample Animate.pdelta TO shader.pdelta}
X3DPrototype19.AddRoute(Animate.[object Object], ComposedShader31.set_pdelta);
{ METHOD .AddX3DROUTE }
{ METHOD .AddX3DPrototype }
X3DPrototype15.AddX3DPrototype([X3DPrototype19]);
{ METHOD .AddX3DPrototype }
Group14.AddX3DPrototype([X3DPrototype15]);
NavigationInfo71 := TNavigationInfoNode.Create;
{ METHOD .FdChildren.Add }
Group14.FdChildren.Add(NavigationInfo71);
Background72 := TBackgroundNode.Create;
Background72.SetFrontUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
Background72.SetBackUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
Background72.SetLeftUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
Background72.SetRightUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
Background72.SetTopUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
Background72.SetBottomUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
{ METHOD .FdChildren.Add }
Group14.FdChildren.Add(Background72);
Group73 := TGroupNode.Create;
X3DPrototype74 := TX3DPrototypeNode.Create;
MFString75 := TMFString.CreateUndefined(X3DPrototype74, false, 'vertex');
MFString75.Value := '\"../shaders/x_ite_flowers_chromatic.vs\"';
{ METHOD .AddMFString }
X3DPrototype74.AddMFString([MFString75]);
MFString76 := TMFString.CreateUndefined(X3DPrototype74, false, 'fragment');
MFString76.Value := '\"../shaders/x_ite.fs\"';
{ METHOD .AddMFString }
X3DPrototype74.AddMFString([MFString76]);
{ METHOD .AddX3DPrototype }
Group73.AddX3DPrototype([X3DPrototype74]);
X3DPrototype77 := TX3DPrototypeNode.Create;
MFString78 := TMFString.CreateUndefined(X3DPrototype77, false, 'vertex');
MFString78.Value := '\"../shaders/x_ite_flowers_chromatic.vs\"';
{ METHOD .AddMFString }
X3DPrototype77.AddMFString([MFString78]);
MFString79 := TMFString.CreateUndefined(X3DPrototype77, false, 'fragment');
MFString79.Value := '\"../shaders/x_ite.fs\"';
{ METHOD .AddMFString }
X3DPrototype77.AddMFString([MFString79]);
{ METHOD .AddX3DPrototype }
Group73.AddX3DPrototype([X3DPrototype77]);
X3DPrototype80 := TX3DPrototypeNode.Create;
MFString81 := TMFString.CreateUndefined(X3DPrototype80, false, 'vertex');
MFString81.Value := '\"../shaders/x_ite_flowers_chromatic.vs\"';
{ METHOD .AddMFString }
X3DPrototype80.AddMFString([MFString81]);
MFString82 := TMFString.CreateUndefined(X3DPrototype80, false, 'fragment');
MFString82.Value := '\"../shaders/x_ite.fs\"';
{ METHOD .AddMFString }
X3DPrototype80.AddMFString([MFString82]);
{ METHOD .AddX3DPrototype }
Group73.AddX3DPrototype([X3DPrototype80]);
{ METHOD .FdChildren.Add }
Group14.FdChildren.Add(Group73);
Group83 := TGroupNode.Create;
X3DPrototype84 := TX3DPrototypeNode.Create;
MFString85 := TMFString.CreateUndefined(X3DPrototype84, false, 'vertex');
MFString85.Value := '\"../shaders/x3dom_flowers_chromatic.vs\"';
{ METHOD .AddMFString }
X3DPrototype84.AddMFString([MFString85]);
MFString86 := TMFString.CreateUndefined(X3DPrototype84, false, 'fragment');
MFString86.Value := '\"../shaders/common.fs\"';
{ METHOD .AddMFString }
X3DPrototype84.AddMFString([MFString86]);
{ METHOD .AddX3DPrototype }
Group83.AddX3DPrototype([X3DPrototype84]);
X3DPrototype87 := TX3DPrototypeNode.Create;
MFString88 := TMFString.CreateUndefined(X3DPrototype87, false, 'vertex');
MFString88.Value := '\"../shaders/x3dom_flowers_chromatic.vs\"';
{ METHOD .AddMFString }
X3DPrototype87.AddMFString([MFString88]);
MFString89 := TMFString.CreateUndefined(X3DPrototype87, false, 'fragment');
MFString89.Value := '\"../shaders/common.fs\"';
{ METHOD .AddMFString }
X3DPrototype87.AddMFString([MFString89]);
{ METHOD .AddX3DPrototype }
Group83.AddX3DPrototype([X3DPrototype87]);
X3DPrototype90 := TX3DPrototypeNode.Create;
MFString91 := TMFString.CreateUndefined(X3DPrototype90, false, 'vertex');
MFString91.Value := '\"../shaders/x3dom_flowers_chromatic.vs\"';
{ METHOD .AddMFString }
X3DPrototype90.AddMFString([MFString91]);
MFString92 := TMFString.CreateUndefined(X3DPrototype90, false, 'fragment');
MFString92.Value := '\"../shaders/common.fs\"';
{ METHOD .AddMFString }
X3DPrototype90.AddMFString([MFString92]);
{ METHOD .AddX3DPrototype }
Group83.AddX3DPrototype([X3DPrototype90]);
{ METHOD .FdChildren.Add }
Group14.FdChildren.Add(Group83);
Group93 := TGroupNode.Create;
X3DPrototype94 := TX3DPrototypeNode.Create;
MFString95 := TMFString.CreateUndefined(X3DPrototype94, false, 'vertex');
MFString95.Value := '\"../shaders/gl_flowers_plain.vs\"';
{ METHOD .AddMFString }
X3DPrototype94.AddMFString([MFString95]);
MFString96 := TMFString.CreateUndefined(X3DPrototype94, false, 'fragment');
MFString96.Value := '\"../shaders/plain.fs\"';
{ METHOD .AddMFString }
X3DPrototype94.AddMFString([MFString96]);
{ METHOD .AddX3DPrototype }
Group93.AddX3DPrototype([X3DPrototype94]);
X3DPrototype97 := TX3DPrototypeNode.Create;
MFString98 := TMFString.CreateUndefined(X3DPrototype97, false, 'vertex');
MFString98.Value := '\"../shaders/gl_flowers_plain.vs\"';
{ METHOD .AddMFString }
X3DPrototype97.AddMFString([MFString98]);
MFString99 := TMFString.CreateUndefined(X3DPrototype97, false, 'fragment');
MFString99.Value := '\"../shaders/plain.fs\"';
{ METHOD .AddMFString }
X3DPrototype97.AddMFString([MFString99]);
{ METHOD .AddX3DPrototype }
Group93.AddX3DPrototype([X3DPrototype97]);
X3DPrototype100 := TX3DPrototypeNode.Create;
MFString101 := TMFString.CreateUndefined(X3DPrototype100, false, 'vertex');
MFString101.Value := '\"../shaders/gl_flowers_plain.vs\"';
{ METHOD .AddMFString }
X3DPrototype100.AddMFString([MFString101]);
MFString102 := TMFString.CreateUndefined(X3DPrototype100, false, 'fragment');
MFString102.Value := '\"../shaders/plain.fs\"';
{ METHOD .AddMFString }
X3DPrototype100.AddMFString([MFString102]);
{ METHOD .AddX3DPrototype }
Group93.AddX3DPrototype([X3DPrototype100]);
{ METHOD .FdChildren.Add }
Group14.FdChildren.Add(Group93);
Group103 := TGroupNode.Create;
X3DPrototype104 := TX3DPrototypeNode.Create;
MFString105 := TMFString.CreateUndefined(X3DPrototype104, false, 'vertex');
MFString105.Value := '\"../shaders/pc_flowers.vs\"';
{ METHOD .AddMFString }
X3DPrototype104.AddMFString([MFString105]);
MFString106 := TMFString.CreateUndefined(X3DPrototype104, false, 'fragment');
MFString106.Value := '\"../shaders/pc_flowers.fs\"';
{ METHOD .AddMFString }
X3DPrototype104.AddMFString([MFString106]);
{ METHOD .AddX3DPrototype }
Group103.AddX3DPrototype([X3DPrototype104]);
X3DPrototype107 := TX3DPrototypeNode.Create;
MFString108 := TMFString.CreateUndefined(X3DPrototype107, false, 'vertex');
MFString108.Value := '\"../shaders/pc_flowers.vs\"';
{ METHOD .AddMFString }
X3DPrototype107.AddMFString([MFString108]);
MFString109 := TMFString.CreateUndefined(X3DPrototype107, false, 'fragment');
MFString109.Value := '\"../shaders/pc_flowers.fs\"';
{ METHOD .AddMFString }
X3DPrototype107.AddMFString([MFString109]);
{ METHOD .AddX3DPrototype }
Group103.AddX3DPrototype([X3DPrototype107]);
X3DPrototype110 := TX3DPrototypeNode.Create;
MFString111 := TMFString.CreateUndefined(X3DPrototype110, false, 'vertex');
MFString111.Value := '\"../shaders/pc_flowers.vs\"';
{ METHOD .AddMFString }
X3DPrototype110.AddMFString([MFString111]);
MFString112 := TMFString.CreateUndefined(X3DPrototype110, false, 'fragment');
MFString112.Value := '\"../shaders/pc_flowers.fs\"';
{ METHOD .AddMFString }
X3DPrototype110.AddMFString([MFString112]);
{ METHOD .AddX3DPrototype }
Group103.AddX3DPrototype([X3DPrototype110]);
{ METHOD .FdChildren.Add }
Group14.FdChildren.Add(Group103);
Group113 := TGroupNode.Create;
X3DPrototype114 := TX3DPrototypeNode.Create;
MFString115 := TMFString.CreateUndefined(X3DPrototype114, false, 'vertex');
MFString115.Value := '\"../shaders/castle_flowers_chromatic.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/castle_flowers_chromatic.vs\"';
{ METHOD .AddMFString }
X3DPrototype114.AddMFString([MFString115]);
MFString116 := TMFString.CreateUndefined(X3DPrototype114, false, 'fragment');
MFString116.Value := '\"../shaders/castle.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.fs\"';
{ METHOD .AddMFString }
X3DPrototype114.AddMFString([MFString116]);
{ METHOD .AddX3DPrototype }
Group113.AddX3DPrototype([X3DPrototype114]);
X3DPrototype117 := TX3DPrototypeNode.Create;
MFString118 := TMFString.CreateUndefined(X3DPrototype117, false, 'vertex');
MFString118.Value := '\"../shaders/castle_flowers_chromatic.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/castle_flowers_chromatic.vs\"';
{ METHOD .AddMFString }
X3DPrototype117.AddMFString([MFString118]);
MFString119 := TMFString.CreateUndefined(X3DPrototype117, false, 'fragment');
MFString119.Value := '\"../shaders/castle.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.fs\"';
{ METHOD .AddMFString }
X3DPrototype117.AddMFString([MFString119]);
{ METHOD .AddX3DPrototype }
Group113.AddX3DPrototype([X3DPrototype117]);
X3DPrototype120 := TX3DPrototypeNode.Create;
MFString121 := TMFString.CreateUndefined(X3DPrototype120, false, 'vertex');
MFString121.Value := '\"../shaders/castle_flowers_chromatic.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/castle_flowers_chromatic.vs\"';
{ METHOD .AddMFString }
X3DPrototype120.AddMFString([MFString121]);
MFString122 := TMFString.CreateUndefined(X3DPrototype120, false, 'fragment');
MFString122.Value := '\"../shaders/castle.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.fs\"';
{ METHOD .AddMFString }
X3DPrototype120.AddMFString([MFString122]);
{ METHOD .AddX3DPrototype }
Group113.AddX3DPrototype([X3DPrototype120]);
{ METHOD .FdChildren.Add }
Group14.FdChildren.Add(Group113);
{ METHOD .AddGroup }
X3D0.AddChildren([Group14]);
end;

function Createcgeflowers: TX3DRootNode;
begin
InitcgeflowersPart0;
InitcgeflowersPart1;
InitcgeflowersPart2;
InitcgeflowersPart3;
Result := X3D0;
end;

begin
end.
