unit ThreeDTexture;

interface

uses X3DNodes, X3DFields, CastleColors, CastleInternalNodesUnsupported;

function CreateThreeDTexture: TX3DRootNode;

implementation

uses CastleVectors;

var
X3D0: TX3DRootNode;
Group7: TGroupNode;
NavigationInfo8: TNavigationInfoNode;
Viewpoint9: TViewpointNode;
X3DPrototype10: TX3DPrototype;
X3DInterfaceDeclaration11: TX3DInterfaceDeclaration;
SFVec3f12: TSFVec3f;
X3DPrototype13: TX3DPrototype;
Transform14: TTransformNode;
Shape16: TShapeNode;
Sphere17: TSphereNode;
Appearance18: TAppearanceNode;
Material19: TMaterialNode;
X3DPrototype20: TX3DPrototype;
X3DInterfaceDeclaration21: TX3DInterfaceDeclaration;
SFVec3f22: TSFVec3f;
X3DPrototype23: TX3DPrototype;
Transform24: TTransformNode;
X3DPrototype26: TX3DPrototypeNode;
SFVec3f27: TSFVec3f;
X3DPrototype28: TX3DPrototypeNode;
SFVec3f29: TSFVec3f;
X3DPrototype30: TX3DPrototypeNode;
SFVec3f31: TSFVec3f;
X3DPrototype32: TX3DPrototype;
X3DInterfaceDeclaration33: TX3DInterfaceDeclaration;
SFVec3f34: TSFVec3f;
X3DPrototype35: TX3DPrototype;
Transform36: TTransformNode;
X3DPrototype38: TX3DPrototypeNode;
SFVec3f39: TSFVec3f;
X3DPrototype40: TX3DPrototypeNode;
SFVec3f41: TSFVec3f;
X3DPrototype42: TX3DPrototypeNode;
SFVec3f43: TSFVec3f;
X3DPrototype44: TX3DPrototype;
X3DInterfaceDeclaration45: TX3DInterfaceDeclaration;
SFVec3f46: TSFVec3f;
X3DPrototype47: TX3DPrototype;
Transform48: TTransformNode;
X3DPrototype50: TX3DPrototypeNode;
SFVec3f51: TSFVec3f;
X3DPrototype52: TX3DPrototypeNode;
SFVec3f53: TSFVec3f;
X3DPrototype54: TX3DPrototypeNode;
SFVec3f55: TSFVec3f;
X3DPrototype56: TX3DPrototypeNode;
SFVec3f57: TSFVec3f;

procedure InitThreeDTexturePart0;
begin
X3D0 := TX3DRootNode.Create;
X3D0.Profile := 'Immersive';
X3D0.ForceVersion.Major := 4;
X3D0.ForceVersion.Minor := 0;
X3D0.Meta['title'] := 'ThreeDTexture.x3d';
{ METHOD .Meta }
X3D0.Meta['creator'] := 'John Carlson';
{ METHOD .Meta }
X3D0.Meta['generator'] := 'manual';
{ METHOD .Meta }
X3D0.Meta['identifier'] := 'https://coderextreme.net/X3DJSONLD/src/main/data/ThreeDTexture.x3d';
{ METHOD .Meta }
X3D0.Meta['description'] := 'a kind of ThreeDTexture cube with spheres';
{ METHOD .Meta }
{ METHOD .Head }
Group7 := TGroupNode.Create;;
NavigationInfo8 := TNavigationInfoNode.Create;;
NavigationInfo8.SetType(['EXAMINE']);
{ METHOD .FdChildren.Add }
Group7.FdChildren.Add(NavigationInfo8);
Viewpoint9 := TViewpointNode.Create;;
Viewpoint9.Description := 'Rubiks Cube';
Viewpoint9.Position := Vector3(0,0,12);
{ METHOD .FdChildren.Add }
Group7.FdChildren.Add(Viewpoint9);
X3DPrototype10 := TX3DPrototype.Create;;
X3DInterfaceDeclaration11 := TX3DInterfaceDeclaration.Create(nil);;
SFVec3f12 := TSFVec3f.CreateUndefined(X3DInterfaceDeclaration11, false, 'xtranslation');
SFVec3f12.Value := '0 0 0';
{ METHOD .AddSFVec3f }
X3DInterfaceDeclaration11.AddSFVec3f([SFVec3f12]);
{ METHOD .AddX3DInterfaceDeclaration }
X3DPrototype10.AddX3DInterfaceDeclaration([X3DInterfaceDeclaration11]);
X3DPrototype13 := TX3DPrototype.Create;;
Transform14 := TTransformNode.Create;;
Shape16 := TShapeNode.Create;;
Sphere17 := TSphereNode.Create;;
{ METHOD .Geometry }
{ METHOD.SET .Geometry }
Shape16.Geometry := Sphere17;
Appearance18 := TAppearanceNode.Create;;
Material19 := TMaterialNode.Create;
end;

procedure InitThreeDTexturePart1;
begin
;
Material19.DiffuseColor := Vector3(1,1,1);
{ METHOD .SetMaterial }
Appearance18.Material := Material19;
{ METHOD .Appearance }
{ METHOD.SET .Appearance }
Shape16.Appearance := Appearance18;
{ METHOD .FdChildren.Add }
Transform14.FdChildren.Add(Shape16);
{ METHOD .AddTransform }
X3DPrototype13.AddTransform([Transform14]);
{ METHOD .AddX3DPrototype }
X3DPrototype10.AddX3DPrototype([X3DPrototype13]);
{ METHOD .AddX3DPrototype }
Group7.AddX3DPrototype([X3DPrototype10]);
X3DPrototype20 := TX3DPrototype.Create;;
X3DInterfaceDeclaration21 := TX3DInterfaceDeclaration.Create(nil);;
SFVec3f22 := TSFVec3f.CreateUndefined(X3DInterfaceDeclaration21, false, 'ytranslation');
SFVec3f22.Value := '0 0 0';
{ METHOD .AddSFVec3f }
X3DInterfaceDeclaration21.AddSFVec3f([SFVec3f22]);
{ METHOD .AddX3DInterfaceDeclaration }
X3DPrototype20.AddX3DInterfaceDeclaration([X3DInterfaceDeclaration21]);
X3DPrototype23 := TX3DPrototype.Create;;
Transform24 := TTransformNode.Create;;
X3DPrototype26 := TX3DPrototypeNode;
SFVec3f27 := TSFVec3f.CreateUndefined(X3DPrototype26, false, 'xtranslation');
SFVec3f27.Value := '0 0 0';
{ METHOD .AddSFVec3f }
X3DPrototype26.AddSFVec3f([SFVec3f27]);
{ METHOD .AddX3DPrototype }
Transform24.AddX3DPrototype([X3DPrototype26]);
X3DPrototype28 := TX3DPrototypeNode;
SFVec3f29 := TSFVec3f.CreateUndefined(X3DPrototype28, false, 'xtranslation');
SFVec3f29.Value := '2 0 0';
{ METHOD .AddSFVec3f }
X3DPrototype28.AddSFVec3f([SFVec3f29]);
{ METHOD .AddX3DPrototype }
Transform24.AddX3DPrototype([X3DPrototype28]);
X3DPrototype30 := TX3DPrototypeNode;
SFVec3f31 := TSFVec3f.CreateUndefined(X3DPrototype30, false, 'xtranslation');
SFVec3f31.Value := '-2 0 0';
{ METHOD .AddSFVec3f }
X3DPrototype30.AddSFVec3f([SFVec3f31]);
{ METHOD .AddX3DPrototype }
Transform24.AddX3DPrototype([X3DPrototype30]);
{ METHOD .AddTransform }
X3DPrototype23.AddTransform([Transform24]);
{ METHOD .AddX3DPrototype }
X3DPrototype20.AddX3DPrototype([X3DPrototype23]);
{ METHOD .AddX3DPrototype }
Group7.AddX3DPrototype([X3DPrototype20]);
X3DPrototype32 := TX3DPrototype.Create;;
end;

procedure InitThreeDTexturePart2;
begin

X3DInterfaceDeclaration33 := TX3DInterfaceDeclaration.Create(nil);;
SFVec3f34 := TSFVec3f.CreateUndefined(X3DInterfaceDeclaration33, false, 'ztranslation');
SFVec3f34.Value := '0 0 0';
{ METHOD .AddSFVec3f }
X3DInterfaceDeclaration33.AddSFVec3f([SFVec3f34]);
{ METHOD .AddX3DInterfaceDeclaration }
X3DPrototype32.AddX3DInterfaceDeclaration([X3DInterfaceDeclaration33]);
X3DPrototype35 := TX3DPrototype.Create;;
Transform36 := TTransformNode.Create;;
X3DPrototype38 := TX3DPrototypeNode;
SFVec3f39 := TSFVec3f.CreateUndefined(X3DPrototype38, false, 'ytranslation');
SFVec3f39.Value := '0 0 0';
{ METHOD .AddSFVec3f }
X3DPrototype38.AddSFVec3f([SFVec3f39]);
{ METHOD .AddX3DPrototype }
Transform36.AddX3DPrototype([X3DPrototype38]);
X3DPrototype40 := TX3DPrototypeNode;
SFVec3f41 := TSFVec3f.CreateUndefined(X3DPrototype40, false, 'ytranslation');
SFVec3f41.Value := '0 2 0';
{ METHOD .AddSFVec3f }
X3DPrototype40.AddSFVec3f([SFVec3f41]);
{ METHOD .AddX3DPrototype }
Transform36.AddX3DPrototype([X3DPrototype40]);
X3DPrototype42 := TX3DPrototypeNode;
SFVec3f43 := TSFVec3f.CreateUndefined(X3DPrototype42, false, 'ytranslation');
SFVec3f43.Value := '0 -2 0';
{ METHOD .AddSFVec3f }
X3DPrototype42.AddSFVec3f([SFVec3f43]);
{ METHOD .AddX3DPrototype }
Transform36.AddX3DPrototype([X3DPrototype42]);
{ METHOD .AddTransform }
X3DPrototype35.AddTransform([Transform36]);
{ METHOD .AddX3DPrototype }
X3DPrototype32.AddX3DPrototype([X3DPrototype35]);
{ METHOD .AddX3DPrototype }
Group7.AddX3DPrototype([X3DPrototype32]);
X3DPrototype44 := TX3DPrototype.Create;;
X3DInterfaceDeclaration45 := TX3DInterfaceDeclaration.Create(nil);;
SFVec3f46 := TSFVec3f.CreateUndefined(X3DInterfaceDeclaration45, false, 'ttranslation');
SFVec3f46.Value := '0 0 0';
{ METHOD .AddSFVec3f }
X3DInterfaceDeclaration45.AddSFVec3f([SFVec3f46]);
{ METHOD .AddX3DInterfaceDeclaration }
X3DPrototype44.AddX3DInterfaceDeclaration([X3DInterfaceDeclaration45]);
X3DPrototype47 := TX3DPrototype.Create;;
Transform48 := TTransformNode.Create;;
end;

procedure InitThreeDTexturePart3;
begin

X3DPrototype50 := TX3DPrototypeNode;
SFVec3f51 := TSFVec3f.CreateUndefined(X3DPrototype50, false, 'ztranslation');
SFVec3f51.Value := '0 0 0';
{ METHOD .AddSFVec3f }
X3DPrototype50.AddSFVec3f([SFVec3f51]);
{ METHOD .AddX3DPrototype }
Transform48.AddX3DPrototype([X3DPrototype50]);
X3DPrototype52 := TX3DPrototypeNode;
SFVec3f53 := TSFVec3f.CreateUndefined(X3DPrototype52, false, 'ztranslation');
SFVec3f53.Value := '0 0 2';
{ METHOD .AddSFVec3f }
X3DPrototype52.AddSFVec3f([SFVec3f53]);
{ METHOD .AddX3DPrototype }
Transform48.AddX3DPrototype([X3DPrototype52]);
X3DPrototype54 := TX3DPrototypeNode;
SFVec3f55 := TSFVec3f.CreateUndefined(X3DPrototype54, false, 'ztranslation');
SFVec3f55.Value := '0 0 -2';
{ METHOD .AddSFVec3f }
X3DPrototype54.AddSFVec3f([SFVec3f55]);
{ METHOD .AddX3DPrototype }
Transform48.AddX3DPrototype([X3DPrototype54]);
{ METHOD .AddTransform }
X3DPrototype47.AddTransform([Transform48]);
{ METHOD .AddX3DPrototype }
X3DPrototype44.AddX3DPrototype([X3DPrototype47]);
{ METHOD .AddX3DPrototype }
Group7.AddX3DPrototype([X3DPrototype44]);
X3DPrototype56 := TX3DPrototypeNode;
SFVec3f57 := TSFVec3f.CreateUndefined(X3DPrototype56, false, 'ttranslation');
SFVec3f57.Value := '0 0 0';
{ METHOD .AddSFVec3f }
X3DPrototype56.AddSFVec3f([SFVec3f57]);
{ METHOD .AddX3DPrototype }
Group7.AddX3DPrototype([X3DPrototype56]);
{ METHOD .AddGroup }
X3D0.AddChildren([Group7]);
end;

function CreateThreeDTexture: TX3DRootNode;
begin
InitThreeDTexturePart0;
InitThreeDTexturePart1;
InitThreeDTexturePart2;
InitThreeDTexturePart3;
Result := X3D0;
end;

begin
end.
