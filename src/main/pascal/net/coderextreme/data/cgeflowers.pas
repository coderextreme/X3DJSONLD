unit cgeflowers;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

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
ShaderPart45: TShaderPartNode;
Sphere47: TSphereNode;
Script48: TScriptNode;
SFVec3f49: TSFVec3f;
SFInt3250: TSFInt32;
SFInt3251: TSFInt32;
SFVec3f52: TSFVec3f;
SFFloat53: TSFFloat;
SFFloat54: TSFFloat;
SFFloat55: TSFFloat;
SFFloat56: TSFFloat;
SFFloat57: TSFFloat;
SFFloat58: TSFFloat;
SFFloat59: TSFFloat;
TimeSensor60: TTimeSensorNode;
NavigationInfo69: TNavigationInfoNode;
Background70: TBackgroundNode;
Group71: TGroupNode;
X3DPrototype72: TX3DPrototypeNode;
MFString73: TMFString;
MFString74: TMFString;
X3DPrototype75: TX3DPrototypeNode;
MFString76: TMFString;
MFString77: TMFString;
X3DPrototype78: TX3DPrototypeNode;
MFString79: TMFString;
MFString80: TMFString;
Group81: TGroupNode;
X3DPrototype82: TX3DPrototypeNode;
MFString83: TMFString;
MFString84: TMFString;
X3DPrototype85: TX3DPrototypeNode;
MFString86: TMFString;
MFString87: TMFString;
X3DPrototype88: TX3DPrototypeNode;
MFString89: TMFString;
MFString90: TMFString;
Group91: TGroupNode;
X3DPrototype92: TX3DPrototypeNode;
MFString93: TMFString;
MFString94: TMFString;
X3DPrototype95: TX3DPrototypeNode;
MFString96: TMFString;
MFString97: TMFString;
X3DPrototype98: TX3DPrototypeNode;
MFString99: TMFString;
MFString100: TMFString;
Group101: TGroupNode;
X3DPrototype102: TX3DPrototypeNode;
MFString103: TMFString;
MFString104: TMFString;
X3DPrototype105: TX3DPrototypeNode;
MFString106: TMFString;
MFString107: TMFString;
X3DPrototype108: TX3DPrototypeNode;
MFString109: TMFString;
MFString110: TMFString;
Group111: TGroupNode;
X3DPrototype112: TX3DPrototypeNode;
MFString113: TMFString;
MFString114: TMFString;
X3DPrototype115: TX3DPrototypeNode;
MFString116: TMFString;
MFString117: TMFString;
X3DPrototype118: TX3DPrototypeNode;
MFString119: TMFString;
MFString120: TMFString;

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
Group14 := TGroupNode.Create;;
X3DPrototype15 := TX3DPrototype.Create;;
X3DInterfaceDeclaration16 := TX3DInterfaceDeclaration.Create(nil);;
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
X3DPrototype19 := TX3DPrototype.Create;;
Transform20 := TTransformNode.Create;;
Shape21 := TShapeNode.Create;;
Appearance22 := TAppearanceNode.Create;;
Material23 := TMaterialNode.Create;;
Material23.DiffuseColor := Vector3(0.7,0.7,0.7);
end;

procedure InitcgeflowersPart1;
begin

Material23.SpecularColor := Vector3(0.5,0.5,0.5);
{ METHOD .SetMaterial }
Appearance22.Material := Material23;
ComposedCubeMapTexture24 := TComposedCubeMapTextureNode.Create;;
ImageTexture25 := TImageTextureNode.Create;;
ImageTexture25.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
{ METHOD .FdFrontTexture.Set }
ComposedCubeMapTexture24.FdFrontTexture.Set(ImageTexture25);
ImageTexture26 := TImageTextureNode.Create;;
ImageTexture26.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
{ METHOD .FdBackTexture.Set }
ComposedCubeMapTexture24.FdBackTexture.Set(ImageTexture26);
ImageTexture27 := TImageTextureNode.Create;;
ImageTexture27.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
{ METHOD .FdLeftTexture.Set }
ComposedCubeMapTexture24.FdLeftTexture.Set(ImageTexture27);
ImageTexture28 := TImageTextureNode.Create;;
ImageTexture28.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
{ METHOD .FdRightTexture.Set }
ComposedCubeMapTexture24.FdRightTexture.Set(ImageTexture28);
ImageTexture29 := TImageTextureNode.Create;;
ImageTexture29.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
{ METHOD .FdTopTexture.Set }
ComposedCubeMapTexture24.FdTopTexture.Set(ImageTexture29);
ImageTexture30 := TImageTextureNode.Create;;
ImageTexture30.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
{ METHOD .FdBottomTexture.Set }
ComposedCubeMapTexture24.FdBottomTexture.Set(ImageTexture30);
{ METHOD .Texture }
{ METHOD.SET .Texture }
Appearance22.Texture := ComposedCubeMapTexture24;
ComposedShader31 := TComposedShaderNode.Create;;
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
end;

procedure InitcgeflowersPart2;
begin

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
ShaderPart43 := TShaderPartNode.Create;;
ShaderPart43.FdType.Value := 'VERTEX';
{ METHOD .Parts }
{ METHOD.SET .Parts }
ComposedShader31.Parts := ShaderPart43;
ShaderPart45 := TShaderPartNode.Create;;
ShaderPart45.FdType.Value := 'FRAGMENT';
{ METHOD .Parts }
{ METHOD.SET .Parts }
ComposedShader31.Parts := ShaderPart45;
{ METHOD .AddChildren }
Appearance22.AddChildren([ComposedShader31]);
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape21.Appearance := Appearance22;
Sphere47 := TSphereNode.Create;;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape21.Geometry := Sphere47;
{ METHOD .FdChildren.Add }
Transform20.FdChildren.Add(Shape21);
Script48 := TScriptNode.Create;;
SFVec3f49 := TSFVec3f.CreateUndefined(Script48, false, 'translation');
{ METHOD .Fd.AddCustomField }
Script48.AddCustomField(SFVec3f49);
SFInt3250 := TSFInt32.CreateUndefined(Script48, false, 'choice');
SFInt3250.Value := '0';
{ METHOD .Fd.AddCustomField }
Script48.AddCustomField(SFInt3250);
SFInt3251 := TSFInt32.CreateUndefined(Script48, false, 'j');
SFInt3251.Value := '0';
{ METHOD .Fd.AddCustomField }
Script48.AddCustomField(SFInt3251);
SFVec3f52 := TSFVec3f.CreateUndefined(Script48, false, 'velocity');
end;

procedure InitcgeflowersPart3;
begin

{ METHOD .Fd.AddCustomField }
Script48.AddCustomField(SFVec3f52);
SFFloat53 := TSFFloat.CreateUndefined(Script48, false, 'set_fraction');
{ METHOD .Fd.AddCustomField }
Script48.AddCustomField(SFFloat53);
SFFloat54 := TSFFloat.CreateUndefined(Script48, false, 'a');
{ METHOD .Fd.AddCustomField }
Script48.AddCustomField(SFFloat54);
SFFloat55 := TSFFloat.CreateUndefined(Script48, false, 'b');
{ METHOD .Fd.AddCustomField }
Script48.AddCustomField(SFFloat55);
SFFloat56 := TSFFloat.CreateUndefined(Script48, false, 'c');
{ METHOD .Fd.AddCustomField }
Script48.AddCustomField(SFFloat56);
SFFloat57 := TSFFloat.CreateUndefined(Script48, false, 'd');
{ METHOD .Fd.AddCustomField }
Script48.AddCustomField(SFFloat57);
SFFloat58 := TSFFloat.CreateUndefined(Script48, false, 'tdelta');
{ METHOD .Fd.AddCustomField }
Script48.AddCustomField(SFFloat58);
SFFloat59 := TSFFloat.CreateUndefined(Script48, false, 'pdelta');
{ METHOD .Fd.AddCustomField }
Script48.AddCustomField(SFFloat59);

Script48.SetSourceCode('''castlescript:\n"+
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
Transform20.FdChildren.Add(Script48);
TimeSensor60 := TTimeSensorNode.Create;;
TimeSensor60.CycleInterval := 5;
TimeSensor60.Loop := True;
{ METHOD .FdChildren.Add }
Transform20.FdChildren.Add(TimeSensor60);
{ METHOD .AddTransform }
X3DPrototype19.AddTransform([Transform20]);
{ Original "TourTime.EventFraction_changed TO Animate.EventSet_fraction }
{ Sample TourTime.EventFraction_changed TO Animate.EventSet_fraction}
X3DPrototype19.AddRoute(TimeSensor60.EventFraction_changed, Script48.EventSet_fraction);
{ METHOD .AddX3DROUTE }
{ Original "Animate.EventTranslation_changed TO transform.FdTranslation.EventIn }
{ Sample Animate.EventTranslation_changed TO transform.FdTranslation.EventIn}
X3DPrototype19.AddRoute(Script48.EventTranslation_changed, Transform20.FdTranslation.EventIn);
{ METHOD .AddX3DROUTE }
{ Original "Animate.a TO shader.a }
{ Sample Animate.a TO shader.a}
X3DPrototype19.AddRoute(Animate.undefined, ComposedShader31.a);
{ METHOD .AddX3DROUTE }
{ Original "Animate.b TO shader.b }
{ Sample Animate.b TO shader.b}
X3DPrototype19.AddRoute(Animate.undefined, ComposedShader31.b);
{ METHOD .AddX3DROUTE }
{ Original "Animate.c TO shader.c }
{ Sample Animate.c TO shader.c}
X3DPrototype19.AddRoute(Animate.undefined, ComposedShader31.c);
{ METHOD .AddX3DROUTE }
{ Original "Animate.d TO shader.d }
{ Sample Animate.d TO shader.d}
X3DPrototype19.AddRoute(Animate.undefined, ComposedShader31.d);
{ METHOD .AddX3DROUTE }
{ Original "Animate.tdelta TO shader.tdelta }
{ Sample Animate.tdelta TO shader.tdelta}
X3DPrototype19.AddRoute(Animate.undefined, ComposedShader31.tdelta);
{ METHOD .AddX3DROUTE }
{ Original "Animate.pdelta TO shader.pdelta }
{ Sample Animate.pdelta TO shader.pdelta}
X3DPrototype19.AddRoute(Animate.undefined, ComposedShader31.pdelta);
{ METHOD .AddX3DROUTE }
{ METHOD .AddX3DPrototype }
X3DPrototype15.AddX3DPrototype([X3DPrototype19]);
{ METHOD .AddX3DPrototype }
Group14.AddX3DPrototype([X3DPrototype15]);
NavigationInfo69 := TNavigationInfoNode.Create;;
{ METHOD .FdChildren.Add }
Group14.FdChildren.Add(NavigationInfo69);
Background70 := TBackgroundNode.Create;;
Background70.SetFrontUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
Background70.SetBackUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
Background70.SetLeftUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
Background70.SetRightUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
Background70.SetTopUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
Background70.SetBottomUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png','https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
{ METHOD .FdChildren.Add }
Group14.FdChildren.Add(Background70);
Group71 := TGroupNode.Create;;
X3DPrototype72 := TX3DPrototypeNode;
MFString73 := TMFString.CreateUndefined(X3DPrototype72, false, 'vertex');
MFString73.Value := '\"../shaders/x_ite_flowers_chromatic.vs\"';
{ METHOD .AddMFString }
X3DPrototype72.AddMFString([MFString73]);
MFString74 := TMFString.CreateUndefined(X3DPrototype72, false, 'fragment');
MFString74.Value := '\"../shaders/x_ite.fs\"';
{ METHOD .AddMFString }
X3DPrototype72.AddMFString([MFString74]);
{ METHOD .AddX3DPrototype }
Group71.AddX3DPrototype([X3DPrototype72]);
X3DPrototype75 := TX3DPrototypeNode;
MFString76 := TMFString.CreateUndefined(X3DPrototype75, false, 'vertex');
MFString76.Value := '\"../shaders/x_ite_flowers_chromatic.vs\"';
{ METHOD .AddMFString }
X3DPrototype75.AddMFString([MFString76]);
MFString77 := TMFString.CreateUndefined(X3DPrototype75, false, 'fragment');
MFString77.Value := '\"../shaders/x_ite.fs\"';
{ METHOD .AddMFString }
X3DPrototype75.AddMFString([MFString77]);
{ METHOD .AddX3DPrototype }
Group71.AddX3DPrototype([X3DPrototype75]);
X3DPrototype78 := TX3DPrototypeNode;
MFString79 := TMFString.CreateUndefined(X3DPrototype78, false, 'vertex');
MFString79.Value := '\"../shaders/x_ite_flowers_chromatic.vs\"';
{ METHOD .AddMFString }
X3DPrototype78.AddMFString([MFString79]);
MFString80 := TMFString.CreateUndefined(X3DPrototype78, false, 'fragment');
MFString80.Value := '\"../shaders/x_ite.fs\"';
{ METHOD .AddMFString }
X3DPrototype78.AddMFString([MFString80]);
{ METHOD .AddX3DPrototype }
Group71.AddX3DPrototype([X3DPrototype78]);
{ METHOD .FdChildren.Add }
Group14.FdChildren.Add(Group71);
Group81 := TGroupNode.Create;;
X3DPrototype82 := TX3DPrototypeNode;
MFString83 := TMFString.CreateUndefined(X3DPrototype82, false, 'vertex');
MFString83.Value := '\"../shaders/x3dom_flowers_chromatic.vs\"';
{ METHOD .AddMFString }
X3DPrototype82.AddMFString([MFString83]);
MFString84 := TMFString.CreateUndefined(X3DPrototype82, false, 'fragment');
MFString84.Value := '\"../shaders/common.fs\"';
{ METHOD .AddMFString }
X3DPrototype82.AddMFString([MFString84]);
{ METHOD .AddX3DPrototype }
Group81.AddX3DPrototype([X3DPrototype82]);
X3DPrototype85 := TX3DPrototypeNode;
MFString86 := TMFString.CreateUndefined(X3DPrototype85, false, 'vertex');
MFString86.Value := '\"../shaders/x3dom_flowers_chromatic.vs\"';
{ METHOD .AddMFString }
X3DPrototype85.AddMFString([MFString86]);
MFString87 := TMFString.CreateUndefined(X3DPrototype85, false, 'fragment');
MFString87.Value := '\"../shaders/common.fs\"';
{ METHOD .AddMFString }
X3DPrototype85.AddMFString([MFString87]);
{ METHOD .AddX3DPrototype }
Group81.AddX3DPrototype([X3DPrototype85]);
X3DPrototype88 := TX3DPrototypeNode;
MFString89 := TMFString.CreateUndefined(X3DPrototype88, false, 'vertex');
MFString89.Value := '\"../shaders/x3dom_flowers_chromatic.vs\"';
{ METHOD .AddMFString }
X3DPrototype88.AddMFString([MFString89]);
MFString90 := TMFString.CreateUndefined(X3DPrototype88, false, 'fragment');
MFString90.Value := '\"../shaders/common.fs\"';
{ METHOD .AddMFString }
X3DPrototype88.AddMFString([MFString90]);
{ METHOD .AddX3DPrototype }
Group81.AddX3DPrototype([X3DPrototype88]);
{ METHOD .FdChildren.Add }
Group14.FdChildren.Add(Group81);
Group91 := TGroupNode.Create;;
X3DPrototype92 := TX3DPrototypeNode;
MFString93 := TMFString.CreateUndefined(X3DPrototype92, false, 'vertex');
MFString93.Value := '\"../shaders/gl_flowers_plain.vs\"';
{ METHOD .AddMFString }
X3DPrototype92.AddMFString([MFString93]);
MFString94 := TMFString.CreateUndefined(X3DPrototype92, false, 'fragment');
MFString94.Value := '\"../shaders/plain.fs\"';
{ METHOD .AddMFString }
X3DPrototype92.AddMFString([MFString94]);
{ METHOD .AddX3DPrototype }
Group91.AddX3DPrototype([X3DPrototype92]);
X3DPrototype95 := TX3DPrototypeNode;
MFString96 := TMFString.CreateUndefined(X3DPrototype95, false, 'vertex');
MFString96.Value := '\"../shaders/gl_flowers_plain.vs\"';
{ METHOD .AddMFString }
X3DPrototype95.AddMFString([MFString96]);
MFString97 := TMFString.CreateUndefined(X3DPrototype95, false, 'fragment');
MFString97.Value := '\"../shaders/plain.fs\"';
{ METHOD .AddMFString }
X3DPrototype95.AddMFString([MFString97]);
{ METHOD .AddX3DPrototype }
Group91.AddX3DPrototype([X3DPrototype95]);
X3DPrototype98 := TX3DPrototypeNode;
MFString99 := TMFString.CreateUndefined(X3DPrototype98, false, 'vertex');
MFString99.Value := '\"../shaders/gl_flowers_plain.vs\"';
{ METHOD .AddMFString }
X3DPrototype98.AddMFString([MFString99]);
MFString100 := TMFString.CreateUndefined(X3DPrototype98, false, 'fragment');
MFString100.Value := '\"../shaders/plain.fs\"';
{ METHOD .AddMFString }
X3DPrototype98.AddMFString([MFString100]);
{ METHOD .AddX3DPrototype }
Group91.AddX3DPrototype([X3DPrototype98]);
{ METHOD .FdChildren.Add }
Group14.FdChildren.Add(Group91);
Group101 := TGroupNode.Create;;
X3DPrototype102 := TX3DPrototypeNode;
MFString103 := TMFString.CreateUndefined(X3DPrototype102, false, 'vertex');
MFString103.Value := '\"../shaders/pc_flowers.vs\"';
{ METHOD .AddMFString }
X3DPrototype102.AddMFString([MFString103]);
MFString104 := TMFString.CreateUndefined(X3DPrototype102, false, 'fragment');
MFString104.Value := '\"../shaders/pc_flowers.fs\"';
{ METHOD .AddMFString }
X3DPrototype102.AddMFString([MFString104]);
{ METHOD .AddX3DPrototype }
Group101.AddX3DPrototype([X3DPrototype102]);
X3DPrototype105 := TX3DPrototypeNode;
MFString106 := TMFString.CreateUndefined(X3DPrototype105, false, 'vertex');
MFString106.Value := '\"../shaders/pc_flowers.vs\"';
{ METHOD .AddMFString }
X3DPrototype105.AddMFString([MFString106]);
MFString107 := TMFString.CreateUndefined(X3DPrototype105, false, 'fragment');
MFString107.Value := '\"../shaders/pc_flowers.fs\"';
{ METHOD .AddMFString }
X3DPrototype105.AddMFString([MFString107]);
{ METHOD .AddX3DPrototype }
Group101.AddX3DPrototype([X3DPrototype105]);
X3DPrototype108 := TX3DPrototypeNode;
MFString109 := TMFString.CreateUndefined(X3DPrototype108, false, 'vertex');
MFString109.Value := '\"../shaders/pc_flowers.vs\"';
{ METHOD .AddMFString }
X3DPrototype108.AddMFString([MFString109]);
MFString110 := TMFString.CreateUndefined(X3DPrototype108, false, 'fragment');
MFString110.Value := '\"../shaders/pc_flowers.fs\"';
{ METHOD .AddMFString }
X3DPrototype108.AddMFString([MFString110]);
{ METHOD .AddX3DPrototype }
Group101.AddX3DPrototype([X3DPrototype108]);
{ METHOD .FdChildren.Add }
Group14.FdChildren.Add(Group101);
Group111 := TGroupNode.Create;;
X3DPrototype112 := TX3DPrototypeNode;
MFString113 := TMFString.CreateUndefined(X3DPrototype112, false, 'vertex');
MFString113.Value := '\"../shaders/castle_flowers_chromatic.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/castle_flowers_chromatic.vs\"';
{ METHOD .AddMFString }
X3DPrototype112.AddMFString([MFString113]);
MFString114 := TMFString.CreateUndefined(X3DPrototype112, false, 'fragment');
MFString114.Value := '\"../shaders/castle.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.fs\"';
{ METHOD .AddMFString }
X3DPrototype112.AddMFString([MFString114]);
{ METHOD .AddX3DPrototype }
Group111.AddX3DPrototype([X3DPrototype112]);
X3DPrototype115 := TX3DPrototypeNode;
MFString116 := TMFString.CreateUndefined(X3DPrototype115, false, 'vertex');
MFString116.Value := '\"../shaders/castle_flowers_chromatic.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/castle_flowers_chromatic.vs\"';
{ METHOD .AddMFString }
X3DPrototype115.AddMFString([MFString116]);
MFString117 := TMFString.CreateUndefined(X3DPrototype115, false, 'fragment');
MFString117.Value := '\"../shaders/castle.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.fs\"';
{ METHOD .AddMFString }
X3DPrototype115.AddMFString([MFString117]);
{ METHOD .AddX3DPrototype }
Group111.AddX3DPrototype([X3DPrototype115]);
X3DPrototype118 := TX3DPrototypeNode;
MFString119 := TMFString.CreateUndefined(X3DPrototype118, false, 'vertex');
MFString119.Value := '\"../shaders/castle_flowers_chromatic.vs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/castle_flowers_chromatic.vs\"';
{ METHOD .AddMFString }
X3DPrototype118.AddMFString([MFString119]);
MFString120 := TMFString.CreateUndefined(X3DPrototype118, false, 'fragment');
MFString120.Value := '\"../shaders/castle.fs\" \"https://coderextreme.net/X3DJSONLD/src/main/shaders/castle.fs\"';
{ METHOD .AddMFString }
X3DPrototype118.AddMFString([MFString120]);
{ METHOD .AddX3DPrototype }
Group111.AddX3DPrototype([X3DPrototype118]);
{ METHOD .FdChildren.Add }
Group14.FdChildren.Add(Group111);
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
