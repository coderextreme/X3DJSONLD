unit flowerproto;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

function Createflowerproto: TX3DRootNode;

implementation

uses Classes, SysUtils, X3DLoad, CastleVectors;

function CreateEmptyPrototype(const AName: String): TX3DPrototype;
var
  Stream: TStringStream;
  TempRoot: TX3DRootNode;
  CopyState: TX3DNodeDeepCopyState;
begin
  Stream := TStringStream.Create('#X3D V4.0 utf8' + LineEnding + 'PROTO ' + AName + ' [] {}');
  try
    TempRoot := LoadNode(Stream, '', 'model/x3d+vrml');
    try
      CopyState := TX3DNodeDeepCopyState.Create;
      try
        Result := TempRoot.Prototypes[0].DeepCopy(CopyState) as TX3DPrototype;
      finally
        FreeAndNil(CopyState);
      end;
    finally
      FreeAndNil(TempRoot);
    end;
  finally
    FreeAndNil(Stream);
  end;
end;

var
  X3D0: TX3DRootNode;
  Group16: TGroupNode;
  ProtoDeclare17: TX3DPrototype;
  FieldDecl19: TX3DInterfaceDeclaration;
  FieldVal19: TX3DEvent;
  FieldDecl20: TX3DInterfaceDeclaration;
  FieldVal20: TX3DEvent;
  Transform22: TTransformNode;
  Shape23: TShapeNode;
  Appearance24: TAppearanceNode;
  Material25: TMaterialNode;
  ComposedCubeMapTexture26: TComposedCubeMapTextureNode;
  ImageTexture27: TImageTextureNode;
  ImageTexture28: TImageTextureNode;
  ImageTexture29: TImageTextureNode;
  ImageTexture30: TImageTextureNode;
  ImageTexture31: TImageTextureNode;
  ImageTexture32: TImageTextureNode;
  ComposedShader33: TComposedShaderNode;
  FieldVal34: TX3DEvent;
  FieldVal36: TSFVec3f;
  FieldVal37: TX3DEvent;
  FieldVal38: TX3DEvent;
  FieldVal39: TX3DEvent;
  FieldVal40: TX3DEvent;
  FieldVal41: TX3DEvent;
  FieldVal42: TX3DEvent;
  FieldVal43: TX3DEvent;
  FieldVal44: TX3DEvent;
  FieldVal45: TX3DEvent;
  ShaderPart46: TShaderPartNode;
  ShaderPart47: TShaderPartNode;
  Sphere48: TSphereNode;
  Script49: TScriptNode;
  FieldVal50: TSFVec3f;
  FieldVal51: TX3DEvent;
  FieldVal52: TX3DEvent;
  FieldVal53: TX3DEvent;
  FieldVal54: TX3DEvent;
  FieldVal55: TX3DEvent;
  FieldVal56: TX3DEvent;
  FieldVal57: TX3DEvent;
  FieldVal58: TX3DEvent;
  TimeSensor59: TTimeSensorNode;

procedure InitflowerprotoPart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Components['Scripting'] := 1;
X3D0.Components['EnvironmentalEffects'] := 3;
X3D0.Components['Shaders'] := 1;
X3D0.Components['CubeMapTexturing'] := 1;
X3D0.Components['Texturing'] := 1;
X3D0.Components['Rendering'] := 1;
X3D0.Components['Shape'] := 4;
X3D0.Components['Grouping'] := 3;
X3D0.Components['Core'] := 1;
X3D0.Meta['title'] := 'flowerproto.x3d';
X3D0.Meta['creator'] := 'John Carlson';
X3D0.Meta['description'] := 'A flower proto with configurable shaders';
X3D0.Meta['generator'] := 'X3D-Edit, https://savage.nps.edu/X3D-Edit';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/flowerproto.x3d';
Group16 := TGroupNode.Create;
ProtoDeclare17 := CreateEmptyPrototype('FlowerProto');
ProtoDeclare17.X3DName := 'FlowerProto';
FieldVal19 := TMFString.CreateEvent(nil, 'vertex', True);
FieldDecl19 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl19.FieldOrEvent := FieldVal19;
FieldVal19.ParentInterfaceDeclaration := FieldDecl19;
ProtoDeclare17.InterfaceDeclarations.Add(FieldDecl19);
FieldVal20 := TMFString.CreateEvent(nil, 'fragment', True);
FieldDecl20 := TX3DInterfaceDeclaration.Create(nil);
FieldDecl20.FieldOrEvent := FieldVal20;
FieldVal20.ParentInterfaceDeclaration := FieldDecl20;
ProtoDeclare17.InterfaceDeclarations.Add(FieldDecl20);
Transform22 := TTransformNode.Create;
Transform22.X3DName := 'transform';
Shape23 := TShapeNode.Create;
Appearance24 := TAppearanceNode.Create;
Material25 := TMaterialNode.Create;
Material25.DiffuseColor := Vector3(0.7, 0.7, 0.7);
Material25.SpecularColor := Vector3(0.5, 0.5, 0.5);
Appearance24.Material := Material25;
ComposedCubeMapTexture26 := TComposedCubeMapTextureNode.Create;
end;

procedure InitflowerprotoPart1;
begin
ComposedCubeMapTexture26.X3DName := 'texture';
ImageTexture27 := TImageTextureNode.Create;
ImageTexture27.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
ComposedCubeMapTexture26.FdBackTexture.Set(ImageTexture27);
ImageTexture28 := TImageTextureNode.Create;
ImageTexture28.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
ComposedCubeMapTexture26.FdBottomTexture.Set(ImageTexture28);
ImageTexture29 := TImageTextureNode.Create;
ImageTexture29.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
ComposedCubeMapTexture26.FdFrontTexture.Set(ImageTexture29);
ImageTexture30 := TImageTextureNode.Create;
ImageTexture30.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
ComposedCubeMapTexture26.FdLeftTexture.Set(ImageTexture30);
ImageTexture31 := TImageTextureNode.Create;
ImageTexture31.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
ComposedCubeMapTexture26.FdRightTexture.Set(ImageTexture31);
ImageTexture32 := TImageTextureNode.Create;
ImageTexture32.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
ComposedCubeMapTexture26.FdTopTexture.Set(ImageTexture32);
Appearance24.Texture := ComposedCubeMapTexture26;
ComposedShader33 := TComposedShaderNode.Create;
ComposedShader33.X3DName := 'shader';
ComposedShader33.Language := 'GLSL';
{ <field name='fw_textureCoordGenType' accessType='inputOnly' type='SFInt32' value='0'></field> }
FieldVal34 := TSFNode.CreateEvent(ComposedShader33, 'cube', True);
ComposedShader33.AddCustomFieldOrEvent(FieldVal34);
FieldVal34.Value := ComposedCubeMapTexture26;
FieldVal36 := TSFVec3f.Create(ComposedShader33, False, 'chromaticDispertion', Vector3(0.98, 1, 1.033));
ComposedShader33.AddCustomFieldOrEvent(FieldVal36);
FieldVal37 := TSFFloat.CreateEvent(ComposedShader33, 'bias', True);
ComposedShader33.AddCustomFieldOrEvent(FieldVal37);
FieldVal38 := TSFFloat.CreateEvent(ComposedShader33, 'scale', True);
ComposedShader33.AddCustomFieldOrEvent(FieldVal38);
FieldVal39 := TSFFloat.CreateEvent(ComposedShader33, 'power', True);
ComposedShader33.AddCustomFieldOrEvent(FieldVal39);
FieldVal40 := TSFFloat.CreateEvent(ComposedShader33, 'a', True);
ComposedShader33.AddCustomFieldOrEvent(FieldVal40);
FieldVal41 := TSFFloat.CreateEvent(ComposedShader33, 'b', True);
ComposedShader33.AddCustomFieldOrEvent(FieldVal41);
FieldVal42 := TSFFloat.CreateEvent(ComposedShader33, 'c', True);
end;

procedure InitflowerprotoPart2;
begin
ComposedShader33.AddCustomFieldOrEvent(FieldVal42);
FieldVal43 := TSFFloat.CreateEvent(ComposedShader33, 'd', True);
ComposedShader33.AddCustomFieldOrEvent(FieldVal43);
FieldVal44 := TSFFloat.CreateEvent(ComposedShader33, 'tdelta', True);
ComposedShader33.AddCustomFieldOrEvent(FieldVal44);
FieldVal45 := TSFFloat.CreateEvent(ComposedShader33, 'pdelta', True);
ComposedShader33.AddCustomFieldOrEvent(FieldVal45);
ShaderPart46 := TShaderPartNode.Create;
ShaderPart46.FdType.Value := 'VERTEX';
ShaderPart46.FieldOrEvent('url', True).IsClauseNamesAdd('vertex');
ComposedShader33.Parts := ShaderPart46;
ShaderPart47 := TShaderPartNode.Create;
ShaderPart47.FdType.Value := 'FRAGMENT';
ShaderPart47.FieldOrEvent('url', True).IsClauseNamesAdd('fragment');
ComposedShader33.Parts := ShaderPart47;
Appearance24.AddChildren([ComposedShader33]);
Shape23.Appearance := Appearance24;
Sphere48 := TSphereNode.Create;
Shape23.Geometry := Sphere48;
Transform22.FdChildren.Add(Shape23);
Script49 := TScriptNode.Create;
Script49.X3DName := 'Animate';
Script49.DirectOutput := True;
FieldVal50 := TSFVec3f.Create(Script49, True, 'translation', Vector3(0, 0, 0));
Script49.AddCustomFieldOrEvent(FieldVal50);
FieldVal51 := TSFVec3f.CreateEvent(Script49, 'velocity', False);
Script49.AddCustomFieldOrEvent(FieldVal51);
FieldVal52 := TSFFloat.CreateEvent(Script49, 'set_fraction', True);
Script49.AddCustomFieldOrEvent(FieldVal52);
FieldVal53 := TSFFloat.CreateEvent(Script49, 'a', False);
Script49.AddCustomFieldOrEvent(FieldVal53);
FieldVal54 := TSFFloat.CreateEvent(Script49, 'b', False);
Script49.AddCustomFieldOrEvent(FieldVal54);
FieldVal55 := TSFFloat.CreateEvent(Script49, 'c', False);
Script49.AddCustomFieldOrEvent(FieldVal55);
FieldVal56 := TSFFloat.CreateEvent(Script49, 'd', False);
Script49.AddCustomFieldOrEvent(FieldVal56);
FieldVal57 := TSFFloat.CreateEvent(Script49, 'tdelta', False);
Script49.AddCustomFieldOrEvent(FieldVal57);
FieldVal58 := TSFFloat.CreateEvent(Script49, 'pdelta', False);
end;

procedure InitflowerprotoPart3;
begin
Script49.AddCustomFieldOrEvent(FieldVal58);
Script49.SetSourceCode('ecmascript:' + LineEnding +
  '			function initialize() {' + LineEnding +
  '			    translation = new SFVec3f(0, 0, 0);' + LineEnding +
  '			    velocity = new SFVec3f(' + LineEnding +
  '			    	Math.random() - 0.5,' + LineEnding +
  '				Math.random() - 0.5,' + LineEnding +
  '				Math.random() - 0.5);' + LineEnding +
  '			}' + LineEnding +
  '			function set_fraction() {' + LineEnding +
  '			    translation = new SFVec3f(' + LineEnding +
  '			    	translation.x + velocity.x,' + LineEnding +
  '				translation.y + velocity.y,' + LineEnding +
  '				translation.z + velocity.z);' + LineEnding +
  '			    for (var j = 0; j <= 2; j++) {' + LineEnding +
  '				    if (Math.abs(translation.x) > 10) {' + LineEnding +
  '					initialize();' + LineEnding +
  '				    } else if (Math.abs(translation.y) > 10) {' + LineEnding +
  '					initialize();' + LineEnding +
  '				    } else if (Math.abs(translation.z) > 10) {' + LineEnding +
  '					initialize();' + LineEnding +
  '				    } else {' + LineEnding +
  '					velocity.x += Math.random() * 0.2 - 0.1;' + LineEnding +
  '					velocity.y += Math.random() * 0.2 - 0.1;' + LineEnding +
  '					velocity.z += Math.random() * 0.2 - 0.1;' + LineEnding +
  '				    }' + LineEnding +
  '			    }' + LineEnding +
  '			    animate_flowers();' + LineEnding +
  '			}' + LineEnding +
  '' + LineEnding +
  '			function animate_flowers(fraction, eventTime) {' + LineEnding +
  '				var choice = Math.floor(Math.random() * 4);' + LineEnding +
  '				switch (choice) {' + LineEnding +
  '				case 0:' + LineEnding +
  '					a += Math.random() * 0.2 - 0.1;' + LineEnding +
  '					break;' + LineEnding +
  '				case 1:' + LineEnding +
  '					b += Math.random() * 0.2 - 0.1;' + LineEnding +
  '					break;' + LineEnding +
  '				case 2:' + LineEnding +
  '					c += Math.random() * 2 - 1;' + LineEnding +
  '					break;' + LineEnding +
  '				case 3:' + LineEnding +
  '					d += Math.random() * 2 - 1;' + LineEnding +
  '					break;' + LineEnding +
  '				}' + LineEnding +
  '				tdelta += 0.5;' + LineEnding +
  '				pdelta += 0.5;' + LineEnding +
  '				if (a > 1) {' + LineEnding +
  '					a =  0.5;' + LineEnding +
  '				}' + LineEnding +
  '				if (b > 1) {' + LineEnding +
  '					b =  0.5;' + LineEnding +
  '				}' + LineEnding +
  '				if (c < 1) {' + LineEnding +
  '					c =  4;' + LineEnding +
  '				}' + LineEnding +
  '				if (d < 1) {' + LineEnding +
  '					d =  4;' + LineEnding +
  '				}' + LineEnding +
  '				if (c > 10) {' + LineEnding +
  '					c = 4;' + LineEnding +
  '				}' + LineEnding +
  '				if (d > 10) {' + LineEnding +
  '					d = 4;' + LineEnding +
  '				}' + LineEnding +
  '			}');
Transform22.FdChildren.Add(Script49);
TimeSensor59 := TTimeSensorNode.Create;
TimeSensor59.X3DName := 'TourTime';
TimeSensor59.CycleInterval := 5;
TimeSensor59.Loop := True;
Transform22.FdChildren.Add(TimeSensor59);
{ ROUTE TourTime.fraction_changed TO Animate.set_fraction }
Transform22.AddRoute(TimeSensor59.EventFraction_changed, FieldVal52);
{ ROUTE Animate.translation_changed TO transform.set_translation }
Transform22.AddRoute(Script49.EventTranslation_changed, Transform22.FdTranslation.EventIn);
{ ROUTE Animate.a TO shader.a }
Transform22.AddRoute(FieldVal53, ComposedShader33.a);
{ ROUTE Animate.b TO shader.b }
Transform22.AddRoute(FieldVal54, ComposedShader33.b);
{ ROUTE Animate.c TO shader.c }
Transform22.AddRoute(FieldVal55, ComposedShader33.c);
{ ROUTE Animate.d TO shader.d }
Transform22.AddRoute(FieldVal56, ComposedShader33.d);
{ ROUTE Animate.tdelta TO shader.tdelta }
Transform22.AddRoute(FieldVal57, ComposedShader33.tdelta);
{ ROUTE Animate.pdelta TO shader.pdelta }
Transform22.AddRoute(FieldVal58, ComposedShader33.pdelta);
ProtoDeclare17.Node.AddChildren([Transform22]);
X3D0.AddPrototype(ProtoDeclare17);
X3D0.AddChildren([Group16]);
end;

function Createflowerproto: TX3DRootNode;
begin
  InitflowerprotoPart0;
  InitflowerprotoPart1;
  InitflowerprotoPart2;
  InitflowerprotoPart3;
  Result := X3D0;
end;

begin
end.
