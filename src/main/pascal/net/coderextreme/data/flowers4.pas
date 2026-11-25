unit flowers4;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

function Createflowers4: TX3DRootNode;

implementation

uses CastleVectors;

var
  X3D0: TX3DRootNode;
  Group16: TGroupNode;
  NavigationInfo17: TNavigationInfoNode;
  Background18: TBackgroundNode;
  Transform19: TTransformNode;
  Shape20: TShapeNode;
  Appearance21: TAppearanceNode;
  Material22: TMaterialNode;
  ComposedCubeMapTexture23: TComposedCubeMapTextureNode;
  ImageTexture24: TImageTextureNode;
  ImageTexture25: TImageTextureNode;
  ImageTexture26: TImageTextureNode;
  ImageTexture27: TImageTextureNode;
  ImageTexture28: TImageTextureNode;
  ImageTexture29: TImageTextureNode;
  ComposedShader30: TComposedShaderNode;
  FieldVal31: TSFInt32;
  FieldVal32: TSFVec3f;
  FieldVal33: TSFFloat;
  FieldVal34: TSFFloat;
  FieldVal35: TSFFloat;
  ShaderPart36: TShaderPartNode;
  ShaderPart37: TShaderPartNode;
  IndexedFaceSet38: TIndexedFaceSetNode;
  Coordinate39: TCoordinateNode;
  Script40: TScriptNode;
  FieldVal41: TX3DEvent;
  FieldVal42: TMFVec3f;
  FieldVal43: TX3DEvent;
  FieldVal44: TSFFloat;
  FieldVal45: TSFFloat;
  FieldVal46: TSFFloat;
  FieldVal47: TSFFloat;
  TimeSensor48: TTimeSensorNode;

procedure Initflowers4Part0;
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
X3D0.Meta['title'] := 'flowers4.x3d';
X3D0.Meta['creator'] := 'John Carlson';
X3D0.Meta['generator'] := 'manual';
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/flowers4.x3d';
X3D0.Meta['description'] := 'an animated flower';
Group16 := TGroupNode.Create;
NavigationInfo17 := TNavigationInfoNode.Create;
Group16.FdChildren.Add(NavigationInfo17);
Background18 := TBackgroundNode.Create;
Background18.SetBackUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
Background18.SetBottomUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
Background18.SetFrontUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
Background18.SetLeftUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
Background18.SetRightUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
Background18.SetTopUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
Group16.FdChildren.Add(Background18);
Transform19 := TTransformNode.Create;
Transform19.X3DName := 'transform';
Shape20 := TShapeNode.Create;
Appearance21 := TAppearanceNode.Create;
Material22 := TMaterialNode.Create;
Material22.DiffuseColor := Vector3(0.7, 0.7, 0.7);
Material22.SpecularColor := Vector3(0.5, 0.5, 0.5);
Appearance21.Material := Material22;
ComposedCubeMapTexture23 := TComposedCubeMapTextureNode.Create;
ImageTexture24 := TImageTextureNode.Create;
ImageTexture24.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_back.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_back.png']);
end;

procedure Initflowers4Part1;
begin
ComposedCubeMapTexture23.FdBackTexture.Set(ImageTexture24);
ImageTexture25 := TImageTextureNode.Create;
ImageTexture25.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_bottom.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_bottom.png']);
ComposedCubeMapTexture23.FdBottomTexture.Set(ImageTexture25);
ImageTexture26 := TImageTextureNode.Create;
ImageTexture26.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_front.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_front.png']);
ComposedCubeMapTexture23.FdFrontTexture.Set(ImageTexture26);
ImageTexture27 := TImageTextureNode.Create;
ImageTexture27.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_left.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_left.png']);
ComposedCubeMapTexture23.FdLeftTexture.Set(ImageTexture27);
ImageTexture28 := TImageTextureNode.Create;
ImageTexture28.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_right.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_right.png']);
ComposedCubeMapTexture23.FdRightTexture.Set(ImageTexture28);
ImageTexture29 := TImageTextureNode.Create;
ImageTexture29.SetUrl(['../resources/images/all_probes/stpeters_cross/stpeters_top.png', 'https://coderextreme.net/X3DJSONLD/src/main/resources/images/all_probes/stpeters_cross/stpeters_top.png']);
ComposedCubeMapTexture23.FdTopTexture.Set(ImageTexture29);
Appearance21.Texture := ComposedCubeMapTexture23;
ComposedShader30 := TComposedShaderNode.Create;
ComposedShader30.X3DName := 'shader';
ComposedShader30.Language := 'GLSL';
FieldVal31 := TSFInt32.Create(ComposedShader30, True, 'cube', 0);
ComposedShader30.AddCustomFieldOrEvent(FieldVal31);
FieldVal32 := TSFVec3f.Create(ComposedShader30, True, 'chromaticDispertion', Vector3(0.98, 1, 1.033));
ComposedShader30.AddCustomFieldOrEvent(FieldVal32);
FieldVal33 := TSFFloat.Create(ComposedShader30, True, 'bias', 0.5);
ComposedShader30.AddCustomFieldOrEvent(FieldVal33);
FieldVal34 := TSFFloat.Create(ComposedShader30, True, 'scale', 0.5);
ComposedShader30.AddCustomFieldOrEvent(FieldVal34);
FieldVal35 := TSFFloat.Create(ComposedShader30, True, 'power', 2);
ComposedShader30.AddCustomFieldOrEvent(FieldVal35);
ShaderPart36 := TShaderPartNode.Create;
ShaderPart36.SetUrl(['../shaders/x_ite.vs', 'https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs', 'https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.vs']);
ShaderPart36.FdType.Value := 'VERTEX';
ComposedShader30.Parts := ShaderPart36;
ShaderPart37 := TShaderPartNode.Create;
ShaderPart37.SetUrl(['../shaders/x_ite.fs', 'https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs', 'https://coderextreme.net/X3DJSONLD/src/main/shaders/x_ite.fs']);
ShaderPart37.FdType.Value := 'FRAGMENT';
ComposedShader30.Parts := ShaderPart37;
Appearance21.AddChildren([ComposedShader30]);
Shape20.Appearance := Appearance21;
end;

procedure Initflowers4Part2;
begin
{ <Sphere> }
IndexedFaceSet38 := TIndexedFaceSetNode.Create;
IndexedFaceSet38.Convex := False;
IndexedFaceSet38.X3DName := 'Orbit';
Coordinate39 := TCoordinateNode.Create;
Coordinate39.X3DName := 'OrbitCoordinates';
IndexedFaceSet38.Coord := Coordinate39;
Shape20.Geometry := IndexedFaceSet38;
Transform19.FdChildren.Add(Shape20);
Group16.FdChildren.Add(Transform19);
Script40 := TScriptNode.Create;
Script40.X3DName := 'OrbitScript';
FieldVal41 := TSFFloat.CreateEvent(Script40, 'set_fraction', True);
Script40.AddCustomFieldOrEvent(FieldVal41);
FieldVal42 := TMFVec3f.CreateUndefined(Script40, True, 'coordinates');
Script40.AddCustomFieldOrEvent(FieldVal42);
FieldVal43 := TMFInt32.CreateEvent(Script40, 'coordIndexes', False);
Script40.AddCustomFieldOrEvent(FieldVal43);
FieldVal44 := TSFFloat.Create(Script40, True, 'e', 5);
Script40.AddCustomFieldOrEvent(FieldVal44);
FieldVal45 := TSFFloat.Create(Script40, True, 'f', 5);
Script40.AddCustomFieldOrEvent(FieldVal45);
FieldVal46 := TSFFloat.Create(Script40, True, 'g', 5);
Script40.AddCustomFieldOrEvent(FieldVal46);
FieldVal47 := TSFFloat.Create(Script40, True, 'h', 5);
Script40.AddCustomFieldOrEvent(FieldVal47);
Script40.SetSourceCode('ecmascript:' + LineEnding +
  'function initialize() {' + LineEnding +
  '     var resolution = 100;' + LineEnding +
  '     updateCoordinates(resolution);' + LineEnding +
  '     var localci = new MFInt32();' + LineEnding +
  '     var arrIndex = 0;' + LineEnding +
  '     for (var i = 0; i < resolution-1; i++) {' + LineEnding +
  '     	for (var j = 0; j < resolution-1; j++) {' + LineEnding +
  '	     localci[arrIndex++] = i*resolution+j;' + LineEnding +
  '	     localci[arrIndex++] = i*resolution+j+1;' + LineEnding +
  '	     localci[arrIndex++] = (i+1)*resolution+j+1;' + LineEnding +
  '	     localci[arrIndex++] = (i+1)*resolution+j;' + LineEnding +
  '	     localci[arrIndex++] = -1;' + LineEnding +
  '	}' + LineEnding +
  '    }' + LineEnding +
  '    coordIndexes = localci;' + LineEnding +
  '}' + LineEnding +
  '' + LineEnding +
  'function updateCoordinates(resolution) {' + LineEnding +
  '     var theta = 0.0;' + LineEnding +
  '     var phi = 0.0;' + LineEnding +
  '     var delta = (2 * 3.141592653) / (resolution-1);' + LineEnding +
  '     var localc = new MFVec3f();' + LineEnding +
  '     var arrIndex = 0;' + LineEnding +
  '     for (var i = 0; i < resolution; i++) {' + LineEnding +
  '     	for (var j = 0; j < resolution; j++) {' + LineEnding +
  '		var rho = e + f * Math.cos(g * theta) * Math.cos(h * phi);' + LineEnding +
  '		localc[arrIndex++] = new SFVec3f(' + LineEnding +
  '			rho * Math.cos(phi) * Math.cos(theta),' + LineEnding +
  '			rho * Math.cos(phi) * Math.sin(theta),' + LineEnding +
  '			rho * Math.sin(phi)' + LineEnding +
  '		);' + LineEnding +
  '		theta += delta;' + LineEnding +
  '	}' + LineEnding +
  '	phi += delta;' + LineEnding +
  '     }' + LineEnding +
  '     coordinates = localc;' + LineEnding +
  '}' + LineEnding +
  '' + LineEnding +
  'function set_fraction(fraction, eventTime) {' + LineEnding +
  '	var choice = Math.floor(Math.random() * 4);' + LineEnding +
  '	switch (choice) {' + LineEnding +
  '	case 0:' + LineEnding +
  '		e += Math.floor(Math.random() * 2) * 2 - 1;' + LineEnding +
  '		break;' + LineEnding +
  '	case 1:' + LineEnding +
  '		f += Math.floor(Math.random() * 2) * 2 - 1;' + LineEnding +
  '		break;' + LineEnding +
  '	case 2:' + LineEnding +
  '		g += Math.floor(Math.random() * 2) * 2 - 1;' + LineEnding +
  '		break;' + LineEnding +
  '	case 3:' + LineEnding +
  '		h += Math.floor(Math.random() * 2) * 2 - 1;' + LineEnding +
  '		break;' + LineEnding +
  '	}' + LineEnding +
  '	if (e < 1) {' + LineEnding +
  '		e = 10;' + LineEnding +
  '	}' + LineEnding +
  '	if (f < 1) {' + LineEnding +
  '		f = 10;' + LineEnding +
  '	}' + LineEnding +
  '	if (g < 1) {' + LineEnding +
  '		g = 4;' + LineEnding +
  '	}' + LineEnding +
  '	if (h < 1) {' + LineEnding +
  '		h = 4;' + LineEnding +
  '	}' + LineEnding +
  '	var resolution = 100;' + LineEnding +
  '	updateCoordinates(resolution);' + LineEnding +
  '}');
Group16.FdChildren.Add(Script40);
TimeSensor48 := TTimeSensorNode.Create;
TimeSensor48.X3DName := 'Clock';
TimeSensor48.CycleInterval := 16;
TimeSensor48.Loop := True;
Group16.FdChildren.Add(TimeSensor48);
{ ROUTE OrbitScript.coordIndexes TO Orbit.set_coordIndex }
Group16.AddRoute(FieldVal43, IndexedFaceSet38.EventSet_coordIndex);
{ ROUTE OrbitScript.coordinates TO OrbitCoordinates.set_point }
Group16.AddRoute(FieldVal42, Coordinate39.EventSet_point);
{ ROUTE Clock.fraction_changed TO OrbitScript.set_fraction }
Group16.AddRoute(TimeSensor48.EventFraction_changed, FieldVal41);
X3D0.AddChildren([Group16]);
end;

function Createflowers4: TX3DRootNode;
begin
  Initflowers4Part0;
  Initflowers4Part1;
  Initflowers4Part2;
  Result := X3D0;
end;

begin
end.
